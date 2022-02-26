#include<iostream>
#include <unordered_map>
using namespace std;

// void getMajorityElement(int arr[], int n)
// {
//     unordered_map<int,bool> mpp;
//     for(int i : arr){
//         if()
//     }
// }
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
    unordered_map<int,bool> mpp;
    int comp = size/2;
    int count = 0;
    for(int i : arr){
        if(mpp.find(i)==mpp.end()){
            mpp[i] = true;
        }else{
            count++;
            if(count >= comp){
                cout<<"The Majority element is: "<<i;
            }
        }
    }
 
   
   
    return 0;
}