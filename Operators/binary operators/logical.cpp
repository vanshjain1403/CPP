#include <bits/stdc++.h>
using namespace std;

int main() {
    bool cond1 = (10>5);
    bool cond2 = (3<5);
    bool cond3 = (10==6);

    if(cond1 && cond2 && cond3){
        cout<<"ALL ARE TRUE"<<endl;
    }
    else{
        cout<<"Someone is not true"<<endl;
    }

    if(cond1 || cond2 || cond3){
        cout<<"Something is true"<<endl;
    }
    else{
        cout<<"None are true"<<endl;
    }


    cout<<!(5==5)<<endl;
    return 0;
}