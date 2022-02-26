#include<iostream>
using namespace std;

void getValueEqualToIndex(int arr[], int n)
{
    for(int i = 1; i<=n;i++){
        if(arr[i-1] == i){
            cout<<arr[i-1]<<endl;
        }
    }
}
int main()
{
    int size;
    std::cout << "Enter array size: " << std::endl;
    std::cin >> size;
    int arr[size];
    cout<<"Enter array elements(sorted): \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    getValueEqualToIndex(arr,size);
    return 0;
}