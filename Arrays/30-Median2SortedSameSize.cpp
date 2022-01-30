//Median of 2 Sorted array of same size
//Counter increment approach , space O(1)

#include<iostream>
using namespace std;

void getMedian2SortedArray(int arr1[],int n1,int arr2[], int n2)
{
    int i=0,j=0;
    int m1=-1,m2=-1;
    for(int c=0;c<=n1;c++){

        if(arr1[i] <= arr2[j]){
            m1=m2;
            m2 = arr1[i];
            i++;
        }else{

            m1=m2;
            m2=arr2[j];
            j++;
        }
    }
    
    cout<<"Median is :"<<(m1+m2)/2;
}
int main()
{
    int n1;
    std::cout << "Enter array 1 size: " << std::endl;
    std::cin >> n1;
    int arr1[n1];
    cout<<"Enter array elements: \n";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2;
    std::cout << "Enter array 2 size: " << std::endl;
    std::cin >> n2;
    int arr2[n2];
    cout<<"Enter array 2 elements: \n";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    getMedian2SortedArray(arr1,n1,arr2,n2);
    return 0;
}