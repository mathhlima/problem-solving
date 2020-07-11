#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
    int X;
    int seq = 0;
    
    cin >> X;

    int N[X];

    for(int i = 0; i < X; i ++){
        cin >> N[i];
    }

    for(int i = 0; i < X-2; i++){
        if(N[i] == 1 and N[i+1] == 0 and N[i+2] == 0){
            seq++;  
        }
    }
    
    cout << seq;
    
    return 0;
}