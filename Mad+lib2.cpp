#include <iostream>
#include<cmath>
#include<string>
using namespace std;

int main()
{
	string color;
	string name;
	string verb;
	string noun;
	string adjective;
	string game;
	string hobby;
	char newline = '\n';



	cout << "Enter favorite color" << endl;
	getline(cin, color);

	cout << "Enter a name." << endl;
	getline(cin, name);
	cout << "Enter a verb." << endl;
	getline(cin, verb);

	cout << "Enter a noun." << endl;
	getline(cin, noun);

	cout << "Enter an adjective." << endl;
	getline(cin, adjective);

	cout << "Enter any kind of game." << endl;
	getline(cin, game);

	cout << "Enter any kind of hobby" << endl;
	getline(cin, hobby);

	cout << "My shirt is " << color << "." << endl;
	cout << "My mom " << noun << "says pushing " << name << "will make me more " << hobby << "," << "so now I  " << verb << ".\n";
	cout << "But I also suck at " << game << "." << endl;
	cout << "But I guess I will go cry i'm " << adjective << "." << endl;













	return 0;
}