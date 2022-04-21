#include <iostream>
using namespace std;

void say_world() {
	cout << "World" << endl;
}

void say_hello() {
	cout << "Hello" << endl;
	say_world();
}



int main() {

	say_hello();

	return 0;
}