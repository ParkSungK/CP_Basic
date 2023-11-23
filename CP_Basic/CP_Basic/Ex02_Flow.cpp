#include "io.h"

int arr[] = { 1,6,9,7,3,2,0,4,8,5 };
//**바이트로 나누어 담자
//sizeof = 변수의 바이트수크기 =int =4바이트
int ArrSize = sizeof(arr)/sizeof(arr[0]);

 void ArraySum()
 {//**바이트로 나누자
	 //cout << sizeof(arr) / sizeof(arr[0]) << endl;
	 int Sum = 0;
	for (int i = 0; i < ArrSize; i++)
	{ 
		Sum += arr[i];
		}
	cout << Sum << endl;
}

 void Sort() {
	 int Temp = 0;
	 //버블 정렬 : 반복 - 전체사이클,
	 //인접한 원소 비교 반복
	 for (int i =9; i>0; i--)
	 {
		 for (int j = 0; j < i; j++)
		 {
			 if (arr[j] > arr[j + 1])
			 {
				 Temp = arr[j];
				
				 arr[j] = arr[j + 1];
				arr[j + 1] = Temp;
			 }
		 }
	 }
	 for (int i = 0; i < 10; i++)
	 {
	 //**맨끝 : 생략 
		 if (i == ArrSize - 1)
		 {
			 cout << arr[i] << endl;
		 }
		 else {

		 cout << arr[i] << " : ";
		 }
	 }
	 cout << endl;
	 cout << "최소값 : " << arr[0] << endl;
	 cout << "최대값 : " << arr[ArrSize-1] << endl;

 }

	 //역순으로 재구성하자
	//sort()를 실행하고 실행하자	
 void Reverse() {
	 int TempArr[10];
	 for (int i = 0; i < 10; i++)
	 {
		 TempArr[i] = arr[9 - i];
	 }
	 for (int i = 0; i < 10; i++)
	 {
		 arr[i] = TempArr[i];
	 }
	 for (int i = 0; i < 10; i++)
	 {
		 if (i == ArrSize - 1)
		 {
			 cout << arr[i] << endl;

		 }
		 else
		 {
		 cout << arr[i] << " : ";

		 }
		 
	 }
 }