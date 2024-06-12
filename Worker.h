#pragma once

//�������� ��������� ���������, � �������� ���� ����� ��������.
//�������� ������ ���������, �������� � ������, ����������� ��������� ������ ��������.
//
//�������� ������ ����� ����������������, 
//� ������� ����� ������ ������ �������� ������ ��������.
//� ����� ������ ���� ����� Add, ������� ��������� ��������� � ������ 
// � ����� ������������, ������� �������� ����� �������� � ������� �� ����������.
//
//�������� ����� ������������������, � �������� ���� ����� ����������,
//  ������� ��������� ��������� ������ :
//
//����������� �������� ���� �������� ��������� ������ �����, � �� �������� ���� �� ������.
//
//����������� �������� ������������, ����� �� ���������� ��������� ���������
//  � �������� ��� � ����������������.
using std::cout;
#include<vector>
#include<ctime>
using std::vector;

class Worker {
public:
	virtual void Work() = 0;
};

class Accountant : public Worker {
	void Work() { cout << "Accountant work\n"; }
};	
	
class Manager : public Worker {
	void Work() { cout << "Manager work\n"; }
};

class Cashier : public Worker {
	void Work() { cout << "Manager work\n"; }
};

class ListofEmployees {
	vector<Worker*> listampl;
public:
	void Add(Worker* w) { listampl.push_back(w); }
	void WorkForEveryone() {
		for (Worker* ampl : listampl) ampl->Work();
	}
};

//����� ������������������
class LazyProgrammer:public Worker {
public:
	void Work() { cout << "Programmer is work"; }
	void TypeWork() {
		int r = rand() % 50;
		if (r % 2 == 0) Work(); else cout << "�he programmer is fooling around";
	}
};
