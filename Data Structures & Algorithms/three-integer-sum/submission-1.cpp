class Solution {
public:
    vector<vector<int>> twoSum(vector<int>& numbers, int target, int start, int end) {
        vector<vector<int>> ans;
        int i = start, j = end;
        while (i < j) {
            int sum = numbers[i] + numbers[j];
            if (sum == target) {
                ans.push_back({numbers[i], numbers[j]});
                i++; j--;
                while (i < j && numbers[i] == numbers[i-1]) i++;
                while (i < j && numbers[j] == numbers[j+1]) j--;
            } else if (sum < target) {
                i++;
            } else {
                j--;
            }
        }
        return ans;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        if (n < 3) return ans;

        for (int i = 0; i < n - 2; ++i) {
            if (i > 0 && nums[i] == nums[i-1]) continue;
            int target = -nums[i];
            auto pairs = twoSum(nums, target, i+1, n-1);
            for (auto& p : pairs) {
                ans.push_back({nums[i], p[0], p[1]});
            }
        }
        return ans;
    }
};