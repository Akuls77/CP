class Solution {
public:
    bool isPalindrome(int x) {
        long long rev = 0;
        int num = x;

        while(x > 0){
            int ld = x % 10;
            x = x / 10;
            rev = rev * 10 + ld;
        }

        if(num == rev) return true;
        else return false;
    }
};