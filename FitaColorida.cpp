#include<iostream>
using namespace std;
//link abaixo para entendimento de distancia entre dois numeros
//https://pt.khanacademy.org/math/arithmetic/arith-review-negative-numbers/arith-review-abs-value/v/absolute-value-as-distance-between-numbers
//solucao não é minha, implementei para entender o código e alguns comentarios para ajudar quem precisar
int main(){
    
    int n;
    cin >> n;
    int f[n];
    int aux;

    for(int i = 0; i < n; i++){
        cin >> f[i];
    }

    for(int i = 0; i < n; i++){
        if(f[i] == -1){
            f[i] = 9;
        }
    }

    for(int i = 0; i < n; i++){ //percorrer o laço novamente para isolar 0
        if(f[i] == 0){ //0 isolado, percorrer o array novamente, usando ele para comparação dentro e outro laço
            for(int k = 0; k < n; k++){
                aux = 0;
                aux = abs(k - i); // aux vai receber a distancia de k e i, numa funcao abs de valor absoluto
                                  //k são todas as posicoes do array neste segundo for, i é a posicao onde 0 foi encontrado no primeiro for
                if(aux < f[k]){  //se meu aux, que recebu abs de k - i, for menor que o valor de f na posicao k
                    f[k] = aux; //f na posicao k irá receber o aux que é o valor da distancia entre k - i
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << f[i] << " ";
    }

    return 0;
}