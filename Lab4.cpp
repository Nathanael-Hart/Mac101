#include <iostream>
using namespace std;
 int main(){
 	string location;
 	
 	cout << "Enter your location";
 	getLine(cin, location);
 	
 	if(location == "Canal St" || location == "Chamber St" || location == "Fulton St") {
 		if (location == "Canal St"){
 			cout << "This is Lower Manhattan" << endl;}
	    else if (location == "Chambers St") {
		 	cout << "This is Financial District" << endl;}
		else if (location == "Fulton St"){
			cout << "This is Financial District" << endl;}
		else { 
			int num = stoi(location);
			
			if(num > 207){
				cout << "Bronx" << endl; }
			else if (num <= 207 && num > 190) {
				cout << "Inwood" << endl;
			else if (num <= 190 && num > 181){
				cout << "Upper Manhattan" << endl;}
			else if (num <= 181 && num > 168){
				cout << "Republica Dominicana" << endl;}
			else if (num <= 168 && num > 145) {
				cout << "Harlem" << endl;}
			else if (num <= 145 && num > 124){
				cout << "Central Harlem" << endl;}
			else if (num <= 125 && num >59){
				cout << "It moved Jerry!" << endl;}
			else if (num <= 59 && num > 50){
				cout << "Central park west" << endl;}
			else if (num <= 50 && num > 42){
				cout << "Hells Kitchen" << endl;}
			else if ( num <= 42 && num > 34){
				cout << "You want to buy my mixtape man?" << endl;}
			else if ( num <= 34 && num > 23){
				cout << "Midtown West" << endl;}
			else if (num <= 23 && num > 14){
				cout << "Chelsea" << endl;}
			else if (num <= 14 && num > 4){
				cout << "Greenwhich Village" << endl;}
			else if (num <= 4 && num > 0){
				cout << "West Village" << endl;}
			else if (num < 0){
				cout << "Staten Island" << endl;}
	return 0;	
 }
