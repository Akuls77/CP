class Solution {
public:
    bool binary_search(vector<int> arr, int n, int target){
        int low = 0; 
        int high = n-1;
        while(low <= high){
            int mid = (low + high)/2;
            if(arr[mid] == target){
                return true;
            }
            else if(arr[mid] < target){
                low = mid +1;
            }
            else{
                high = mid -1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        for(int i=0; i<n; i++){
            if(matrix[i][0] <= target && matrix[i][m-1] >= target){
                return binary_search(matrix[i], m, target);
            }
            else{
                continue;
            }
        }
        return false;
    }
};