#include <iostream>
using namespace std;

int main() {

    char op;
    double x, y, res;

    cin >> op;
    cin >> x >> y;

    if(op == 'M'){
        res = x * y;
    } else {
        res = x / y;
    }

    cout.precision(2);
    cout.setf(ios::fixed);

    cout << res;

    return 0;

}