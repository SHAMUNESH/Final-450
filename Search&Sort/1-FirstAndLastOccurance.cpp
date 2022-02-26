#include<iostream>
using namespace std;

void getFirstAndLastOccur(int arr[], int n,int x)
{
    int FirstOccur = INT_MAX;
    int LastOccur = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            FirstOccur = min(FirstOccur,i);
            LastOccur = max(LastOccur,i);
        }
    }
    cout<<"The First Occurance at: "<<FirstOccur<<endl;
    cout<<"The Last Occurance at: "<<LastOccur<<endl;
}
int main()
{
    int size;
    std::cout << "Enter array size: " << std::endl;
    std::cin >> size;
    int arr[size];
    cout<<"Enter array elements(sorted): \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the value of x: \n";
    cin>>x;
    getFirstAndLastOccur(arr,size,x);

    return 0;
}