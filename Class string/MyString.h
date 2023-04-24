#pragma once
#include <iostream>

using namespace std;

class MyString
{
private:
	char* str;
	int lenght;
public:
	MyString() {
		lenght = 0;
		str = nullptr;
	}

	MyString(const char* newstr) {
		lenght = strlen(newstr);
		str = new char[lenght];
		for (size_t i = 0; i < lenght; i++)
		{
			str[i] = newstr[i];
		}
		lenght++;
	}

	~MyString() {
		delete[] str;
	}

	void print() {
		for (size_t i = 0; i < lenght - 1; i++)
		{
			cout << str[i];
		}
		cout << endl;
	}

	MyString operator + (const MyString& other) { // конкатанация!!!!!!!!!!!!!!
		MyString temp;
		temp.lenght = this->lenght + strlen(other.str);
		temp.str = new char[temp.lenght];
		for (size_t i = 0; i < temp.lenght; i++)
		{
			if (i < this->lenght) {
				temp.str[i] = this->str[i];
			}
			else if (i > temp.lenght) {
				temp.str[i] = other.str[i - this->lenght];
			}
		}
		return temp;
	}

	MyString(const MyString& other) {
		this->lenght = other.lenght;
		this->str = new char[this->lenght];
		for (size_t i = 0; i < this->lenght; i++)
		{
			this->str[i] = other.str[i];
		}
	}
};

