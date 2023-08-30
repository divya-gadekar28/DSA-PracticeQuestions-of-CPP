//reverse the array
#include<iostream>
using namespace std;
void reverseArray(int arr[],int start,int end)
{
    int temp;
    temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;
    start++;
    end--;
}
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n,i;
    cout<<"how many elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements: "<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"displaying array: "<<endl;
    printArray(arr,n);
    reverseArray(arr,0,n-1);
    cout<<endl<<"reversed array: "<<endl;
    printArray(arr,n);

}
/* OUTPUT:
how many elements: 5
enter 5 elements:
43
55
6
12
3
displaying array:
43 55 6 12 3
reversed array:
3 55 6 12 43
*/
