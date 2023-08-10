/*In the first line print two space-separated integers, representing the length of a and b respectively.
In the second line print the string produced by concatenating a and b (a+b).
In the third line print two strings separated by a space, a' and b' .
a' and b' are the same as a and b, respectively, except that their first characters are swapped.*/

#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string s1,s2;
    int len1,len2;
    char a,b;
    cin>>s1;
    cin>>s2;
    len1=s1.size();
    len2=s2.size();
    cout<<len1<<" "<<len2<<endl;   //string length
    cout<<s1+s2<<endl;    //string concatenation
    
    a=s2[0];
    b=s1[0];
    s1[0]=a;
    s2[0]=b;
    cout<<s1<<" "<<s2;
    
    return 0;
}

/* INPUT :-
  abcd
  ef

OUTPUT:-
  4 2
  abcdef
  ebcd af
*/
  
