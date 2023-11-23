#include "io.h"

void PrintArray() {
	int ArrayNumber[3] = { 1,2,3 };
	cout << ArrayNumber[0] << endl;

	for (int i = 0; i < 3; i++)
	{
		cout << ArrayNumber[i] << endl;
	}

	int ArrayInit[3];
	for (int i = 0; i < 3; i++)
	{
		ArrayInit[i] = i + 10;
	}
	for (int i = 0; i < 3; i++)
	{
		cout << ArrayInit[i];
	}
	cout << endl;
	char Word[] = { 'H','e','l','l','o',' ','W','o','r','l','d' };

	cout << Word[0] << endl;
	for (int i = 0; i < 11; i++)
	{
		cout << Word[i];
	}

}

void SumArray() {
	// 반복횟수를 입력받고, 반복 될때마다
		// 두 수 A,B를 입력받아 A+B의 결과값을 표시
	int IterNumber = 5;
	int IterA = 0;
	int IterB = 0;

	//cin >> IterNumber;
	int IterArray[5];

	for (int i = 0; i < IterNumber; i++) {
		cin >> IterA;
		cin >> IterB;
		//각각의 이터레이에 이터레이A,B의 합을 저장하자
		IterArray[i] = IterA + IterB;
	}
	for (int i = 0; i < IterNumber; i++)
	{

		cout << IterArray[i] << " : ";
	}
}
	
// 성적 표시 함수S
//process에서 호출이 되기때문에 따로 호출하지 않아도된당.
char Grade(int NumTest) {

		//시험점수 입력, 90~100:A, 80~89:B, 70~79:C, 60~69:D, 60미만:F 출력
		
	char GradeCharacter = NULL;
		
		if (NumTest >= 90) {


			GradeCharacter = 'A';
		}
		else if (NumTest >= 80) {
			GradeCharacter = 'B';

		}
		else if (NumTest >= 70) {
			GradeCharacter = 'C';

		}
		else if (NumTest >= 60) {
			GradeCharacter = 'D';

		}
		else {
			GradeCharacter = 'F';
		}

		return GradeCharacter;
	}

//성적을 처리 하자
void ProcessScore() {

	int Score[5] = { 95,85,55,67,73 };
	char GradeCharacter[5];

	for (int i = 0; i <5; i++)
	{
		GradeCharacter[i]=Grade(Score[i]);
	}
	for (int i = 0; i < 5; i++)
	{
		cout << GradeCharacter[i] << " : ";
	}
}

void StringArray() {
	// \0이 생략되서 5개가아니라6개임
	char Word[6] = "Hello";
	char Word2[] = "Bubble";

}

void BubbleSort() {
	// 숫자 개수 10개
	
	int Number1[10] = { 3,6,8,1,10,4,2,5,9,7 };
	int Temp = 0;

	for (int i = 9; i > 0; i--)
	{
		for (int j = 0; j < i; j++) {
			if (Number1[j] > Number1[j + 1]) {
				// 바꾸기
				Temp = Number1[j];
				Number1[j] = Number1[j + 1];
				Number1[j + 1] = Temp;
			}

		}
	}
	for (int i = 0; i < 10; i++)
	{
		cout << Number1[i] << " : ";
	}
}

//2차원 배열
void MultiArray() {

	int Number01[2][3] = { {1,2,3},{4,5,6} };
	
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << Number01[i][j] << " : ";
		}
	}


}