#include "array.h"
#include <iostream>

//Array constructors-------------------------
template <typename T>
Array<T>::Array()
{
	m_array = nullptr;
	m_length = 0;
}


//template <typename T>
//Array<T>::Array(int length, int start_index)
//{
	//this->m_array = nullptr;
	//this->setLength(length);
	//this->setStartIndex(start_index);
	//this->m_array = nullptr;
//}

//template <typename T>
//Array<T>::Array(const Array<T>& copy)
//{
//	
//}

template<typename T>
inline Array<T>::~Array()
{
}

//Array setters--------------------------------------------------

template <typename T>
void Array<T>::setStartIndex(int start_index)
{
	this->m_start_index = start_index;
}

template <typename T>
void Array<T>::setLength(int length)
{
	this->m_length = length;
}

//Array getters------------------------------------------------

template <typename T>
int Array<T>::getLength()
{
	int array_length = this->m_length;
	return array_length;
}

template <typename T>
int Array<T>::getStartIndex()
{
	int array_index = this->m_index;
	return array_index;
}

//Operator overloads------------------------------------------
//template<typename T>
//Array<T>& Array<T>::operator=(const Array<T>& rhs)
//{
//	if (this != &rhs)
//	{
//		delete[] m_array;
//		m_array= nullptr;
//
//		if (rhs.m_array != nullptr)
//		{
//			m_array = new T[rhs.m_length];
//			m_length = rhs.m_length;
//			for (int i = 0; i < rhs.m_length; i++)
//				m_array[i] = rhs.m_array[i];
//		}
//	}
//}