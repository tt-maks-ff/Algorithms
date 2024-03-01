#include <iostream>
#include <iomanip>

using namespace std;

// Selection sorting is one of the simplest sorting

void fillArray(int *array, int size) {
	for (int i = 0; i < size; i++) {
		cout << i << " element of array is: " << endl;
		cin >> array[i];
	}
}

int findSmallest(int* array, int size, int start) {
	int smallest = array[start];
	int smallest_index = start;
	for (int i = start; i < size; i++) {
		if (array[i] < smallest) {
			smallest = array[i];
			smallest_index = i;
		}
	}
	return smallest_index;
}

int* sortArray(int *array, int size) {
	int start = 0;
	for (; start < size - 1; start++) {
		swap(array[start], array[findSmallest(array, size, start)]);
	}

	return array;
}

void printResult(int*array, int size) {
	for (int i = 0; i < size; i++) {
		cout << array[i] << setw(10);
	}
}

int main() {
	int* baseArr, *result;
	int size; // size of array

	cout << "Size of array: " << endl;
	cin >> size;

	baseArr = new int[size]; // create array
	fillArray(baseArr, size);

	result = sortArray(baseArr, size);
	printResult(result, size);

	return 0;
}
