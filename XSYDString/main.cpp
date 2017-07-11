#include "XSYDStr.h"
#include <iostream>
using namespace std;
int main(int argc, char** args){
	clsXSYDString *MyStrCoder = new clsXSYDString();
	char* MyResult = MyStrCoder->MiddleText("afjioo", "a", "o", 0);
	std::cout << "afjioo<a-o>½á¹ûÎª:" << MyResult << std::endl;
	MyStrCoder->ReleaseSubStr(MyResult);
	system("pause");
	return 0;
}
