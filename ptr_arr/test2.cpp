#include <iostream>
using namespace std;
 
int main(){
 
	char str1[] = "abc";
	char *str2  = "abc";	//这种方法是会被编译器警告的
				//原因是“abc”作为字符串常量，其类型其实就是const char*,保存在只读区域
 
	const char str3[] = "abc";
	const char *str4  = "abc";
 
	const char str5[] = "abc";
	const char str6[] = "abc";
 
	const char *str7 = "abc";
    const char *str8 = "abc";
 
	char *str9 = "abc";	//被警告
	char *str10 = "abc";	//被警告
 
	char str11[] = "abc";
	char str12[] = "abc";
 
	cout<<(str1==str2)<<endl;
	cout<<(str3==str4)<<endl;
	cout<<(str5==str6)<<endl;
	cout<<(str7==str8)<<endl;	
	cout<<(str9==str10)<<endl;
	cout<<(str11==str12)<<endl;
	return 0;
}