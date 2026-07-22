class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> helper;
        for(string str : strs){
            string temp = str;
            sort(temp.begin(), temp.end());
            helper[temp].push_back(str);
        }
        vector<vector<string>> ans;
        for(auto ele : helper){
            ans.push_back(ele.second);
        }
        return ans;
    }
};