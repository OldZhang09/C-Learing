//#include<iostream>;
//using namespace std;
////<<输出运算符重载，--自减运算符重载
//class MyInt {
//public:
//	MyInt(int m) {
//		my_num = m;
//	}
//	MyInt& operator--() {
//		--this->my_num;
//		return *this;
//	}
//
//	MyInt operator--(int) {
//		MyInt temp = *this;
//		this->my_num--;
//		return temp;
//	}
//	
//	int my_num;
//};
//
//ostream& operator<<(ostream &cout,MyInt m) {
//	cout << m.my_num << endl;
//	return cout;
//}
//
//int main() {
//	MyInt m(10);
//	cout << m--;
//	cout << m.my_num << endl;
//	system("pause");
//	return 0;
//}