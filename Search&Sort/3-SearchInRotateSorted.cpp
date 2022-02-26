// Binary Search cannot be done in a rotated sorted array, so we have done
// a extra step to find the pivot and find which subarray to take for the regular BS.

#include<iostream>
using namespace std;

int searchInRotatedSortArray(int arr[], int n,int target)
{
    int left = 0;
    int right = n-1;
    while(left < right){
        int midpt = left + (right - left) / 2;
        if(arr[midpt] > arr[right]){
            left = midpt+1;
        }else{
            right = midpt;
        }
    }
    int start = left;
    left = 0;
    right = n-1;
    if(target >= arr[start] && target <= arr[right]){
        left = start;
    }else{
        right = start;
    }
    while(left<=right){
        int midpt = left + (right-left)/2;
        if(arr[midpt] == target){
             return midpt;
        }else if(arr[midpt] < target){
            left = midpt+1;
        }else{
            right = midpt-1;
        }

    }
    return -1;
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
    int target;
    cout<<"Enter target to search: \n";
    cin>>target;
    int res = searchInRotatedSortArray(arr,size,target);
    cout<<res;
    return 0;
}