class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n= s.length();
        map<char, int> last;
        int ans =0;
        int i=0, j=0;  // window - s[i....j]
        while(j<n){
            char ch =s[j];
            if(last.find(ch)!=last.end() && i<=last[ch]){
                i=last[ch]+1;
            }
            ans = max(ans, j-i+1);
            last[ch]=j;
            j++;
        }  // TC -> O(nlogn) -> ASC - O(n)
        return ans;
    }
};