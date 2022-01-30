
#include <iostream>
#include <climits>
using namespace std;

int maxProfitforStocks(int arr[], int n)
{
    
    int maxProfit = 0;
    int minPrice = INT_MAX;
    for(int i=0;i<n;i++){
        minPrice = min(minPrice,arr[i]);
        maxProfit = max(maxProfit,arr[i] - minPrice);
    }
    return maxProfit;
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
    int res = maxProfitforStocks(arr,size);
    cout<<"The Maximum profit is "<<res<<endl;
    return 0;
}

