class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans= "";
        reverse(s.begin(), s.end());

        for(int i=0; i<n; i++){
            string word = "";
            while(i<n && s[i] != ' '){     // space must be represented by ' ' and not by " "
                word += s[i];
                i++;
            }    
            reverse(word.begin(), word.end());
            if(word.length() > 0){       // used to remove trailing and extra spaces
                ans += " " + word;
            }
        }
        return ans.substr(1);
    }
};