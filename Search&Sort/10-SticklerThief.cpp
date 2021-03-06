// // C++ program to find the maximum stolen value
// #include <iostream>
// using namespace std;

// // calculate the maximum stolen value
// int maxLoot(int *hval, int n)
// {
// 	if (n == 0)
// 		return 0;

// 	int value1 = hval[0];
// 	if (n == 1)
// 		return value1;

// 	int value2 = max(hval[0], hval[1]);
// 	if (n == 2)
// 		return value2;

// 	// contains maximum stolen value at the end
// 	int max_val;

// 	// Fill remaining positions
// 	for (int i=2; i<n; i++)
// 	{
// 		max_val = max(hval[i]+value1, value2);
// 		value1 = value2;
// 		value2 = max_val;
// 	}

// 	return max_val;
// }

// // Driver to test above code
// int main()
// {
// 	// Value of houses
// 	int hval[] = {6, 7, 1, 3, 8, 2, 4};
// 	int n = sizeof(hval)/sizeof(hval[0]);
// 	cout << "Maximum loot possible : "
// 		<< maxLoot(hval, n);
// 	return 0;
// }

#include <iostream>
using namespace std;

int maxloot(int arr[],int n)
{
	if(n<0){
		return 0;
	}
	if(n==0){
		return arr[0];
	}
	int pick = arr[n] + maxloot(arr,n-2);
	
	int notPick = maxloot(arr,n-1);
	
	return max(pick,notPick);
}
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
	int res = maxloot(arr,size-1);
	cout<<res<<endl;
	return 0;
}