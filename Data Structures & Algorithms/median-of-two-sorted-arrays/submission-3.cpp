// brute force sol:
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <int> nums3;
        for (int i = 0, j = 0; i < nums1.size() || j < nums2.size();){
            if(i >= nums1.size()){
                nums3.push_back(nums2[j]);
                j++;
            }
            else if(j >= nums2.size()){
                nums3.push_back(nums1[i]);
                i++;
            }
            else if(nums1[i] <= nums2[j]){
                nums3.push_back(nums1[i]);
                i++;
            }
            else if (nums1[i] > nums2[j]) {
                nums3.push_back(nums2[j]);
                j++;
            }
        }
        int mid = (nums3.size() - 1)/2;
        if(nums3.size() % 2 != 0){
            return nums3[mid];
        }
        else return (nums3[mid] + nums3[mid + 1]) / 2.0;

    }
};
