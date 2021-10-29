#include <iostream>
#include <list>
#include <algorithm>

using namespace std;


void scale(double s, list<double> &vs) {
	for (auto  &x : vs)
		x = x*s;
}


int main() {
	cout << "Please enter a series of numbers\n";

	// read numbers from the standard input
	// and store them in a list
	list<double> v;
	double x;
	while (cin >> x)
		v.push_back(x);
	// compute and output results
	auto n = v.size();
	cout << n << " numbers\n";
	if (n > 0) {
		// compute the average
		double sum = 0;
		for (auto &x : v)
			sum = sum + x;
		cout << "average = " << sum/n << '\n';
	}
	scale(2, v);
	for (auto &x : v){
		cout << x << " ";
	}
	cout << endl; 
	return 0;
}
