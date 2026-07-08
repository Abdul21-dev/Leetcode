class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        if(mat.size()*mat[0].size()%2 != 0){
            int i=0; int j=0;
            while(i<mat.size() && j<mat[0].size()){
                sum += mat[i][j];
                i++;
                j++;
            }
            i=0; j=mat[0].size()-1;
            while(i<mat.size() && j>=0){
                if(i != j){
                sum += mat[i][j];
                }
                i++;
                j--;
            }
        }else{
         int i=0; int j=0;
            while(i<mat.size() && j<mat[0].size()){
                sum += mat[i][j];
                i++;
                j++;
            }
             i=0; j=mat[0].size()-1;
            while(i<mat.size() && j>=0){
               
                sum += mat[i][j];
                
                i++;
                j--;
            }
        }
        return sum;
    }
};