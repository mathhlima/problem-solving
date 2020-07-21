#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int quad[n][n];
    int somaLinha = 0;
    int somaLinhaAr[n];
    int somaColuna = 0;
    int somaColunaAr[n];
    int principal = 0;
    int secundaria = 0;
    int aux = 0;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> quad[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            somaLinha += quad[i][j];
        }
        somaLinhaAr[i] = somaLinha;
        somaLinha = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            somaColuna += quad[j][i];
            
        }
        somaColunaAr[i] = somaColuna;
        somaColuna = 0;
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j){
                principal += quad[i][j];
            }

            if((i + j) == (n - 1)){
                
                secundaria += quad[i][j];
            }
        }
    }

    for(int i = 0; i < n; i++){
        if(somaLinhaAr[i] == somaLinhaAr[i+1]){
            if(somaColunaAr[i] == somaColunaAr[i+1]){
                if(principal == secundaria){
                    aux++;
                }
            }
        }
    }

    if(aux > 0){
        cout << principal;
    } else {
        cout << -1;
    }

    
}