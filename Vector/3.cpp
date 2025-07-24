#include<bits/stdc++.h>
using namespace std;
int main(){
    long long N;
    cin>>N;
    vector<long long> x(N);
    iota(x.begin(),x.end(),1);
    for(auto i:x){
        cout<<i<<" ";
    }
}