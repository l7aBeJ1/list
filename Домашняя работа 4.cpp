#include <iostream>
#include <list>
#include<vector>
using namespace std;
int main()
{
	setlocale(0, "rus");
	list <int> dz4 = { 7,4,8,3,5 };//исходный пример
	for (auto v : dz4)

	{
		cout << v << " ";
	}
	cout << "    Исходный список" << endl;

	dz4.push_back(9);//добавляем элемент в конец списка
	for (auto v : dz4)

	{
		cout << v << " ";
	}
	cout <<"  push_back"<< endl;
	dz4.pop_back();//удаляем последний элемент
	for (auto v : dz4)

	{
		cout << v << " ";
	}
	cout <<"    pop_back"<< endl;
	dz4.push_front(15);//давляем 1 элемент в списке(через команду insert можно добавить в любом месте списка)
	for (auto v : dz4)

	{
		cout << v << " ";
	}
	cout <<" push_front"<< endl;
	dz4.pop_front();//удаляем 1 элемент
	for (auto v : dz4)

	{
		cout << v << " ";
	}
	cout <<"    pop_front"<< endl;
	auto iter = dz4.cbegin();
	dz4.insert(++++++++iter,1,33);//смещаем позицию в списке на 1 единицу вправо за каждых "++" и влево за каждых "--", за нечетное кол. будет ошибка. Сейчас у числа индекс 4
	for (auto v : dz4)

	{
		cout << v << " ";
	}
	cout <<" insert" <<endl;
	auto begin = dz4.begin();// указатель на первый элемент
	dz4.erase(++++++++begin);//указываем для удаления 4 элемент(33)
	for (auto v : dz4)

	{
		cout << v << " ";
	}
	cout << "    erase" << endl;
	if (dz4.empty())//empty по условию проверяет пустой список или нет
		cout << "The list is empty" << endl;
	else
		cout << "The list is not empty" << endl;

		int size = dz4.size();
		{
			cout << dz4.size();
		}
		cout << " size" << endl;

		int first = dz4.front();//показывает первый элемент
		cout << dz4.front();
		cout << " front" << endl;

		 first = dz4.back();//показывает последний элемент
		cout << dz4.back();
		cout << " back" << endl;


	dz4.clear();//удаляем все элементы
	for (auto v : dz4)

	{
		cout << v << " ";
	}
	cout << "  clear" << endl;
	return 0;
}