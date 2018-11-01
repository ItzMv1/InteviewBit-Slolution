/*
Given a positive integer, return its corresponding column title as appear in an Excel sheet.

For example:

    1 -> A
    2 -> B
    3 -> C
    ...
    26 -> Z
    27 -> AA
    28 -> AB 
*/

string Solution::convertToTitle(int n) {
    string rep = "";
    if(n < 27)
    {
        rep = (char)(64 + n);
        return rep;
    }


    while(n > 0)
    {
        int rem = n % 26;
        if(rem == 0)
        {
            rep += 'Z';
            n = (n/26) - 1;
        }
        else
        {
            rep += (char)(64 + rem);
            n /= 26;
        }
    }

    reverse(rep.begin(), rep.end());
    return rep;
    
}
