#include <iostream>
using namespace std;

int main() {
	int a = 0123;//? 무슨 수
	cout << "첫번째 결과 출력 : " << a << endl;
		int b = 0xF;
	cout << "두번째 결과 출력 : " << b << endl;

	int c = 0b1111;
	cout << "세번째 결과 출력 : " << c << endl;
	int c2 = 0b0101;// 나중에 연산자 테스트할 때 사용할 값
	int someInterger = 256;
	short someShort;
	long someLong;
	float someFloat;
	double someDouble;
	someInterger++;//디폴트 10진 정수형에 1더하기
	someInterger *= 2;//거기에 2 곱하기
	someShort = static_cast<short>(someInterger);//2곱한 수의 자료형을 short 로 변환하고 변수에 저장
	someLong = someShort * 10000;//그 변수에 10000을 곱한값을 저장
	someFloat = someLong + 0.785f;// 10000을 곱해 나온 수에 0.785 을 더해서 저장
	someDouble = static_cast<double>(someFloat) / 10000;//0.785를 더한 값을 double 형으로 바꿔주고 10000을 나눠줌
	cout << "네번째 결과 출력 : " << someDouble << endl;


	int number1 = 123'456'789;
	float number2 = 0.123'456f;

		cout << "다섯번째 결과 출력 : " << number1 << endl;
	cout << number1 << endl;
	number1 <<= 2;
	cout << number1 << endl;
	c <<= 2;
	cout << c << endl;
	int c3 = c & c2;
	cout << "여섯번째 결과 출력 : " << c3 << endl;

	const int qwe = 100;
	int qwr = 100;
	cout << "일곱번째 결과 출력 : " << qwe << endl;
	cout << qwr << endl;
	//qwe=qwe+100; const 변수라 값에 변화 불가
	qwr++;
	cout << qwe << endl;
	cout << qwr << endl;

	const int A[10] = { 0,1,2,3,4,5,6,7,8,9 };
	cout << "여덟번째 결과 출력 : " << endl;

	for (int i = 0; i < 10; i++)
		cout << A[i] << endl;
	/*A[5] = A[5] - 1;
	for (int j = 0; j < 10; j++)
		cout << A[j] << endl;*/// 역시 배열 A를 const로 선언해 값에 변화주는 것 불가능
	//const int lh;
	//lh = 13; const 변수는 선언과 동시에 값을 넣어줘야함
	const int lj = 14;
	cout << /*lh << */" 아홉번째 결과 출력 " << lj << endl;
	enum abc{q=1,w,e,r};//맨 처음값만 정해주면 나머지 변수는 순서대로 1씩 증가한 값을 가진다.
	cout << q << w << e << r << endl;
	//q = q + 1; 역시 const처럼 값을 수정할 수 없음
	//cout << q << w << e << r << endl;
	enum class myEnum
	{
		EnumValue1,
		EnumValue2 = 10,
		EnumValue3
	};
	myEnum value1 = myEnum::EnumValue1;
	// cout << enum class Enumvalue2 << endl; enum 출력은 어떻게 ?

}