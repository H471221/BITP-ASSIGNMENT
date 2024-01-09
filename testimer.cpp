#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

void printDots(int times, chrono::milliseconds delay) {
    for (int i = 0; i < times; ++i) {
        cout << ". ";
        cout.flush(); // Flush the output buffer to make sure the asterisk is printed immediately
        this_thread::sleep_for(delay);
    }
}

int main() {
    cout << "Checking requirements: ";
    printDots(3, chrono::milliseconds(500)); // Print asterisks with a 0.5-second delay
    cout << " DONE!" << endl;

    cout << "Initializing instruments: ";
    printDots(5, chrono::milliseconds(300)); // Print asterisks with a 0.3-second delay
    cout << " DONE!" << endl;

    cout << "Calibrating Components ";
    printDots(4, chrono::milliseconds(500));
    cout << "CALIBRATED!";
    return 0;
}
