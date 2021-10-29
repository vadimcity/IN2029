#include <iostream>
#include <vector>
#include <algorithm>
#include <stdexcept>

using namespace std;



double average(vector<double> v){
	auto n = v.size();
	if (n == 0){
		throw domain_error("median of an empty vector");

	// compute the average
	double sum = 0;
	typedef vector<double>::size_type vec_size;
	for (vec_size i = 0; i < v.size(); ++i)
		sum += v[i];
	cout << "average = " << sum/n << '\n';
	}
}

//// requires: v.size() > 0
//double median(vector<double> v){
//	auto n = v.size();
//	if (n == 0){
//		throw domain_error("median of an empty vector");
//	}
//	// sort the whole vector
//	sort(v.begin(), v.end());
//
//	// find the middle value
//	auto middle = n/2;
//	if (n%2 == 1) // size is odd
//		return median = v[middle];
//	else // size is even
//		return median = (v[middle-1] + v[middle])/2;
//}

int main() {
	cout << "Please enter a series of numbers\n";

	vector<double> values;
	double x;
	while (cin >> x)
		values.push_back(x);

	// compute and output results
	auto n = values.size();
	cout << n << " numbers\n";
	if (n > 0) {
		cout << "average = " << sum/n << '\n';
		cout << "median" << median(values);
	}
	return 0;
}
