#include <iostream>

using namespace std;

int main() {

	setlocale(LC_ALL, "RUS");

	int a = 0; 

	while (a < 20) // a < 20 озночет, что когда в переменной a будет число 20, то слово Привет перестанет писаться | a < 20 means that when the variable a contains the number 20, the word Hello will stop being written
	{
		cout << "Привет " << a << endl;
		a++; // Это инкремент, он меняет число в переменной a на 1 с каждым высланым сообщением | This is an increment, it changes the number in variable a by 1 with each message sent
	}



}
