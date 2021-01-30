#include "main.h"


bool input()
{
		char ch;
		
		cout << "座標取得:1  座標セット:2  終了:q   ";
		cin >> ch;
		
		if(ch == '1')
		{
			cout << "xの座標は" << cs.xshow() << " yの座標は" << cs.yshow() << endl;
		}
		else if(ch == '2')
		{
			int num;
			cout << "xの座標を入力してください：";
			cin >> num;
			cs.setx(num);
			
			cout << "yの座標を入力してください：";
			cin >> num;
			cs.sety(num);			
		}
		else if(ch == 'q' )
		{
			return false;
		}
		
		return true;
}
