#include <iostream>
using namespace std;

int main() {

    int ID = 0001;
    int Password = 123;

    int identification, identityPass;

    do {
        cout << "Please Enter ID and Password ";
        cin >> identification >> identityPass;

        if (identification == ID && identityPass == Password) {
            cout << "Welcome Naqiuddin!";
            break;  // Add break to exit the loop when credentials are correct
        } else {
            cout << "Wrong ID and Password";
            continue;
        }

    } while (identification == ID && identityPass == Password);

    return 0;
}
