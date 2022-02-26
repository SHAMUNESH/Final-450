#include<iostream>
using namespace std;

bool solve (int arr[],int n,int parata,int min)
{
    int parataCount = 0;
    int time =0;
    for(int i=0;i<n;i++)
    {
        time = arr[i];
        int j = 2;
        while(time<=min){
            parataCount++;
            time = time + (arr[i]*j);
            j++;
        }
        
    }
    if(parataCount>=parata){
        return 1;
    }
    return 0;
}
void getMinMinutes(int arr[],int n,int parata)
{
    int lb=0, ub = 1e8;
    int ans =0;
    while(lb<=ub){
        int mid = (lb+ub)/2;
        if(solve(arr,n,parata,mid)){
            ans = mid;
            ub = mid-1;
        }
        else{
            lb = mid+1;
        }
    }
    cout<<"The minimum time is "<<ans;
}
int main()
{
    int size;
    std::cout << "Enter the no of cooks: " << std::endl;
    std::cin >> size;
    int arr[size];
    cout<<"Enter the cooks rank: \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int parata;
    cout<<"The no of parata to be ordered: \n";
    cin>>parata;
    
    getMinMinutes(arr,size,parata);
    return 0;
}