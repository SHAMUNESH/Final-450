
#include <bits/stdc++.h>
    using namespace std;
    

    int getKthElement(int arr1[],int n,int arr2[],int m,int k)
    {
        priority_queue<int ,vector<int>, greater <int>> pq;
        for(int i=0;i<n;i++){
            pq.push(arr1[i]);
        }
        for(int j=0;j<m;j++){
            pq.push(arr2[j]);
        }
        while(k-- > 1){
            pq.pop();
        }
        return pq.top();
    }
    int main()
    {
        int n,m;
        cout<<"Enter array size of 2 arrays: \n";
        cin>>n>>m;
        int arr1[n],arr2[m];
        cout<<"Enter array1 elements: \n";
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        cout<<"Enter array2 elements: \n";
        for(int j=0;j<m;j++){
            cin>>arr2[j];
        }
        int k;
        cin>>k;
        cout<<"Enter the value of K: \n";
        int ans = getKthElement(arr1,n,arr2,m,k);
        cout<<ans<<" ";
        return 0;
    }