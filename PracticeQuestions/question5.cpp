/*To check whether the given number is in power of 2 or not
Constraints = -2(to the power 31) <= n <= 2(to the power 31) - 1 */
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n,i,ans;
    cout<<"Enter any number :";
    cin>>n;

    //we know that (2 to the power 31)-1 is the max value it can hold so we need to apply loop till 30
    //if the number occurs in between then it will be in power of 2 range or else no
    for(int i=0;i<=30;i++){
        ans=pow(2,i);
        // To print all the values in power of 2 :- cout<<"2 to the power "<<i<<"="<<ans<<endl;
    if(ans==n){
        cout<<"Yes, the number is in power of 2"<<endl;
        exit(0);
    }
    }
    cout<<"No, the number is not in the power of 2";
    return 0;
}

/* OUTPUT :- 
Enter any number :32
Yes, the number is in power of 2

Enter any number :71
No, the number is not in the power of 2
*/

/*Optimized code :- 
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter any number: ";
    cin >> n;

    if (n <= 0) {
        cout << "No, the number is not in the power of 2";
    } else {
        if ((n & (n - 1)) == 0) {
            cout << "Yes, the number is in power of 2";
        } else {
            cout << "No, the number is not in the power of 2";
        }
    }

    return 0;
}
 */
