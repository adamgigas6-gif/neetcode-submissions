class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) return findMedianSortedArrays(nums2, nums1);
        int m = nums1.size();
        int n = nums2.size();
        int half = (m + n + 1) / 2;
        int lo = 0, hi = m;
        while( lo <= hi){
            int i = lo + (hi - lo) / 2;
            int j = half - i;
            int a_left = (i == 0) ? INT_MIN : nums1[i-1], a_right = (i == m ) ? INT_MAX : nums1[i];
            int b_left = (j == 0) ? INT_MIN : nums2[j-1], b_right = (j == n) ? INT_MAX : nums2[j];
            if (a_left <= b_right && b_left <= a_right){
                if ((m + n) % 2){
                    return max(a_left, b_left);
                }
                else return (max(a_left, b_left)+min(a_right, b_right)) / 2.0;
            }
            else if (a_left > b_right){
                hi = i - 1;
            }
            else {
                lo = i + 1;
            }
        }
        return 0.0;
    }
    
};
