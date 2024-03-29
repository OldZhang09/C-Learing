//
//#include <iostream>
//using namespace std;
//
////浅拷贝 运行报错。
////这是由于编译系统在我们没有自己定义拷贝构造函数时，会在拷贝对象时调用默认拷贝构造函数，进行的是浅拷贝！即对指针拷贝后会出现两个指针指向同一个内存空间。
////p1/p2都是在栈区的对象，由于栈区的规则是先进后出，当执行完拷贝构造函数的时候，就会执行p2的析构函数，p2中的m_height在析构中被delete,然后执行p1的析构，p1的m_height被delete，
//// 而实际上他们指向同一块地址，
////因此当执行p1的析构函数时就会导致内存释放2次，程序崩溃。
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
//}