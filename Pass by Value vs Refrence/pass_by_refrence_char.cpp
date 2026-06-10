#include <bits/stdc++.h>
using namespace std;

int solve(char &a){
    a = a+10;
    cout<<"Inside solve: "<<a<<endl;
}

int main() {
    char a = 'A';
    cout<<"Inside main: "<<a<<endl;
    solve(a);
    cout<<"Inside main: "<<a<<endl;
    return 0;
}