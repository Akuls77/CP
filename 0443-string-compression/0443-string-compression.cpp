class Solution {
public:
    int compress(vector<char>& chars) {
        int n =chars.size();
        int idx =0;
        for(int i=0; i<n; i++){
            char ch = chars[i];
            int cnt=0;
            chars[idx]= ch;
            idx++;

            while(i<n && chars[i]==ch){
                i++;
                cnt++;
            }

            if(cnt>1){     //to store cnt in array
                string str = to_string(cnt);
                for(char digit: str){
                    chars[idx] = digit;
                    idx++;
                }
            }
            i--;    //when inner while loop finishes, idx is pointing to at first char of next group and outer for loop again does i++ so to balance it we do i--
        }
        chars.resize(idx);
        return idx;
    }
};