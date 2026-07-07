class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        unordered_set<int> seen(nums.begin(), nums.end());
        vector<int> sizes; // To store the lengths of sequences found

        for (auto s : seen) {
            // Check if 's' is the START of a sequence.
            // If (s - 1) is NOT in the set, then 's' must be the start!
            if (seen.find(s - 1) == seen.end()) {
                int current_num = s;
                int current_streak = 1;

                // Count how far this consecutive sequence goes
                while (seen.find(current_num + 1) != seen.end()) {
                    current_num += 1;
                    current_streak += 1;
                }

                // Store the size of this streak
                sizes.push_back(current_streak);
            }
        }

        // Find the maximum value in your sizes vector
        int max_val = 0;
        if (!sizes.empty()) {
            auto max_iterator = max_element(sizes.begin(), sizes.end());
            max_val = *max_iterator;
        }
        
        return max_val;
    }
};