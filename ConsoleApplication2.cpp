#include <fstream>
#include <iostream>
#include <string>
using namespace std;
int main()
{
	fstream assfile;
	int arr[20];
	int a, counter = 0;
	assfile.open("dickfile.txt",ios::in);
	assfile >> a;

	while (!assfile.eof())
	{
		arr[counter] = a;
		assfile >> a;
		counter++;
	}
	assfile.close();
	int sum = 0;
	for (int i = 0; i <= counter; i++)
	{
		sum = sum + arr[i];
	}
	cout << sum;

}

