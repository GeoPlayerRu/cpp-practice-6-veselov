#include <clocale>
#include <cstdio>

int main() {
	setlocale(LC_ALL, "");

	// Инициализация массива
	int month_temperatures[12];
	for (int i = 0; i < 12; i++)
	{
		// Был не уверен, что можно использовать cout и cin
		// и не был уверен, что можно использовать массив строк, 
		// поэтому использовал switch
		switch (i) {
			case 0:
				printf("Температура за январь:\n");
				break;
			case 1:
				printf("Температура за февраль:\n");
				break;
			case 2:
				printf("Температура за март:\n");
				break;
			case 3:
				printf("Температура за апрель:\n");
				break;
			case 4:
				printf("Температура за май:\n");
				break;
			case 5:
				printf("Температура за июнь:\n");
				break;
			case 6:
				printf("Температура за июль:\n");
				break;
			case 7:
				printf("Температура за август:\n");
				break;
			case 8:
				printf("Температура за сентябрь:\n");
				break;
			case 9:
				printf("Температура за октябрь:\n");
				break;
			case 10:
				printf("Температура за ноябрь:\n");
				break;
			case 11:
				printf("Температура за декабрь:\n");
				break;
			default:
				break;
		}
		scanf("%i",(month_temperatures+i));
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
	printf("Средняя температура по месяцам: %f⁰C\n",medium_temperature);
	switch (min_month) {
		case 0:
			printf("Самый холодный месяц: Январь\n");
			break;
		case 1:
			printf("Самый холодный месяц: Февраль\n");
			break;
		case 2:
			printf("Самый холодный месяц: Март\n");
			break;
		case 3:
			printf("Самый холодный месяц: Апрель\n");
			break;
		case 4:
			printf("Самый холодный месяц: Май\n");
			break;
		case 5:
			printf("Самый холодный месяц: Июнь\n");
			break;
		case 6:
			printf("Самый холодный месяц: Июль\n");
			break;
		case 7:
			printf("Самый холодный месяц: Август\n");
			break;
		case 8:
			printf("Самый холодный месяц: Сентябрь\n");
			break;
		case 9:
			printf("Самый холодный месяц: Октябрь\n");
			break;
		case 10:
			printf("Самый холодный месяц: Ноябрь\n");
			break;
		case 11:
			printf("Самый холодный месяц: Декабрь\n");
			break;
		default:
			break;
	}
	switch (max_month) {
		case 0:
			printf("Самый горячий месяц: Январь\n");
			break;
		case 1:
			printf("Самый горячий месяц: Февраль\n");
			break;
		case 2:
			printf("Самый горячий месяц: Март\n");
			break;
		case 3:
			printf("Самый горячий месяц: Апрель\n");
			break;
		case 4:
			printf("Самый горячий месяц: Май\n");
			break;
		case 5:
			printf("Самый горячий месяц: Июнь\n");
			break;
		case 6:
			printf("Самый горячий месяц: Июль\n");
			break;
		case 7:
			printf("Самый горячий месяц: Август\n");
			break;
		case 8:
			printf("Самый горячий месяц: Сентябрь\n");
			break;
		case 9:
			printf("Самый горячий месяц: Октябрь\n");
			break;
		case 10:
			printf("Самый горячий месяц: Ноябрь\n");
			break;
		case 11:
			printf("Самый горячий месяц: Декабрь\n");
			break;
		default:
			break;
	}
	return 0;
}
