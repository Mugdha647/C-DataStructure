//Copy a vector
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1={6,7,8,9,6,5,4,6,8,8};
    vector<int> v2=v1;
    for(auto i:v2){
        cout<<i<<" ";
    }
    cout<<endl;
    //Type 2
        vector<int> x1={6,7,8,9,6,5,4,6,8,8};
    vector<int> x2(x1);
    for(auto i:x2){
        cout<<i<<" ";
    }


}