#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <time.h>
#include <chrono>
#include <thread>

//1
//Ввести два целочисленных массива − по 10 элементов в каждом.
//Сформировать новый массив, на четных местах которого будут элементы
//с нечетными индексамииз первого массива, а на нечетных – 
//с четными индексами из второго.
void task1()
{
	int a[10] = { 0 };
	int b[10] = { 0 };
	int y[10] = { 0 };
	int r[10] = { 0 };
	printf("Дано\n");
	for (size_t i = 0; i < 10; i++)
	{
		b[i] = rand() % 100;
		a[i] = rand() % 100;
		printf("a[%d]=%d\t b[%d]=%d\n", i, a[i], i, b[i]);
	}
	printf("Чётное\n");
	int k = 1;
	int s = 1;
	for (size_t i = 0; i < 10; i=i+2)
	{
		y[i] = a[k];
		k = k + 2;
		r[i] = b[s];
		k = s + 2;
		printf("a[%d]=%d\t b[%d]=%d\n", i, y[i], i, r[i]);
	}
	printf("Heчётное\n");
    k = 0;
	s = 0;
	for (size_t i = 1; i < 10; i = i + 2)
	{
		y[i] = a[k++];
		r[i] = b[s++];
		printf("a[%d]=%d\t b[%d]=%d\n", i, y[i], i, r[i]);
	}
}


//2
//Ввести целочисленный массив, состоящий из 17 -
//ти элементов(двузначные целые числа).Вычислить сумму цифр этого массива
void task2()
{
	int  a[17] = { 0 };
	int sum = 0;
	for (size_t i = 0; i < 17; i++)
	{
		a[i] = rand() % 100;
		sum += a[i];
		printf("a[%d] = %d\n", i, a[i]);
	}
	printf("summ_massiv = %d\n", sum);

}

//3
//Ввести два массива X и Y, состоящих из 10 - ти элементов целого типа.
//Сформировать массив S, состоящий из одинаковых элементов исходных массивов
void task3()
{
	int x[10] = { 0 };
	int y[10] = { 0 };
	int s[20] = { 0 };
	for (size_t i = 0; i < 10; i++)
	{
		x[i] = rand() % 100;
		y[i] = rand() % 100;
		printf("x[%d] = %d\t y[%d] = %d\n", i, x[i], i, y[i]);
	}
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t k = 0; k < 10; k++)
		{
			if (x[i] == y[k])
			{
				s[i] = x[i];
			}
		}
		printf("\na[%d] = %d\n", i, s[i]);
	}
}

//4
//Дан массив вещественных чисел Z(16).
//Определить разность между суммой элементов c четными индексами и суммой элементов,
//индексы которых кратны трем
void task4()
{
	int z[16] = { 0 };
int sumch = 0;
int sumk = 0;
int raz;
for (size_t i = 0; i < 16; i++)
{
	z[i] = rand() % 100;
}
for (size_t i = 0; i < 16; i = i + 2)
{
	sumch += z[i];
	for (size_t j = 1; j < 16; j = j + 2)
	{
		sumk += z[j];
	}
}
raz = sumk - sumch;
printf("Сумма чётных = %d\n", sumch);
printf("Сумма кратных = %d\n", sumk);
printf("Разность = %d\n", raz);
}

//5
//Ввести массив, состоящий из 12 элементов действительного типа.
//Расположить элементы в порядке убывания.
//Определить количество  происшедших при этом перестановок.
void task5()
{
	int a[12] = { 0 };
	int x = 0;
	int it = 0;
	int jk = 0;

	for (size_t i = 0; i < 12; i++)
	{
		a[i] = rand() % 100;
		printf("a[%d] = %d\n", i, a[i]);
	}

	for (size_t j = 12; j > 0; j--)
	{
		for (size_t i = 0; i < j; i++)
		{
			if (a[i] < a[i + 1])
			{
				jk = a[i];
				a[i] = a[i + 1];
				a[i + 1] = jk;
				it++;
			}
			printf("%d\n", a[i]);
		}
	}
	printf("колл-перестановок = %d\n", it);

}

//6
//Ввести с клавиатуры целочисленный массив, состоящий из 11 элементов.
//Вычислить сумму нечетных по значению отрицательных элементов
//и заменить элементы кратные трем на эту сумму.
void task6()
{
	int a[11] = { 0 };
	int sum = 0;
	for (size_t i = 0; i < 11; i++)
	{
		a[i] = rand() % 50;
	}
	printf("До");
	for (size_t i = 0; i < 11; ++i)
	{
		a[i] = rand() % 100;
		printf("a[%d] = %d\n", i, a[i]);
		sum = sum + a[i];
		if (a[i] % 3 == 0)
		{
			a[i] *= -1;
			a[i] = sum;
		}
	}
	printf("После \n");
	for (size_t i = 0; i < 11; ++i)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
}

//7
//Дан массив вещественных чисел.Определить элемент массива(значение и индекс),
//который наиболее удален от заданного вещественного числа S.
void task7()
{
	int a[10] = { 0 }, r = 0, sum = 0, k = 0;
	for (size_t i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;
		printf("a[%d] = %d\n", i, a[i]);
		sum += a[i];
		k++;
		if (a[i] < 0)break;
	}
	printf("Kol-vo shagov = %d\n", k);
	printf("summa ellementov = %d\n", sum);
}

//8
//Ввести целочисленный массив, состоящий из 10 элементов.
//Определить сумму и количество элементов, расположенных до первого отрицательного числа
void task8()
{
	int a[20] = { 0 };
	int k = 0;
	int sum = 0;
	for (size_t i = 0; i < 20; i++)
	{
		a[i] = rand() % 100;
		printf("a[%d] = %d\n", i, a[i]);
	}
	for (size_t j = 0; j < 20; j++)
	{
		if (a[j] < a[j++] && a[j--] )
		{
			k++;
		}
	}
	printf("kol-vo min = %d\n", k);

}

//9(10)
//В заданном целочисленном массиве Z(15) положительных,
//отрицательных и нулевых чисел определить сумму и вывести последовательность значений элементов,
//которые расположены между первым отрицательным и нулевым элементами.
void task9()
{
	int lol;
	int z[15] = { 0 };
	for (size_t i = 0; i < 15; i++)
	{
		lol = rand() % 100;
		if (i == 0)
		{
			z[i] = lol;
		}
		else
		{
			for (size_t j = 0; j < 15; j++)
			{
				if (z[i] == lol)
				{
					lol = rand() % 100;
					j = -1;
				}
				z[i] = lol;
			}
		}
		printf("z[%d] = %d\n", i, z[i]);
	}
	
	
}



int main()
{
	srand(time(NULL) + rand());
	setlocale(LC_ALL, "");
	int task = 0;
	int restart = 0;

	do
	{
		printf("-------------------------------------------------------------------------------\n");
		printf("Введите номер задания\n");
		printf("-------------------------------------------------------------------------------\n");
		scanf_s("%d", &task);

		switch (task)
		{
		case 1:
		{
			task1();
		}break;
		case 2:
		{
			task2();
		}break;
		case 3:
		{
			task3();
		}break;
		case 4:
		{
			task4();
		}break;
		case 5:
		{
			task5();
		}break;
		case 6:
		{
			task6();
		}break;
		case 7:
		{
			task7();
		}break;
		case 8:
		{
			task8();
		}break;
		case 9:
		{
			task9();
		}break;
		}


		printf("-------------------------------------------------------------------------------\n");
		printf("Хотите продолжить 1/0\n");
		printf("-------------------------------------------------------------------------------\n");
		scanf_s("%d", &restart);
	} while (restart = 1);

}