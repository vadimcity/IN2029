#include <iostream>
#include <list>
#include <algorithm>
 
using namespace std;
 
// read list from input stream
list<double> read_list(istream &in) {
  list<double> l;
  double x;
  while (in >> x)
    l.push_back(x);
  return l;
}
 
// write list to an output stream
void write_list(ostream &out, const list<double> &l) {
  out << "list:";
  for (auto x : l)
    out << ' ' << x;
  out << '\n';
}

int cvs_into_vector (const list<string> &list){
	auto first_comma = find(list.cbegin(), list.cend(), ',');
	return count (list.cbegin(), first_comma, 0);

	return 0;
}

int main() {
    cout << "Enter a list of numbers: ";
    auto numbers = read_list(cin);

    write_list(cout, numbers);
    cout << "Vector of strings : "  << cvs_into_vector(numbs) << endl;
    return 0;
}
