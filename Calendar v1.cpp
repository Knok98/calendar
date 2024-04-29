// Calendar v1.cpp : Tento soubor obsahuje funkci main. Provádění programu se tam zahajuje a ukončuje.
//
// vytvorit kalendar pro dany rok se vstupem roku a 1. dne v roce (po-ne)

/* 1. Vyresit prestupny rok
		prestupny rok ma v unoru 29 dni, normalne ma 28

   2. stridani poctu dnu pro jednotlive mesice
		dny v mesici promena podle toho o jaky mesic se jedna , u unora hodit podminku prestupneho roku

   3. nested loop pro sestaveni tabulky

   4.  VZOR:
		leden 2026
		po	UT	ST	CT	PT	SO	NE
		1	2	3	4	5	6	7
		29	30s
		unor 2026
		...
		*/
#include <iostream>
#include<string>
#include<vector>
#include<iomanip>


size_t first_day{};
size_t year{};
size_t tot_day{};
std::string month_name;
int month{ 1 };


int main()
{
	int first_day{};
	size_t year{};

	int tot_day{};
	std::string month_name;
	int month{ 1 };
	std::cout << "Enter an year and the first day of that year: ";
	std::cin >> year;
	std::cin >> first_day;
	system("cls");
	do {
		switch (month) { 
		case 1: {
			month_name = "January";
			tot_day = 31;
			break; }
		case 2: {
			month_name = "February";
			if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
				tot_day = 29;
			}
			else {
				tot_day = 28;
			}
			break; }
		case 3: {
			month_name = "March";
			tot_day = 31;
			break; }
		case 4: {
			month_name = "April";
			tot_day = 30;
			break; }
		case 5: {
			month_name = "May";
			tot_day = 31;
			break; }
		case 6: {
			month_name = "June";
			tot_day = 30;
			break; }
		case 7: {
			month_name = "July";
			tot_day = 31;
			break; }
		case 8: {
			month_name = "August";
			tot_day = 31;
			break; }
		case 9: {
			month_name = "September";
			tot_day = 30;
			break; }
		case 10: {
			month_name = "October";
			tot_day = 31;
			break; }
		case 11: {
			month_name = "November";
			tot_day = 30;
			break; }
		case 12: {
			month_name = "December";
			tot_day = 31;
			break; }

		}
		std::cout << std::endl;
		std::cout << std::endl;

		std::cout << std::setw(20) << month_name << " " << year << std::endl;

		std::cout << std::endl;
		std::cout << std::setw(5) << "Mo" << std::setw(5) << "Tu" << std::setw(5) << "We" << std::setw(5) << "Th" << std::setw(5) << "Fr" << std::setw(5) << "Sa" << std::setw(5) << "Su";
		int i{ 0 };
		int n;
		int d{ 1 };
		for (i; i <= (tot_day + first_day - 1); ++i) {
		
			if (i >= first_day) {
				if (i == first_day) {
					std::cout << std::setw(5) << d << std::setw(5);
					++d;
				}
				else {
					std::cout << std::setw(5) << d << std::setw(5);
					++d;
				}
			}
			else {
				std::cout << std::setw(5) << " " << std::setw(5);
				;
			}
			n = i % 7;
			if (n == 0) {
				std::cout << std::endl;
			}
		}
			
			++month;

			//den a jaky bude potom
			tot_day %= 7;
			first_day += tot_day;
			if (first_day > 7) {
				first_day -= 7;
			}
			//std::cout << first_day;

			//funguje  den zacatku mesice + mesic a jeho pocet dnu
		
	} while (month <= 12);
	return 0;
}

