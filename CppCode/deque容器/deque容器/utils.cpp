#include"utils.h"

void printDeque(deque<int>& d)
{
	for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
	{
		//*it��ֵ�����ٽ����޸�
		cout << *it << " ";
	}
	cout << endl;
}