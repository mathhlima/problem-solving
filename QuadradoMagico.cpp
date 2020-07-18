#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int quad[n][n];
    int somaLinha[n];
    int somaColuna[n];
    int somaDiag[2];
    int soma = 0;
    int principal = 0;
    int secundaria = 0;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> quad[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            soma += quad[i][j];
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

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                principal += quad[i][j];
                //somaDiag[0] = soma;
            }

            if((i + j) == (n - 1)){
                //soma += quad[i][j];
                secundaria += quad[i][j];
            }
        }
    }

    cout << principal << " " << secundaria;
    

}