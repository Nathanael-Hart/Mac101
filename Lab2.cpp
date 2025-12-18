#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "What is your name? ";
    getline(cin, name);

    string origin;
    cout << "Where are you from? ";
    getline(cin, origin);

    string movie;
    cout << "What is your favorite movie? ";
    getline(cin, movie);

    cout << "Hello " << name << " from " << origin << endl;
    cout << "Let's watch " << movie << " together";

    return 0;
}

