// #include<bits/stdc++.h>
// using namespace std;

// void getLargestMindistance(int arr[],int n,int c)
// {
//     int low = 1;
//     int high = 1e9;
    
//     int ans = 0;
//     while(low<=high){
//         int cows =1;
//         int mid = (low+high)/2;
//         int pivot = arr[0];
//         for(int i=1;i<n;i++){
//             if(arr[i] - pivot >= mid){
//                 cows++;
//                 pivot = arr[i];
//                 if(cows==c){
//                     break;
//                 }
//             }
//             if(cows==c){
//                 ans = mid;
//                 low = mid+1;
//             }
//             else{
//                 high = mid-1;
//             }
        
//         }
//     }
//     cout<<ans<<"\n";
    
// }

// int main() {

//         int no_of_stalls;
//         cout<<"Enter no of stalls: \n";
//         cin>>no_of_stalls;
//         int arr[no_of_stalls];
//         cout<<"Enter stalls coordinates: \n";
//         for(int i=0;i<no_of_stalls;i++){
//             cin>>arr[i];
//         }
//         int no_of_cows;
//         cout<<"Enter no of cows: \n";
//         cin>>no_of_cows;
//         getLargestMindistance(arr,no_of_stalls,no_of_cows);

// }

#include<bits/stdc++.h>

using namespace std;


int32_t main() {


        int n,c;
        cin>>n>>c;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a,a+n);
        int lb = 1;
        int ub = 1e9;
        int ans = 0;
        while(lb<=ub){
            int mid = (lb+ub)/2;
            int cow = 1;
            int prev = a[0];
            for(int i=1;i<n;i++){
                if(a[i]-prev>=mid){
                    cow++;
                    prev = a[i];
                    if(c==cow) break;
                }
            }
            if(cow==c) {
                ans = mid;
                lb = mid + 1;
            }
            else ub = mid - 1;
        }
        cout<<ans<<endl;
   


    return 0;
}



