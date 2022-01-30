#include <bits/stdc++.h>
using namespace std;

void moreThanNbyK(int arr[], int n,int k)
{
    int x = n/k;
    unordered_map<int, int> freq;
    for(int i=0; i<n; i++){
        freq[arr[i]]++;
    }
    for(auto i : freq){
        if(i.second>x){
            cout<<i.first<<endl;
        }
    }
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
    int k;
    cout<<"Enter value of k: \n";
    cin>>k;
    moreThanNbyK(arr,size,k);
    return 0;
}