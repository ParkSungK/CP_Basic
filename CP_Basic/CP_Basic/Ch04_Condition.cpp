#include "io.h";
int TallNumber = 0;
char ClothColor = NULL; //NULL : ���ڰ��� �������� ����

void IfFunctionDesc() {
	// ��Ʈ�� ����Ʈ�� ���� ����
		/*
		  bit : ��ǻ�� ������ ������ �ּҴ���
		  byte : ��ǻ�� ���� ������ �ּҴ���(8bit)
		  1byte = 8bit

		  2���� ���� ������: 0,1
		  ���� ���
		  1010 => 2^3*1 +2^2 *0+2^1*1 2^0 *0 = 10
		  2^1~2^10 : 2,4,8,16,32,64,128,256,512,1024

		  �� ǥ��, ����ǥ��, �������ּ� ǥ�� : 1byte �������� Ȯ��

		*/

	int Condition1 = 100;
	bool Condition = true;
	/*
	if�� �����ϴ� ���ǽ��� ����
	: ������� bool ������

	���ǽ��� ����
	- �񱳿����
	- bool ������
	- ��� �����*/

	if (Condition1 >= 50) {
		//���϶� ���౸��
		cout << Condition1 << endl;

	}
	if (true) {} //Ʈ�簪���� ������ ����
	if (false) {} // ���������� ������ �������
	if (1) {} //1�� Ʈ�簪�̴� ������ ����
	if (0) {} // 0�� �������̴� ������ �������
	if (20) {} // 0 : false , �̿��� ����(���ڴ�) : true
	int Condition2 = 10;
	if (Condition2 + 5) {}
	if (Condition >= 50 && Condition2 <= 10) {}

	/* if(���ǽ�1){
	//���ǽ�1�� ���϶� ���� ����
	}

	if(���ǽ�2){
	//���ǽ�2�� ���϶� ���౸��
	} else {
	//���ǽ�2�� �����϶� ���౸��
	}

	if(���ǽ�3){
	//���ǽ�3�� ���϶� ���౸��
	} else if(���ǽ�4){
	//���ǽ�4�� ���϶� ���౸��
	}else if(���ǽ�5){
	//���ǽ�5�� ���϶� ���౸��
	} else {
	//���ǽ��� ��� �����϶� ���౸��
	}

	*/
}

void IfFunctionEx01() {  
	//A,B �� ���� �Է¹޾� ���ؼ� ��� ���
	//��� : A>B => ">" , A<B => "<" , A=B => "=="
	int NumA = 0;
	int NumB = 0;
	///cin >> NumA;
	///cin >> NumB;

	if (NumA > NumB) {
		cout << ">" << endl;
	}
	else if (NumA < NumB) {
		cout << "<" << endl;
	}
	else {
		cout << "==" << endl;
	}

}
void IfFunctionEx02() {  
	//�������� �Է�, 90~100:A, 80~89:B, 70~79:C, 60~69:D, 60�̸�:F ���
	int NumTest = 0;
	//cin >> NumTest;
	if (NumTest >= 90) {
		cout << "A" << endl;
	}
	else if (NumTest >= 80) {
		cout << "B" << endl;
	}
	else if (NumTest >= 70) {
		cout << "C" << endl;
	}
	else if (NumTest >= 60) {
		cout << "D" << endl;
	}
	else {
		cout << "F" << endl;
	}
}
void IfFunctionEx03(){ 
	//�������� ������ ����µ�, ����ڰ� �λ����Ǹ� ���ߴ�. 
	//Ű�� �� 180�̻�, ���� ������ ���� �԰� �־��ٰ� ���ߴ�.
	//������ ã�� ���ǹ��� �ۼ��Ͻÿ�.
	//�ʻ� �Է°� : Black = B, White = W, Red = R


	//\cin >> TallNumber;
	//\cin >> ClothColor;

	//TallNumber >= 180
	//ClothColor == B

	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "����" << endl;
	}
	else {
		cout << "�ù�" << endl;
	}
}

void IfNestDesc() {
	//if��ø
/*
if(���ǽ�1){
//���϶� ����
if(���ǽ�2){
}*/

}
void IfNestEx01(){
	/*
* 180�̻��̰� ������ �� : ����
* 180�����̰� ������ �� : ������
* 180�̻��̰� �ٸ��� �� : ������
* �� ���� ��� �ƴϸ� : �ù�
*/
	
	if (TallNumber >= 180 && ClothColor == 'B') {
		cout << "����" << endl;
	}
	else if (TallNumber >= 180 || ClothColor == 'B') {
		cout << "������" << endl;
	}
	else {
		cout << "�ù�" << endl;
	}




}
void IfNestEx02() {

	

	//��ø
	if (TallNumber >= 180) {
		if (ClothColor == 'B') {
			cout << "����" << endl;
		}
		else {
			cout << "������" << endl;
		}
	}
	else {
		if (ClothColor == 'B') {
			if (TallNumber >= 180) {
				cout << "����" << endl;
			}
			else {
				cout << "�ù�" << endl;
			}
		}
	}
}

void SwitchEx() {
	//switch ~ case
/*
 switch�� �����ϴ� ������ �����
 : ����, ����
 */
 /*
 switch(����){
	case �����1:
	���� ����1
	case �����2:
	���� ����2
 }
 */
 //���� ��ȣ�� �Է¹޾� �ش� ��ȣ�� ���� �̸� ���
 // 0 : �Ͽ��� ~ 6 : �����
	int DayNum = 0;
	cout << "���Ϲ�ȣ�� �Է����ּ���[0~6] : ";

	//\cin >> DayNum;
	switch (DayNum) {
	case 0:
		cout << "�Ͽ���" << endl;
		break;
	case 1:
		cout << "������" << endl;
		break;
	case 2:
		cout << "ȭ����" << endl;
		break;
	case 3:
		cout << "������" << endl;
		break;
	case 4:
		cout << "�����" << endl;
		break;
	case 5:
		cout << "�ݿ���" << endl;
		break;
	case 6:
		cout << "�����" << endl;
		break;
	}

	//switch �ش� �ڵ带 if �ڵ�� �ٲ㺸��
}





