#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> x;
    x.push_back(1);
    x.push_back(5);
    x.push_back(9);
    x.push_back(4);
    x.push_back(5);
    cout<<x.front();
    cout<<endl;
    for(auto i:x){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> x1(5,9);
    for(auto i:x1){
        cout<<i<<" ";
    }
    cout<<endl;
    int arr[]={5,6,9,54,9,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> x3={arr,arr+n};
    for(auto i:x3){
        cout<<i<<" ";
    }
}