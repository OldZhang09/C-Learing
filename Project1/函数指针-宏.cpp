////�������壺
//#include <iostream>
//#define DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_FiveParams( SparseDelegateClass, OwningClass, DelegateName, Param1Type, Param1Name, Param2Type, Param2Name, Param3Type, Param3Name, Param4Type, Param4Name, Param5Type, Param5Name ) BODY_MACRO_COMBINE(CURRENT_FILE_ID,_,__LINE__,_DELEGATE) FUNC_DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE( SparseDelegateClass, OwningClass, DelegateName, FUNC_CONCAT( Param1Type InParam1, Param2Type InParam2, Param3Type InParam3, Param4Type InParam4, Param5Type InParam5 ), FUNC_CONCAT( *this, InParam1, InParam2, InParam3, InParam4, InParam5 ), void, Param1Type, Param2Type, Param3Type, Param4Type, Param5Type )
//
//using namespace std;
////����һ������ f_ptr Ϊ����ָ��
//typedef void (*f_ptr)();
//void aaa()
//{
//    cout << "aaa" << endl;
//}
//
//// void (* f())()
//f_ptr f()   //����ֵ�Ǻ���ָ��ĺ������壬 ����һĿ��Ȼ
//{
//    return aaa;
//}
//
//int main()
//{
//    // void (*(*f_ptr)())() = f;
//    // f_ptr()(); 
//    f_ptr(*ff)() = f; //���غ���ָ��ĺ���ָ�� 
//    ff()();
//    return 0;
//}