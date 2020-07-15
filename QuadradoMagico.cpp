#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int quad[n][n];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> quad[i][j];
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << quad[i][j] << " ";
        }
        cout << endl;
    }

}