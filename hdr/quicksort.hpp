#ifndef QUICKSORT_HPP
#define QUICKSORT_HPP

template <typename T>
class QuickSort {
	public:
		static void sort(T* array, int lo, int hi);
	private:
		static void swap(T* array, int i, int j);
};

#include "quicksort.cpp"

#endif //QUICKSORT_HPP
