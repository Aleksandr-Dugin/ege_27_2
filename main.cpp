#include <iostream>
#include <vector>
using namespace std;

void minimum_sum_distance(){
	/**
		1. считать все числа
		2. вывести все числа
		3. вывести все пары
		4. вывести только достаточно далекие пары
		5. вместо вывода пары - сумма
		6. найти минимальную сумму
	
	*/	

	int N;
	cin >> N;
	vector<int> numbers(N);
	for (int i = 0; i < N; i++){
		cin >> numbers[i]; 
	}
	for (int i = 0; i < N; i++){
		cout << numbers[i] << endl;
	}

}


int main(){

	minimum_sum_distance();
	return 0;
}
