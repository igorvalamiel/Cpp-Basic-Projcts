#include <bits/stdc++.h>
using namespace std;

vector <char> l1 = {'A', 'B', 'C'};
vector <char> l2 = {'D', 'E', 'F'};
vector <char> l3 = {'G', 'H', 'I'};

vector <int> playerX;
vector <int> playerO;

int key(char &x) {
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

void add(int &l, int &n){
    if (l==0){
        playerO.push_back(n);
    } else {
        playerX.push_back(n);
    }
}

bool check(vector <int> &l){
    bool r = false;
    for (int i1=0; i1<9; i1++){
        for (int i2=i1+1; i2<9; i2++){
            for (int i3=i2+1; i3<9; i3++){
                if (l[i1] + l[i2] + l[i3] == 15){
                    r = true;
                }
            }
        }
    }
    return r;
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
    string res = "Empate!";

    for (int times=0; times<9; times++) {
        char c;
        if (play==1) c = 'X'; else c = 'O';
        cout << "Jogador "<<c<<"!\nEscolha uma casa: ";
        char pos; cin >> pos;
        int v = key(pos); add(play, v);
        change(pos, play); bl();
        print();
        cout << endl;
        if (play==1) play=0; else play=1;
        if (playerX.size() >=3){
            if (check(playerX)) {res = "Jogador X venceu!"; break;}
        }
        if (playerO.size() >=3){
            if (check(playerO)) {res = "Jogador O venceu!"; break;}
        }
    }

    cout << endl << res << endl;

    return 0;
}