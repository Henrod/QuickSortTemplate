#include <cstdlib>
#include <iostream>
#include "array.hpp"
#include "quicksort.hpp"

template <typename T>
Array<T>::Array(int size) {
	mSize = size;

	mArray = new T[mSize];
	for (int i = 0; i < mSize; ++i) {
		std::cout << "Item " << i << "> ";
		std::cin >> mArray[i];
	}
}

template <typename T>
Array<T>::~Array() {
	delete[] mArray;
}

template <typename T>
void Array<T>::print() {
	for (int i = 0; i < mSize; i++)
		std::cout << *(mArray + i) << " ";
	std::cout << std::endl << std::endl;
}

template <typename T>
T* Array<T>::getArray() {
	return mArray;
}

template <typename T>
void Array<T>::sort() {
	QuickSort<T>::sort(mArray, 0, mSize - 1);
}
