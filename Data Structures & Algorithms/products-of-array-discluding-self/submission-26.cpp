class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> res;
        int n = 0;
        for(int i = 0; i < nums.size(); i++){
            int output = 1;
            for (int n = 0; n < nums.size(); n++){
            if(n != i){
                output = output * nums[n];
            }
           
            }
            res.push_back(output);
        }
        return res;


    }

};
