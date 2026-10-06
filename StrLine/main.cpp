#include "syms.h"
#pragma warning(disable : 4996)



int main(int argc, char* argv[]) {
	/*SetConsoleCP(1251);
	SetConsoleOutputCP(1251);*/
	//setlocale(LC_ALL, "Russian");
	char temp[11] = "\0";
	size_t len = 0;

	if (argc > 1) {
		strcpy(temp, argv[1]);
		len = strlen(temp);
		for (size_t i = 0; i < strlen(temp); i++) {
			temp[i] = toupper(temp[i]);
		}
		temp[len] = '\0';
		syms obj(temp);
		obj.output();
	}
	else {
		cout << "\n\n\t\tInput a word (before 10 symbols): ";
		cin >> temp;
		len = strlen(temp);
		for (size_t i = 0; i < strlen(temp); i++) {
			temp[i] = toupper(temp[i]);
		}
		temp[len] = '\0';
		syms obj(temp);
		obj.output();
	}

	

	//system("pause");
	return 0;
}