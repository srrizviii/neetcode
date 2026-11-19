class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26] = {0}; 

        if (s.length() != t.length()) {
            return false;
        }

        for (int i=0; i < s.length(); i++) {
            count[s[i]-'a']++; // letter - a = the result of their ascii value difference, which is the index of the letter in the count array
            count[t[i]-'a']--; 
        }

        for (int c : count) {
            if (c != 0) {
                return false; 
            }
        }

        return true;
    }
};
