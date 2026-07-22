class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int, int> num_idx ; 
        num_idx.insert({nums[0], 0});
        for(int i=1;i<nums.size();++i){
            if(num_idx.find(target-nums[i]) != num_idx.end()){
                ans.push_back(num_idx[target-nums[i]]);
                ans.push_back(i);
                return ans;
            } 
            num_idx.insert({nums[i],i});
        }
        
    }
};
