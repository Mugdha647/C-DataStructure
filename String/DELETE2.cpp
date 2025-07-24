#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s1;
    cin>>s1;
    int n;
    cin>>n;
    cout<<s1.erase(n,2);//Erase 2 char from index n
    cout<<s1.size();
}