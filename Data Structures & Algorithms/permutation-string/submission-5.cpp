class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        // 1. Base case: If s1 is longer than s2, s1 can't be a substring of s2
        if (s1.size() > s2.size()) return false;
        
        // 2. Create two frequency vectors (or arrays) of size 26 initialized to 0
        //    - One for s1's character counts
        //    - One for s2's current sliding window counts
        vector <int> count1 (26,0);
        vector <int> count2 (26,0);

        
        // 3. Populate frequency counts for s1 AND the very first window of s2 (from index 0 to s1.size() - 1)
        for (int i = 0; i< s1.size(); i++){
            count1[s1[i]-'a']++;
            count2[s2[i]-'a']++;
        }
        for (int i = 0; i < s2.size()-s1.size()+1; i++){
            if(count2 == count1) return true;
            if(i+ s1.size()< s2.size()){
                count2[s2[i]-'a']--;
                count2[s2[i+s1.size()]-'a']++;

            }
        }
        // 4. Slide the window across s2 (from index 0 up to s2.size() - s1.size()):
        //    a. Check if current window frequency matches s1 frequency -> return true if match
        //    b. If not at the end of s2, slide the window right:
        //       - Decrement count for character leaving on the left: s2[i]
        //       - Increment count for character entering on the right: s2[i + s1.size()]

        
        // 5. If loop completes with no matches found, return false
        return false;
    }
};
