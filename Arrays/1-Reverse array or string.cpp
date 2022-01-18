#include <iostream>
using namespace std;


void printArray(int arr[],int start,int end)
{
    
    for(int j=start;j<end;j++){
        cout<<arr[j]<<" "<<endl;
    }
}

// Iterative approach
void reverseArray(int arr[],int start,int end)
{
    while(start<end){
        int temp = arr[start];
        arr[start]= arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

//Recursive approach
void reverseArray(int arr[],int start,int end)
{
    if(start>=end){
        return;
    }
    int temp = arr[start];
    arr[start]= arr[end];
    arr[end] = temp;
    reverseArray(arr,start+1,end-1);
    
}
int main()
{
    
    int N;
    cout<<"Enter Array size : "<<endl;
    cin>>N;
    int arr[N];
    cout<<"Enter Array elements : "<<endl;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<"Array before reversing: "<<endl;
    printArray(arr,0,N);
    reverseArray(arr,0,N-1);
    cout<<"Array after reversing: "<<endl;
    printArray(arr,0,N);
    return 0;
}

