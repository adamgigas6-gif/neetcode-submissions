class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int j = 0;
        int i_max = matrix.size()-1;
        int j_max = matrix[0].size()-1; 
        int i_mid = i_max/2;
        while(target >= matrix[i][j] && target <= matrix[i_max][j_max]){
            if (matrix[i_mid][j] <= target && target <= matrix[i_mid][j_max]){
                for(;j <= j_max; j++){
                    if(matrix[i_mid][j] == target) return true;
                }
                return false;
            
            }
            else if ((matrix[i_mid][j_max] < target && matrix[i_mid +1][j] > target) || (matrix[i_mid][j] > target && matrix[i_mid - 1][j_max] < target)) return false;
            else if (matrix[i_mid][j] > target){
                i_mid--;
            }
            else if (matrix[i_mid][j_max] < target){
                i_mid++;
            }
            
        }
        
        return false;
    }
};
