#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cout<<"Enter no of soldiers: ";
    cin>>n;
    int pos[n];
    cout<<"Enter power of soldiers: ";
    for(int i=0;i<n;i++){
        cin>>pos[i];
    }
    int rounds;
    cout<<"Enter no of rounds: ";
    cin>>rounds;
    vector<pair<int,int>>v;
    while(rounds--){
        int powerBishu;
        cin>>powerBishu;
        int defeatPower = 0, defeatCount = 0;
        for(int i=0;i<n;i++){
            if(pos[i] <= powerBishu){
                defeatCount++;
                defeatPower += pos[i];
            }
        }

        v.push_back(make_pair(defeatCount,defeatPower));


    }

    for(int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl; 
    }
    return 0;
}