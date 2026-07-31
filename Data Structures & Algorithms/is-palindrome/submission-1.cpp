class Solution {
public:
    bool isPalindrome(string s) {

        string clean = "";

        for (int i = 0; i < s.size(); i++) {

            if (isalnum(s[i])) {
                clean.push_back(tolower(s[i]));
            }
        }

        
        string rev = clean;

        
        reverse(rev.begin(), rev.end());

        
        return clean == rev;
    }
};