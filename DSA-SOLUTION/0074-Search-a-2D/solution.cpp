class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n=matrix.size(),m=matrix[0].size();
        int start=0,end=n*m-1,mid;
        int row_index,coloum_index;
        while(start<=end){
            mid = start + (end - start) / 2;
            row_index=mid/m;
            coloum_index=mid%m;
            if(matrix[row_index][coloum_index]==target){
                return true;
            }
            else if(matrix[row_index][coloum_index]>target){
                end=mid-1;

            }
            else{
                start=mid+1;
            }
        }
        
        return false;
    }
};
