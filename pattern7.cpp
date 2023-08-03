#include <iostream>
using namespace std;

int main() {
    
    int n,i,j,count,val;
    cout<<"how many rows & columns : "; 
    cin>>n;
    
    i=1;    //rows starting from 1st 
    while(i<=n){
        j=1;     //columns starting from 1st
        val=i;     //created new variable which will store row no.
        while(j<=i){
            cout<<val<<" ";    
            val++;     //prints the value(ie. rowNo) and increment it
            j++;    //column wise incrementation
        }
        cout<<endl;
        i++;    //row wise incremention
    }
    return 0;
}

/*output: if n=5 then
1
23
345
4567
56789
*/
