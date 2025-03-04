#include "util.h"
#include <ctime>

int main()
{

	int* pointer;
	int size;

	cout << "Input size of array: ";
	cin >> size;

	pointer = new int[size];

	random_init(pointer, size, -20, 20);
	cout << "Array: " << convert(pointer, size) << endl;

	return 0;
}