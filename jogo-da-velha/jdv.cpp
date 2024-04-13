#include <bits/stdc++.h>
using namespace std;

vector <int> l1 = {1, 2, 3};
vector <int> l2 = {4, 5, 6};
vector <int> l3 = {7, 8, 9};

char to_str(int &x) {
    if (x==0) return ' ';
    else if (x==-1) return 'o';
    else if (x==-2) return 'x';
    else return (int) x;
}

void print() {
    int c = 3;
    for (vector <int> i : {l1, l2, l3}) {
    cout << " " << to_str(i[0]) << " | " << to_str(i[1]) << " | " << to_str(i[2]) << '\n'; c--;
    if (c != 0) cout << "-----------" << '\n';
    }
}

int main() {
    cout << "JOGO DA MEMORIA\n\n";
    cout << "Jogo para 2 jogadores.\n\n";
    print();

    return 0;
}