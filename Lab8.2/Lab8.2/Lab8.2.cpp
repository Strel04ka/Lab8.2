#include <iostream> 
#include <string>
using namespace std;
void task(string str)
{
	str.erase(0, str.find_first_not_of(" "));
	cout << "|" << str << "|" << endl;

	int tmp = str.find_last_not_of(" ");
	str.erase(tmp + 1, str.size() - tmp);
	cout << "|" << str << "|" << endl;
	int iter = 0;
	for (size_t i = 0; i < str.size(); i++)
	{
		if ((iter = str.find(' ', iter)) != -1 && (iter = str.find(' ', iter)) < str.size() - 1)
		{
			str.erase(str.begin() + iter, str.begin() + str.find_first_not_of(' ', iter));
			str.insert(str.begin() + iter, ' ');
			i = ++iter;
		}
		else break;
	}
	cout << str << endl;
}
void main()
{

	task(" test test1 test2 test3 ");
	system("pause");
}
