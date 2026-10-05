class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lo = 0;
        int hi = nums.size() - 1;
        int mid = 0;
        while (lo < hi){
            
            mid = (lo + hi) / 2;
            if (nums[lo] <= nums[mid]){
                if(nums[lo] <= target && target <= nums[mid]){
                    hi = mid;
                }
                else lo = mid + 1;
            }
            else {
                if (nums[mid] < target && target <= nums[hi]){
                lo = mid + 1;
                }
                else hi = mid;
            }
            
        }
        return (target == nums[hi] ? hi : -1);
    }
};
