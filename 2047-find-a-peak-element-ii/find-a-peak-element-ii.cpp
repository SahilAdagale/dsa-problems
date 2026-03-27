class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& matrix) {
        int n = matrix.size(), m = matrix[0].size();
        int l = 0, h = m - 1, mid;


        while (l <= h) {
            mid = l + (h - l) / 2;
            int maxrow = 0;

            for (int i = 0; i < n; ++i) {
                if (matrix[maxrow][mid] < matrix[i][mid])
                    maxrow = i;
            }

            if((mid==0 || matrix[maxrow][mid]>matrix[maxrow][mid- 1]) && 
               (mid ==m - 1|| matrix[maxrow][mid]> matrix[maxrow][mid+1])){
                return {maxrow, mid};
            }else if (mid >0 && matrix[maxrow][mid-1]> matrix[maxrow][mid]){
                h = mid - 1;
            }else{
                l = mid + 1;
            }
        }
        return {-1, -1};
    }
};