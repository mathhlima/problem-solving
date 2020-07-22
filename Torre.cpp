#include<iostream>
using namespace std;

int main() {

    int n;
    int somaColuna[n];
    int soma;
    int somaLinha[n];

    cin >> n;

    int xad[n][n];

    for(int i = 0; i< n; i ++){
        for(int j = 0; j < n; j++){
            cin >> xad[i][j];
            soma += xad[i][j];
        }
        somaLinha[i] = soma;
    }

    for(int i = 0; i < n; i++){
        cout << somaLinha << endl;
    }
    
    
    return 0;
}