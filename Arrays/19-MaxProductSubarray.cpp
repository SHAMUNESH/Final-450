#include<iostream>
using namespace std;

int getMaxProductOfSubarray(int arr[], int n)
{
    //Dry Run 6,-3,-10,0,2
    int product=1;
    int maxProduct =0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0){
            return maxProduct;
        }
        product = product*arr[i];
        maxProduct = max(maxProduct,product);
        
    }
    return maxProduct;

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
    int result = getMaxProductOfSubarray(arr,size);
    cout<<"Maximum Product of the Subarray is "<<result<<endl;
    return 0;
}