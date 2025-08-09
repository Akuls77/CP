class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector <int> ans(2);
        int n = mat.size();
        int m = mat[0].size();

        int idx = -1;
        int max_cnt = -1;

        for(int i=0; i<n; i++){
            int curr_row=0;
            for(int j=0; j<m; j++){
                curr_row += mat[i][j];
            }
            if(curr_row > max_cnt){
                max_cnt = curr_row;
                ans[0] = i;
                ans[1] = max_cnt;
            }
        }
        
        return ans;
    }
};