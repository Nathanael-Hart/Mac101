#include <iostream>
#include <cctype>
using namespace std;

int extractNumber(const string& s) {
    string digits;
    for (char c : s) {
        if (isdigit(c))
            digits += c;
        else if (!digits.empty())
            break;
    }
    return digits.empty() ? -1 : stoi(digits);
}

int main() {
    string location;
    cout << "Enter your location: ";
    getline(cin, location);

    if (location == "Canal St") {
        cout << "This is Lower Manhattan\n";
    }
    else if (location == "Chambers St") {
        cout << "This is Financial District\n";
    }
    else if (location == "Fulton St") {
        cout << "This is Financial District\n";
    }
    else {
        int num = extractNumber(location);

        if (num == -1) {
            cout << "Could not determine location\n";
        }
        else if (num > 207) cout << "Bronx\n";
        else if (num > 190) cout << "Inwood\n";
        else if (num > 181) cout << "Upper Manhattan\n";
        else if (num > 168) cout << "Pa'Republica Dominicana\n";
        else if (num > 145) cout << "Harlem\n";
        else if (num > 124) cout << "Central Harlem\n";
        else if (num > 59)  cout << "I was in the pool!!\n";
        else if (num > 50)  cout << "Central Park West\n";
        else if (num > 42)  cout << "Its flipping RAW!\n";
        else if (num > 34)  cout << "You want to buy my mixtape man?\n";
        else if (num > 23)  cout << "Midtown West\n";
        else if (num > 14)  cout << "Chelsea\n";
        else if (num > 4)   cout << "Greenwich Village\n";
        else if (num > 0)   cout << "West Village\n";
        else                cout << "Staten Island\n";
    }

    return 0;
}

