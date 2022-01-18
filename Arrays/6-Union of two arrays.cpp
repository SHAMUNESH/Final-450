
// Union of two arrays
#include <iostream>
#include <algorithm>
using namespace std;

void sort2Arrays(int arr1[], int n, int arr2[], int m)
{
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
}

void printUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
 
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
 
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
    
    while (i < n)
        cout << arr1[i++] << " ";
 
    while (j < m)
        cout << arr2[j++] << " ";
}

// void printArray(int arr1[], int n, int arr2[], int m)
// {
//     for(int i=0;i<n;i++){
//         cout<<arr1[i]<<" ";
//     }
//     for(int j=0;j<m;j++){
//         cout<<arr2[j]<<" ";
//     }
// }
int main()
{
    int n,m;
    cout<<"Enter size of two arrays: \n";
    cin>>n>>m;
    int arr1[n],arr2[m];
    cout<<"Enter Array 1 elements of size " <<n <<endl;
    for (int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"Enter Array 2 elements of size " <<m <<endl;
    for (int j=0;j<m;j++){
        cin>>arr2[j];
    }
    // sort2Arrays(arr1,n,arr2,m);
    // printArray(arr1,n,arr2,m);
    cout<<"Union of two arrays: \n";
    printUnion(arr1,arr2,n,m);
    return 0;
}
