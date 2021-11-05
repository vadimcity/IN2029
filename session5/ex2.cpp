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

int num_zero_before_one (const list<double> &list){

	auto first_one = find(list.cbegin(), list.cend(), 1);
	return count (list.cbegin(), first_one, 0);
}



int isnumber_zero (const list<double> &list){
	return count_if(list.cbegin(), list.cend(), [] (double x) {return x < 0;});
}
 
int main() {
    cout << "Enter a list of numbers: ";
    auto numbers = read_list(cin);

    write_list(cout, numbers);
    cout << "number of less then 0: " << isnumber_zero(numbers) << endl;
    cout << "number of zeros before 1: " << num_zero_before_one(numbers) << endl;
 
    return 0;
}
