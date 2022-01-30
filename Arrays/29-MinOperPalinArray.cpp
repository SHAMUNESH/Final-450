#include<iostream>
using namespace std;

void getMinOperation(int arr[],int n)
{
    int op = 0;
    int i = 0,  j=n-1;
    while(i<j){
        if(arr[i] == arr[j]){
            i++;
            j--;
        }
        else if(arr[i] < arr[j]){
            i++;
            arr[i] += arr[i-1];
            op++;
        }
        else{
            j--;
            arr[j] += arr[j+1];
            op++;
        }
    }
    cout<<"Minimum merge operation :" <<op;
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
    getMinOperation(arr,size);
    return 0;
}