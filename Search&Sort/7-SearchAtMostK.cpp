#include<iostream>
using namespace std;

void searchAtMostK(int arr[],int n,int k,int x)
{
    int i=0;
    while(i<n)
    {
        if(arr[i]==x){
            cout<<i<<"\n";
        }
        i = i + max(1,abs(arr[i]-x)/k);
    }
    
}
int main()
{
    int size;
    std::cout << "Enter array size: " << std::endl;
    std::cin >> size;
    int arr[size];
    cout<<"Enter array elements: \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k: \n";
    cin>>k;
    int x;
    cout<<"Enter x: \n";
    cin>>x;
    searchAtMostK(arr,size,k,x);
    return 0;
}