#include <bits/stdc++.h>
using namespace std;

// int getMinSwap(int arr[],int n, int k)
// {
//     int i=0;
//     int count =0;
//     while(i<n){
//         if(arr[i]<k){
//             i++;
//         }
//         else{
//             int j=n-1;
//             while(j>i){
//                 if(arr[j]<k){
//                     swap(arr[j],arr[i]);
//                     count += 1;
//                 }else{
//                     j--;
//                 }
//             }
//         }
//     }
//     return count;
// }

void getMinSwap(int arr[],int n,int k)
{
    int x=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            x++;
        }
    }
    int count =0, res=0;
    for(int i=0;i<x;i++){
        if(arr[i] > k){
            count++;
        }
    }
    res = count;
    int i=0,j=x;
    while(j<n){
        if(arr[i]>k) {
            count--;
        }
        if(arr[j] >k){
            count++;
        }
        res = min(res,count);
        i++,j++;
    }

    cout<<"Minimum swap: "<<res;
}

int main(){
    int n;
    cout<<"Array size: \n";
    cin>>n;
    int arr[n];
    cout<<"Array elements \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k: \n";
    cin>>k;
    getMinSwap(arr,n,k);
    
}