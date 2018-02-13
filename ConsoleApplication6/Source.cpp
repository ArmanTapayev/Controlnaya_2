#include<stdio.h>
#include<iostream>
#include<locale.h>
#include<math.h>
#include<time.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));
	int n, i, j;
	do
	{

		cout << "Введите номер задания n=";
		cin >> n;
		cout << endl;

		switch (n)
		{

		case 1:
		{
			/*1.    *Написать, программу, которая вычисляет прибыль фирмы за 6 месяцев.
			Пользователь вводит прибыль фирмы за каждый месяц. */

			int x[6], sum = 0;
			cout << "Введите прибыль за месяц: " << endl;
			cout << endl;
			for (i = 0; i < 6; i++)
			{
				cout << "Прибыль на месяц " << i + 1 << " = ";
				cin >> x[i];
				sum += x[i];
				cout << endl;
			}

			cout << "Прибыль фирмы за 6 месяцев: " << sum << endl;

			cout << endl;
			system("pause");
			system("cls");
		}
		break;

		case 2:
		{
			/*2.	*Написать программу, которая выводит одномерный массив в обратном порядке*/
			int x[10];
			cout << "Исходный массив:" << endl;
			for (i = 0; i < 10; i++)
			{
				x[i] = 1 + rand() % 10;
				cout << "x[" << i << "]=" << x[i] << "\t";
			}
			cout << endl;
			cout << "Массив в обратном пордке: " << endl;

			for (i = 9; i >= 0; i--)
			{
				cout << "x[" << i << "]=" << x[i] << "\t";
			}
			cout << endl;
			system("pause");
			system("cls");
		}
		break;

		case 3:
		{
			/*3. *Пользователь вводит длину сторон пятиугольника, каждая сторона заноситься в массив,
			необходимо вычислить периметр пятиугольника (периметр – сумма всех сторон).*/
			int x[5], perimetr = 0;
			cout << "Стороны пятиугольника:" << endl;
			for (i = 0; i < 5; i++)
			{
				x[i] = 1 + rand() % 10;
				cout << "x[" << i << "]=" << x[i] << "\t";
				perimetr += x[i];
			}
			cout << endl;
			cout << "периметр пятиугольника : " << perimetr << endl;
			cout << endl;
			system("pause");
			system("cls");
		}
		break;

		case 4:
		{
			/*4. *Пользователь вводит прибыль фирмы за год (12 месяцев).
			Необходимо определить месяц, в котором прибыль была максимальна и месяц,
			в котором прибыль была минимальна.*/

			int x[12], max = 0, maxi, min = 100000000000, mini;
			cout << "Прибыль за 12 месяцев: " << endl;
			for (i = 0; i < 12; i++)
			{
				x[i] = 1000 + rand() % 1000;
				cout << "Прибыль за месяц " << i + 1 << " = " << x[i] << "  " << endl;
				if (x[i] > max)
				{
					max = x[i];
					maxi = i;
				}
				if (x[i] < min)
				{
					min = x[i];
					mini = i;
				}
			}
			cout << endl;
			cout << "Прибыль была максимальна в месяце " << maxi + 1 << " и равна " << max << endl;
			cout << "Прибыль была минимальна в месяце " << mini + 1 << " и равна " << min << endl;
			system("pause");
			system("cls");
		}
		break;

		case 5:
		{
			/*5. *В одномерном массиве, заполненном случайными числами,
			определить минимальный и максимальный элементы*/
			int x[12], max = 0, maxi, min = 100000000000, mini;
			cout << "Исходный массив: " << endl;
			for (i = 0; i < 12; i++)
			{
				x[i] = 10 + rand() % 100;
				cout << "x[" << i << "]=" << x[i] << "  ";
				if (x[i] > max)
				{
					max = x[i];
					maxi = i;
				}
				if (x[i] < min)
				{
					min = x[i];
					mini = i;
				}
			}
			cout << endl;
			cout << "Минимальный элемент x[" << mini << "]=" << min << endl;
			cout << "Максимальный элемент x[" << maxi << "]=" << max << endl;
			system("pause");
			system("cls");
		}
		break;

		case 6:
		{
			/*6. **Пользователь вводит прибыль фирмы за год (12 месяцев).
			Затем  пользователь вводит диапазон (например, 3 и 6 – поиск между 3-м и 6-м месяцем).
			Необходимо определить месяц, в котором прибыль была максимальна и месяц,
			в котором прибыль была минимальна с учетом выбранного диапазона.*/
			int x[12], max = 0, maxi, min = 100000000000, mini, first, second;
			cout << "Прибыль за 12 месяцев: " << endl;
			for (i = 0; i < 12; i++)
			{
				x[i] = 1000 + rand() % 1000;
				cout << "Прибыль за месяц " << i + 1 << " = " << x[i] << "  " << endl;
			}
			cout << "Введите первый месяц: ";
			cin >> first;
			cout << "Введите второй месяц: ";
			cin >> second;
			for (i = first - 1; i <= second - 1; i++)
			{
				if (x[i] > max)
				{
					max = x[i];
					maxi = i;
				}
				if (x[i] < min)
				{
					min = x[i];
					mini = i;
				}
			}
			cout << "Прибыль была максимальна в месяце " << maxi + 1 << " и равна " << max << endl;
			cout << "Прибыль была минимальна в месяце " << mini + 1 << " и равна " << min << endl;
			system("pause");
			system("cls");
		}
		break;

		case 7:
		{
			/*7. **В одномерном массиве, состоящем из N вещественных чисел вычислить:
			•	Сумму отрицательных элементов.
			•	Произведение элементов, находящихся между min и max элементами.
			•	Произведение элементов с четными номерами.
			•	Сумму  элементов, находящихся между первым и последним отрицательными элементами.
			*/

			int x[12], max = 0, maxi, min = 100000000000, mini, sumneg = 0, multeven = 1, multminmax = 1, first, last, sumfirstlast=0;
			cout << "Исходный массив: " << endl;
				for (i = 0; i < 12; i++)
				{
					x[i] = -10 + rand() % 30;
					cout << "x[" << i << "]=" << x[i] << "  ";

						if (x[i] < 0) sumneg += x[i];

						if (i % 2 == 0) multeven *= x[i];

							if (x[i] > max)
							{
								max = x[i];
								maxi = i;
							}

							if (x[i] < min)
							{
								min = x[i];
								mini = i;
							}
				}

				if (maxi > mini)
				{
					for (i = mini + 1; i < maxi; i++)
					{
						multminmax *= x[i];
					}
				}

				else if (maxi < mini)
				{
					for (i = maxi + 1; i < mini; i++)
					{
						multminmax *= x[i];
					}
				}

				for (i = 0; i < 12; i++)
				{
						if (x[i] < 0)
						{
							first = i;
							break;
						}
						for(j = 11; j>=0; j--)
							if (x[j] < 0)
							{
								last = j;
								break;
							}
				}

				for (i = first+1; i < last; i++)
				{
					sumfirstlast += x[i];
				}

				cout << endl;
				cout << "Сумма отрицательных элементов: " << sumneg << endl;
				cout << "Произведение элементов, находящихся между min["<< mini<<"]="<< min<<" и max["<< maxi<<"]="<< max<<" элементами: " << multminmax << endl;
				cout << "Произведение элементов с четными номерами: " << multeven << endl;
				cout << "Сумма  элементов, находящихся между первым и последним отрицательными элементами: " << sumfirstlast << endl;

			cout << endl;
			system("pause");
			system("cls");
		}
		break;

		case 8:
		{
			/*9. *Написать программу, выполняющую сортировку
			одномерного массива целых чисел методом пузырька.*/

			int x[12];
			int N = 12;
			cout << "Исходный массив: " << endl;

				for (i = 0; i < N; i++)
				{
					x[i] = 10 + rand() % 50;
					cout << "x[" << i << "]=" << x[i] << "  ";
				}

				for (int i = 0; i < (N - 1); i++)
				{
					for (int j = (N - 1); j > i; j--)
					{
						if (x[j - 1] > x[j]) 
						{
							int temp = x[j - 1]; 
							x[j - 1] = x[j];
							x[j] = temp;
						}
					}
				}

			cout << endl;

			cout << "Массив после сортировки: " << endl;

				for (i = 0; i < N; i++)
				{
					cout << "x[" << i << "]=" << x[i] << "  ";
				}

			cout << endl;
			system("pause");
			system("cls");
		}
		break;

		case 9:
		{
			/*10. **Написать программу, выполняющую сортировку одномерного массива целых чисел методом вставок*/

			int x[12];
			int N = 12;

			cout << "Исходный массив: " << endl;

				for (i = 0; i < N; i++)
				{
					x[i] = 10 + rand() % 50;
					cout << "x[" << i << "]=" << x[i] << "  ";
				}

				for (int i = 1; i < N; i++)
				{
					int value = x[i]; 
					int index = i;    
					while ((index > 0) && (x[index - 1] > value))
					{
						
						x[index] = x[index - 1];
						index--;   
					}
					x[index] = value; 
				}

			cout << endl;

			cout << "Массив после сортировки: " << endl;

				for (i = 0; i < N; i++)
				{
					cout << "x[" << i << "]=" << x[i] << "  ";
				}

			cout << endl;
			system("pause");
			system("cls");

		}
		break;

		case 10:
		{
			/*11. ***Написать программу, выполняющую сортировку одномерного массива целых чисел методом быстрого поиска.*/
			int count = 0;
			int k[20];
			int N = 20;
			int key, i;

				for (i = 0; i < N; i++)
				{
					k[i] = 10 + rand() % 100;
				}

				cout << "Исходный массив: " << endl;

				for (int i = 0; i < (N - 1); i++)
				{
					for (int j = (N - 1); j > i; j--)
					{
						if (k[j - 1] > k[j])
						{
							int temp = k[j - 1];
							k[j - 1] = k[j];
							k[j] = temp;
						}
					}
				}

				for (i = 0; i < N; i++)
				{
					cout << "k[" << i << "]=" << k[i] << endl;
				}

				cout << "Введите key: ";
				cin >> key;

				int left = 0;
				int right = 19;

				int search = -1;

				while (left <= right)
				{
					count++;
					int mid = (left + right) / 2;


					if (key == k[mid])
					{
						search = mid;
						break;
					}


					if (key < k[mid])
						right = mid - 1;
					else
						left = mid + 1;
				}

			if (search == -1)
				cout << "Элемент не найден!" << endl;
			else
				cout << "k[" << search << "]=" << k[search] << " (за " << count << " проходов)" << endl;

			cout << endl;
			system("pause");
			system("cls");
		}
		break;

		case 11:
		{
			/*12. ***Написать программу «справочник». Создать два одномерных массива.
			Один массив хранит номера ICQ, второй – телефонные номера.
			Реализовать меню для пользователя:
			a)	отсортировать по номерам ICQ
			b)	отсортировать по номерам телефона
			c)	вывести список пользователей
			d)	выход           */

			int x[12], y[12];
			char z[12];
			int N = 12;
			int n;

				for (i = 0; i < N; i++)
				{
					x[i] = 1000000000 + rand() % 9999999999;  //ICQ
					y[i] = 1000000000 + rand() % 9999999999;  //Телефонные номера
					z[i] = 65+rand()%26;                      // Пользователь
				}

				cout << "Справочник: " << endl;

					for (i = 0; i < N; i++)
					{
						cout << "Пользователь " << z[i] << ";  ICQ = " << x[i] << ";  Телефон " << y[i] << endl;
					}

					cout << endl;

				do
				{
					
						cout << "Для сортировки по номерам ICQ наберите 1." << endl;
						cout << "Для сортировки по номерам телефона наберите 2." << endl;
						cout << "Для сортировки по пользователям наберите 3." << endl;
						cout << "Для выхода наберите 0." << endl;
						cout << "n = ";
						cin >> n;
					switch (n)
					{	
						
						case 1:
						{
							for (int i = 1; i < N; i++)
							{
								int value = x[i]; // запоминаем значение элемента
								int index = i;     // и его индекс
								while ((index > 0) && (x[index - 1] > value))
								{
									// смещаем другие элементы к концу массива пока они меньше index
									x[index] = x[index - 1];
									index--;    // смещаем просмотр к началу массива
								}
								x[index] = value; // рассматриваемый элемент помещаем на освободившееся место
							}
							cout << "Отсортрованные номера по ICQ: " << endl;
							for (i = 0; i < N; i++)
							{
								cout << "ICQ = " << i + 1 << " = " << x[i] << "  " << endl;
							}
							cout << endl;
							system("pause");
							system("cls");
						}
						break;

						case 2:
						{
							for (int i = 1; i < N; i++)
							{
								int value = y[i]; // запоминаем значение элемента
								int index = i;     // и его индекс
								while ((index > 0) && (y[index - 1] > value))
								{
									// смещаем другие элементы к концу массива пока они меньше index
									y[index] = y[index - 1];
									index--;    // смещаем просмотр к началу массива
								}
								y[index] = value; // рассматриваемый элемент помещаем на освободившееся место
							}
							cout << "Отсортрованные номера по телефону: " << endl;
							for (i = 0; i < N; i++)
							{
								cout << "Телефон " << i + 1 << " = " << y[i] << "  " << endl;
							}
							cout << endl;
							system("pause");
							system("cls");
						}
						break;

						case 3:
						{
							for (int i = 1; i < N; i++)
							{
								char value = z[i]; // запоминаем значение элемента
								int index = i;     // и его индекс
								while ((index > 0) && (z[index - 1] > value))
								{
									// смещаем другие элементы к концу массива пока они меньше index
									z[index] = z[index - 1];
									index--;    // смещаем просмотр к началу массива
								}
								z[index] = value; // рассматриваемый элемент помещаем на освободившееся место
							}
							cout << "Отсортрованные по пользователям: " << endl;

							for (i = 0; i < N; i++)
							{
								cout << "Пользователь " << i + 1 << " = " <<z[i] << "  " << endl;
							}
							cout << endl;
							system("pause");
							system("cls");
						}
						break;

					}
				} while (n != 0);

			system("pause");
			system("cls");
			cout << endl;
		}
		break;

		case 12:
		{
			/*15. *Написать программу, которая заполняет одномерный массив из
			10 элементов вещественными числами в диапазоне от 1 до 10 с двумя знаками после запятой.
			а)**количество знаков после запятой вводит пользователь.  */

			double A[10];

			cout << "Введите элементы массива с 2 знаками после запятой: " << endl;

				for (i = 0; i < 10; i++)
				{
					cin >> A[i];
				}

				for (i = 0; i < 10; i++)
				{
					cout << A[i] << "\t";
				}

			cout << endl;
			system("pause");
			system("cls");
		}
		break;

		case 13:
		{
			/*16. *Написать программу, копирующую последовательно
			элементы одного массива размером 10 элементов в 2 массива
			размером 5 элементов каждый.*/

			int A[10], B[5], C[5];
			cout << "Первый массив: " << endl;

				for (i = 0; i < 10; i++)
				{
					A[i] = -10 + rand() % 20;
					cout << A[i] << "\t";
				}

			cout << endl;

			cout << "Второй массив: " << endl;

				for (i = 0; i < 5; i++)
				{
					B[i] = A[i];
					cout << B[i] << "\t";
				}

			cout << endl;

			cout << "Третий массив: " << endl;

				for (i = 5; i < 10; i++)
				{
					C[i] = A[i];
					cout << C[i] << "\t";
				}

			cout << endl;
			system("pause");
			system("cls");
		}
		break;

		case 14:
		{
			/*17. *Написать программу, копирующую последовательно
			элементы 2-х массивов размером 5 элементов каждый
			в один массив размером 10 элементов.*/

			int A[10], B[5], C[5];
			cout << "Первый массив: " << endl;

				for (i = 0; i < 5; i++)
				{
					B[i] = -10 + rand() % 20;
					cout << B[i] << "\t";
					A[i] = B[i];
				}

			cout << endl;

			cout << "Второй массив: " << endl;

				for (i = 0; i < 5; i++)
				{
					C[i] = -10 + rand() % 20;
					cout << C[i] << "\t";
					A[i + 5] = C[i];
				}

			cout << endl;

			cout << "Третий массив: " << endl;

				for (i = 0; i < 10; i++)
				{
					cout << A[i] << "\t";
				}
			cout << endl;
			system("pause");
			system("cls");
		}
		break;

		case 15:
		{
			/*19. *Напишите программу, которая выполняет поэлементную
			сумму двух массивов и результат заносит в третий  массив.*/

			int A[5], B[5], C[5];
			cout << "Первый массив: " << endl;
			for (i = 0; i < 5; i++)
			{
				A[i] = -10 + rand() % 20;
				cout << A[i] << "\t";
			}
			cout << endl;
			cout << "Второй массив: " << endl;
			for (i = 0; i < 5; i++)
			{
				B[i] = -10 + rand() % 20;
				cout << B[i] << "\t";
			}
			cout << endl;

			cout << "Третий массив: " << endl;
			for (i = 0; i < 5; i++)
			{
				C[i] = A[i] + B[i];
				cout << C[i] << "\t";
			}
			cout << endl;
			cout << endl;
			system("pause");
			system("cls");
		}
		break;

		case 16:
		{
			/*
			20. Напишите программу, которая спрашивает у пользователя IP адрес
			(4 цифры, каждая из которых от 0 до 255) и заносит их в массив.
			Выполнить проверку корректности введенных цифр. Результат вывести в
			виде цифр, разделенных точкой (160.1.8.1).*/
			int A[4];
			cout << "Введите IP адрес: ";
			for (i = 0; i < 4; i++)
			{
				while (1)
				{
					cin >> A[i];
					if ((A[i] >= 0) && (A[i] <= 255))
						break;
					else
						cout << "Введите адресс еще раз.";

				}

			}
			cout << "IP адрес: " << A[0] << "." << A[1] << "." << A[2] << "." << A[3] << endl;
			cout << endl;
			system("pause");
			system("cls");
		}
		break;

		case 17:
		{
			/*
			21. **Напишите программу, которая суммирует элементы массива из 10 элементов
			по следующему принципу: первый суммирует с последним; второй –
			с предпоследним и т.д. И заносит сумму в массив из 5 элементов.*/

			int A[10], B[5];
			cout << "Исходный массив: " << endl;
			for (i = 0; i < 10; i++)
			{
				A[i] = 10 + rand() % 20;
				cout << A[i] << "\t";
			}
			cout << endl;
			cout << "Ококнчательный массив: " << endl;
			for (i = 0; i < 5; i++)
			{
				B[i] = A[i] + A[9 - i];
				cout << B[i] << "\t";
			}
			cout << endl;
			system("pause");
			system("cls");
		}
		break;

		case 18:
		{
			/*
			22. *Написать программу, которая спрашивает у пользователя 10 оценок по 5-бальной системе и
			определяет количество 2-ек, 3-ек, 4-ок и 5-ок.
			а)** Оценки вводятся по 12-бальной системе. Двойкой считается оценка ниже 4,
			тройкой – от 4 до 6 и т.д. */

			int A[10], count5 = 0, count4 = 0, count3 = 0, count2 = 0;
			cout << "10 оценок по 5-бальной системе: " << endl;
			for (i = 0; i < 10; i++)
			{
				A[i] = 1 + rand() % 5;
				if (A[i] == 5) count5++;
				if (A[i] == 4) count4++;
				if (A[i] == 3) count3++;
				if (A[i] == 2) count2++;
				cout << A[i] << "\t";
			}
			cout << endl;
			cout << "Количество 2-ек: " << count2 << endl;
			cout << "Количество 3-ек: " << count3 << endl;
			cout << "Количество 4-ек: " << count4 << endl;
			cout << "Количество 5-ек: " << count5 << endl;
			cout << endl;


			cout << "10 оценок по 12-бальной системе: " << endl;

			count5 = 0;
			count4 = 0;
			count3 = 0;
			count2 = 0;


			for (i = 0; i < 10; i++)
			{
				A[i] = 1 + rand() % 12;
				if ((A[i] >= 8) && (A[i] <= 12))  count5++;
				if ((A[i] >= 6) && (A[i] < 8))  count4++;
				if ((A[i] >= 4) && (A[i] < 6))  count3++;
				if (A[i] < 4)  count2++;
				cout << A[i] << "\t";
			}

			cout << "Количество 2-ек: " << count2 << endl;
			cout << "Количество 3-ек: " << count3 << endl; 
			cout << "Количество 4-ек: " << count4 << endl;
			cout << "Количество 5-ек: " << count5 << endl;
		}
		break;

		case 19:
		{
			/*
			23. **Написать программу, которая переворачивает массив
			(первый элемент становиться последним, второй предпоследним и т.д.) */

			int A[10], B[10];
			cout << "Исходный массив: " << endl;
			for (i = 0; i < 10; i++)
			{
				A[i] = 10 + rand() % 20;
				cout <<"A["<<i<<"]="<< A[i] << "\t";
			}
			cout << "Измененный массив: " << endl;
			for (i = 0; i < 10; i++)
			{
				B[i] = A[9 - i];
				cout << "A[" << i << "]=" << B[i] << "\t";
			}
		}
		break;

		}

	} while (n != 0);

}
