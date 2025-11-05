#include <iostream>
using namespace std;
int main() {
string sevenTrain[5] = {"33rd Rawson","40th St","46th St","52nd St","61st-Woodside"};
int arraySize = sizeof(sevenTrain)/sizeof(sevenTrain[0]);
for (int i = 0; i < arraySize; i++){
	cout << sevenTrain[i] << endl;
};

return 0;
}
