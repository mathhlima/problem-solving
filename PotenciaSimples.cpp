#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    double X, Y;

    cout.precision(4);
    cout.setf(ios::fixed);

    cin >> X >> Y;

    cout << pow(X, Y) << endl;
    
    return 0;
}