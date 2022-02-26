#include<iostream>
#include<vector>
using namespace std;

void productArrayPuzzle(int arr[], int n)
{
    vector<long long int> l(n), r(n);
    l[0] = 1 , r[n-1] = 1;
    for(int i=1;i<n;i++){
        l[i] = l[i-1] * arr[i-1];
    }
    for(int i=n-2; i>=0; i--){
        r[i] = r[i+1] * arr[i+1];
    }
    for(int i=0;i<n;i++){
        arr[i] = l[i] * r[i];
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
    productArrayPuzzle(arr,size);
    return 0;
}