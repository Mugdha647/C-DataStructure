#include<bits/stdc++.h>
using namespace std;
int main(){
    int N;
    cin>>N;
    vector<long long> x(N);
    for(int i=0;i<N;i++){
        cin>>x[i];

    }
    for(int i=0;i<N;i++){
        cout<<x[i]<<" ";
    }
    cout<<endl;
    for(int i=x.size()-1;i>=0;i--){
        cout<<x[i]<<" ";
    }cout<<endl;
    for(auto i=x.begin();i !=x.end();++i){
        cout<<*i<<" ";
    }
    cout<<endl;
    //Doing Reverse Operation
    for(auto i=x.rbegin();i !=x.rend();i++){
        cout<<*i<<" ";

    }
}