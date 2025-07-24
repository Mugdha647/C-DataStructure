#include<iostream>
#include<cstring>
using namespace std;
string del(string s,char ch){
    string newch="";
    for(char c:s){
        if(c !=ch){
            newch+=c;

        }

    }
    return newch;
}
int main(){
    string s;
    char ch;
    cin>>s>>s;
    cout<<del(s,ch);
}