//Common elements in 3 sorted arrays
#include <iostream>

using namespace std;


void findCommonElement(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3 )
{
    
    int i=0,j=0,k=0;
    while(i<n1 and j<n2 and k<n3){
        if(arr1[i] == arr2[j] and arr2[j] == arr3[k]){
            cout<<arr1[i]<<" ";
           i++;j++;k++; 
           
        }
        else if (arr1[i] <arr2[j]){
            i++;
        }
        else if (arr2[j]<arr3[k]){
            j++;
        }
        else{
            k++;
        }
    }
    
}
int main()
{
    int size1,size2,size3;
    std::cout << "Enter 3 array size: " << std::endl;
    std::cin >> size1>>size2>>size3;
    int arr1[size1], arr2[size2],arr3[size3];
    cout<<"Enter 3 array elements: \n";
    for(int i=0;i<size1;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<size3;i++){
        cin>>arr3[i];
    }
    findCommonElement(arr1,arr2,arr3,size1,size2,size3);
    return 0;
}
