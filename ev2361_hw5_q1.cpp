#include <iostream>
#include <string>
using namespace std;

int main() {
    int input;
    cout << "Please enter a positive integer" << endl;
    cin >> input;
    const string SPACE = " ";
    for (int i = 0; i < input; i++) {
        for (int j = 0; j < input; j++) {
            if (j == 0) {
                cout << i + 1;
            } else {
                cout << (i + 1) * (j + 1);
            }
            cout << "\t";
        }
        cout << endl;
    }
    return 1;
}