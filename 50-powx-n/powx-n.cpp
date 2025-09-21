class Solution {
public:
    double myPow(double x, int n) {
        // if (n == 0) return 1.0;

        // long long exp = n;
        // if (exp < 0) {
        //     x = 1 / x;
        //     exp = -exp;
        // }

        // double result = 1.0;
        // while (exp > 0) {
        //     if (exp % 2 == 1) {
        //         result *= x;  // if current bit is set
        //     }
        //     x *= x;          // square the base
        //     exp /= 2;        // shift right
        // }
        // return result;


        double ans = 1.0;
        long long exp = n;
        if(exp<0){
            exp = -1 * exp;
        }
        while(exp!=0){
            if(exp%2==0){
                x = x * x;
                exp = exp /2;
            }
            else{
                ans = ans * x;
                exp = exp - 1;
            }
        }
        if(n<0){
            ans = (double)1.0 / (double)ans;
        }
        return ans;
    }
};