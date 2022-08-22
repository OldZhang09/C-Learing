//#include <map>
//#include <set>
//#include <mutex>
//#include <vector>
//#include <string>
//#include <cstdio>
//#include <cstdlib>
//#include <cstring>
//#include <iostream>
//#include <typeinfo>
//#include <algorithm>
//
//using namespace std;
//
///*
//* ���º�����������Ҫ��������Ա
//*/
//#define reflect_attr(type, name)	\
//type name;							\
//const ReflectHelper __##name = ReflectHelper(this, &this->name, #type, #name)
//
//#define reflect_int(name) reflect_attr(int, name)
//#define reflect_bool(name) reflect_attr(bool, name)
//#define reflect_float(name) reflect_attr(float, name)
//#define reflect_double(name) reflect_attr(double, name)
//#define reflect_string(name) reflect_attr(string, name)
//
///*
//* ����Object����
//* ������Ҫ������ཨ��̳�Object��
//* �ṩgetClassName��������������ʱ��ȡ�������ʵ������
//*/
//class Object
//{
//public:
//	virtual ~Object()
//	{
//	}
//	virtual string toString() const
//	{
//		char buffer[16];
//
//		sprintf(buffer, "%p", this);
//
//		return buffer;
//	}
//
//public:
//	//����������ʱ��ȡ�������ʵ������
//	virtual string getClassName() const
//	{
//#ifdef _MSC_VER
//		return typeid(*this).name() + 6;
//#else
//		const char* name = typeid(*this).name();
//
//		while (*name >= '0' && *name <= '9') name++;
//
//		return name;
//#endif
//	}
//};
//
///*
//* �������Բ�����
//* set���������޸�����
//* get�������ڻ�ȡ����
//*/
//class ReflectItem
//{
//protected:
//	int offset;
//	string name;
//	const char* type;
//
//
//public:
//	ReflectItem() : offset(0), type(NULL)
//	{
//	}
//	ReflectItem(int _offset, const char* _type, const string& _name) : offset(_offset), type(_type), name(_name)
//	{
//	}
//
//public:
//	bool canUse() const
//	{
//		return type ? true : false;
//	}
//	bool operator < (const ReflectItem& obj) const
//	{
//		return name < obj.name;
//	}
//	bool operator == (const ReflectItem& obj) const
//	{
//		return name == obj.name;
//	}
//
//public:
//	//��ȡ��Ա��ƫ�Ƶ�ַ
//	int getOffset() const
//	{
//		return offset;
//	}
//	//��ȡ��Ա����
//	string getName() const
//	{
//		return type ? name : "";
//	}
//	//��ȡ��Ա����
//	string getType() const
//	{
//		return type ? type : "";
//	}
//	//��ȡ��Ա��ֵ
//	string get(const void* obj) const
//	{
//		char* dest = (char*)(obj)+offset;
//
//		if (type == NULL || type == "object") "";
//
//		if (type == "int") return to_string(*(int*)(dest));
//
//		if (type == "bool") return *(bool*)(dest) ? "true" : "false";
//
//		if (type == "float") return to_string(*(float*)(dest));
//
//		if (type == "double") return to_string(*(double*)(dest));
//
//		return *(string*)(dest);
//	}
//	//�޸ĳ�Ա��ֵ
//	bool set(void* obj, int val) const
//	{
//		char* dest = (char*)(obj)+offset;
//
//		if (type == NULL || type == "object") return false;
//
//		if (type == "int")
//		{
//			*(int*)(dest) = val;
//		}
//		else if (type == "bool")
//		{
//			*(bool*)(dest) = (val ? true : false);
//		}
//		else if (type == "float")
//		{
//			*(float*)(dest) = val;
//		}
//		else if (type == "double")
//		{
//			*(double*)(dest) = val;
//		}
//		else
//		{
//			*(string*)(dest) = to_string(val);
//		}
//
//		return true;
//	}
//	//�޸ĳ�Ա��ֵ
//	bool set(void* obj, bool val) const
//	{
//		return set(obj, val ? 1 : 0);
//	}
//	//�޸ĳ�Ա��ֵ
//	bool set(void* obj, float val) const
//	{
//		return set(obj, (double)(val));
//	}
//	//�޸ĳ�Ա��ֵ
//	bool set(void* obj, double val) const
//	{
//		char* dest = (char*)(obj)+offset;
//
//		if (type == NULL || type == "object") return false;
//
//		if (type == "int")
//		{
//			*(int*)(dest) = val;
//		}
//		else if (type == "bool")
//		{
//			*(bool*)(dest) = val < -0.000001 || val > 0.000001;
//		}
//		else if (type == "float")
//		{
//			*(float*)(dest) = val;
//		}
//		else if (type == "double")
//		{
//			*(double*)(dest) = val;
//		}
//		else
//		{
//			*(string*)(dest) = to_string(val);
//		}
//
//		return true;
//	}
//	//�޸ĳ�Ա��ֵ
//	bool set(void* obj, const char* val) const
//	{
//		char* dest = (char*)(obj)+offset;
//
//		if (val == NULL || type == NULL || type == "object") return false;
//
//		if (type == "string")
//		{
//			*(string*)(dest) = val;
//		}
//		else
//		{
//			if (*val == 0) return true;
//
//			if (type == "int")
//			{
//				*(int*)(dest) = atoi(val);
//			}
//			else if (type == "bool")
//			{
//				string tmp = val;
//
//				*(bool*)(dest) = (tmp == "true");
//			}
//			else if (type == "float")
//			{
//				*(float*)(dest) = atof(val);
//			}
//			else
//			{
//				*(double*)(dest) = atof(val);
//			}
//		}
//
//		return true;
//	}
//	//�޸ĳ�Ա��ֵ
//	bool set(void* obj, const string& val) const
//	{
//		return set(obj, val.c_str());
//	}
//};
//
///*
//* �������Թ�����
//* ��map��ʽ�洢������Ա���������͡�ƫ�Ƶ�ַ����Ϣ
//*/
//class ReflectHelper
//{
//protected:
//	static mutex& GetMutex()
//	{
//		static mutex mtx;
//		return mtx;
//	}
//	static map<string, set<ReflectItem>>& GetMap()
//	{
//		static map<string, set<ReflectItem>> map;
//		return map;
//	}
//
//public:
//	//ͨ�����캯����������Ա����Ϣ��¼�ڷ�����Ϣmap��
//	ReflectHelper(Object* self, void* data, const char* type, const char* name)
//	{
//		static map<string, set<ReflectItem>>& attrmap = GetMap();
//
//		lock_guard<mutex> lk(GetMutex());
//		string key = self->getClassName();
//
//		if (type == "int" || type == "bool" || type == "float" || type == "double" || type == "string")
//		{
//			attrmap[key].insert(ReflectItem((char*)(data)-(char*)(self), type, name));
//		}
//		else
//		{
//			attrmap[key].insert(ReflectItem((char*)(data)-(char*)(self), "object", name));
//		}
//	}
//
//public:
//	//���������ƻ�ȡ��Ա����������Ϣ�б�
//	static vector<ReflectItem> GetList(const string& key)
//	{
//		static map<string, set<ReflectItem>>& attrmap = GetMap();
//
//		vector<ReflectItem> vec;
//		lock_guard<mutex> lk(GetMutex());
//
//		auto it = attrmap.find(key);
//
//		if (it == attrmap.end()) return {};
//
//		for (auto& item : it->second) vec.push_back(item);
//
//		std::sort(vec.begin(), vec.end(), [](const ReflectItem& a, const ReflectItem& b) {
//			return a.getOffset() < b.getOffset();
//			});
//
//		return std::move(vec);
//	}
//	//��ȡָ�����Ա�����ķ�����Ϣ
//	static ReflectItem GetItem(const string& key, const string& name)
//	{
//		static map<string, set<ReflectItem>>& attrmap = GetMap();
//
//		ReflectItem item(0, NULL, name);
//		lock_guard<mutex> lk(GetMutex());
//
//		auto it = attrmap.find(key);
//
//		if (it == attrmap.end()) return item;
//
//		auto tmp = it->second.find(item);
//
//		if (tmp == it->second.end()) return item;
//
//		return *tmp;
//	}
//};
//
//class Json : public Object
//{
//private:
//	reflect_int(intval);
//	reflect_bool(boolval);
//	reflect_string(stringval);
//
//public:
//	//���л�ΪJSON��
//	string toString() const
//	{
//		string msg;
//		vector<ReflectItem> vec = ReflectHelper::GetList(this->getClassName());
//
//		for (auto& item : vec)
//		{
//			if (item.getType() == "string")
//			{
//				msg += ",\"" + item.getName() + "\":\"" + item.get(this) + "\"";
//			}
//			else
//			{
//				msg += ",\"" + item.getName() + "\":" + item.get(this);
//			}
//		}
//
//		if (msg.empty()) return "{}";
//
//		return "{" + msg.substr(1) + "}";
//	}
//};
//
//int main(int argc, char** argv)
//{
//	Object* obj = new Json();
//
//	vector<ReflectItem> vec = ReflectHelper::GetList(obj->getClassName());
//
//	puts(" ���Ա��������");
//	puts("------------------------------------------------------");
//	for (auto& item : vec)
//	{
//		cout << " " << item.getType() << " " << item.getName() << ";" << endl;
//	}
//
//	//���ó�Ա������ֵ
//	ReflectHelper::GetItem("Json", "intval").set(obj, 100);
//	ReflectHelper::GetItem("Json", "boolval").set(obj, true);
//	ReflectHelper::GetItem("Json", "stringval").set(obj, "xungen");
//
//	puts("");
//	puts(" ��Ա������ֵ");
//	puts("------------------------------------------------------");
//	for (auto& item : vec)
//	{
//		cout << " " << item.getName() << " = " << item.get(obj) << ";" << endl;
//	}
//
//	puts("");
//	puts(" ���л�ΪJSON��");
//	puts("------------------------------------------------------");
//	cout << " " << obj->toString() << endl;
//
//	delete obj;
//
//	return 0;
//}
