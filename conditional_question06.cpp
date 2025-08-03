#include <iostream>
using namespace std;

int main() {
    int hour;

    cout << "Enter the hour (0 to 23): ";
    cin >> hour;

    if(hour >= 0 && hour < 12) {
        cout << "Good Morning!";
    }
    else if(hour >= 12 && hour < 17) {
        cout << "Good Afternoon!";
    }
    else if(hour >= 17 && hour < 21) {
        cout << "Good Evening!";
    }
    else if(hour >= 21 && hour < 24) {
        cout << "Good Night!";
    }
    else {
        cout << "Invalid hour entered!";
    }

    return 0;
}
