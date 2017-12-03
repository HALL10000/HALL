// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.//
#include "stdafx.h"#include <vector>
using namespace std;
int** entering(int ** arrayx, int &arraysize1, int &arraysize2) { if (arrayx != NULL) {  for (int i = 0; i < arraysize1; i++)   {   delete [] arrayx[i];  }  delete [] arrayx; }
 printf("Enter arraysize in int variable or enter -1 if you want exit");
 while (scanf_s("%d", &arraysize1) != 1 || arraysize1 <= 0) //Введение размера массива и ранний выход  {  if (arraysize1 == -1)  {   for (int i = 0; i < arraysize1; i++)   {    delete[] arrayx[i];   }   delete[] arrayx;
   exit(0);  }  scanf_s("%*[^\n]");  printf("Enter arraysize1 again in int variable");  //С проверкой ввода }
 while (scanf_s("%d", &arraysize2) != 1 || arraysize2 <= 0) //Введение размера массива и ранний выход  {  if (arraysize2 == -1)  {   exit(0);  }  scanf_s("%*[^\n]");  printf("Enter arraysize2 again in int variable");  //С проверкой ввода }
 int** narray = new int* [arraysize1];  for (int i = 0; i < arraysize2; i++)  {  narray[i] = new int[arraysize2]; }
 printf("Enter 2 if you esnt random or enter 1 if you warnt enter elements");
 int secondworkmode = 0;
 while (scanf_s("%d", &secondworkmode) != 1 || secondworkmode <= 0 || secondworkmode >= 3)//Запрос способа ввода {
  scanf_s("%*[^\n]");  printf("Enter arraysize again in int variable"); // С проверкой ввода }
 if (secondworkmode == 1) //Ввод вручную {
  printf("Enter elements in int variable");
  for (int i = 0; i < arraysize1; i++)   for (int j = 0; j < arraysize2; j++) {    {     while (scanf_s("%d", &narray[i][j]) != 1 || narray[i][j] <= -1 || narray[i][j] >= 2)
     {      scanf_s("%*[^\n]");
      printf("Enter element again in int variable"); // С проверкой ввода     }    }   } } else if (secondworkmode == 2) // Автоматический случайный ввод {  for (int i = 0; i < arraysize1; i++)  {   for (int j = 0; j < arraysize2; j++)   {    int z = rand();    if (z >= 10000)    {     z = 0;    }    else    {     z = 1;    }    narray[i][j] = z;   }  } }
 return narray;
}
void getnumbers(int ** arrayx, int arraysize1, int arraysize2) { int thirdworkmode = 0; printf("Enter 1 if you want know number of sale tikets "); printf("\n"); printf("Enter 2 if you want know number of sale tikets on line"); while (scanf_s("%d", &thirdworkmode) != 1 || thirdworkmode <= 0 || thirdworkmode >= 3)//Запрос способа ввода {
  scanf_s("%*[^\n]");  printf("Enter arraysize again in int variable"); // С проверкой ввода } if (thirdworkmode == 1) {  int numberofticets = 0;  for (int i = 0; i < arraysize1; i++)  {   for (int j = 0; j < arraysize2; j++)   {    if (arrayx[i][j] == 1)    {     numberofticets++;    }   }  }  printf("%d", numberofticets);
 } else if (thirdworkmode == 2) {  int numerofsaleticets = 0; int numerofunsaleticets = 0;  int line = -1;  printf("Enter nuber of the line");  while (scanf_s("%d", &line) != 1 || line < 0 || line >= arraysize2)//Запрос способа ввода  {
   scanf_s("%*[^\n]");   printf("Enter arraysize again in int variable"); // С проверкой ввода  }  line--;  for (int i = 0; i < arraysize1; i++)  {   if (arrayx[line][i] == 1)   {    numerofsaleticets++;   }   else   {    numerofunsaleticets++;   }
  }printf("%d", numerofsaleticets);  printf("%d", numerofunsaleticets);
 }}
void showarray(int ** arrayx, int arraysize1, int arraysize2) {  for (int i = 0; i < arraysize1; i++)  {   for (int j = 0; j < arraysize2; j++) {    printf("%d", arrayx[i][j]);    printf("  ");   }   printf("\n");  }
}
bool choice(int ** arrayx, int arraysize1, int arraysize2){ int workmode = 0; printf("\n"); //Вывод меню
 printf("Enter workmode in int variable");
 printf("\n");
 printf("Workmode 1:Sort elements");
 printf("\n");
 printf("Workmode 2:Show the elements");
 printf("\n");
 printf("Workmode 3:Back to arraysize");
 while (scanf_s("%d", &workmode) != 1 || workmode <= 0 || workmode >= 4) // Получение команды пользователя {  scanf_s("%*[^\n]");
  printf("Enter workmode again in int variable"); // С проверкой ввода }
 if (workmode == 1) { getnumbers(arrayx, arraysize1, arraysize2); }
 else if (workmode == 2) { showarray(arrayx, arraysize1, arraysize2); }
 else if (workmode == 3) { return false; }
 return true;}
int main(){ int ** arrayx = NULL; int arraysize1=0, arraysize2=0; for (;;)  {  arrayx = entering(arrayx, arraysize1, arraysize2);  for  (;;)  {   bool isexit = choice(arrayx, arraysize1, arraysize2);
   if (!isexit) { break; }  } }    return 0;}

