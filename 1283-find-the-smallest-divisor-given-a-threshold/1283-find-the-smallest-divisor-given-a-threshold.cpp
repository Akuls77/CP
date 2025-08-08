class Solution {
public:
    int sumofdiv(vector<int>& nums, int mid){
        int sum =0;
        for(int i=0; i<nums.size(); i++){
            sum = sum + ceil((double)(nums[i]) / (double)(mid));
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int maxi = nums[0];
        for(int i=0; i<n; i++){
            if(nums[i] > maxi){
                maxi = nums[i];
            }
        }
        int low = 1, high= maxi;
        int ans = -1;
        while(low <= high){
            int mid = (low+high)/2;
            int val = sumofdiv(nums, mid);
            if(val <= threshold){
                ans = mid;
                high = mid -1;
            }
            else{
                low = mid+1;
            }
        }
        return ans;
    }
};