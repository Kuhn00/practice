#include"utils.h"

void printDeque(deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it的值不能再进行修改
		cout << *it << " ";
	}
	cout << endl;
}