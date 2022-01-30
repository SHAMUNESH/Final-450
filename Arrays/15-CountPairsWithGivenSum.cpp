//Count pairs with given sum

#include <iostream>
#include <unordered_map>
using namespace std;

//Time : O(n^2)
// int countPairsOfSum(int arr[],int n,int sum)
// {
//     int count=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==sum){
//                 count++;
//             }
//         }
//     }
//     return count;
// }

int countPairsOfSum(int arr[], int n, int k)
{
    int count =0;
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(mp.find(k-arr[i]) != mp.end()){
            count += mp[k-arr[i]];
            if(k-arr[i] == arr[i]){
                count--;
            }
        }
    }
    return count/2;
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
    cout<<"Enter sum to check pairs: \n";
    cin>>k;
    
    int res = countPairsOfSum(arr,size,k);
    
    cout<<"No.of pairs of given sum: "<<res<<endl;
    return 0;
}
