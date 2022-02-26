#include<iostream>
#include<algorithm>
using namespace std;

bool isParitionPossible(int arr[],int n , int k,int barrier)
{
    int painterCount = 1;
    int timeTaken =0;
    for(int i=0;i<n;i++){
        if(arr[i] > barrier) return false;
        if(timeTaken+arr[i] > barrier){
            painterCount += 1;
            timeTaken = arr[i];
        }else{
            timeTaken += arr[i];
        }
     }
     if(painterCount > k){
         return false;
     }
     return true;
}

int getMinTime(int arr[],int n,int k)
{
    sort(arr,arr+n);
    int low = arr[0];
    int sumArray = 0;
    for(int i=0;i<n;i++){
        sumArray += arr[i];
    }
    int high = sumArray;
    int res =0;
    while(low<=high){
        int mid = (low+high)/2;
        if(isParitionPossible(arr,n,k,mid)){
            res = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }

    }
    return res;
}
int main()
{
    int n;
    cout<<"Enter no of painting boards: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter the height of boards: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter no of painters: \n";
    cin>>k;
    int ans = getMinTime(arr,n,k);
    cout<<ans<<" ";
    return 0;
}