//
//
////����ͨ��ģʽ������delete������ڴ�й©
//#include <iostream>
//using namespace std;
//
//enum ShapeStyle
//{
//	circle,
//	triangle,
//	rectangular
//};
//
//class BaseShape
//{
//public:
//	virtual void  show() = 0;
//	virtual ~BaseShape()
//	{
//
//	}
//};
//
//class CircleShape : public BaseShape
//{
//public:
//	void show()
//	{
//		cout << "I am circle shape." << endl;
//	}
//	~CircleShape()
//	{
//		cout << "~CircleShape() was called." << endl;
//	}
//};
//
//class TriangleShape : public BaseShape
//{
//public:
//	void show()
//	{
//		cout << "I am triangle shape." << endl;
//	}
//	~TriangleShape()
//	{
//		cout << "~TriangleShape() was called." << endl;
//	}
//};
//
//class RectangularShape : public BaseShape
//{
//public:
//	void show()
//	{
//		cout << "I am rectangular shape." << endl;
//	}
//	~RectangularShape()
//	{
//		cout << "~RectangularShape() was called." << endl;
//	}
//};
//
//BaseShape* createShape(ShapeStyle style)
//{
//	if (style == circle)
//	{
//		return new CircleShape;
//	}
//	else if (style == triangle)
//	{
//		return new TriangleShape;
//	}
//	else if (style == rectangular)
//	{
//		return new RectangularShape;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//void func()
//{
//	BaseShape* ptr = createShape(circle);
//	ptr->show();
//	delete ptr;
//
//	ptr = createShape(triangle);
//	ptr->show();
//	//delete ptr;//������������delete���������ڴ�й©
//
//	ptr = createShape(rectangular);
//	ptr->show();
//	delete ptr;
//}
//
//int main(int argc, char* argv[])
//{
//	func();
//	system("pause");
//	return 1;
//}