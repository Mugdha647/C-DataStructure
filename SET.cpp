#include<iostream>
#include<set>
using namespace std;
int main(){
    set<string>  cars={"amsm","adas","yjjff","gjd"};
    for(string car:cars){
        cout<<car<<endl;
    }
    set<int> num={1,2,5,6,3,5,5,6,9,9,8,3,6,9,8,8,8,1};
    for(int i:num){
        cout<<i<<endl;
    }
    set<int ,greater<int>> num1={1,6,9,8,9,6,2,5,7,8,6,4};
    for(int i:num1){
        cout<<i<<endl;
    }
    cars.insert("Mugdha");
    cars.erase("adas");
    for(string car:cars){
        cout<<car<<endl;
    }
    cars.clear();
    cout<<cars.size();
    cout<<cars.empty();
}