#include "stats.h"
#include <vector>
#include <algorithm>
#include <stdexcept>

using namespace std;

// the median of the values in a vector
// requires: v.size() > 0
double median(vector<double> v) {
	const auto n = v.size();
	if (n == 0)
		throw domain_error("median of an empty vector");
		// sort the whole vector
		sort(v.begin(), v.end());
		const auto middle = n/2;
	if (n%2 == 1) // size is odd
		return v[middle];
	else // size is even
		return (v[middle-1] + v[middle])/2;
}


// the average of the values in a vector
// requires: v.size() > 0
double average(const vector<double> &v) {
	const auto n = v.size();
	if (n == 0)
		throw domain_error("average of an empty vector");
	double sum = 0;
	typedef vector<double>::size_type vec_size;
	for (vec_size i = 0; i < n; ++i)
		sum += v[i];
	return sum / n;
}


double score(vector<double> v) {
	auto n = v.size();
	if (n > 2) {
		sort(v.begin(), v.end());
		double sum = 0;
		typedef vector<double>::size_type vec_size;
		for (vec_size i = 1; i < n-1; ++i)
			sum += v[i];
		return sum/(n-2);
	} else {
		throw domain_error("vector is too short");
	}
}

double min(vector<double> v){
	sort(v.begin(), v.end());
	return v[0];


}

double max(vector<double> v){
	sort(v.begin(), v.end());
	return v[v.size() -1];
}
