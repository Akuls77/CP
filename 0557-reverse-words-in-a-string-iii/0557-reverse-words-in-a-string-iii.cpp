class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        // string ans = "";
        // for(int i=0; i<n; i++){
        //     string word = "";
        //     while(i<n && s[i]!=' '){
        //         word += s[i];
        //         i++;
        //     }
        //     reverse(word.begin(), word.end());
        //     ans += " " + word;
        // }
        // return ans.substr(1);

        int start = 0;
        for(int i=0; i<=n; i++){
            if(i==n || s[i]==' '){
                reverse(s.begin()+start, s.begin()+i);
                start = i+1;
            }
        }
        return s;
    }
};