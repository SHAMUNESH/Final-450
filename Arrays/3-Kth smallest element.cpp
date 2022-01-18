#include <iostream>
#include <algorithm>
using namespace std;


void sortArrayAsc(int arr[],int start,int end)
{
    
    
    sort(arr,arr+end);
}

void printKthSmallestElement(int arr[], int Kth)
{
    
    cout<<"Kth smallest element is "<<endl;
    cout<<arr[Kth-1];
}
int main()
{
    
    
    int N;
    cout<<"Enter Array size: "<<endl;
    cin>>N;
    int arr[N];
    cout<<"Enter Array elements: "<<endl;
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    sortArrayAsc(arr,0,N);
    cout<<"Enter the kth smallest element: "<<endl;
    int K;
    cin>>K;
    printKthSmallestElement(arr,K);
    return 0;
}
