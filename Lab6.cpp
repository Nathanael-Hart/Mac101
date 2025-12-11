#include <iostream>
#include <fstream>
using namespace std;

int main() {
    const int N = 5;
    string name;
    int score;

    // Write input to file, Write name with no spaces
    ofstream out("students.txt");
    for (int i = 0; i < N; i++) {
        cin >> name >> score;
        out << name << " " << score << endl;
    }
    out.close();

    // Read file and display
    ifstream in("students.txt");
    while (in >> name >> score)
        cout << name << " " << score << endl;
}
