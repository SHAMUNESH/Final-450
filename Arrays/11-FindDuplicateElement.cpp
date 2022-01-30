//Find the Duplicate number in the array
#include <iostream>
#include <algorithm>
using namespace std;

// int findDuplicate(int arr[], int n)
// {
//     int res;
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 res = arr[i];
//             }
//         }
//     }
//     return res;
// }

int findDuplicate(int arr[], int n)
{
    int res;
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            res = arr[i];
        }
    }
    return res;
}

int main()
{
    int size,k;
    std::cout << "Enter array size: " << std::endl;
    std::cin >> size;
    int arr[size];
    cout<<"Enter array elements: \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int dup_num = findDuplicate(arr,size);
    cout<<"Duplicate element is "<<dup_num<<endl;
    return 0;
}
