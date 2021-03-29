#pragma once

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class MyClass
{
public:
	int genKey();
	string xorstr(const char* str, const char* key, size_t key_len);
	void printInFile(char message[]);
};