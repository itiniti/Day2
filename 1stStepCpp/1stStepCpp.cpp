#include <iostream>
using namespace std;

int main() {
	int a = 0123;//? ���� ��
	cout << "ù��° ��� ��� : " << a << endl;
		int b = 0xF;
	cout << "�ι�° ��� ��� : " << b << endl;

	int c = 0b1111;
	cout << "����° ��� ��� : " << c << endl;
	int c2 = 0b0101;// ���߿� ������ �׽�Ʈ�� �� ����� ��
	int someInterger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;
	someInterger++;//����Ʈ 10�� �������� 1���ϱ�
	someInterger *= 2;//�ű⿡ 2 ���ϱ�
	someShort = static_cast<short>(someInterger);//2���� ���� �ڷ����� short �� ��ȯ�ϰ� ������ ����
	someLong = someShort * 10000;//�� ������ 10000�� ���Ѱ��� ����
	someFloat = someLong + 0.785f;// 10000�� ���� ���� ���� 0.785 �� ���ؼ� ����
	someDouble = static_cast<double>(someFloat) / 10000;//0.785�� ���� ���� double ������ �ٲ��ְ� 10000�� ������
	cout << "�׹�° ��� ��� : " << someDouble << endl;


	int number1 = 123'456'789;
	float number2 = 0.123'456f;

		cout << "�ټ���° ��� ��� : " << number1 << endl;
	cout << number1 << endl;
	number1 <<= 2;
	cout << number1 << endl;
	c <<= 2;
	cout << c << endl;
	int c3 = c & c2;
	cout << "������° ��� ��� : " << c3 << endl;

	const int qwe = 100;
	int qwr = 100;
	cout << "�ϰ���° ��� ��� : " << qwe << endl;
	cout << qwr << endl;
	//qwe=qwe+100; const ������ ���� ��ȭ �Ұ�
	qwr++;
	cout << qwe << endl;
	cout << qwr << endl;

	const int A[10] = { 0,1,2,3,4,5,6,7,8,9 };
	cout << "������° ��� ��� : " << endl;

	for (int i = 0; i < 10; i++)
		cout << A[i] << endl;
	/*A[5] = A[5] - 1;
	for (int j = 0; j < 10; j++)
		cout << A[j] << endl;*/// ���� �迭 A�� const�� ������ ���� ��ȭ�ִ� �� �Ұ���
	//const int lh;
	//lh = 13; const ������ ����� ���ÿ� ���� �־������
	const int lj = 14;
	cout << /*lh << */" ��ȩ��° ��� ��� " << lj << endl;
	enum abc{q=1,w,e,r};//�� ó������ �����ָ� ������ ������ ������� 1�� ������ ���� ������.
	cout << q << w << e << r << endl;
	//q = q + 1; ���� constó�� ���� ������ �� ����
	//cout << q << w << e << r << endl;
	enum class myEnum
	{
		EnumValue1,
		EnumValue2 = 10,
		EnumValue3
	};
	myEnum value1 = myEnum::EnumValue1;
	// cout << enum class Enumvalue2 << endl; enum ����� ��� ?

}