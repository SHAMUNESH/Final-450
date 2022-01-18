//Cyclically rotate an array by one
#include <iostream>

using namespace std;


void rotate(int arr[], int n)
{
    int x = arr[n - 1], i;
    for (i = n - 1; i > 0; i--){
        arr[i] = arr[i - 1]; 
    }
    arr[0] = x;
    
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
    cout<<"Cyclic rotation of array by one: "<<endl;
    rotate(arr,size);
    return 0;
}
