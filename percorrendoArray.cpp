#include <iostream>

using namespace std;

int main() {

	double preco[10] = {};

		preco[0] = 14.55;
		preco[3] = 1.10;
		preco[7] = 2;
		preco[2] = 9.68;

		for (int i = 0; i <= 9; i++)
		{
			cout << preco[i] << endl;	
		}

	return 0;
}