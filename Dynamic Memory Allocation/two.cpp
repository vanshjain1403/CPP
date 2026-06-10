#include <bits/stdc++.h>
using namespace std;

int main() {
    int*ptr= new int[5];
    ptr[0] = 5;
    ptr[1] = 20;
    ptr[2] = 30;
    *(ptr+3) = 45;
    *(ptr+4) = 50;
    

    for(int i = 0; i <4; i++){
        cout<<ptr[i]<<endl;
    }

    delete [] ptr;
    return 0;
}