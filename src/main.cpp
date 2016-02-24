#include <iostream>
#include "array.hpp"

using namespace std;

int main() {
	int size;
	cout << "Tamanho da lista: ";
	cin >> size; cout << endl;

	Array<string> array(size);
	array.print();

	array.sort();
	array.print();

	return 0;
}
