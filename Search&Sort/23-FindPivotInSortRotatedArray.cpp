#include<iostream>
using namespace std;


int getPivot(int arr[],int n)
{
    int low = 0, high = n-1;
    while(low<high){
        int mid = (low+high)/2;
        if(arr[mid]>=arr[0]){
            low = mid+1;
        }
        else{
            high = mid;
        }
    }
    return low;
}
int main()
{
    int size;
    std::cout << "Enter array size: " << std::endl;
    std::cin >> size;
    int arr[size];
    cout<<"Enter sorted & rotated array elements: \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int res = getPivot(arr,size);
    cout<<"The pivot element is at index: "<<res;
    return 0;
}