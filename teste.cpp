#include <bits/stdc++.h>
using namespace std;

bool check(vector <int> &l){
    bool r = false;
    for (int i1=0; i1<9; i1++){
        for (int i2=i1+1; i2<9; i2++){
            for (int i3=i2+1; i3<9; i3++){
                cout << l[i1] << '+' << l[i2] << '+' << l[i3] << endl;
                if (l[i1] + l[i2] + l[i3] == 15){
                    r = true;
                }
            }
        }
    }
    return r;
}

int main(){
    vector <int> l = {1, 2};
    cout << check(l) << endl;
    return 0;
}
