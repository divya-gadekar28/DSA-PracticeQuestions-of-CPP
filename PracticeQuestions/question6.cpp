/* Given an unsorted integer array, find a pair with the given sum in it. */
#include<iostream>
using namespace std;
int main(){
    int n,target;
    cout<<"how many elements :";
    cin>>n;
    
    int arr[n];
    cout<<"enter elements :- "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"displaying elements :- "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl<<"enter target value :- ";
    cin>>target;

    // consider each element except the last
    for (int i = 0; i < n - 1; i++)
    {
        // start from the i'th element until the last element
        for (int j = i + 1; j < n; j++)
        {
            // if the desired sum is found, print it
            if (arr[i] + arr[j] == target)
            {
                cout<<"Pair found = "<< "("<<arr[i]<<","<<arr[j]<<")"<<"\n";
            }
        }
    }
}

/* OUTPUT :- 
how many elements :5
enter elements :-
4
5
2
3
1
displaying elements :-
4       5       2       3       1
enter target value :- 6
Pair found = (4,2)
Pair found = (5,1)
*/
