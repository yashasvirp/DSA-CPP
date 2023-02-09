/*
Given an integer n, return true if it is a power of two. Otherwise, return false.

An integer n is a power of two, if there exists an integer x such that n == 2^x.
*/

class Solution {
public:
    bool isPowerOfTwo(int n) {

      // int ans = 1, i = 0;

        // while(i < 31){

        //     if(n == ans)
        //         return true;
        //     if(ans < INT_MAX/2)
        //         ans*=2;
            
        //     i++;
        // }

      if(n&n-1 == 0)
	return true;

        return false;
    }
};
