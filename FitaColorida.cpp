#include<iostream>
using namespace std;

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

    for(int i = 0; i < n; i++){
        if(f[i] == 0){
            for(int k = 0; k < n; k++){
                aux = 0;
                aux = abs(k - i);

                if(aux < f[k]){
                    f[k] = aux;
                }
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << f[i] << " ";
    }

    return 0;
}