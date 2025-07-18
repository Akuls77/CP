class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // TC -> O(2N) and SC -> O(1)
        int n = nums.size();
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN;
        int el2 = INT_MIN;

        for(int i=0; i<n; i++){
            if(cnt1 == 0 && el2!=nums[i]){
                cnt1 = 1;
                el1 = nums[i];
            }
            else if(cnt2 == 0 && el1!=nums[i]){
                cnt2 = 1;
                el2 =  nums[i];
            }
            else if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
            else{
                cnt1--;
                cnt2--;
            }
        }
        // manual checking
        vector<int> ls;
        int c1=0, c2=0;
        int mini = (int)(n/3) + 1;
        for(int i=0; i<n; i++){
            if(nums[i] == el1) c1++;
            if(nums[i] == el2) c2++;
        }
        if(c1>=mini) ls.push_back(el1);
        if(c2>=mini) ls.push_back(el2);
        return ls;




        // TC -> O(NlogN) and SC -> O(N)
        // vector <int> ls;
        // int n = nums.size();
        // map <int, int> mpp;
        // int mini = (int)(n/3) + 1;

        // for(int i=0; i<n; i++){
        //     mpp[nums[i]]++;
        //     if(mpp[nums[i]] == mini){
        //         ls.push_back(nums[i]);
        //     }
        //     if(ls.size() == 2) break;
        // }
        // return ls;
    }
};