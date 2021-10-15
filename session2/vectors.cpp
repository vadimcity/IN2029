#include <vector>
#include <string>
#include <iostream>
#include <algorithm>


using namespace std;

int main (){


	vector<double> v; // creates an empty vector of ints
	double x;
	while (cin >> x){
		v.push_back(x);
	}

	vector<double>::size_type n = v.size();
	cout << n << "numbers \n";
	if (n > 0){
		sort (v.begin(), v.end());
	}

	return 0;
}
