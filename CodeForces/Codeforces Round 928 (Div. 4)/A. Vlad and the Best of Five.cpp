#include <iostream>
#include <string>
using namespace std;

void temp(){
    string s;
    cin >> s;

    int countA = 0, countB = 0;
    for (char c : s) {
        if (c == 'A')
            countA++;
        else
            countB++;
    }

    if (countA > countB)
        cout << "A" << endl;
    else
        cout << "B" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        temp();
    }

    return 0;
}
