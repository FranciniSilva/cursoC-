#include <iostream>

using namespace std;

int main(){

	int planilha[10][10] = {};

	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			planilha[x][y] = (3*(x + 1) + (y*y));

			string end = (y < 9) ? ", " : "\n";
			cout << planilha[x][y] << end; 
		}
	}

	cout << planilha[5][5] << endl;

	return 0;
}