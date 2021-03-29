#include "cppXor.h"

string genKey() {
	string key = "fdfusgfuieopzhoihbdobzoizhfeozhofhjsih";
	return key;
}

string xorstr(const char* msg, const char* key, size_t key_len) {
	string result;
	for (int i = 0; i < strlen(msg); i++)
		result.push_back(msg[i] ^ key[i % key_len]);
	return result;
}

void printInFile(const char* xormsg) {
	ofstream file;
	file.open("xor.txt", ios::ate);
	file << xormsg <<"\n";
	file.close();
}

int main()
{
	char message[70] = { 0 }; 
	printf("Entrez un message : ");
	scanf_s("%[^\t\n]", (char*)message);

	string key = genKey();
	string result = xorstr(message, key.c_str(), strlen(key.c_str()));
	
	printInFile(result.c_str());

	printf((result + "\n").c_str());
	return 0;
}
