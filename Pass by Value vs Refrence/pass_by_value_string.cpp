#include <bits/stdc++.h>
using namespace std;

int solve(string a){
    a[0] = 'W';
    cout<<"Inside solve: "<<a<<endl;
}

int main() {
    string a = "Vansh";
    cout<<"Inside main: "<<a<<endl;
    solve(a);
    cout<<"Inside main: "<<a<<endl;
    return 0;
}