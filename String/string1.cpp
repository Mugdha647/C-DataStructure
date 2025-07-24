#include<bits/stdc++.h>
using namespace std;
int main(){
    string x="Mugdha";
    cout<<x<<endl;
    cout<<x[1]<<endl;
    x="Utsob";
    cout<<x;
    x[1]='M';
    cout<<x;
    cout<<endl;
    cout<<x.size()<<endl;
    cout<<x.length()<<endl;
    //Size by loop
    int i=0;
    while(x[i]){
        i++;
    }
    cout<<i<<endl;
    //2nd Method
    for(int i=0;x[i];i++);
    cout<<i<<endl;

}