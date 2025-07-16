class Solution {
public:
    // TC-> O(row * col) and SC-> O(row * col)
    vector<int> generateRow(int row){
        vector<int> row_vector;
        row_vector.push_back(1);
        long long ans = 1;
        for(int col = 1; col<row; col++){
            ans = ans * (row-col);
            ans = ans / col;
            row_vector.push_back(ans);
        }
        return row_vector;
    }

    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> sol;
        for(int i= 1; i<=numRows; i++){
            vector<int> temp = generateRow(i);
            sol.push_back(temp);
        }
        return sol;
    }
};