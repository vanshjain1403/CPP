#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159;
    int truncated_pi;

    truncated_pi = (int)pi;

    cout << "Original: " << pi << endl;
    cout << "C-Style Cast: " << truncated_pi << endl;

    return 0;
}