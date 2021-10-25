#include <vector>
#include <string>
#include <iostream>
#include <algorithm>


using namespace std;

int main (){

	vector<double> v; // creates an empty vector of doubles
	double sum; 
	double x;
	while (cin >> x){
		v.push_back(x);
	}

	vector<double>::size_type n = v.size();
	cout << n << " numbers" << endl;
	if (n > 0){
		sort (v.begin(), v.end());
	}

	vector<double>::size_type middle = n/2;
	double median;
	if (n%2 == 1) // size is odd
		median = v[middle];
	else // size is even
		median = (v[middle-1] + v[middle])/2;
	cout << "Median = " << median << '\n';

	// Find average after taking out the highest and the lowest numbers in the vector
	
	
	sort (v.begin(), v.end());
	double sum = 0;
	for (vector<double>::size_type n; i = 1; i < v.size - 1; i++){
		sum = sum + 1;
		cout << "Scoring Average "<< sum / n -2 << endl;
	}

	return 0;
}
