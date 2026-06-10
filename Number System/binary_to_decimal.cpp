#include <bits/stdc++.h>
using namespace std;

int binary_to_decimal(int n){
    int decimal = 0;
    int i = 0;
    while(n!=0){
        int bit = n%10;
        decimal+=bit*pow(2,i++);
        n = n/10;
    }
    return decimal;

}
int main() {
    int n;
    cin>>n;
    int decimal = binary_to_decimal(n);
    cout<<decimal<<endl;
    return 0;
}