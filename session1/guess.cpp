#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	srand(time(nullptr));
	int n = 12;
	int secret = rand()%n + 1;
	cout << "Guess a number between 1 and " << n << ": ";
	int guess;
	cin >> guess;

	while (guess != secret) {
		if (guess > secret){
			cout << "Guess is too high" << endl;
		}else{
			cout << "Guess is too low" << endl;
		}
		cout << "Wrong! Guess again: ";
		cin >> guess;
	}

	cout << "Correct!\n";
	return 0;
}
