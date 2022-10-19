#include <iostream>
using namespace std;
int main() {
	//Series1?.Даны десять вещественных чисел.Найти их сумму
	
	
	/*int sum = 0;
	int x;
	for (int i = 1; i <= 10; i++) {
		cin >> x;
		sum += x;
	}
	cout << sum << endl;*/


	//Series2.Даны десять вещественных чисел.Найти их произведение.


	/*double prois = 1;
	int i = 1;
	int x;
	while (i <= 10) {
		cin >> x;
		
		prois *= x;
		i++;
	}
	cout << prois << endl;*/


	/*Series3.Даны десять вещественных чисел.Найти их среднее арифметическое.*/	/*double x;	double aref;	int sum = 0;	for (int i = 1; i <= 10; i++) {		cin >> x;		sum += x; 	}	aref = sum / 10.0;	cout << aref << endl;*/


	/*Series4.Дано целое число N и набор из N вещественных чисел.Вывести
	сумму и произведение чисел из данного набора.*/


	/*int N;
	double x;
	double pros = 1;
	double sum = 0;
	cin >> N;
	int i = 1;
	while (i <= N) {
		cin >> x;
		sum += x;
		pros *= x;
		i++;
	}
	cout << sum << " " << pros << endl;*/


	/*Series5.Дано целое число N и набор из N положительных вещественных
	чисел.Вывести в том же порядке целые части всех чисел из данного
	набора(как вещественные числа с нулевой дробной частью), а также
	сумму всех целых частей.*/


	int N;
	cin >> N;
	double x;
	for (int i = 1; i <= N; i++) {
		cin >> x;
		cout << (double)x << endl;
	}
}
