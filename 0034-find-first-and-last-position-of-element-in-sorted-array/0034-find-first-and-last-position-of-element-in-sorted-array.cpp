class Solution {
public:
    int starting(vector<int> &nums, int x){
        int n = nums.size();
        int low = 0, high = n-1;
        int start = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] < x){
                low = mid + 1;
            }
            else if(nums[mid] > x){
                high = mid - 1;
            }
            else if(nums[mid] == x){
                start = mid;
                high = mid-1;
            }
        }
        return start;
    }

    int ending(vector<int> &nums, int x){
        int n = nums.size();
        int low = 0, high = n-1;
        int end = -1;
        while(low <= high){
            int mid = (low + high)/2;
            if(nums[mid] < x){
                low = mid + 1;
            }
            else if(nums[mid] > x){
                high = mid - 1;
            }
            else if(nums[mid] == x){
                end = mid;
                low = mid+1;
            }
        }
        return end;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> temp;
        int s = starting(nums, target);
        int e = ending(nums, target);
        temp.push_back(s);
        temp.push_back(e);
        return temp;
    }
};        