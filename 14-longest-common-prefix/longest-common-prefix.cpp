class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        sort(strs.begin(), strs.end());  //after sorting we will get the smallest and largest strings (lexicographically) 
    
        string first = strs[0];
        string last = strs[n-1];
        string s = "";

        for(int i=0; i<first.length(); i++){   //last and first will have the minimum common prefix among all
            if(first[i] != last[i]){
                break;
            }
            s += first[i];
        }
        return s;
    }
};