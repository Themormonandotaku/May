#include <iostream>
using namespace std;
int StreetFighters = 0;
int Uncharted = 0;
int PhoenixWright = 0;
char input;
int main() {
	cout << "Recommended games quiz" << endl << endl << endl;
	cout << endl << endl;
	cout << "Which of these do you think is your type of game: a, action; f, fighting; or r, roleplay?" << endl;
	cin >> input;
	if (input == 'a')
		Uncharted == Uncharted + 3;
	else if (input == 'f')
		StreetFighters == StreetFighters + 3;
	else if (input == 'r')
		PhoenixWright == PhoenixWright + 3;
	else
		cout << "Invalid input." << endl;

	cout << "What do you think is the most important thing in a video game? m, the mechanics; s, the story; or c, the characters?" << endl;
	cin >> input;
	if (input == 's')
		Uncharted == Uncharted + 1;
	else if (input == 'm')
		StreetFighters == StreetFighters + 1;
	else if (input == 'c')
		PhoenixWright == PhoenixWright + 1;
	else
		cout << "Invalid input." << endl;

	cout << "Last question. Which of these sound like a better game: f, a game with no story but just fun to play; s, a game with an epic story but with basic mechanics; b, a game with a bit of both?" << endl;
	cin >> input;
	if (input == 'b')
		Uncharted == Uncharted + 1;
	else if (input == 'f')
		StreetFighters == StreetFighters + 1;
	else if (input == 's')
		PhoenixWright == PhoenixWright + 1;
	else
		cout << "Invalid input." << endl;

	if ((Uncharted > PhoenixWright) && (Uncharted > StreetFighters))
		cout << "The game I think you'd like most is Uncharted." << endl;
	else if ((StreetFighters > Uncharted) && (StreetFighters > PhoenixWright))
		cout << "The game I think you'd like is Street Fighters." << endl;
	else if ((PhoenixWright > Uncharted) && (PhoenixWright > StreetFighters))
		cout << "The game I think you'd like is Phoenix Wright." << endl;
	else
		cout << "I dunno." << endl;
}