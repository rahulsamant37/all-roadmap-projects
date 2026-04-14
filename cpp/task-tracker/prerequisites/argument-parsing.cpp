#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(int argc, char* argv[]) {
    if (argc!=2) {
        cout << "password is required!" << endl;
    }
    else {
        cout << "for file    - " << argv[0] << endl;
        cout << "password is - " << argv[1] << endl;
    }
    return 0;
}
