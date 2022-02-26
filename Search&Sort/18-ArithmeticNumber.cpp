#include<iostream>
using namespace std;

void checkArithNumber(int A,int B,int C)
{
    int i=A;
    int flag =0;
    while(i<=B){
        if(B-i == C){
          
            cout<<"1 \n";
            flag = 1;
            break;
        }
        else{
            i += C;
        }
    }
    if(flag==0){
        cout<<"0 \n";
    }
  
}
int main()
{
    int A,B,C;
    cout<<"Enter values of A,B,C: \n";
    cin>>A>>B>>C;
    checkArithNumber(A,B,C);
    return 0;
}