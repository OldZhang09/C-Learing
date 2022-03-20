#include<iostream>
using namespace std;
#include<string>;

class Base;
class Person;
template <class T1, class T2> class Basetem;
template<class T1, class T2>
void Fun4(Basetem<T1, T2>* p);

class Animal {
public:
	void visit(Base *bp);
};

class Base {
	//��Base��������һ��ȫ�ֺ��� ��Ϊ��Ԫ ���Է��ʸ����˽�����ԣ�������ȥʵ��
	friend void fun1(Base *p);
	//������������ʵ��һ��ȫ�ֺ��� ��Ϊ��Ԫ ���Է��ʸ����˽������
	friend void fun2(Base* p) {
		p->name = "123";
		cout << "��Ԫ����fun2����Base��˽������ name = " << p->name << endl;
	};
	//����Person����ΪBase����Ԫ��Person�ĺ������Է���Base��˽������
	friend class Person;
	//����Animal���еĳ�Ա����visit��ΪBase����Ԫ�����Է���Base��˽������
	friend void Animal::visit(Base *bp);
public:
	Base() {

	}
private:
	int age;
	string name;
};

//��Ԫ��Person
class Person {
public:
	void visit(Base* p) {
		p->age = 100;
		cout << "Person����Ϊ��Ԫ ���ڷ���Base���˽������ age =" << p->age << endl;
	}
};
//ģ���� �е���Ԫ����
template <class T1, class T2> class Basetem {
	//��ģ������������ʵ��һ����Ԫ����
	friend void Fun3(Basetem *p) {
		cout << "����ͨ��ȫ����Ԫ��������ģ����˽�г�Ա����visit" << endl;
		p->visit();
	}
	//��ģ����������һ����Ԫ���� �������Ҫ����һ��ģ������Ϊ���������Ǵ����������ʽ����Ϊ����һ����ͨ����������
	//friend void Fun4(Basetem* p);
	//��ģ����������һ����Ԫ���� �������Ҫ����һ��ģ������Ϊ���� ������ȷ��������ʽ ��Ϊ������ʵ�ָú���ʱ����Ҫ��ģ�庯���ķ�ʽʵ��
	friend void Fun4<>(Basetem* p);

public:
	Basetem(T1 age,T2 name) {
		this->age = age;
		this->name = name;
	}
private:
	void visit() {
		cout << "���ڷ���ģ����˽�г�Ա����visit" << endl;
	}
	int age;
	string name;
};

//����ʵ��һ��ģ����Ԫ����
template<class T1,class T2>
void Fun4(Basetem<T1,T2>* p) {
	p->age = 100;
	//cout << "����ʵ�ֵ���Ԫģ�庯������Base˽������ age=" << p->age << ",name=" << p->name << endl;
}

//����ʵ��һ��visit,���Է���Base��˽������
void Animal::visit(Base* bp) {
	bp->age = 1000;
	cout << "Animal���visit��Ա������Ϊ��Ԫ ���ڷ���Base���˽������ age =" << bp->age << endl;
}

void fun1(Base *p) {
	p->age = 10;
	cout << "��Ԫ����fun1����Base��˽������ age = " << p->age << endl;
}

int main() {
	//ȫ�ֺ�����Ϊ��Ԫ����Base˽������
	Base* p = new Base;
	fun1(p);
	fun2(p);
	//����Ϊ��Ԫ����Base˽������
	Person* p2 = new Person;
	p2->visit(p);
	//��ĳ�Ա������Ϊ��Ԫ����Base��˽������
	Animal* a = new Animal;
	a->visit(p);

	//��Ԫȫ
	Basetem <int, string> btp(100,"�����");
	Fun3(&btp);

	//ͨ�����������ķ�ʽʵ����Ԫ���� ��fun3��ϸ�ԱȲ�ͬ����Ҫ����Basetem����֮ǰ������Fun4��Ȼ����Basetem��������Ԫ�����������ʵ�֣�
	//�ܽ᣺����ֱ������ʵ����Ԫ����
	Fun4(&btp);

	void* op = new Person[10];

	system("pause");
	return 0;
}