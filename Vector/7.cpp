#include<bits/stdc++.h>
using namespace std;
int main(){
    //Sorting a vector in ascending Order
    vector<int> x={1,6,5,9,6,9,5,6,9,8,6,8,6};
    sort(x.begin(),x.end());
    swap(x[0],x[1]);
    for(auto i:x){
        cout<<i<<" ";
    }cout<<endl;
    vector<int> x2={2,6,5,8,9,6,10,69,58};
    stable_sort(x.begin(),x.end());
    for(auto i:x2){
        cout<<i<<" ";
    }cout<<endl;
    vector<int> v={2,6,9,8,6,9,8,10,1};
    multiset<int> x(v.begin(),v.end());
    v.assign(x.begin(),x.end());
    for(auto i:v){
        cout<<i<<" ";
    }



}