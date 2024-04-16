#include <bits/stdc++.h>
using namespace std;

vector <char> l1 = {'A', 'B', 'C'};
vector <char> l2 = {'D', 'E', 'F'};
vector <char> l3 = {'G', 'H', 'I'};

char key(char &x) {
    if (x=='A') return 2;
    else if (x=='B') return 9;
    else if (x=='C') return 4;
    else if (x=='D') return 7;
    else if (x=='E') return 5;
    else if (x=='F') return 3;
    else if (x=='G') return 6;
    else if (x=='H') return 1;
    else if (x=='I') return 8;
}

void bl(){
    cout << '\n';
}

void change(char &p, int &j){
    char subs;
    if (j==1) subs = 'X'; else subs='O';
    if ('A' <= p <= 'C') {
        for (int i=0; i<3; i++) {
            if (l1[i] == p) l1[i] = subs;
        }
    } 
    if ('D' <= p <= 'F') {
        for (int i=0; i<3; i++) {
            if (l2[i] == p) l2[i] = subs;
        }
    }
    if ('G' <= p <= 'I') {
        for (int i=0; i<3; i++) {
            if (l3[i] == p) l3[i] = subs;
        }
    }
}

void print() {
    int c = 3;
    for (vector <char> i : {l1, l2, l3}) {
    cout << " " << i[0] << " | " << i[1] << " | " << i[2] << '\n'; c--;
    if (c != 0) cout << "-----------" << '\n';
    }
}

int main() {
    cout << "JOGO DA MEMORIA\n\n";
    cout << "Jogo para 2 jogadores.\n\n";
    print(); bl();
    int play = 1;
    cout << "Primeiro jogador! [x]\nEscolha uma casa: ";
    char pos; cin >> pos;
    change(pos, play); bl();
    print();

    return 0;
}