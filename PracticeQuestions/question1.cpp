#include<iostream>
using namespace std;
int main()
{
    int n,pro=1,sum=0,i,rem,result;
    cout<<"enter any number = ";
    cin>>n;

    while(n!=0){
        rem=n%10;   
        pro=pro*rem;
        sum=sum+rem;
        n=n/10;

    }
    cout<<"Sum : "<<sum<<endl;
    cout<<"Product : "<<pro<<endl;
    result=pro-sum;
    cout<<"Product - Sum = "<<result<<endl;
}

/*Output :- 
enter any number = 1234
Sum : 10
Product : 24
Product - Sum = 14
*/
