//
//#include <iostream>
//using namespace std;
////������RALLģʽ
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
//class BaseShapeWrapper
//{
//public:
//	//���캯���л�ȡ��Դ
//	explicit BaseShapeWrapper(BaseShape* ptr = 0) : d(ptr)
//	{
//	}
//
//	//�����������ͷ���Դ
//	~BaseShapeWrapper()
//	{
//		if (d)
//		{
//			delete d;
//			d = 0;
//		}
//	}
//	BaseShape* operator->() const
//	{
//		return d;
//	}
//	void reset(BaseShape* other)
//	{
//		if (d == other)
//		{
//			return;
//		}
//
//		BaseShape* oldD = d;
//		d = other;
//		delete oldD;
//	}
//private:
//	BaseShape* d;
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
//	//�ֲ�����
//	BaseShapeWrapper ptr(createShape(circle));
//	ptr->show();
//
//	ptr.reset(createShape(triangle));
//	ptr->show();
//
//	ptr.reset(createShape(rectangular));
//	ptr->show();
//}
//
//int main(int argc, char* argv[])
//{
//	func();
//	system("pause");
//	return 1;
//}