#include <iostream> //�����������ͷ�ļ� 
#include <cstdlib>  //�������ͷ�ļ� 
#include <ctime>    //��ȡʱ���ͷ�ļ� 
using namespace std;
int randNumSmall() {
    return rand() % 3 + 1 ; //���ش�1-3֮�������� 
} //���������������
int randNumBig() {
    return rand() % 12 + 1 ; //���ش�1-12֮�������� 
} //���������������
int main() {
	srand(time(0));     //����ʱ��Ϊ����������� 
	bool naga1, naga2;  //�������� 
	int n1, n2, n3, n4, a, b, c; //��������� 
	n1 = randNumSmall();
	n2 = randNumSmall();
	n3 = randNumBig();
	n4 = randNumBig(); //��ֵ����� 
	naga1 = randNumBig() % 2; 
	naga2 = randNumBig() % 2;   //����������� 
	if(naga1 == 1) 
		n1 = -n1;
	if(naga2 == 1)
		n3 = -n3;            //�ı����� 
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
