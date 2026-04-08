class Solution {
public:
    vector<vector<int>> generate(int N){
    vector<vector<int>> ans;

    for(int i = 1; i <= N; i++) {
        long long val = 1;  
        vector<int> row;

        for(int col = 1; col <= i; col++) {
            row.push_back(val);
            val = val * (i - col) / col;  
        }

        ans.push_back(row);
    }

    return ans;
    }
};