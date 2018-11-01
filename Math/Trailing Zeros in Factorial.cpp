// Best explaination to this problem :- https://brilliant.org/wiki/trailing-number-of-zeros/

/*
Given an integer n, return the number of trailing zeroes in n!.

Note: Your solution should be in logarithmic time complexity.

Example :

n = 5
n! = 120 
Number of trailing zeros = 1
So, return 1
*/

int Solution::trailingZeroes(int A) {
    int zeros = 0;
    
    int powfive = 5;
    while(powfive <= A)
    {
        zeros += A/powfive;
        powfive *= 5;
    }
    
    return zeros;
}

