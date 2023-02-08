/*
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.
*/

class Solution {
public:
    int reverse(int x) {
        int rev = 0, rem;

        while(x != 0){
            rem = x%10;
            if(rev > INT_MAX/10 || rev < INT_MIN/10)
                return 0;
            rev = rev*10 + rem;
            x /= 10;
        }

        return rev;
    }
};
