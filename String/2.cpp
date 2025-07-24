#include<iostream>
#include<cstring>
using namespace std;
long long findch(const string &s,char ch){
    int idx=s.find(ch);
    if(idx !=string::npos){
        return idx;

    }else{
        return -1;
    }

}
int main(){
    string s;
    cin>>s;
    char ch;
    cin>>ch;
    cout<<findch(s,ch);
    cout<<"Mugdha";
}