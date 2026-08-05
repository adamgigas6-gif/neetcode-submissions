class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int listSize = nums.size()+1-k;
        vector <int> list (listSize,0);
        int maxnum = -10000;
        int maxidx = -1;
        for (int i = 0; i <= nums.size()-k; i++){
            for (int x=0; x < k; x++){
                if (maxidx > i-1 || maxidx == -1){
                if (nums[i+x] > maxnum) {
                    maxnum=nums[i+x];
                    maxidx = i+x;
                }
                }
                else{
                    maxidx++;
                    maxnum = nums[i+x];
                }
            }
            list[i] =maxnum;
        }
        return list;
    }
};
