class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n = nums.size();
        int cnt = 0;
        int presum = 0;
        unordered_map <int, int> mpp;
        mpp[0] = 1;

        for(int i=0; i<n; i++){
            presum += nums[i];
            int rem = presum - goal;
            cnt += mpp[rem];
            mpp[presum]++;
        }
        return cnt;
    }
};