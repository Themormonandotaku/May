#include <iostream>
using namespace std;
void random();
int main() {
	cout << "You're walking on a road when someone suddenly comes up to you and says:" << endl;
	random();
	cout << "Then you walk away awkwardly." << endl;
}
void random() {

	int num = rand() % 100 + 1;
	if (num < 20)
		cout << "You die if you are killed" << endl;

	else if (num < 70)
		cout << "Lose your common sense and get an afro!" << endl;
	else if (num < 10)
		cout << "Let's just give up and die!" << endl;
	}