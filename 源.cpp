/*#include<iostream>
using namespace std;
class A
{
public:
	A(int x, int y);
	void show()const;
	A operator +(const A& a)const;
	A operator -(const A& a)const;
private:
	int _x;
	int _y;
};
A::A(int x, int y)
{
	_x = x;
	_y = y;
}
void A::show()const
{
	cout << "(_x,_y)=" << "(" << _x << "," << _y << ")" << endl;
}
A A::operator+(const A& a)const
{
	return A(_x + a._x, _y + a._y);
}
A A::operator-(const A& a)const
{
	return A(_x - a._x, _y - a._y);
}
int main()
{
	A a1(1, 2);
	A a2(4, 5);
	A a(0,0);
	cout << "a1:";
	a1.show();
	cout << "a2:";
	a2.show();
	a = a1 + a2;
	cout << "a:";
	a.show();
	a = a1 - a2;
	cout << "a:";
	a.show();
	return 0;
}*/
/*#include<iostream>
using namespace std;
class A
{
public:
	A(int x, int y);
	void show()const;
	A operator++();//«∞÷√++£ª
	A operator++(int);//∫Û÷√++£ª
	//~A();
private:
	int _x;
	int _y;
};
A::A(int x, int y)
{
	_x = x;
	_y = y;
}
void A::show()const
{
	cout << "(_x,_y)=" << "(" << _x << "," << _y << ")" << endl;
}
A A::operator++()
{
	++_x;
	++_y;
	return *this;
}
A A::operator++(int)
{
	A a = *this;
	++(*this);
	return a;
}
//A::~A() {};
int mian()
{
	A a1(1, 2);
	A a2(3, 4);
	(a1++).show();
	(++a2).show();
	return 0;
}*/

