#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array {
	 public:
		Array(int size);
		virtual ~Array();
		void print();
		T* getArray();
		void sort();
	private:
		T* mArray;
		int mSize;
};

#include "array.cpp"

#endif //ARRAY_HPP
