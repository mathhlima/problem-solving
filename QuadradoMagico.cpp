#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int quad[n][n];
    int somaLinha = 0;
    int somaColuna = 0;
    int principal = 0;
    int secundaria = 0;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> quad[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            somaLinha += quad[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            somaColuna += quad[j][i];
        }

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

    /*cout << somaLinha << endl;
    cout << somaColuna << endl;
    cout << somaColuna / n;*/

    if(principal == secundaria and somaLinha / n == principal and somaColuna / n == secundaria){
        cout << principal;
    } else {
        cout << -1;
    }

    
    

}