#include<iostream>
#include<algorithm>
using namespace std;

bool allocationisPossible(int barrier,int arr[],int n,int k)
{
    int studentCount = 1, pages = 0;
    for(int i=0;i<n;i++){
        if(arr[i] > barrier) return false;
        if(pages + arr[i] > barrier){
            studentCount += 1;
            pages = arr[i];

        }
        else{
            pages += arr[i];
        }

    }
    if(studentCount > k){
        return false;
    }
    return true;
}
                                                                                                        
int getMinPageAllocation(int arr[],int n,int no_of_stud)
{
    sort(arr,arr+n);
    int low = arr[0];
    int sumPages=0;
    for(int i=0;i<n;i++){
        sumPages += arr[i];
    }
    int high = sumPages;
    int res=0;
    while(low<=high){
        
        int mid = (low+high)/2;
        if(allocationisPossible(mid,arr,n,no_of_stud)){
            res = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return res;

}
int main()
{
    int n;
    cout<<"Enter no of books: \n";
    cin>>n;
    int arr[n];
    cout<<"Enter pages in each book: \n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int no_of_stud;
    cout<<"Enter no of students: \n";
    cin>>no_of_stud;
    int ans = getMinPageAllocation(arr,n,no_of_stud);
    cout<<ans<<" \n";
    return 0;
}