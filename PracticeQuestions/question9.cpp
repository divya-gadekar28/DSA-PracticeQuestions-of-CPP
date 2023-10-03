//Check if pair with given Sum exists in Array
#include <bits/stdc++.h>
 
using namespace std;
 
// Function to find and print pair
bool chkPair(int A[], int size, int x)
{
    for (int i = 0; i < (size - 1); i++) {
        for (int j = (i + 1); j < size; j++) {
            if (A[i] + A[j] == x) {
                return 1;
            }
        }
    }
 
    return 0;
}

int main()
{   
    int n,num;
    cout<<"how many elements? ";
    cin>>n;
    int A[n];
    cout<<"enter "<<n<<" elements";
    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cout<<"enter any number to check if sum of its pair is present or not:  ";
    cin>>num;
 
    if (chkPair(A, n, num)) {
        cout << "Yes the pair is present" << endl;
    }
    else {
        cout << "No the pair is not present"<< endl;
    }
 
    return 0;
}
 
