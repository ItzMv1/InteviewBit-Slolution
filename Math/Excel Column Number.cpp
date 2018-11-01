/*Given a column title as appears in an Excel sheet, return its corresponding column number.

Example:

    A -> 1
    
    B -> 2
    
    C -> 3
    
    ...
    
    Z -> 26
    
    AA -> 27
    
    AB -> 28 
*/

// This is like Base conversion. here base is 26
int Solution::titleToNumber(string s) {
    int result = 0;
    for (auto c : s)
    {
        result *= 26;
        result += c  - 'A' + 1;
    }
 
    return result;
}
