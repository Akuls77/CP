class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        map<char, char> m1;  //s -> t
        map<char, char> m2;  //t -> s
        for(int i=0; i<s.length(); i++){
            char c1 = s[i];
            char c2 = t[i];

            //Check mapping from s → t
            if(m1.count(c1)){  // returns 1 if c1 is already present in m1
                if(m1[c1] != c2){
                    return false;
                }
            }
            else{
                m1[c1] = c2;
            }
            
            //Check mapping from t → s
            if(m2.count(c2)){
                if(m2[c2] != c1){
                    return false;
                }
            }
            else{
                m2[c2] = c1;
            }
        }
        return true;
    }
};