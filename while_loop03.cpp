// This program calculates the sum of the first 50 natural numbers using a while loop.
#include <iostream>
using namespace std;

int main() {
    int i = 1, sum = 0;

    while (i <= 50) {
        sum += i;
        i++;
    }

    cout << "Sum of first 50 natural numbers is: " << sum << endl;

    return 0;
}
