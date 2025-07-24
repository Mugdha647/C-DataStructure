#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> cars;
    cars.push("MUGDHA");
    cars.push("JABIR");
    cars.push("UTSOB");
    cars.push("SUPANTHO");
    cout<<cars.front()<<endl;
    cout<<cars.back();
    cars.front()="kjus";
    cars.back()="kjfdfd";
    cout<<cars.front()<<endl;
    cout<<cars.back()<<endl;
    cars.pop();
    cout<<cars.front();

}