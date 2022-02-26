#include<iostream>
using namespace std;

int getCountSqaures(int N)
{
    int count = 0;
    for(int i=1; i<N;i++){
        if(i*i < N ){
            count++;
        }
    }
    return count;
}
int main()
{
    int N;
    cout<<"Enter the N: \n";
    cin>>N;
    int res = getCountSqaures(N);
    cout<<"There are "<<res<<" perferct squares in N\n";
    return 0;
}