#include <iostream>
using namespace std;

int main() {
    
    int n,i,j,count,val;
    cout<<"how many rows & columns : "; 
    cin>>n;
    
    i=1;    //rows starting from 1st 
    val=1;    //created new variable which starts from 1
    while(i<=n){
        j=1;     //columns starting from 1st
        while(j<=i){
            cout<<val<<" ";    
            val++;     //prints the value and increment it
            j++;    //column wise incrementation
        }
        cout<<endl;
        i++;    //row wise incremention
    }
    return 0;
}

/*output: if n=3 then
1
23
456
*/
