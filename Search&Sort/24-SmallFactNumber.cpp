#include<iostream>
using namespace std;

bool check(int mid,int n)
{
    int temp = mid;
    int f = 5;
    int count = 0;
    while(f<=temp){
        count += temp/f;
        f = f*5;
    }
    return (count>=n);
}
int getSmallestNumberFactorial(int n)
{
    int low = 0, high = 5*n;
    while(low < high)
    {
        int mid = (low+high)/2;
        if(check(mid,n)){
            high = mid;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}

int main()
{
    int n;
    cout<<"Enter the no of trailing zero: \n";
    cin>>n;
    int res = getSmallestNumberFactorial(n);
    cout<<res<<endl;
    return 0;
}