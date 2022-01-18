#include <iostream>
using namespace std;



struct Pair {
    int max;
    int min;
};


Pair getMinMax(int arr[],int start,int end)
{
    struct Pair minmax;
    if(end==1){
        minmax.max = arr[0];
        minmax.min = arr[0];
    }
    
    if(arr[0]>arr[1]){
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else{
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    for(int i=2;i<end;i++){
        if(arr[i]>minmax.max){
            minmax.max = arr[i];
        }
        else if(arr[i]<minmax.min){
            minmax.min = arr[i];
        }
    }
    return minmax;
    
    
}
int main()
{
    
    int N;
    cout<<"Enter array size: "<<endl;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    struct Pair minmax = getMinMax(arr,0,N);
    cout<< "Maximum element: "<<minmax.max<<endl;
    cout<< "Minimum element: "<<minmax.min<<endl;
    return 0;
}
