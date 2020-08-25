#include <iostream>
using namespace std;

int main() {
    
    char C;
    int N, P, Q, RES;

    cin >> N;
    cin >> P >> C >> Q;

    if(C == '+') {
        RES = P + Q;
    } else if(C == '*') {
        RES = P * Q;
    }

    if(RES > N) {
        cout << "OVERFLOW";
    } else if(RES <= N){
        cout << "OK";
    }

    return 0;
}