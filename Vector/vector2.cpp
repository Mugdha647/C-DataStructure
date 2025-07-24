#include<iostream>
#include<vector>
using namespace std;
void printvector(vector<int> v){
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> x={1,2,3,56,7,3,5};
    x.insert(x.begin()+1,5);
    cout<<x.at(1);
    cout<<x.empty();
    x.push_back(8);
    cout<<x.back();
    printvector(x);
    x.pop_back();
    cout<<endl;
    vector<int> x2(5,9);
    printvector(x2);
}