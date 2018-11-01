A robot is located at the top-left corner of an A x B grid (marked ‘Start’ in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked ‘Finish’ in the diagram below).

How many possible unique paths are there?

Note: A and B will be such that the resulting answer fits in a 32 bit signed integer.
Example :

Input : A = 2, B = 2
Output : 2

2 possible routes : (0, 0) -> (0, 1) -> (1, 1) 
              OR  : (0, 0) -> (1, 0) -> (1, 1)
             
// Dp solution 
int Solution::uniquePaths(int n, int m) {
    if(n == 0 && m == 0)
        return 1;
    if(n == 0)
        return 1;
    if(m == 0)
        return 0;
    int a[n][m];
    for(int i = 0; i < n; i++)
        a[i][0] = 1;
    for(int i = 0; i < m; i++)
        a[0][i] = 1;
        
    for(int i = 1; i < n; i++)
    {
        for(int j = 1; j < m; j++)
        {
            a[i][j] = a[i - 1][j] + a[i][j - 1];
        }
    }
    
    return a[n - 1][m - 1];
}
