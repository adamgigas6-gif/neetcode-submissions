class Solution {
public:
    int maxArea(vector<int>& heights) {
        vector <int> areas;
        int left = 0, right = heights.size()-1;
        while (left != right){
        int height = min(heights[left], heights[right]);
        int area = height * (abs(right - left));
        areas.push_back(area);
        if(heights[left] <= heights[right]) left++;
        else right--;
        }   
        int maxarea = *max_element(areas.begin(), areas.end());
        return maxarea;

        }
    
    
};
