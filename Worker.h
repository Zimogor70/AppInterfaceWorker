#pragma once

//Создайте интерфейс Работника, у которого есть метод Работать.
//Создайте классы Бухгалтер, Менеджер и Кассир, реализующие интерфейс класса Работник.
//
//Создайте вектор класс СписокРаботников, 
//в котором будет лежать веткор объектов класса Работник.
//У этого класса есть метод Add, который добавляет работника в список 
// и метод РаботатьВсем, который вызывает метод Работать у каждого из работников.
//
//Создайте класс ЛенивыйПрограммист, у которого есть метод ТипаРабота,
//  который реализует следующую логику :
//
//Программист работает если выпадает рандомное чётное число, и не работает если не четное.
//
//Адаптируйте Ленивого программиста, чтобы он реализовал интерфейс Работника
//  и добавьте его в СписокРаботников.
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

//класс ЛенивыйПрограммист
class LazyProgrammer:public Worker {
public:
	void Work() { cout << "Programmer is work"; }
	void TypeWork() {
		int r = rand() % 50;
		if (r % 2 == 0) Work(); else cout << "Еhe programmer is fooling around";
	}
};
