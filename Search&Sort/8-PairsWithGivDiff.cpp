#include<iostream>
#include<unordered_set>
using namespace std;

void getPairsWithDifference(int arr[], int size, int N)
{
    unordered_set<int> s;
    int pairCount =0;
    for(int i=0;i<size;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<size;i++){
        int diff = N+arr[i];
       
        if(s.find(diff) != s.end()){
            pairCount++;
        }
    }
    cout<<"Pair with given Difference: "<<pairCount;
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
    int N;
    cout<<"Enter N: \n";
    cin>>N;
    getPairsWithDifference(arr,size,N);
    return 0;
}