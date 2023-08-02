// Pattern 1
#include <iostream>
using namespace std;

int main() {
    
    int n,i,j;
    cout<<"how many rows & columns : "; 
    cin>>n;
    
    i=1;    //rows starting from 1st 
    while(i<=n){
        j=1;     //columns starting from 1st
        while(j<=n){
            cout<<i<<" " ;     //prints rowNo till nth number
            j++;    //column wise incrementation
        }
        cout<<endl;     //goes to next row
        i++;    //row wise incremention
    }
    return 0;
}

/*output: if n=3 then
111
222
333
*/
