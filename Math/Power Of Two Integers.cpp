/*
Given a positive integer which fits in a 32 bit signed integer, find if it can be expressed as A^P where P > 1 and A > 0. A and P both should be integers.

Example

Input : 4
Output : True  
as 2^2 = 4. 
*/
int Solution::isPower(int n) {
     if (n <= 1) return 1;
    int x;
    for ( x=2; x<=sqrt(n); x++)
    {
        double p = x;
        while (p <= n)
        {
            p *= x;
            if (p == n)
                return 1;
        }
    }
    return 0;
}

