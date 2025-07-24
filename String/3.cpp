#include<iostream>
#include<cstring>
using namespace std;
string insert(string s,char ch,int pos){
    s.insert(s.begin()+pos,ch);
    return s;

}
int main(){
      string s;
   char ch;
   int pos;
   cin>>s>>ch>>pos;
   cout<<insert(s,ch,pos);
 
   cout<<insert("Mugdha",'M',2);
}