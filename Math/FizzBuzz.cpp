/*Given a positive integer N, print all the integers from 1 to N. But for multiples of 3 print “Fizz” instead of the number and for the multiples of 5 print “Buzz”. Also for number which are multiple of 3 and 5, prints “FizzBuzz”.

Example

N = 5
Return: [1 2 Fizz 4 Buzz]*/

vector<string> Solution::fizzBuzz(int n) {
    vector < string > ans;
    for(int i = 1; i <= n; i++)
    {
        if(i % 15 == 0)
            ans.push_back("FizzBuzz");
        else if(i % 5 == 0)
            ans.push_back("Buzz");
        else if(i % 3 == 0)
            ans.push_back("Fizz");
        else
        {
            ostringstream str1;
            str1 << i;
            ans.push_back(str1.str());
        }
    }
    
    return ans;
}
