class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded = "";
        string delimiter = "#";

        for (auto word : strs) {
            string len_word = to_string(word.size());
            encoded += len_word;
            encoded += delimiter;
            encoded += word;
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;
        int i = 0;

        while (i < s.size()) {

            // Read the entire length
            string len = "";
            while (s[i] != '#') {
                len += s[i];
                i++;
            }

            int char_to_jump = stoi(len);

            // Skip the '#'
            i++;

            string word = "";
            for (int j = i; j < i + char_to_jump; j++) {
                word += s[j];
            }

            decoded.push_back(word);

            // Move to the next encoded string
            i += char_to_jump;
        }

        return decoded;
    }
};