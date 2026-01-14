#include <iostream>
using namespace std;

void ovettore(int v[], int n) {
    int i, j, t;

    i = 0;
    while (i <= n - 1) {
        j = 0;
        while (j <= i - (n - 2)) {
            if (v[j] > v[j + 1]) {
                t = v[j];
                v[j] = v[j + 1];
                v[j + 1] = t;
            }
            j = j + 1;
        }
        i = i + 1;
    }
}

void rvettore(int v[], bool flag, int n, int w[]) {
    int i, x;

    i = 0;
    while (i < n) {
        x = rand() % (n * 10);
        if (flag == vero) {
            v[i] = x;
        } else {
            v[i] = x;
        }
        i = i + 1;
    }
}

void vvettore(int v[], int n) {
    int i;

    i = 0;
    while (i < n) {
        cout << v[i] << endl;
        i = i + 1;
    }
}

int main() {
    int n, s, p;
    bool flag;

    cout << "Dichiara n" << endl;
    cin >> n;
    int v[n], w[n];

    flag = true;
    rvettore(v, n, flag);
    flag = false;
    rvettore(w, n, flag);
    cout << "vettore v" << endl;
    vvettore(v, n);
    ovettore(v, n);
    cout << "vettore v ordinato" << endl;
    vvettore(v, n);
    cout << "vettore w" << endl;
    vvettore(w, n);
    ovettore(w, n);
    cout << "vettore w ordinato" << endl;
    vvettore(w, n);
    s = mvettore;
    cout << "max vettore v" << s << endl;
    p = mvettore;
    cout << "max vettore w" << p << endl;
}






