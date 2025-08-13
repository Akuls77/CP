class Solution {
public:
    bool isFreqSame(int a[], int b[]){      //TC-> O(1) because running loop for only 26 times
        for(int i=0; i<26; i++){
            if(a[i] != b[i]){
                return false;
            }
        }
        return true;
    }   

    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        int m = s2.length();

        int freq[26] = {0};
        for(int i=0; i<n; i++){
            int idx = s1[i] - 'a';  //a->0, b->1...
            freq[idx]++;
        }

        int window_size = n;
        for(int i=0; i<m; i++){
            int window_idx = 0;
            int idx = i;
            int window_freq[26] = {0};

            while(window_idx < window_size && idx < m){
                window_freq[s2[idx]-'a']++;
                window_idx++;
                idx++;
            }

            if(isFreqSame(freq, window_freq)){
                return true;
            }
        }
        return false;
    }
};