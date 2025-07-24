// Search a Chracter
// Search a Character
#include<iostream>
using namespace std;

long long findch(const string &s, char ch) {
    int n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == ch) {
            return i;  // Character found at index i
        }
    }
    return -1;  // Character not found
}

int main() {
    string x;
    cin>>x;
    char ch;
    cin>>ch;
    cout << findch(x,ch);
    cout<<findch("Mugdha",'a');
    string a="Mugdha";
    cout<<findch(a,'M');
}
