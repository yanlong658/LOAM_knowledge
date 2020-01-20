#include <iostream>
#include <vector>

using namespace std;

class test
{
	//friend test operator+=(test &, test &);

public:
	int x;
	int y;
	int z;
};


int main() {

	test temp, temp1;
	vector<test> _vec;

	temp.x = 5;
	temp.y = 88;

	temp1.x = 10000;
	temp1.y = 10000;

	_vec.push_back(temp);
	_vec.push_back(temp1);

	cout << "_vec.size()" << _vec.size() << endl;

	for (int i = 0; i < _vec.size(); i++)
		cout << _vec[i].x << " " << _vec[i].y << endl;


	test *p = new test;
	for (int k = 0; k < 2; k++)
	{
		//要使用相同型態相加
		*p += (_vec[k]);
	}

	system("PAUSE");
	return 0;
}
/*
test operator+=(test &x, test &y)
{
	test temp;
	temp = x += y;
	return temp;
}
*/

/*
int n;
	cin >> n;
	 int *p = new int[n];
	for (int k = 0; k < n; k++)
	{
		//要使用相同型態相加
		*p = k;
		cout << *p << endl;
	}
*/
