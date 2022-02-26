#include<iostream>
using namespace std;

int merge(int arr[],int lb,int mid,int ub)
{
    int n1 = mid-lb+1;
    int n2 = ub-mid;
    int L[n1], R[n2];
    int invCount = 0;
    for(int i=0;i<n1; i++){
        L[i] = arr[lb+i];
    }
    for(int j=0;j<n2;j++){
        R[j] = arr[mid+1+j];
    }
    int i,j,k;
    i=0,j=0,k=lb;
    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            arr[k] = L[i];
            i++;
            k++;
            
        }
        else{
            arr[k] = R[j];
            j++;
            k++;
            invCount += n1 - i;
        }
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = R[j];
        k++;
        j++;
    } 
    return invCount;
}


 int mergeSort(int arr[],int lb,int ub)
{
    int invCount = 0;
    if(lb<ub){
        int mid = (lb+ub)/2;
        invCount+= mergeSort(arr,lb,mid);
        invCount+= mergeSort(arr,mid+1,ub);
        invCount+= merge(arr,lb,mid,ub);
    }
    return invCount;
}

// void printArray(int arr[],int n)
// {
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
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
    int ans = mergeSort(arr,0,size-1);
    cout<<"The inversion count is "<<ans;
    // printArray(arr,size);
    return 0;
}