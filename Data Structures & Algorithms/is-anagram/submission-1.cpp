class Solution {
public:
    bool isAnagram(string s, string t) {
        if(size(s)!=size(t)){
            return false;
        }
        vector<int> counter(26,0);
        for(int i = 0 ;i< s.size();++i){
            counter[s[i] - 'a']++;
            counter[t[i] - 'a']--;
        }
        for(int i=0;i<counter.size();++i){
            if(counter[i]!=0){
                return false;
            }
        }
        return true;
    }
};
