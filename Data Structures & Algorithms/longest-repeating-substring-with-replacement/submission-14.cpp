class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26, 0);
        int l = 0, best = 0, maxFreq = 0;
        
        for (int r = 0; r < s.size(); r++) {
            freq[s[r] - 'A']++;
            maxFreq = max(maxFreq, freq[s[r] - 'A']);

            // If the window is invalid, shift 'l' right by 1
            if ((r - l + 1) - maxFreq > k) {
                freq[s[l] - 'A']--;
                l++;
            }

            best = max(best, r - l + 1);
        }

        return best;
    }
};