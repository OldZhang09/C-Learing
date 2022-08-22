////函数定义：
//#include <iostream>
//using namespace std;
////定义一个类型 f_ptr 为函数指针
//typedef void (*f_ptr)();
//void aaa()
//{
//    cout << "aaa" << endl;
//}
//
//// void (* f())()
//f_ptr f()   //返回值是函数指针的函数定义， 语义一目了然
//{
//    return aaa;
//}
//
//int main()
//{
//    // void (*(*f_ptr)())() = f;
//    // f_ptr()(); 
//    f_ptr(*ff)() = f; //返回函数指针的函数指针 
//    ff()();
//    return 0;
//}