#include<iostream>
#include<list>
using namespace std;
int main(){
    list<string> cars={"BMW","AUDI","Tesla","Bgy"};
    for(string car:cars){
        cout<<car<<endl;
    }
    cout<<cars.front();
    cout<<cars.back();
    cars.front()="Mugdha";
    cars.back()="ARjun";
    cout<<cars.front();
    cout<<cars.back();
    cars.push_front("Jabir");
    cars.push_back("Jabir");
    cout<<cars.front()<<endl;
    cout<<cars.back();
}