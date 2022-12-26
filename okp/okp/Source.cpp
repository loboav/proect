
#include <iostream>
#include <fstream>

int sing_in(int x);
int found(int x);
int contact(int x);

using namespace std;

struct Bo
{
	string name;
	string author;
	int cost;
	string description;
};

int main()
{
	int a = 0, b = 0, c = 0;

	setlocale(LC_ALL, "");

	int choose;
	
	cout << "����� � ������� - 1" << endl << "���������� ��� ����� - 2" << endl;
	cin >> choose;

	switch (choose)
	{
	case 1:
		a = sing_in(a);
		cout << a << endl;
		break;
	case 2:
		break;

	default: cout << "��������� ������� ����� 1 ��� 2" << endl;
	}
	do
	{
		
		cout << "����� ������������ - 1" << endl << "����������� �������� - 2 " << endl << "��������� ������ - 3" << endl;
		
		cin >> choose;

		switch (choose)
		{

		case 1:
			b = found(b);
			cout << b << endl;
			break;
		case 2:
			b = contact(b);
			cout << b << endl;
			break;
		case 3:
			return 0;
			break;
		default: cout << "��������� ������� ����� �� 1 �� 3" << endl;
		}
	} while (b == 1);

}

int sing_in(int x)
{
	string con;

	string* A = new string[2];
	string* C = new string[2];

	A[0] = "and";
	A[1] = "111";

	do
	{
		cout << "������� ����� � ������" << endl;
		cin >> C[0];
		cin >> C[1];

		if (A[0] == C[0] && A[1] == C[1])
		{
			cout << "���� �������" << endl;
			return 1;
		}
		else
		{
			cout << "�������� ����� ��� ������" << endl;
		}
		cout << "���������? Yes/No" << endl;
		cin >> con;
		if (con == "No")
		{
			return 0;
		}
	} while (con == "Yes");
	return 0;
}

int found(int x) 
{
	int i;
	int a = 0;
	int choose;
	int n = 5;
	Bo* B;
	B = new Bo[n];

	for (int i = 0; i < n; i++)
	{
		B[i].name = "�������������  ";
		B[i].author = "������������� ";
		B[i].cost = i + 10 * 10;
		B[i].description = "�������� ";
	}
	do
	{
		cout << "----------------------" << endl;
		for (int i = 0; i < n; i++)
		{
			cout << B[i].name << " - " << i + 1 << endl;
		}
		cout << "----------------------" << endl;
		cout << "�������� " << endl;

		cin >> i;
		i = i - 1;
		cout << "----------------------" << endl;
		cout << "���:" << B[i].name << endl
			<< "�����:" << B[i].author << endl
			<< "����:" << B[i].cost << endl
			<< "��������:" << B[i].description << endl;
		cout << "----------------------" << endl;

		cout << "����� ������ �������������? 1/0" << endl;
		cin >> a;
	} while (a == 1);

	return 0;
}

int contact(int x)
{
	string choose;
	cout << endl;
	
	cout << "ZED" << endl;
	cout << endl;
	cout << "�����:�������� �������� 17" << endl;
	cout << "�������: +8 044 544 66 22 " << endl;
	cout << "� ��� ����x:https://vk.com/burgerking" << endl;
	
	cout << endl;
	cout << "����������? Yes/No" << endl;
	cin >> choose;
	cout << endl;
	if (choose == "Yes")
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
