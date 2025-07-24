//Organize in Decending Order
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> x={1,6,9,5,8,9,6,5};
    sort(x.begin(),x.end(),greater<>());
    for(auto i:x){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> x3={1,6,9,8,9,6,5,8};
    sort(x3.begin(),x3.end());
    //Reverse
    reverse(x3.begin(),x3.end());
    for(auto i:x3){
        cout<<i<<" ";
    }
    //Using Stable Sort
    cout<<endl;
    vector<int> x4={1,5,9,6,10,6,9,6,56};
    stable_sort(x4.begin(),x4.end(),greater<>());
    for(auto i:x4){
        cout<<i<<" ";
    }

}