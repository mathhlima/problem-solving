#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int quad[n][n];
    int somaLinha[n];
    int somaColuna[n];
    int somaDiag[n];
    int soma = 0;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> quad[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            soma += quad[i][j];
            //cout << soma[i] << endl;
        }
        somaLinha[i] = soma;
        soma = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            soma += quad[j][i];
        }

        somaColuna[i] = soma;
        soma = 0;
    }
    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << quad[i][j] << " posicao " << i << j << " ";
        }
        cout << endl;
    }*/

}