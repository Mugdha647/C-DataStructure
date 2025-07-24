#include<bits/stdc++.h>
using namespace std;
int main(){
    
    vector<int> x={1,5,89,56,5};
    sort(x.begin(),x.end());
    for(auto i:x){
        cout<<i<<" ";
    }cout<<endl;
    vector<int> x2={1,5,9,89,56,9};
    stable_sort(x2.begin(),x2.end());
    for(auto i=x2.rbegin();i !=x2.rend();i++){
        cout<<*i<<" ";
    }

}