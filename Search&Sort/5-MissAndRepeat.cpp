//Find Missing And Repeating 
// N = 3
// Arr[] = {1, 3, 3}
         // 0, 1, 2
// Output: 3 2
// #include<iostream>
// #include<algorithm>
// using namespace std;

// // void getMissingAndRepeating(int arr[], int n)
// // {
// //     sort(arr,arr+n);
// //     int missingElement,repeatElement;
// //     int flag = 1;
// //     for(int i=1;i<n;i++){
// //         if(arr[i-1] == arr[i]){
// //             repeatElement = arr[i];
// //             flag = 0;
// //         }
// //         if(arr[i-1] != i){
// //             missingElement = i;
// //         }
      
// //     }
// //     if(flag==0){
// //         cout<<"The Repeating Element is: "<<repeatElement<<endl;
// //     }else{
// //         cout<<"No Repeating Element in array!\n";
// //     }
    
// //     cout<<"The smallest Missing Element is: "<<missingElement;

// // }

// void getMissingAndRepeating(int arr1[], int n)
// {
//     int arr2[n] = { 0 };
//     for(int i=0;i<n;i++){

//     }

// }
// int main()
// {
//     int size;
//     std::cout << "Enter array size: " << std::endl;
//     std::cin >> size;
//     int arr[size];
//     cout<<"Enter array elements5: \n";
//     for(int i=0;i<size;i++){
//         cin>>arr[i];
//     }
//     getMissingAndRepeating(arr,size);
//     return 0;
// }
// C++ program to find the repeating
// and missing elements using Maps
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
	int arr[] = { 4, 3, 6, 2, 1, 1 };
	int n = 6;
	
	unordered_map<int, bool> numberMap;
	
	for(int i : arr)
	{
		if (numberMap.find(i) ==
			numberMap.end())
		{
			numberMap[i] = true;
		}
		else
		{
			cout << "Repeating = " << i;
		}
	}
	cout << endl;
	
	for(int i = 1; i <= n; i++)
	{
		if (numberMap.find(i) ==
			numberMap.end())
		{
			cout << "Missing = " << i;
		}
	}
	return 0;
}

