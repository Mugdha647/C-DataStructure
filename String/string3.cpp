#include<bits/stdc++.h>
using namespace std;
string compare(string x,string y){
    if(x !=y){
        (x<y)?cout<<x:cout<<y;
    }
}
int main(){
    string x,y;

    cin>>x>>y;
    compare(x,y);
}