#include <iostream>
using namespace std;

int main() {
    
    int n,i,j;
    char ch;
    cout<<"how many rows & columns : "; 
    cin>>n;
    
    i=1;    //rows starting from 1st 
    while(i<=n){
        j=1;     //columns starting from 1st
        while(j<=n){
            ch='A'+j-1;
            cout<<ch<<" ";    
            j++;    //column wise incrementation
        }
        cout<<endl;
        i++;    //row wise incremention
    }
    return 0;
}

/*output: if n=4 then
A B C D 
A B C D 
A B C D 
A B C D 
*/
