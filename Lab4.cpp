#include <iostream>
using namespace std;

int main() {
    string location;

    cout << "Enter your location: ";
    getline(cin, location);

    // Check street names first
    if (location == "Canal St") {
        cout << "This is Lower Manhattan" << endl;
    }
    else if (location == "Chambers St") {
        cout << "This is Financial District" << endl;
    }
    else if (location == "Fulton St") {
        cout << "This is Financial District" << endl;
    }
    else {
        // Assume it's a number
        int num = stoi(location);

        if (num > 207) {
            cout << "Bronx" << endl;
        }
        else if (num > 190) {
            cout << "Inwood" << endl;
        }
        else if (num > 181) {
            cout << "Upper Manhattan" << endl;
        }
        else if (num > 168) {
            cout << "Pa'Republica Dominicana" << endl;
        }
        else if (num > 145) {
            cout << "Harlem" << endl;
        }
        else if (num > 124) {
            cout << "Central Harlem" << endl;
        }
        else if (num > 59) {
            cout << "It moved Jerry!" << endl;
        }
        else if (num > 50) {
            cout << "Central Park West" << endl;
        }
        else if (num > 42) {
            cout << "Hell's Kitchen" << endl;
        }
        else if (num > 34) {
            cout << "You want to buy my mixtape man?" << endl;
        }
        else if (num > 23) {
            cout << "Midtown West" << endl;
        }
        else if (num > 14) {
            cout << "Chelsea" << endl;
        }
        else if (num > 4) {
            cout << "Greenwich Village" << endl;
        }
        else if (num > 0) {
            cout << "West Village" << endl;
        }
        else {
            cout << "Staten Island" << endl;
        }
    }

    return 0;
}

