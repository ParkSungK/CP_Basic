#include "io.h"

int arr[] = { 1,6,9,7,3,2,0,4,8,5 };
//**����Ʈ�� ������ ����
//sizeof = ������ ����Ʈ��ũ�� =int =4����Ʈ
int ArrSize = sizeof(arr)/sizeof(arr[0]);

 void ArraySum()
 {//**����Ʈ�� ������
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
	 //���� ���� : �ݺ� - ��ü����Ŭ,
	 //������ ���� �� �ݺ�
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
	 //**�ǳ� : ���� 
		 if (i == ArrSize - 1)
		 {
			 cout << arr[i] << endl;
		 }
		 else {

		 cout << arr[i] << " : ";
		 }
	 }
	 cout << endl;
	 cout << "�ּҰ� : " << arr[0] << endl;
	 cout << "�ִ밪 : " << arr[ArrSize-1] << endl;

 }

	 //�������� �籸������
	//sort()�� �����ϰ� ��������	
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