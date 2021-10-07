#include <iostream>
#include <string>

using namespace std; 

int main (){

	cout << "What is your age?" << endl;
	int age;
	cin >> age;

	if (age < 18){
		cout << age << " is too young." << endl;
	}else if (age > 30){
		cout << age <<" is too old." << endl;
	}else{
		cout << age <<" is just right." << endl;
	}
	return 0;
}
