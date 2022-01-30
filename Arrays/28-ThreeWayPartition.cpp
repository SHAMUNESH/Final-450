#include <bits/stdc++.h>
using namespace std;

// void getThreePartioning(int arr[], int n,int lowVal,int highVal)
// {
//     int lessLowVal = 0,btwRange = 0,moreHighVal = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i] < lowVal){
//             lessLowVal++;
//         }
//         else if(arr[i] > highVal){
//             moreHighVal++;
//         }
//         else{
//             btwRange++;
//         }
//     }
//     // cout<<lessLowVal<<" "<<btwRange<<" "<<moreHighVal<<" \n";
//     for(int j=0;j<n;j++){
//         if(arr[j] < lowVal){
//             for(int i=0;i<lessLowVal;i++){
//                 arr[i] =arr[j];
//             }
//         }
//         else if(lowVal<=arr[j]<=highVal){
//             for(int i=lessLowVal-1; i<lessLowVal+btwRange;i++){
//                 arr[i] = arr[j];
//             }
//         }
//         else{
//             for(int i=lessLowVal+btwRange-1;i<n;i++){
//                 arr[i] = arr[j];
//             }
//         }
//     }
//     // for(int i=0;i<n;i++){
//     //     cout<<arr[i]<<" ";
//     // }
// }

void getThreePartioning(int arr[], int n,int lowVal,int highVal)
{
    int start =0, end = n-1;
    for(int i=0;i<=end;){
        if(arr[i] < lowVal){
            if(i==start){
                start++;
                i++;
            }else{
                swap(arr[i++],arr[start++]);
            }
        }
        else if(arr[i] > highVal){
            swap(arr[i],arr[end--]);
        }
        else{
            i++;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
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
    int lowVal,highVal;
    cout<<"Enter the range: \n";
    cin>>lowVal>>highVal;

    getThreePartioning(arr,size,lowVal,highVal);
    return 0;
}