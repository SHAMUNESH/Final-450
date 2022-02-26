// #include<iostream>
// using namespace std;
// class Solution {
// public:
//     bool isValid(string s) {
//         for(int i=0;i<s.length();i++){
//             if(s[i]=='(' || s[i]=='[' || s[i]=='{')
//             {
//                 if(s[i+1]==')' || s[i+1]==']' || s[i+1]=='}'){
//                     return "true";
//                 }
//             }
            
//         }
//         return "false";
//     }
    
// };
// int main()
// {
//     Solution ob;
//     ob.isValid("(}");
//     return 0;
// }

#include<iostream>
#include<set>
#include<vector>
using namespace std;
int missingNumber(vector<int>& nums) 
{
    
        set<int> mp;
        mp.insert(nums.begin(),nums.end());
        int n = nums.size();
        
        for(int i=0;i<=n;i++){
            if(mp.find(i)==mp.end()){
                return i;
            }
        }
}
int main()
{
    int size;
    cin>>size;
    vector<int> nums(size);
    for(int i=0;i<size;i++){
        nums.push_back(i);
    }
    int ans = missingNumber(nums);
    cout<<"Missing number is "<<ans;
    return 0;
}