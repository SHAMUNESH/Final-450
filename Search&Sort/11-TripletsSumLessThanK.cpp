#include<iostream>
#include<algorithm>
using namespace std;

void getTripletSum(int arr[], int n, int givenSum)
{
    sort(arr,arr+n);
  
    int sum, count=0;
    for(int i=0;i<n;i++){
        int j=i+1; int k=n-1;
        while(j<k){
           sum = arr[i] + arr[j] + arr[k];
           if(sum >= givenSum){
               k--;
              
              
               
           }else{
               count += (k-j);
               j++;
           }
        }
    }
    cout<<"The triplets count is: "<<count;
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
    int sum;
    cout<<"Enter the sum: ";
    cin>>sum;
    getTripletSum(arr,size,sum);
    return 0;
}