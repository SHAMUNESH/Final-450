#include <bits/stdc++.h>
using namespace std;

int getTrappedWater(int arr[],int n)
{
    int measureBlock = arr[0];
    
    int diff;
    int trappedWater = 0;
    for(int i=1;i<=n-2;i++){
        
        if(arr[n-1]<measureBlock){
            return 0;
        }else{
            if(arr[i]<measureBlock){
                diff = measureBlock = arr[i];
                trappedWater += diff;
            }else{
                diff = diff + 0;
            
            }
        }
    }
    return trappedWater;
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
    int waterTrappedTotal = getTrappedWater(arr,size);
    cout<<"Maximun Water can be trapped is :"<<waterTrappedTotal;
    return 0;

}