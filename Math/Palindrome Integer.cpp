/*
Determine whether an integer is a palindrome. Do this without extra space.

A palindrome integer is an integer x for which reverse(x) = x where reverse(x) is x with its digit reversed.
Negative numbers are not palindromic.

Example :

Input : 12121
Output : True

Input : 123
Output : False
*/

int Solution::isPalindrome(int n) {
    
    if(n < 0)
        return 0;
    int temp = n;
    int rev = 0;
    while(temp > 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    
    return rev == n;
}
