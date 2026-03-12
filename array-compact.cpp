#include <clocale>
#include <iostream>

int main() {
	setlocale(LC_ALL, "");
	
	// Массив для форматирования месяцев
	const char* months[12] = {"Январь","Февраль","Март","Апрель","Май","Июнь","Июль","Август","Сентябрь","Октябрь","Ноябрь","Декабрь"};


	// Инициализация массива
	int month_temperatures[12];
	for (int i = 0; i < 12; i++)
	{
		std::cout << "Температура за " << months[i] << ":\n";
		std::cin >> month_temperatures[i];
	}
	

	// Сама программа
	float medium_temperature = 0.;
	unsigned char min_month = 0;
	unsigned char max_month = 0;

	for (int i = 0; i < 12; i++) {
		medium_temperature += month_temperatures[i];
		if (month_temperatures[i] > month_temperatures[max_month])
			max_month = i;
		if (month_temperatures[i] < month_temperatures[min_month])
			min_month = i;
	}

	medium_temperature /= 12.;

	// Вывод
	std::cout << "Средняя температура по месяцам: " << medium_temperature << "⁰C\n";
	std::cout << "Самый холодный месяц: " << months[min_month] << '\n';
	std::cout << "Самый тёплый месяц: " << months[max_month] << '\n';
	return 0;
}
