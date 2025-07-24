#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<string> cars={"Bmw","AUdi","Tesla"};
    for(int i=0;i<cars.size();i++){
        cout<<cars[i]<<endl;
    }
    for(int i=cars.size()-1;i>=0;i--){
        cout<<cars[i]<<endl;
    }
}