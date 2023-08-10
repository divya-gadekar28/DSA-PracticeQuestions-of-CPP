//reverse integer

#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int digit=0,ans;
    cout<<"enter any number : ";
    cin>>n;

    while(n!=0){
        ans=n%10;     //gets last digit
    //for number whose range will go out of integer range then do following
    if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
        return 0;
    }
        digit=(digit*10)+ans;
        n=n/10;
    }
    cout<<digit;
}

/* OUTPUT:-
    enter any number : 67543
    34576
*/
