#include "util.h"
#include "logic.h"
#include <ctime>

int main()
{

	srand(time(0));

	int* pointer;
	int size;

	cout << "Input size of array: ";
	cin >> size;

	pointer = new int[size];

	random_init(pointer, size, 0, 15);
	cout << "Array: " << convert(pointer, size) << endl;

	cout << "Is there local min in array? " <<
		(is_there_local_min(pointer, size) ? "Yes" : "No") << endl;
	cout << "Is there local max in array? " <<
		(is_there_local_max(pointer, size) ? "Yes" : "No") << endl;

	return 0;
}