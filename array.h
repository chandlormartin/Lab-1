#ifndef ARRAY_H
#define ARRAY_H

#include <string> //from class demo
using std::string;

#include <iostream>
using std::cout;
using std::cin;
using std::endl;


//
//template <typename T>
//Arra<T>::Arra(T arra[], int s){
//	ptr = new T[s];
//	size = s;
//	for (int i = 0; i < size; i++)
//		ptr[i] = arr[i];
//}
//
//template <typename T>
//void Arra<T>::print()
//{
//	for (int i = 0; i < size; i++)
//		cout << " " << *(ptr + i);
//
//}

template <typename T>
class Array
{
private:
	T*	m_array;
	
	int	m_start_index;
	int	m_length;

public:
	Array();// : m_array(nullptr), m_length(0) {};
	Array(int length, int start_index) :m_array(nullptr) 
	{
		this->m_length = length; setStartIndex(0);
	};
	//Array(const Array<T>& copy);
	//Array(Array<T>&& copy);
	~Array();

	//Array& operator =(const Array<T>& rhs);
	//Array& operator =(Array<T>&& rhs);
	
	//T& operator [] (int index);

	int		getStartIndex();
	int		getLength();

	void	setStartIndex(int start_index);
	void	setLength(int length);

};



#endif
