#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<string> cars;
    cars.push("BMW");
    cars.push("AUDI");
    cars.push("Mercidies");
    cars.push("tesla");
    cout<<cars.top();
    cars.top()="boss";
    cout<<cars.top();
    cars.pop();
    cout<<cars.top();
    cout<<cars.empty();
    cout<<cars.size();



}