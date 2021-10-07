#include <iostream>
#include <string>

using namespace std; 

int main (){

	string name;
	cout << "What is your name?\n";
	cin >> name;
	cout << "Hello " << name << "!" << endl;
	int namesize = name.size() + 7;
	int i = 1;
	while (i <= namesize){
		cout << "#";
		++i;
	}
	cout << endl;
	return 0;
}
