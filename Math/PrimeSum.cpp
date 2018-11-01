/*
  Given an even number ( greater than 2 ), return two prime numbers whose sum will be equal to given number.

Example:


Input : 4
Output: 2 + 2 = 4

If there are more than one solutions possible, return the lexicographically smaller solution.

If [a, b] is one solution with a <= b,
and [c,d] is another solution with c <= d, then

[a, b] < [c, d] 

If a < c OR a==c AND b < d. 
*/

// generate prime numbers using sieve of eratosthenese algorithm
vector < bool >  sieve(int n)
{
    vector < bool > a(n + 1, 1);
    for(int i = 2; i * i <= n; i++)
    {
        if(a[i] == 1)
        {
            for(int j = 2 * i; j <= n; j += i)
                a[j] = 0;
        }
    }
    
    return a;
}

vector<int> Solution::primesum(int n) {
    vector < bool > a = sieve(n);
    
    for(int i = 2; i < n; i++)
    {
        if(a[i] == 1)
        {
            if(a[n - i] == 1)
                return {i, n - i};
        }
    }
}
