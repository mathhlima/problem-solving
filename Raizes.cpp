#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int N;
    double X;

    cout.precision(4);
    cout.setf(ios::fixed);

    cin >> N;


    for(int i = 0; i < N; i++){
        cin >> X;

        cout << sqrt(X) << endl;

    }
}