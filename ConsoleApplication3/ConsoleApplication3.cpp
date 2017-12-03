// ConsoleApplication3.cpp: определяет точку входа для консольного приложения.//
#include "stdafx.h"#include <vector>using namespace std;
int main(){ for (;;) {  int arraysize1 = 0; int arraysize2 = 0; int workmode = 0;
  printf("Enter arraysize in int variable or enter -1 if you want exit");
  while (scanf_s("%d", &arraysize1) != 1 || arraysize1 <= 0) //Введение размера массива и ранний выход   {   if (arraysize1 == -1)   {    exit(0);   }   scanf_s("%*[^\n]");   printf("Enter arraysize again in int variable");  //С проверкой ввода  }  while (scanf_s("%d", &arraysize2) != 1 || arraysize2 <= 0) //Введение размера массива и ранний выход   {   if (arraysize2 == -1)   {    exit(0);   }   scanf_s("%*[^\n]");   printf("Enter arraysize again in int variable");  //С проверкой ввода  }  int **array = new int * [arraysize1]; //создание массива  for (int i = 0; i < arraysize1; i++) {   array[i] = new int[arraysize2];  }  for (;;)  {   printf("\n"); //Вывод меню
   printf("Enter workmode in int variable");
   printf("\n");
   printf("Workmode 1:Enter the elements");
   printf("\n");
   printf("Workmode 2:Sort elements");
   printf("\n");
   printf("Workmode 3:Show the elements");
   printf("\n");
   printf("Workmode 4:Back to arraysize");
   while (scanf_s("%d", &workmode) != 1 || workmode <= 0 || workmode >= 5) // Получение команды пользователя   {    scanf_s("%*[^\n]");
    printf("Enter workmode again in int variable"); // С проверкой ввода   }
   if (workmode == 1) //Заполнение массива 2 способами   {    printf("Enter 2 if you esnt random or enter 1 if you warnt enter elements");    int secondworkmode = 0;    while (scanf_s("%d", &secondworkmode) != 1 || secondworkmode <= 0 || secondworkmode >= 3)//Запрос способа ввода    {
     scanf_s("%*[^\n]");     printf("Enter arraysize again in int variable"); // С проверкой ввода    }
    if (secondworkmode == 1) //Ввод вручную    {
     printf("Enter elements in int variable");
     for (int i = 0; i < arraysize1; i++)      for (int j = 0; j < arraysize2; j++) {       {        while (scanf_s("%d", &array[i][j]) != 1|| array[i][j]<=-1|| array[i][j] >= 2 )
        {         scanf_s("%*[^\n]");
         printf("Enter element again in int variable"); // С проверкой ввода        }       }      }    }    else if (secondworkmode == 2) // Автоматический случайный ввод    {     for (int i = 0; i < arraysize1; i++)     {      for (int j = 0; j < arraysize2; j++)       {       int z = rand();       if (z >= 10000)        {        z = 0;       }       else        {        z = 1;       }       array[i][j] = z;      }     }    }   }   else if (workmode == 2) // Сортировка массива   {    if (array[0][0] != 1 && array[0][0] != 0)    {     printf("array not created");     break;    }    int thirdworkmode = 0;    printf("Enter 1 if you want know number of sale tikets ");    printf("\n");    printf("Enter 2 if you want know number of sale tikets on line");    while (scanf_s("%d", &thirdworkmode) != 1 || thirdworkmode <= 0 || thirdworkmode >= 3)//Запрос способа ввода    {
     scanf_s("%*[^\n]");     printf("Enter arraysize again in int variable"); // С проверкой ввода    }    if (thirdworkmode == 1)    {     int numberofticets = 0;     for (int i = 0; i < arraysize1; i++)     {      for (int j = 0; j < arraysize2; j++)      {       if (array[i][j] == 1)       {        numberofticets++;       }      }     }     printf("%d", numberofticets);
    }    else if (thirdworkmode == 2)    {     int numerofsaleticets = 0; int numerofunsaleticets = 0;     int line = -1;     printf("Enter nuber of the line");     while (scanf_s("%d", &line) != 1 || line < 0 || line >= arraysize2)//Запрос способа ввода     {
      scanf_s("%*[^\n]");      printf("Enter arraysize again in int variable"); // С проверкой ввода     }     line--;     for (int i = 0; i < arraysize1; i++)     {      if (array[line][i] == 1)      {       numerofsaleticets++;      }      else      {       numerofunsaleticets++;      }
     }printf("%d", numerofsaleticets);     printf("%d", numerofunsaleticets);
    }   }   else if (workmode == 3) //Вывод массива   {    if (array[0][0] != 1 && array[0][0] != 0)     {     printf("array not created");     break;    }    for (int i = 0; i < arraysize1; i++)    {     for (int j = 0; j < arraysize2; j++) {      printf("%d", array[i][j]);      printf("  ");     }     printf("\n");    }       }   else if (workmode == 4) // Выход на экран ввода размера массива   {    break;
    break;   }
  } } return 0;
    return 0;}

