#include <iostream>
using namespace std;

int main() {
    
    int n,i,j;
    char start;
    cout<<"how many rows & columns : "; 
    cin>>n;
    
    i=1;    //rows starting from 1st 
    while(i<=n){
        j=1;     //columns starting from 1st
        start='a'+n-i;
        while(j<=i){
            cout<<start<<" ";
            start++;
            j++;    //column wise incrementation
        }
        cout<<endl;
        i++;    //row wise incremention
    }
    return 0;
}

/*output: if n=4 then
d
c d
b c d
a b c d
*/
