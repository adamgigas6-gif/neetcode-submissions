class Solution {
public:
    bool isPalindrome(string s) {
        
        string t = s;
        string temp = t;
        t.clear();
        for(char c : temp){
            if(isalnum((unsigned char)c)){
                t.push_back(tolower((unsigned char)c));
            }
        }
        string t_rev = t;

        reverse(t.begin(), t.end());
        cout << t << endl;
        cout << t_rev << endl;
        
        return t == t_rev;
    }
};