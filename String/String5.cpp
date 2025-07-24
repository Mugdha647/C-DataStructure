#include<bits/stdc++.h>
using namespace std;
void compare(string s1,string s2){
    int x=s1.compare(s2);
    cout<<x;
}
int main(){
    compare("Pranta","Pranta");
    string s1="Mugdha";
    string sub=s1.substr(3);
    cout<<sub<<endl;
    string s2="Pranta Saha Mugdha";
    int pos=s2.find("M");
    cout<<s2.substr(pos+1);
    cout<<endl;
    cout<<s2.substr(0,pos);
    cout<<endl;
    char x='b';
    cout<<toupper(x);
    cout<<(char)toupper(x);

}
