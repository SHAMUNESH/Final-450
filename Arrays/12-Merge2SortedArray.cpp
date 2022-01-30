//Merge 2 sorted arrays w/o using extra space!
//Insertion sort Algo, GAP 
#include <iostream>
#include <algorithm>
using namespace std;
void swap(int arr1[],int i, int arr2[], int j)
{
    int temp = arr1[i];
    arr1[i] = arr2[j];
    arr2[j] = temp;
}

void mergeTwoArrays(int arr1[],int size1,int arr2[], int size2)
{
    for(int i=0;i<size1;i++){
        int j=0;
        if(arr1[i] > arr2[j]){
            swap(arr1,i,arr2,j);
            sort(arr2,arr2+size2);
        }
    
    }
}

void printMergedArrays(int arr1[],int size1,int arr2[], int size2 )
{
    cout<<"2 Merged Arrays: \n";
    for(int i=0;i<size1;i++){
        cout<<"arr1[] "<<arr1[i]<<" ";
    }
    cout<<"\n";
    for(int j=0;j<size2;j++){
        cout<<"arr2[] "<<arr2[j]<<" ";
    }
}
int main()
{
    int size1,size2;
    std::cout << "Enter array 1 size: " << std::endl;
    std::cin >> size1;
    int arr1[size1];
    cout<<"Enter array 1 elements:(sorted) \n";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    std::cout << "Enter array 2 size: " << std::endl;
    std::cin >> size2;
    int arr2[size2];
    cout<<"Enter array 2 elements:(sorted) \n";
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    mergeTwoArrays(arr1,size1,arr2,size2);
    printMergedArrays(arr1,size1,arr2,size2);
    return 0;
}
