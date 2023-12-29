#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

void print(char* begin, char* end)
{
	while (begin != end)
	{
		cout << *begin;
		begin++;
	}
	cout << '\n';
}

int main()
{
	char c1[] = "Witam";
	vector<char> v1 = {'W', 'i', 't', 'a', 'm'};
	list<char> l1 = {'W', 'i', 't', 'a', 'm'};
	string s1 = "Witam";

	print(c1, c1 + 5);
	print(&v1[0], &v1[0] + v1.size());
	//char c = l1.begin();
	//print(&l1, )
	//print(s1[0])

	return 0;
}