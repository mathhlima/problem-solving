#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int quad[n][n];
    int somaArray[10];
    int soma;
    int somaLinha = 0;
    int SomaColuna = 0;
    int somaDiagonal = 0;

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
        somaArray[i] = soma;
        soma = 0;
    }
    for(int i = 0; i < 10; i++){
        cout << somaArray[i] << endl;
    }
    /*for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << quad[i][j] << " posicao " << i << j << " ";
        }
        cout << endl;
    }*/

}