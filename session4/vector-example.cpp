#include <iostream>
#include <vector>

using namespace std;

// read numbers from an input stream
// and store them in a vector
vector<double> read_vector(istream &in) {
	vector<double> v;
	double x;
	while (in >> x)
		v.push_back(x);
	return v;
}

// write vector to an output stream
void write_vector(ostream &out, const vector<double> &v) {
	const auto n = v.size();
	out << "vector:";
	typedef vector<double>::size_type vec_size;
	for (vec_size i = 0; i < n; ++i)
		out << ' ' << v[i];
	out << '\n';
}

int main() {
	cout << "Please enter a series of numbers\n";
	auto values = read_vector(cin);
	write_vector(cout, values);
	return 0;
}
