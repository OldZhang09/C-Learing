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
	//在Base类中声明一个全局函数 作为友元 可以访问该类的私有属性，在类外去实现
	friend void fun1(Base *p);
	//在类中声明并实现一个全局函数 作为友元 可以访问该类的私有属性
	friend void fun2(Base* p) {
		p->name = "123";
		cout << "友元函数fun2访问Base的私有属性 name = " << p->name << endl;
	};
	//声明Person类作为Base的友元，Person的函数可以访问Base的私有属性
	friend class Person;
	//声明Animal类中的成员函数visit作为Base的友元，可以访问Base的私有属性
	friend void Animal::visit(Base *bp);
public:
	Base() {

	}
private:
	int age;
	string name;
};

//友元类Person
class Person {
public:
	void visit(Base* p) {
		p->age = 100;
		cout << "Person类作为友元 正在访问Base类的私有属性 age =" << p->age << endl;
	}
};
//模板类 中的友元函数
template <class T1, class T2> class Basetem {
	//在模板类内声明并实现一个友元函数
	friend void Fun3(Basetem *p) {
		cout << "正在通过全局友元函数访问模板类私有成员函数visit" << endl;
		p->visit();
	}
	//在模板类内声明一个友元函数 如果你需要传入一个模板类作为参数，这是错误的声明方式，因为这是一个普通函数的声明
	//friend void Fun4(Basetem* p);
	//在模板类内声明一个友元函数 如果你需要传入一个模板类作为参数 这是正确的声明方式 因为在类外实现该函数时候需要以模板函数的方式实现
	friend void Fun4<>(Basetem* p);

public:
	Basetem(T1 age,T2 name) {
		this->age = age;
		this->name = name;
	}
private:
	void visit() {
		cout << "正在访问模板类私有成员函数visit" << endl;
	}
	int age;
	string name;
};

//类外实现一个模板友元函数
template<class T1,class T2>
void Fun4(Basetem<T1,T2>* p) {
	p->age = 100;
	//cout << "类外实现的友元模板函数访问Base私有属性 age=" << p->age << ",name=" << p->name << endl;
}

//类外实现一下visit,可以访问Base的私有属性
void Animal::visit(Base* bp) {
	bp->age = 1000;
	cout << "Animal类的visit成员函数作为友元 正在访问Base类的私有属性 age =" << bp->age << endl;
}

void fun1(Base *p) {
	p->age = 10;
	cout << "友元函数fun1访问Base的私有属性 age = " << p->age << endl;
}

int main() {
	//全局函数作为友元访问Base私有属性
	Base* p = new Base;
	fun1(p);
	fun2(p);
	//类作为友元访问Base私有属性
	Person* p2 = new Person;
	p2->visit(p);
	//类的成员函数作为友元访问Base的私有属性
	Animal* a = new Animal;
	a->visit(p);

	//友元全
	Basetem <int, string> btp(100,"孙悟空");
	Fun3(&btp);

	//通过类外声明的方式实现友元函数 和fun3仔细对比不同，需要在类Basetem声明之前先声明Fun4，然后在Basetem中声明友元，最后在类外实现；
	//总结：建议直接类内实现友元函数
	Fun4(&btp);

	void* op = new Person[10];

	system("pause");
	return 0;
}