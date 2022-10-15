#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string input;

	for (int i = 0; i < 100 && !cin.eof(); i++)
	{
		getline(cin, input);
		cout << input << endl;
	}
	return 0;
}