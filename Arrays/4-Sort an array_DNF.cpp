//Sort an array of 0s, 1s and 2s 
//Dutch National Flag
#include <iostream>

using namespace std;


void dnf(int arr[], int N)
{
    
    int low = 0;
    int mid = 0;
    int high = N-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++; mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    cout<<"Array sorted using dnf: "<<endl;
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[10];
    cout<<"Enter array elements of 0s, 1s, 2s: "<<endl;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Given array unsorted: "<<endl;
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    dnf(arr,size);
    
    return 0;
}
