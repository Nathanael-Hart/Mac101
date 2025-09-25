#include <iostream>
using namespace std;
int main() {
    string name;
    cout  << "What is your name?";
    cin  >> name;
    string origin;
    cout << "where are you from?"; 
    cin  >> origin;
    string movie, movie2; 
    cout  << "what is your favorite movie?";
    cin  >> movie >> movie2;

    cout << " Hello " << name << " from " << origin << endl; 
    cout << " Lets watch "  << movie << " " << movie2 <<  " together "; 
 return 0;   
}
