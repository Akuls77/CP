class Solution {
public:
    string compressedString(string word) {
        int n = word.length();
        string comp = "";
        for(int i=0; i<n; i++){
            int cnt = 0;
            char ch = word[i];
            while(i<n && word[i]==ch && cnt<9){
                i++;
                cnt++;
            }
            string str = to_string(cnt);
            for(char digit: str){
                comp += digit;
            } 
            comp += ch;
            i--;   //it cancels out the extra increment from the for loop
        }
        return comp;
    }
};