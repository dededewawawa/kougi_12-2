#include "main.h"


bool input()
{
		char ch;
		
		cout << "���W�擾:1  ���W�Z�b�g:2  �I��:q   ";
		cin >> ch;
		
		if(ch == '1')
		{
			cout << "x�̍��W��" << cs.xshow() << " y�̍��W��" << cs.yshow() << endl;
		}
		else if(ch == '2')
		{
			int num;
			cout << "x�̍��W����͂��Ă��������F";
			cin >> num;
			cs.setx(num);
			
			cout << "y�̍��W����͂��Ă��������F";
			cin >> num;
			cs.sety(num);			
		}
		else if(ch == 'q' )
		{
			return false;
		}
		
		return true;
}
