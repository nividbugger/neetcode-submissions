class Solution {
public:
   bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        while (i < j) {
            while (i < j && !(isalnum(s[i]))) {
                i++;
            }
            while (i < j && !(isalnum(s[j]))) {
                j--;
            }
            char cleaned_i = tolower(s[i]);
            char cleaned_j = tolower(s[j]);
            if (cleaned_i != cleaned_j) {
                return false;   // <-- the missing check
            }
            i++;
            j--;
        }
        return true;
    }
};
