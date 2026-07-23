class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix;
        int product = 1;
        prefix.push_back(1);
        for(int i=1 ;i<nums.size(); ++i){
            product = product * nums[i-1];
            prefix.push_back(product);
        }
        product = 1;
        suffix.push_back(1);
        for(int i=nums.size()-2 ; i>=0 ;--i){
            product = product * nums[i+1];
            suffix.push_back(product);
        }
        reverse(suffix.begin() , suffix.end());
        vector<int> ans;
        for(int i=0;i<prefix.size();++i){
            int final_product = prefix[i]*suffix[i];
            ans.push_back(final_product);
        }
        return ans;

    }
};
