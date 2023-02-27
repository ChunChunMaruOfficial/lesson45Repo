#include <iostream> 
#include <string> 

using namespace std;

void rand_init(int* array, int size) {
	for (int i = 0; i < size; i++)
	{
		//array[i] = rand() % 100 - 50; //тест связи между git и visual))00)00
	}
}

string show(int* array, int size) {
	string msg = "";
	for (int i = 0; i < size; i++)
	{
		//msg += to_string(array[i]) + " ";  //тест связи между git и visual))00)00
		//тест связи между git и visual))00)00
	}   //тест связи между git и visual))00)00
	return msg;
}



int main() {
	srand(time(NULL));
	int size = rand() % 20;

	int* array = new int[size];

	rand_init(array, size);
	cout << show(array, size) << endl;

	return 0;
}
