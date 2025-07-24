#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> x1={1,5,6,9,9,5,6,8};
    vector<int>x2(x1.begin(),x1.end());
    for(auto i:x2){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> x4(5);
    fill(x4.begin(),x4.end(),11);
    for(auto i:x4){
        cout<<i<<" ";
    }
    cout<<endl;
    
}