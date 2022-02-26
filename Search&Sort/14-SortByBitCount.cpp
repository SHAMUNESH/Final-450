#include<iostream>
#include<algorithm>
using namespace std;


static bool comp(int a,int b)
{
    return __builtin_popcount(a) > __builtin_popcount(b);
}
void sortBySetCount(int arr[], int n)
{
    stable_sort(arr,arr+n,comp);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
    sortBySetCount(arr,size);
    return 0;
}