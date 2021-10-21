#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <time.h>
#include <stdio.h>
using namespace std;
struct date
{
	int day; //: 5;
	int mounth; //: 5; 
	int year; //: 11;
};

struct Person
{
	char Name[25];
	char Surname[50];
	char Patronmic[50];
	date Birthday;
};

void goodswap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}

int main()
{
	setlocale(LC_ALL, "Rus");				
	const int  n = 10;//Кол-во изберателей
	Person spisok[n];
	date data[1];
	int leapyear;
	int maxmounth = 12;
	int maxday = 0;
	int flag = 0;
	cout << "Введите текущую дату\n";
	for (int i = 0; i < 1; i++)
	{
		cout << "Год\n";
		cin >> data[i].year;
		if (data[i].year % 4 == 0)
		{
			if (data[i].year % 100 == 0)
			{
				if (data[i].year % 400 == 0)
				{
					leapyear = 1;
				}
				else
				{
					leapyear = 0;
				}
			}
			else
			{
				leapyear = 0;
			}
		}
		else
		{
			leapyear = 0;
		}

		cout << "Месяц\n";
		cin >> data[i].mounth;
		flag = 0;
		do
		{
			if (data[i].mounth > maxmounth)
			{
				data[i].mounth = 0;
				cout << "\nМесяц  не может быть больше кол-ва месяцов\n";
				cout << "\nВведите еще раз\n";
				cout << "Месяц\n";
				cin >> data[i].mounth;
			}
			else
			{
				flag = 1;
			}
		} while (flag == 0);

		if (data[i].mounth == 1)
		{
			maxday = 31;
		}
		if (leapyear == 1 && data[i].mounth == 2)
		{
			maxday = 29;
		}
		if (leapyear == 0 && data[i].mounth == 2)
		{
			maxday = 28;
		}
		if (data[i].mounth == 3)
		{
			maxday = 31;
		}
		if (data[i].mounth == 4)
		{
			maxday = 30;
		}
		if (data[i].mounth == 5)
		{
			maxday = 31;
		}
		if (data[i].mounth == 6)							
		{
			maxday = 30;
		}
		if (data[i].mounth == 7)
		{
			maxday = 31;
		}
		if (data[i].mounth == 8)
		{
			maxday = 31;
		}
		if (data[i].mounth == 9)
		{
			maxday = 30;
		}
		if (data[i].mounth == 10)
		{
			maxday = 31;
		}
		if (data[i].mounth == 11)
		{
			maxday = 30;
		}
		if (data[i].mounth == 12)
		{
			maxday = 31;
		}



		cout << "День\n";
		cin >> data[i].day;
		flag = 0;
		do
		{
			if (data[i].day > maxday)
			{
				data[i].day = 0;
				cout << "\nДата не может быть больше кол-ва дней в месяце\n";
				cout << "\nВведите еще раз\n";
				cout << "День\n";
				cin >> data[i].day;
			}
			else
			{
				flag = 1;
			}
		} while (flag == 0);
	}

	cout << "Сегодня ";
	char name_mounth[12][11]{" Января "," Февраля "," Марта "," Апреля "," Мая ", "Июня "," Июля "," Августа "," Сентября "," Октября "," Ноября "," Декабря "};
	for (int i = 0; i < 1; i++)
	{
		cout  << data[i].day;


		if (data[i].mounth == 1)
		{
			cout << name_mounth[0];
		}
		if (leapyear == 1 && data[i].mounth == 2)
		{
			cout << name_mounth[1];
		}
		if (data[i].mounth == 3)
		{
			cout << name_mounth[2];
		}
		if (data[i].mounth == 4)
		{
			cout << name_mounth[3];
		}
		if (data[i].mounth == 5)
		{
			cout << name_mounth[4];
		}
		if (data[i].mounth == 6)
		{
			cout << name_mounth[5];
		}
		if (data[i].mounth == 7)
		{
			cout << name_mounth[6];
		}
		if (data[i].mounth == 8)
		{
			cout << name_mounth[7];
		}
		if (data[i].mounth == 9)
		{
			cout << name_mounth[8];
		}
		if (data[i].mounth == 10)
		{
			cout << name_mounth[9];
		}
		if (data[i].mounth == 11)
		{
			cout << name_mounth[10];
		}
		if (data[i].mounth == 12)
		{
			cout << name_mounth[11];
		}

		cout << data[i].year<<" Года ";
	}


	for (int i = 0; i < n; i++)
	{
		cout << "\nВведите: ";
		cout << "\nИмя " << i + 1 << " голосуещего\n";
		cin >> spisok[i].Name;
		cout << "\nФамилия " << i + 1 << " голосуещего\n";
		cin >> spisok[i].Surname;
		cout << "\nОтчество  " << i + 1 << " голосуещего\n";
		cin >> spisok[i].Patronmic;

		cout << "Год рождения " << i + 1 << " голосуещего\n";
		cin >> spisok[i].Birthday.year;
		flag = 0;
		do
		{
			if (spisok[i].Birthday.year > data[0].year)
			{
				cout << "\nГод рождения не может быть больше текущей даты\n";
				cout << "\nВведите еще раз\n";
				cout << "Год рождения " << i + 1 << " голосуещего\n";
				cin >> spisok[i].Birthday.year;
			}
			else
			{
				flag = 1;
				break;
			}
		} while (flag == 0);

		flag = 0;
		do
		{
			if (spisok[i].Birthday.year + 18 > data[0].year)
			{
				spisok[i].Birthday.year = 0;
				cout << "\nНесовершенно летние не могут учавствовать в выборах!\n";
				cout << "\nВведите еще раз\n";
				cout << "Год рождения " << i + 1 << " голосуещего\n";
				cin >> spisok[i].Birthday.year;
			}
			else
			{
				flag = 1;
			}
		} while (flag == 0);




		cout << "Месяц рождения " << i + 1 << " голосуещего(Вводите одну цыфру пример:не 08 а 8)\n";  // Вводить не 01, 02, а 1, 2 иначе не будет работать условие проверяющие кол-во дней в месяце
		cin >> spisok[i].Birthday.mounth;

		flag = 0;
		do
		{
			if (spisok[i].Birthday.mounth > maxmounth)
			{
				spisok[i].Birthday.mounth = 0;
				cout << "\nМесяц рождения не может быть больше кол-ва месяцов\n";
				cout << "\nВведите еще раз\n";
				cout << "Месяц рождения " << i + 1 << " голосуещего\n";  
				cin >> spisok[i].Birthday.mounth;
			}
			else 
			{
				flag = 1;
			}
		} while (flag == 0);

		flag = 0;
		do
		{
			if (spisok[i].Birthday.mounth > data[0].mounth && spisok[i].Birthday.year >= data[0].year)
			{
				spisok[i].Birthday.mounth = 0;
				cout << "\nМесяц рождения не может быть больше текущей даты\n";
				cout << "\nВведите еще раз\n";
				cout << "Месяц рождения " << i + 1 << " голосуещего\n";
				cin >> spisok[i].Birthday.mounth;
			}
			else
			{
				flag = 1;
			}
		} while (flag == 0);

		flag = 0;
		cout << "День рождения " << i + 1 << " голосуещего (Вводите одну цыфру пример: не 01 а 1)\n";
		cin >> spisok[i].Birthday.day;
		do
		{
			if (spisok[i].Birthday.day > maxday)
			{
				spisok[i].Birthday.day = 0;
				cout << "\nДень рождения не может быть больше кол-ва дней в месяце\n";
				cout << "\nВведите еще раз\n";
				cout << "День рождения " << i + 1 << " голосуещего\n";
				cin >> spisok[i].Birthday.day;
			}
			else
			{
				flag = 1;
			}
		} while (flag == 0);

		flag = 0;
		do
		{
			if (spisok[i].Birthday.day > data[0].day && spisok[i].Birthday.mounth >= data[0].mounth && spisok[i].Birthday.year >= data[0].year)
			{
				spisok[i].Birthday.day = 0;
				cout << "\nДень рождения не может быть больше текущей даты\n";
				cout << "\nВведите еще раз\n";
				cout << "День рождения " << i + 1 << " голосуещего\n";
				cin >> spisok[i].Birthday.day;
			}
			else
			{
				flag = 1;
			}
		} while (flag == 0);
	}

	cout << "\n";
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				char temp[100];
				if (static_cast<int>(spisok[j].Surname[0]) > static_cast<int> (spisok[i].Surname[0]))
				{
					strcpy(temp, spisok[i].Surname);
					strcpy(spisok[i].Surname, spisok[j].Surname);
					strcpy(spisok[j].Surname, temp);

					strcpy(temp, spisok[i].Name);
					strcpy(spisok[i].Name, spisok[j].Name);
					strcpy(spisok[j].Name, temp);

					strcpy(temp, spisok[i].Patronmic);
					strcpy(spisok[i].Patronmic, spisok[j].Patronmic);
					strcpy(spisok[j].Patronmic, temp);

					goodswap(spisok[i].Birthday.day, spisok[j].Birthday.day);

					goodswap(spisok[i].Birthday.mounth, spisok[j].Birthday.mounth);

					goodswap(spisok[i].Birthday.year, spisok[j].Birthday.year);

				}
			}
		}

	cout << "\n";

	FILE* f;
	const char* path = "F:\\Spisok_izberatelei.txt";

	if ((fopen_s(&f, path, "w")) != NULL)
	{
		cout << "Не удалось создать файл";
	}
	else
	{
		for (int i = 0; i < n; i++)
		{

			fprintf(f, "%s ", "Голосующий номер-");
			fprintf(f, "%1d ", i + 1);
			fprintf(f, "\n");
			fprintf(f, "%s ", "Имя: ");
			fprintf(f, "%s ", spisok[i].Name);
			fprintf(f, "\n");
			fprintf(f, "%s ", "Фамилия: ");
			fprintf(f, "%s ", spisok[i].Surname);
			fprintf(f, "\n");
			fprintf(f, "%s ", "Отчество: ");
			fprintf(f, "%s ", spisok[i].Patronmic);
			fprintf(f, "\n");
			fprintf(f, "%s ", "День рождения: ");
			fprintf(f, "%1d ", spisok[i].Birthday.day);
			fprintf(f, "\n");
			fprintf(f, "%s ", "Месяц рождения: ");
			fprintf(f, "%1d ", spisok[i].Birthday.mounth);
			fprintf(f, "\n");
			fprintf(f, "%s ", "Год рождения: ");
			fprintf(f, "%1d ", spisok[i].Birthday.year);
			fprintf(f, "\n");
		}

		fclose(f);
		if (fclose(f) == EOF)
		{
			cout << "Файл готов и закрыт";
		}
		else
		{
			cout << "Файл не закрыт";
		}
	}

	return 0;
}
