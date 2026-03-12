#include <clocale>
#include <iostream>
#include <string>

int main(){
	setlocale(LC_ALL, "");

	int n,m;
	std::string processed_string;

	std::cout << "Введите обрабатываемую строку\n";
	std::getline(std::cin,processed_string);

	std::cout << "Введите M и N (счёт начинается с первого слова, а не нулевого)\n";
	std::cin >> m >> n;
	
	if(m > n) {
		std::cout << "M больше чем N, интервал не верный. Выхожу";
		return 1;
	}

	std::string result;
	unsigned int word_count = 0;

	int left_pointer = -1; // Левый указатель на начало удаляемых слов
	int right_pointer = -1; // Правый указатель на пробел после последнего удаляемого слова
	
	bool word_started = false; // Флаг для игнорирования лишних пробелов при подсчёте слов
	
	for(int i = 0; i < processed_string.length(); i++){
		if (processed_string[i] == ' ' && word_started == true){
			word_started = false;
		}
		else if (processed_string[i] != ' ' && word_started == false){
			word_started = true;
			word_count++;
		}


		if (word_count >= m && left_pointer == -1){
			left_pointer = i;
		}
		if (word_count >= n) {
			right_pointer = i;
			break;
		}
	}

	if (right_pointer == -1){
		std::cout << "Интервал больше, чем слов в строке. Выхожу";
		return 1;
	}

	result = processed_string.substr(0,left_pointer)+processed_string.substr(right_pointer,processed_string.length()-right_pointer);
	std::cout << result;

	return 0;
}
