class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mymap;
        for (int i = 0; i < nums.size(); i++){
            mymap[nums[i]] = i;
        }
        for (int i = 0; i < nums.size(); i++){
            int need = target - nums[i];
            if (mymap.count(need) != 0 && mymap[need] != i){
                return{i, mymap[need]};
            }
        }
        return{};
    }
};
    /*Algorithm
Create a hash map to store the value and index of each element in the array.
Iterate through the array and compute the complement of the current element, which is target - nums[i].
Check if the complement exists in the hash map.
If it does, return the indices of the current element and its complement.
If no such pair is found, return an empty array.*/