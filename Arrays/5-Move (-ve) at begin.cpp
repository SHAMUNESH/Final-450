//Move all (-ve) integers to beginning of the array
#include <iostream>

using namespace std;

void reArrangeElements(int arr[], int N)
{
    int j=0;
    for(int i=0;i<N;i++){
        if(arr[i] < 0){
            if(i != j){
                swap(arr[i],arr[j]);
            }
            j++;
        }
    }
}

void printSorted(int arr[], int N)
{
    for(int i=0;i<N;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int size;
    std::cout << "Enter array size: " << std::endl;
    std::cin >> size;
    int arr[size];
    cout<<"Enter array elements with both (-ve) & (+ve) data: \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    reArrangeElements(arr,size);
    cout<<"Sorted data: \n";
    printSorted(arr,size);

    return 0;
}
