#include <bits/stdc++.h>
using namespace std;

void complemento_de_um(string &n){
    for (int i=n.size()-1; i>=0; i--){
        if (n[i] == '0'){
            n[i] = '1';
        } else {
            n[i] = '0';
        }
    }
}

void complemento_de_dois(string &n){
    int carry = 1;
    for (int i=n.size()-1; i>=0; i--){
        if (carry == 1){
            if (n[i] == '0'){
                n[i] = '1';
                carry = 0;
            } else {
                n[i] = '0';
                carry = 1;
            }
        }
    }
}

int main(){
    cout << "Digite o numero binario: ";
    string n; cin >> n;
    cout << "Deseja fazer um complemento de 1 ou de 2? ";
    int choice; cin >> choice;

    if (choice == 1){
        complemento_de_um(n);
    } else{
        complemento_de_um(n);
        complemento_de_dois(n);
    }

    cout << n << endl;
}