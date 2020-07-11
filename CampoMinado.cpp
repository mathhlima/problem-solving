#include <iostream>

using namespace std;

int main() {
    int N;
    int CM[50];

    cin >> N;

    for(int i =0; i < N; i++){
        cin >> CM[i];
    }

    for(int i = 0; i < N; i++){
        int qt = 0;
        qt = qt + CM[i]; //qt recebe o balor de de CM em i

        if(i < N-1){ //verificando se i é menor que o tamanho -1
            qt = qt + CM[i+1]; //se for vai pegar o valor seguinte de i acresentar em qt
        }
        if(i > 0){ //validando se i é maior que 0
             qt = qt + CM[i-1]; // se for, vai pegar o valor antes de i e acresentar em qt
        }

        cout << qt << endl;
    }

    
}