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
    int torre = 0;
    
    for(int i = 0; i< n; i ++){
        for(int j = 0; j < n; j++){
            cin >> xad[i][j];
            soma += xad[i][j];
        }
        somaLinha[i] = soma;
        soma = 0;
    }

    soma = 0;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            soma += xad[j][i];
        }

        somaColuna[i] = soma;
        soma = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(xad[i][j] == xad[i][j]){
                torre = xad[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        if(somaL < somaLinha[i]){
            somaL = somaLinha[i];
        }
        if(somaC < somaColuna[i]){
            somaC = somaColuna[i];
        }
    }



    cout << "soma linha " << somaL << endl;
    cout << "soma coluna " << somaC;
    
    return 0;
}