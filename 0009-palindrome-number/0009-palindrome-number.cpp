class Solution {
public:
    bool isPalindrome(int x)
    {
            long int r;
            long int rev=0;
            int orig=x;

            while(x>0)
            {
                r=x%10;
                x=x/10;
                rev=rev*10 + r;
            }
            
            if(orig == rev)
            {
                return true;
            }
            return false;
        }
};