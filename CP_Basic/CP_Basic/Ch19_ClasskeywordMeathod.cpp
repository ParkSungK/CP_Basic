#include"io.h"
#include"Ch19_ClassKeyword.h"

void KeyWord::Func()const
{
	cout << Value1 << endl;
}
 void KeyWord::SFunc()
{
	 cout << "SFunc" << endl;

}
 int KeyWord::Get() const {
 
	 return Value3;
 }
 const int KeyWord::Print()
 {
	 
	 //리턴값이 항상 변하지않음
	 //리턴값이 항상 존재
	 return 0;
 }

