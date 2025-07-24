// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,sum=0,reverse=0;
//     cin>>n;
//     int r=n;
//     while(n !=0){
//          sum=n%10;
//          reverse=reverse*10+sum;
//          n=n/10;
//     }
    
//     if(r==reverse){
//         cout<<"Yes"<<endl;
//     }else{
//         cout<<"No"<<endl;
//     }
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string r=s;
    reverse(s.begin(),s.end());
    if(s==r){
        cout<<"Yes";
    }else{
        cout<<"No";
    }cout<<endl;
    string s1("Pranta ");
    string s2("Saha ");
    string s3("Mugdha ");
    s1=s1+s2+s3;
    cout<<s1;
    cout<<endl;
    string p1("Mugdha ");
    string p2("Saha");
    p1.append(p2);
    cout<<p1<<endl;
    string n1("Mugdha");
    string n2(" saha");
    for(auto i:n2){
        n1+=i;
    }cout<<n1;
}