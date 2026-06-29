class Solution {
public:
    bool isPalindrome(string s) {
        

        string temp = s;
        s.clear();
        for(char c : temp){
            if(isalnum((unsigned char)c)){
                s.push_back(tolower((unsigned char)c));
            }
        }
        string s_rev = s;

        reverse(s.begin(), s.end());
        
        return s == s_rev;
    }
};