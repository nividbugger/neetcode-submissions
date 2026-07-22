class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> helper; 
        for(int i= 0 ;i<nums.size();++i){
            helper[nums[i]]++;
        }
        vector<vector<int>> freq(nums.size()+1);
        for(auto ele : helper){
            freq[ele.second].push_back(ele.first);
        }
        vector<int> ans;
        for(int i=freq.size()-1; i>=0 && ans.size()<k ;--i){
            if(freq[i].size()!=0){
                for(auto ele : freq[i])
                {
                    ans.push_back(ele);
                    if (ans.size() == k) break;
                }
            }

        }
        return ans;
        
    }
};
