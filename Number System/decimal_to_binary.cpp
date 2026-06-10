#include <bits/stdc++.h>
using namespace std;

int decimal_to_binary(int n){
    int binary = 0;
    int i = 0;
    while(n>0){
        int bit = n%2;
        binary =( bit*(pow(10,i++)))+binary;
        n = n/2;
    }
    return binary;
}
int main() {
    int n;
    cin>>n;
    int binary = decimal_to_binary(n);
    cout<<binary<<endl;
    return 0;
}