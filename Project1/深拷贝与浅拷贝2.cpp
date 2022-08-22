//#include <iostream>
//using namespace std;
//
//
//class Person {
//public:
//	Person() {	/*默认构造函数*/
//		cout << "Person默认构造桉树的调用" << endl;
//	}
//	Person(int age, int height) {	/*有参构造函数*/
//		m_age = age;
//		m_height = new int(height);	//在堆区开辟内存
//		cout << "Person有参构造函数的调用" << endl;
//	}
//	//拷贝构造函数  
//	Person(const Person& p) {
//		cout << "Person拷贝构造函数!" << endl;
//		//如果不利用深拷贝在堆区创建新内存，会导致浅拷贝带来的重复释放堆区问题
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//	~Person() {
//		if (m_height != NULL) {
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "Person析构函数的调用" << endl;
//	}
//	int m_age;	//年龄
//	int* m_height;	//体重
//};
//
//void test01(void) {
//	Person p1(18, 160);
//	cout << "p1的年龄是" << p1.m_age << "体重是" << *p1.m_height << endl;
//	Person p2(p1);
//	cout << "p2的年龄是" << p2.m_age << "体重是" << *p2.m_height << endl;
//
//}
//int main(void)
//{
//	test01();
//
//	system("pause");
//	return 0;
//
//}