#include <iostream>
using namespace std;

int main() {
    
    int n,i,j;
    cout<<"how many rows & columns : "; 
    cin>>n;
    
    i=1;    //rows starting from 1st 
    while(i<=n){
        j=1;     //columns starting from 1st
        while(j<=i){
            cout<<i-j+1<<" ";    
            j++;    //column wise incrementation
        }
        cout<<endl;
        i++;    //row wise incremention
    }
    return 0;
}

/*output: if n=5 then
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
*/
