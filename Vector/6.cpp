#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long> x={6,1,5,9,8,5,9,6,6,8};
    x.pop_back();
    cout<<x.back();
    cout<<endl;
    x.erase(find(x.begin(),x.end(),6));
    for(auto i:x){
        cout<<i<<" ";
    }
    cout<<endl;
        remove(x.begin(),x.end(),1);
        //Shifting 1 at the end;
        x.pop_back();
        for(auto i:x){
            cout<<i<<" ";
        }
        cout<<endl;
        x.clear();
        cout<<x.empty();
}