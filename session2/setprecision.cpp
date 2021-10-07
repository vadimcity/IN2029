#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	cout << "Please enter a series of numbers\n";

	// the number and total of values read
	int count = 0;
	double sum = 0;

	// read values from standard input
	double x; // a variable for reading into
	while (cin >> x) {
		++count;
		sum += x;
	}

	// output results
	cout << count << " numbers\n";
	if (count > 0) {
		int old_prec = cout.precision();
		cout << cout.precision() << endl;
		cout << "average = " << setprecision(3) << sum/count << setprecision(old_prec) << '\n';
	}
	return 0;
}
