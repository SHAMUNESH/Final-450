#include<iostream>
#include<unordered_map>
using namespace std;

int getMaxSubarrayOfSumZero(int arr[], int n)
{
    unordered_map<int,int> mpp;
    int maxSub=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum==0){
            maxSub = maxSub+1;
        }
        else{
            if(mpp.find(sum) != mpp.end()){
                maxSub = max(maxSub, i - mpp[sum]);
            }
            else{
                mpp[sum] = i;
            }
        }
    }
    return maxSub;
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
    int ans = getMaxSubarrayOfSumZero(arr,size);
    cout<<"The Largest Subarray of Sum 0 is "<<ans;
    return 0;
}