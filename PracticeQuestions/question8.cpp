//finding maximum & minimum element from an array
#include<iostream>
using namespace std;
void printArray(int arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void maxElement(int arr[],int size)
{
    int max=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max;
}
void minElement(int arr[],int size)
{
    int min=arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<min;
}
int main()
{
    int n,i;
    cout<<"how many elements: ";
    cin>>n;
    int arr[n];
    cout<<"enter "<<n<<" elements: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Displaying elements of an array: "<<endl;
    printArray(arr,n);
    cout<<endl;
    cout<<"Maximum element: ";
    maxElement(arr,n);
    cout<<endl<<"Minimum element: ";
    minElement(arr,n);
}

/* OUTPUT: 
how many elements: 5
enter 5 elements:
43
5
12
32
44
Displaying elements of an array:
43 5 12 32 44
Maximum element: 44
Minimum element: 5
*/
