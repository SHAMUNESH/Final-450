
#include <iostream>
#include <algorithm>
using namespace std;


void minTheHeights(int arr[], int n, int k)
{
    sort(arr,arr+n);
    
    int max_ = arr[n-1];
    int min_ = arr[0];
    int res = max_ - min_;
    for(int i=1;i<n;i++){
        max_ = max(arr[i-1]+k,arr[n-1]-k);
        min_ = min(arr[i]-k,arr[0]+k);
        res = min(res, max_ - min_);
    }
    cout<<"Minimized Height is "<<res<<endl;
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
    cout<<"Enter the value for k: \n";
    cin>>k;
    minTheHeights(arr,size,k);

    return 0;
}
