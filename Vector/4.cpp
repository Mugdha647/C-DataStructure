#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<char> x={'a','a','f','e'};
    x.push_back('r');
    cout<<x.back();
    cout<<endl;
    x.insert(x.begin()+1,'M');
    cout<<x.at(1);
    cout<<endl;
    for(auto i:x){
        cout<<i<<" ";
    }
    cout<<endl;
    x.insert(x.begin()+2,{'B','M'});
    for(auto i:x){
        cout<<i<<" ";
    }
    cout<<endl;
    x.emplace(x.begin()+2,'J');
    cout<<x.at(2);
    x.emplace_back('K');
    x.emplace_back('g');
    cout<<x.back();
    return 0;


}