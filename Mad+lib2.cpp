#include <iostream>
#include<string>
using namespace std;

class MadLibSubject {
  public:
	string color;
	string name;
	string verb;
	string noun;
	string adjective;
	string game;
	string hobby;

};

int main()
{
	MadLibSubject subject;
	char newline = '\n';



	cout << "Enter favorite color" << endl;
	getline(cin, subject.color);

	cout << "Enter a name." << endl;
	getline(cin, subject.name);
	cout << "Enter a verb." << endl;
	getline(cin, subject.verb);

	cout << "Enter a noun." << endl;
	getline(cin, subject.noun);

	cout << "Enter an adjective." << endl;
	getline(cin, subject.adjective);

	cout << "Enter any kind of game." << endl;
	getline(cin, subject.game);

	cout << "Enter any kind of hobby" << endl;
	getline(cin, subject.hobby);

	cout << "My shirt is " << subject.color << "." << endl;
	cout << "My mom " << subject.noun << " says pushing " << subject.name << " will make me more " << subject.hobby << "," << "so now I " << subject.verb << ".\n";
	cout << "But I also suck at " << subject.game << "." << endl;
	cout << "But I guess I will go cry i'm " << subject.adjective << "." << endl;


	return 0;
}
