#include <bits/stdc++.h>
#include <string>
#include<cstring>
#include <iostream>
using namespace std;

string super_reduced_string(string s)
{
   for( int i=1; i<s.length(); ++i)
      if(s.at(i-1)==s.at(i))
      {
         s.erase(i-1,2);
         i=0;
      }
   if(s.length()==0)
      return "Empty String";
   else
      return s;
}

int main() {
    string s="aaabccddd";
    string result = super_reduced_string(s);
    cout << result << endl;
    return 0;
}

/*Steve has a string, , consisting of  lowercase English alphabetic letters. In one operation, he can delete any pair of adjacent letters with same value. For example, string "aabcc" would become either "aab" or "bcc" after operation.

Steve wants to reduce  as much as possible. To do this, he will repeat the above operation as many times as it can be performed. Help Steve out by finding and printing 's non-reducible form!

Note: If the final string is empty, print Empty String .

Input Format

A single string, .

Constraints

Output Format

If the final string is empty, print Empty String; otherwise, print the final non-reducible string.

Sample Input 0

aaabccddd
Sample Output 0

abd
Explanation 0

Steve can perform the following sequence of operations to get the final string:

aaabccddd ? abccddd
abccddd ? abddd
abddd ? abd
Thus, we print abd.*/
