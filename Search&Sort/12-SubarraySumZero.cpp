#include<iostream>
#include<unordered_map>
using namespace std;


void getCountSubarrayWithSumZero(int arr[], int n)
{
    unordered_map<int,int> mpp;
    int count=0, sum = 0;
    for(int i=0;i<n;i++){
        // mpp[0]=1;
        // sum += arr[i];
        
        // if(mpp.find(sum)!=mpp.end()){
        //     count += mpp[sum];
        // }
        // mpp[sum]++;
        sum += arr[i];
        if(sum==0){
            count++;
        }
        if(mpp.find(sum)!=mpp.end()){
            count += mpp[sum];
        }
        else{
            mpp[sum] = i;
        }

    }
    cout<<"The no of subarray with sum 0: "<<count;
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
    getCountSubarrayWithSumZero(arr,size);
    return 0;
}