#pragma once
class KeyWord {
public:
	int Value1;
	//�̱��� ��������
	static int Value2;
	//��� : �ʱ�ȭ
	const int Value3 = 10;



	void Func() const;

	static void SFunc();
	int Get()const;
	const int Print();
};