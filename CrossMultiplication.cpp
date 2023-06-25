#include <iostream> //输入输出流的头文件 
#include <cstdlib>  //随机数的头文件 
#include <ctime>    //获取时间的头文件 
using namespace std;
int randNumSmall() {
    return rand() % 3 + 1 ; //返回从1-3之间的随机数 
} //定义左随机数函数
int randNumBig() {
    return rand() % 12 + 1 ; //返回从1-12之间的随机数 
} //定义右随机数函数
int main() {
	srand(time(0));     //设置时间为随机数的种子 
	bool naga1, naga2;  //定义正负 
	int n1, n2, n3, n4, a, b, c; //定义参与数 
	n1 = randNumSmall();
	n2 = randNumSmall();
	n3 = randNumBig();
	n4 = randNumBig(); //赋值随机数 
	naga1 = randNumBig() % 2; 
	naga2 = randNumBig() % 2;   //定义随机正负 
	if(naga1 == 1) 
		n1 = -n1;
	if(naga2 == 1)
		n3 = -n3;            //改变正负 
	a = n1 * n2;
	b = n1 * n4 + n2 * n3;
	c = n3 * n4;
	cout << "{" << a << "x^2";
	if(b>=0)
		cout << "+";
	cout << b << "x";
	if(c>=0)
		cout << "+";
	cout << c << "=(";
	cout << n1 << "x";
	if(n3>=0)
		cout << "+";
	cout << n3 << ")(";
	cout << n2 << "x";
	if(n4>=0)
		cout << "+";
	cout << n4 << ")}";
	return 0;
}
