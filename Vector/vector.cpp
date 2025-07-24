#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> cars={"Boss","Bmw","Rools","AUdi"};
    for(string car:cars){
        cout<<car<<endl;
        cout<<cars.front();
        cout<<cars.back();
        cout<<cars[2]<<endl;
        cout<<cars.at(1);
        cars[1]="Utsob";
        cars.at(1)="Mugdha";
        cout<<cars[1];
        cars.push_back("Tesla");
        cars.push_back("Mugdha");
        cars.pop_back();
        cout<<cars.back();
        cout<<cars.size();
        cout<<cars.empty();
    }
}