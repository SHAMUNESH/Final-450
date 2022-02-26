#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void recur(int ind, int sum,int arr[], int n, vector<int> &sumSubset)
{
    if(ind == n){
        sumSubset.push_back(sum);
    }
    recur(ind + 1, sum + arr[ind],arr,n,sumSubset); //picked
    recur(ind + 1, sum ,arr,n,sumSubset); //not picked
}

void subsetSum(int arr[],int n)
{
    vector<int> sumSubset;
    recur(0,0,arr,n,sumSubset);
    sort(sumSubset.begin(),sumSubset.end());
    cout<<"Subset Sum : \n";
    for(int i=0;i<sumSubset.size();i++){
        cout<<sumSubset[i]<<" ";
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    subsetSum(arr,n);
    return 0;
}