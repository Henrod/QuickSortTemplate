#include "quicksort.hpp"

template <typename T>
void QuickSort<T>::swap(T* array, int i, int j) {
	T aux = array[i];
	array[i] = array[j];
	array[j] = aux;
}

template <typename T>
void QuickSort<T>::sort(T* array, int lo, int hi) {
	if (lo >= hi) return;

	int i = lo + 1, j = hi;
	T v = array[lo];

	while (i <= j) {
		if 	(array[i] <=v) i++;
		else if (array[i] > v) swap(array, i, j--);
	}

	swap(array, lo   , j    );
	sort(array, lo   , j - 1);
	sort(array, j + 1, hi   );
}
