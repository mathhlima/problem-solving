#include <iostream>

using namespace std;

int main() {

    int N, seq = 1, vt = 0, check = 1;
    cin >> N;

    for(int i = 0; i < N; i++){
        int V;
        cin >> V;

        if(vt == V){ //validando se o numero digitado é igual o numero na iteração anterior
            seq++; // se for, aumenta a sequencia
        } else {
            seq = 1; // se nao, seq volta a ser resetada
        }

        if(seq > check){ // validando se a seq e maior que o check
            check = seq; // se a seq for maior que check, check pega seq e guarda o maior numero possivel de seq dentro da iteracao
        }

        vt = V; //vt pegando o valor atual para a comparação no inicio da proxima iteração
    }

    cout << check << endl;
    return 0;
}