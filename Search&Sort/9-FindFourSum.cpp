// A hashing based CPP program
// to find if there are
// four elements with given sum.
#include <bits/stdc++.h>
using namespace std;

// The function finds four
// elements with given sum X
void findFourElements(int arr[], int n, int X)
{
	// Store sums of all pairs
	// in a hash table
	unordered_map<int, pair<int, int> > mp;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			mp[arr[i] + arr[j]] = { i, j };

	// Traverse through all pairs and search
	// for X - (current pair sum).
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			int sum = arr[i] + arr[j];

			// If X - sum is present in hash table,
			if (mp.find(X - sum) != mp.end()) {

				// Making sure that all elements are
				// distinct array elements and an element
				// is not considered more than once.
				pair<int, int> p = mp[X - sum];
				if (p.first != i && p.first != j
					&& p.second != i && p.second != j) {
					cout << arr[i] << ", " << arr[j] << ", "
						<< arr[p.first] << ", "
						<< arr[p.second];
					return;
				}
			}
		}
	}
}

// Driver code
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
    int X;
    cout<<"Enter the sum to find quads: \n";
    cin>>X;
	
	// Function call
	findFourElements(arr, size, X);
	return 0;
}
