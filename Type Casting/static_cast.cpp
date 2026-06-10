#include <iostream>
using namespace std;

int main() {
    float float_val = 9.99f;
    int int_val;

    int_val = static_cast<int>(float_val);

    cout << "Float: " << float_val << endl;
    cout << "Static Cast: " << int_val << endl;

    return 0;
}