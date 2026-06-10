#include <bits/stdc++.h>
using namespace std;

int solve(int &a){
    a = a*2;
    cout<<"Inside solve: "<<a<<endl;
}

int main() {
    int a = 5;
    cout<<"Inside main: "<<a<<endl;
    solve(a);
    cout<<"Inside main: "<<a<<endl;
    return 0;
}