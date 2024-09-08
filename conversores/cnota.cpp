#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Digite as notas: ";
    string ini; cin >> ini;
    
    vector <string> notas;
    cout << ini << endl;
    string ref = "";
    for (auto i : ini){
        cout << ini << endl;
        if (i == ' '){
            notas.push_back(ref);
            ref = "";
        } else {
            ref += i;
        }
    }
    
    for (auto j : notas) cout << j << endl;

    return 0;
}