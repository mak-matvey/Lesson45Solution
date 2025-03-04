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

	int count = count_local_min(pointer, size);
	int* indices = get_local_min_indices(pointer, size, &count);

	cout << "Indices of local mins: " << 
		*indices << endl;

	delete[] pointer;

	return 0;
}