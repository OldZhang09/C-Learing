#include<iostream>;
using namespace std;

//<< 重载，--重载
class Person {
public:
	Person(int a) {
		this->age = a;
	}
	int age;
};
class MyInt {
public:
	MyInt& operator--() {
		--this->myNum;
		return *this;
	}
	MyInt operator--(int) {
		MyInt temp = *this;
		this->myNum--;
		return temp;
	}
	int myNum;
};

ostream& operator<<(ostream& cout, MyInt m_i) {
	cout << m_i.myNum;
	return cout;
}

int main() {
	/*MyInt m_int;
	m_int.myNum = 10;
	cout<< "后置--" << m_int-- << endl;
	cout<< "前置--" << --m_int << endl;
	cout << --(--m_int) << endl;*/
	
	system("pause");
	return 0;
}