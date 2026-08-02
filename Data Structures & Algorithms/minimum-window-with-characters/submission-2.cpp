class Solution {
public:
    string minWindow(string s, string t) {
    string blank = "";
    if (t.size() > s.size()) return blank;
    
    vector <int> target (128,0);
    vector <int> window (128,0);
    int need = 0;
    int have = 0;
    int left = 0;
    int minlen = 1000;
    int startidx = 0;
    const int INTMAX = 1000;
    for (char c : t){
        
        if(target[c] == 0) need++;
        target[c]++;
    }
    for (int right = 0; right < s.size(); right++){
        window[s[right]]++;
        if(target[s[right]] > 0 && window[s[right]] ==
        target[s[right]]) have++;
        while(have == need){
            if (right - left + 1 < minlen) {
                minlen = right - left + 1;
                startidx = left; // Save starting position!
            }
            window[s[left]]--;
            if(target[s[left]] > 0 && window[s[left]] < target[s[left]]) have--;
            left++;
        }
    }
    return minlen == INTMAX ? blank : s.substr(startidx, minlen);
    }
};
