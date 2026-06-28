class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<pair<int, int>> array;
    for (int i = 0; i < nums.size(); i++){
        array.push_back({nums[i], i});
        }
        sort(array.begin(), array.end());
        
        int i = 0, j = nums.size()-1;
        while(i < j){
            if (array[i].first + array[j].first == target ){
            return {min(array[i].second, array[j].second), max(array[i].second, array[j].second)};
            }
            else if(array[i].first + array[j].first > target){
            j--;
            }
            else {
            i++;
            }
        }
    
    return{};
    }
};