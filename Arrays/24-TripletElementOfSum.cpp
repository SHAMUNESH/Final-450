#include <bits/stdc++.h>
using namespace std;

void getTripletSumCount(int arr[],int n,int sum)
{
   int l,r;
  
   sort(arr,arr+n);
   for(int i=0;i<n-2;i++){
       l=i+1; r=n-1;
       
       while(l<r){
           if(arr[i]+arr[l]+arr[r] == sum){
               cout<<arr[i]<<" "<<arr[l]<<" "<<arr[r]<<endl;
               
               break;
           }
           else if(arr[i]+arr[l]+arr[r]<sum){
               l++;
           }
           else
            r--;
       }
   }
   
}
int main()
{
    int size,sum;
    std::cout << "Enter array size: " << std::endl;
    std::cin >> size;
    int arr[size];
    cout<<"Enter array elements: \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the sum: \n";
    cin>>sum;
    getTripletSumCount(arr,size,sum);
    
    return 0;
}