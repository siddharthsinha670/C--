//Take a string from the user and print it.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);  // input full line (with spaces)

    cout << " " << str << endl;

    return 0;
}
