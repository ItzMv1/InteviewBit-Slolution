/*
Given a string, find the rank of the string amongst its permutations sorted lexicographically. 
Assume that no characters are repeated.

Example :

Input : 'acb'
Output : 2

The order permutations with letters 'a', 'c', and 'b' : 
abc
acb
bac
bca
cab
cba
The answer might not fit in an integer, so return your answer % 1000003
*/


int fact(int n)
{
    if(n < 2)
        return 1;
    return ((n) * fact(n - 1)) % 1000003;
}
 
int findRankutil(string s) {
    int ans = 0;
    int n = s.length();
    for(int i = 0; i < n - 1; i++)
    {
        int c = 0;
        for(int j = i + 1; j < n; j++)
        {
            if(s[i] > s[j])
                c++;
        }
        ans += (c*fact(n - 1 - i)) % 1000003;
    }
    return (ans + 1) % 1000003;
}
 
int Solution::findRank(string A) {
    return findRankutil(A
