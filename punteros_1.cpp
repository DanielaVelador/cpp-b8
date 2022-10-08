#include <iostream>
#include <string>
using namespace std;
int main()
{
	int x, cont, z, i, tabla[100];
	i = 0;
	for (x = 1; x < 100; x++)
	{
		cont = 0;
		if (x % 2 == 0)
		{
			tabla[i] = x;
			i++;
		}
	}
	for (x = 0; x < i; x++)
	{
		cout << tabla[x] << endl;
	}
	system("pause");
	return 0;
}
