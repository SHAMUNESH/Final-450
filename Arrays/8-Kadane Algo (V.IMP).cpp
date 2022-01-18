// Kadane's Algorithm - Largest Sum Subarray
#include <iostream>

using namespace std;

int largestSumSubarray(int arr[], int n)
{
    int curr=0,maxTillNow = 0;
    for(int i=0;i<n;i++){
        curr += arr[i];
        maxTillNow = max(curr, maxTillNow);
        if(curr < 0){
            curr = 0;
        }
    }
    return maxTillNow;
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
    int max_sum = largestSumSubarray(arr,size);
    cout<<"The Sum of largest subarray is "<<max_sum<<endl;
    return 0;
}

