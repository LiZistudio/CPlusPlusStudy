#ifndef STDCLASS_MYSTRINGH
#define STDCLASS_MYSTRINGH

class MyString
{
public:
	MyString(const char* cstr = 0);//构造函数
	MyString(const MyString& str);//拷贝构造
	MyString& operator = (const MyString& str);//拷贝赋值
	~MyString();//析构函数
	/*
	* 当class属性当中存在指针时，要写BigThree
	*/
	char* get_c_str() const { return m_data; }

private:
	char* m_data;

};


#endif // !STDCLASS_MYSTRINGH
