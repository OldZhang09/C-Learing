//#include <iostream>
//using namespace std;
//
//
//class Person {
//public:
//	Person() {	/*Ĭ�Ϲ��캯��*/
//		cout << "PersonĬ�Ϲ��������ĵ���" << endl;
//	}
//	Person(int age, int height) {	/*�вι��캯��*/
//		m_age = age;
//		m_height = new int(height);	//�ڶ��������ڴ�
//		cout << "Person�вι��캯���ĵ���" << endl;
//	}
//	//�������캯��  
//	Person(const Person& p) {
//		cout << "Person�������캯��!" << endl;
//		//�������������ڶ����������ڴ棬�ᵼ��ǳ�����������ظ��ͷŶ�������
//		m_age = p.m_age;
//		m_height = new int(*p.m_height);
//	}
//	~Person() {
//		if (m_height != NULL) {
//			delete m_height;
//			m_height = NULL;
//		}
//		cout << "Person���������ĵ���" << endl;
//	}
//	int m_age;	//����
//	int* m_height;	//����
//};
//
//void test01(void) {
//	Person p1(18, 160);
//	cout << "p1��������" << p1.m_age << "������" << *p1.m_height << endl;
//	Person p2(p1);
//	cout << "p2��������" << p2.m_age << "������" << *p2.m_height << endl;
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