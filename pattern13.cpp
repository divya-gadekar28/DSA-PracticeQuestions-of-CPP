#include <iostream>
using namespace std;

int main() {
    
    int n,i,j;
    char ch='a';
    cout<<"how many rows & columns : "; 
    cin>>n;
    
    i=1;    //rows starting from 1st 
    while(i<=n){
        j=1;     //columns starting from 1st
        while(j<=i){
            cout<<ch<<" ";  
            ch++;
            j++;    //column wise incrementation
        }
        cout<<endl;
        i++;    //row wise incremention
    }
    return 0;
}

/*output: if n=5 then
a 
b c 
d e f 
g h i j 
k l m n o 
*/
