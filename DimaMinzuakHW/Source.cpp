#include <iostream>
#include <stdlib.h>
#include <string>
#include <time.h>
#include <iomanip>  // чтобы работал precision
#include <math.h>  // функции модуля числа, синуса, косинуса и прочее здесь


using namespace std; //автоприменение std
using std::cout;
using std::cin;
using std::endl;


 int main () {
	 std::cout << "           AiP       " << std::endl
		 << "  Homework 07/03/2002" << std::endl
		 << "         Minzuak Dima" << std::endl
		 << "                  #9 " << std::endl
		 << "                     " << std::endl;



	//Задача 1

	/* std::cout << "    ****  " << std::endl
			   << "   *   *  " << std::endl
			   << "   *   *  " << std::endl
			   << "  *    *  " << std::endl
			   << "**********" << std::endl
			   << "*        *" << std::endl;

	 std::getchar();  
	 std::getchar();*/



	 //Задача 2(i)/8-угольни

	/* float a,P,S;
	 std::cout << "Write A: ";
	 std::cin >> a;

	 P = 8 * a;
	 S = 2 * a * a * (1 + sqrt(2));
	 std::cout << "            " << std::endl
		 << "a=" << a << std::endl
		 << "P=" << P << std::endl
		 << "S=" << S << std::endl;*/
		 
	

	 //Задача 7

  /*float a,P,S;
	 std::cout << "Write A: ";
	 std::cin >> a;

	 P = a* a;
	 S = P*a;
	 std::cout << "            " << std::endl
		 << "a=" << a << std::endl
		 << "P=" << P << std::endl
		 << "S=" << S << std::endl;*/



	  //Задача 8(C)

	 /*float x1, P1, S1,x2, P2, S2;
	 
	 x1 = 1.7;
	 P1 = x1 + 1;
	 S1 = P1 * P1 + 3 * P1;
	 x2 = 3;
	 P2 = x2 + 1;
	 S2 = P2 * P2 + 3 * P2;
	 std::cout << "            " << std::endl
		 << "x1=" << x1 << std::endl
		 << "P1=" << P1 << std::endl
		 << "S1=" << S1 << std::endl 
		 << "         " << std::endl
		 << "x2=" << x2 << std::endl
		 << "P2=" << P2 << std::endl
		 << "S2=" << S2 << std::endl
		 << "         " << std::endl
		 << "Answer:    S1=" <<S1<<"      S2="<<S2<< std::endl;*/



	 //Задача 9(i)

	/* float S,M,H,D,W;

	 std::cout << "seconds: ";
	 std::cin >> S;
	 std::cout << "           " << std::endl;
	 M = S / 60;
	 H = M/60;
	 D = H/24;
	 W = D/7;
	 
	 std::cout << "+--------------------+--------------------+-------------------+-------------------+" << std::endl
			   << "|       minutes      |       hours        |        days       |        weeks      |" << std::endl
			   << "+--------------------+--------------------+-------------------+-------------------+" << std::endl
			   << "|       " << M 
		       << "         |     "<<H
		       << "       |       "<<D
		       << "     |     "  << W
			   << "       |" << std::endl
			   << "+--------------------+--------------------+-------------------+-------------------+" << std::endl;*/



		//Задача 10

	 /*float a,b,c,Max,Min;


	 std::cout << "Number1=";
	 std::cin >> a;

	 std::cout<<std::endl << "Number2=";
	 std::cin >> b;
		
	 std::cout << std::endl << "Number3=";
	 std::cin >> c;

	switch (a > b) {
	case 1:
		Max =(float) a;
		break;
	case 0:
		Max =(float) b;
		break;
	}
	switch (Max < c) {
	case 1:
		Max =(float) c;
		break;
	case 0:
		break;
	}
	Max = Max + 5;

	switch (a < b) {
	case 1:
		Min = (float)a;
		break;
	case 0:
		Min = (float)b;
		break;
	}
	switch (Min > c) {
	case 1:
		Min = (float)c;
		break;
	case 0:
		break;
	}
	Min = Min - 3;

	cout << "Max number - " << Max << endl;
	cout << "Min number - " << Min << endl;*/

 
 
	 return 0;
 }