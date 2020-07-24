#include<iostream>
using namespace std;

int main() {

    int n;
    int soma = 0;
    cin >> n;
    int somaColuna[n];
    int somaLinha[n];
    int xad[n][n];
    int somaL = 0;
    int somaC = 0;
    for(int i = 0; i< n; i ++){
        for(int j = 0; j < n; j++){
            cin >> xad[i][j];
            soma += xad[i][j];
        }
        somaLinha[i] = soma;
        soma = 0;
    }

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            soma += xad[j][i];
        }

        somaColuna[i] = soma;
        soma = 0;
    }

    for(int i = 0; i < n; i++){
        if(somaL < somaLinha[i]){
            somaL = somaLinha[i];
        }
        if(somaC < somaColuna[i]){
            somaC = somaColuna[i];
        }
    }

    cout << "oiii numero aqui:" << somaL;
    
    return 0;
}