#include <bits/stdc++.h>
using namespace std;

int getLongestConsecSub(int arr[], int n)
{
    unordered_set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    int LongestConSub = 0;
    for(int i=0;i<n;i++){
        if(s.find(arr[i] -1) != s.end()){
            int currNum = i;
            int currStreak = 1;
            while(s.find(arr[currNum]) == s.end()){
                currNum += 1;
                currStreak +=1;
            }
            LongestConSub = max(LongestConSub,currStreak);
        }
        
    }
    return LongestConSub;

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
    int res = getLongestConsecSub(arr,size);
    cout<<"The Longest consecutive subsequence is "<<res<<endl;
}