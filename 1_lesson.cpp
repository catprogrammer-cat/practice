//my code to practice to make formuls on c++

#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

  int main()
{
	const double pi = 3.14159265359;
	const double e = 2.71828182845;

	double y_1, j_1; //varibles for mathematical formula ¹1 
	double z_2, x_2, a_2; //varibles for mathematical formula ¹2 
	double x_3; //varibles for mathematical formula ¹3 
	double x_4 = 11, a_4, b_4; //varibles for mathematical formula ¹4 
	double x_5 = 11; //varibles for mathematical formula ¹4 
	double x_6 = 11, p_6 = 2.6; //varibles for mathematical formula ¹4 

	int choose_formula; //input choose value (angle or radian)

	while (true) {
		cout << "choose formula:\n" << "  1.f = (2 * sin(0.354 * y_1 + 1)) / (log10(y_1 + 2 * j_1))\n"
			<< "  2.n = (pow((z_2 + pow(z_2*x_2,1/2)),(1/5))) / (pow(e,x_2) + pow(a_2,5) * atan(x_2))\n"
			<< "  3.y = (pow(x_3,2)+2*sin(x_3))/(2*x_3+1) + (pow(x_3,1/2) - cos(x_3) / ((2 * x_3 + 1)) * (log10((pow(x_3, 2) + 1))))\n"
			<< "  4.y = pow(x_4, 1/2) * sin(a_4) + pow(b_4, 1/2) * cos(x_4)\n"
			<< "  5.a = log10(abs(x_5))\n"
			<< "  6.b = x_6 + pow(p_6, 3)\n";
		cin >> choose_formula;
		if (choose_formula == 1) {
			system("cls");
			cout << "*\n" << "*\n" << "  1.f = (2 * sin(0.354 * y + 1)) / (log10(y + 2 * j))\n" << "*\n" << "*\n";
			cout << "enter varible y\n";
			cin >> y_1;
			cout << "enter varible j\n";
			cin >> j_1;
			double result_formula_1_f = (2. * sin(0.354 * y_1 + 1.)) / (log10(y_1 + 2. * j_1));//formula #1
			cout << "result: " << result_formula_1_f;
			break;
		}
		else if (choose_formula == 2) {
			system("cls");
			cout << "*\n" << "*\n" << "  2.n = (pow((z + pow(z*x,1/2)),(1/5))) / (pow(e,x) + pow(a,5) * atan(x))\n"<< "*\n";
			cout << "enter varible z\n";
			cin >> z_2;
			cout << "enter varible x\n";
			cin >> x_2;
			cout << "enter varible a\n";
			cin >> a_2;
			double result_formula_2_n = (pow((z_2 + pow(z_2 * x_2, 1. / 2)), (1. / 5))) / (pow(e, x_2) + pow(a_2, 5) * atan(x_2));//formula #2
			cout << "result: " << result_formula_2_n;
			break;
		}
		else if (choose_formula == 3) {
			system("cls");
			cout << "*\n" << "*\n" << "  3.y = (pow(x,2)+2*sin(x) ) / (2*x+1) + (pow(x,1/2) - cos(x) / ((2*x+1)) * (log10((pow(x, 2) + 1))))\n" << "*\n";
			cout << "enter varible x\n";
			cin >> x_3;
			double result_formula_3_y = (pow(x_3, 2.) + 2. * sin(x_3)) / (2. * x_3 + 1.) + (pow(x_3, 1. / 2.) - cos(x_3) / ((2. * x_3 + 1)) * (log10((pow(x_3, 2.) + 1.))));//formula #3
			cout << "result: " << result_formula_3_y;
			break;
		}
		else if (choose_formula == 4) {
			system("cls");
			cout << "*\n" << "*\n" << "  4.y = pow(x, 1/2) * sin(a) + pow(b, 1/2) * cos(x)\n" << "*\n" << "*\n";
			// x = 11;
			// p = 2.6;
			cout << "the x is constant;\n x = 11\n";
			cout << "enter varible a\n";
			cin >> a_4;
			cout << "enter varible b\n";
			cin >> b_4;
			double result_formula_4_y = pow(x_4, 1. / 2) * sin(a_4) + pow(b_4, 1. / 2) * cos(x_4);//formula #4
			cout << "result: " << result_formula_4_y;
			break;
		}
		else if (choose_formula == 5) {
			system("cls");
			cout << "*\n" << "*\n" << "  5.a = log10(abs(x))\n" << "*\n" << "*\n";
			// x = 11;
			// p = 2.6;
			cout << "the x is constant;\n x = 11\n";
			double result_formula_5_a = log10(abs(x_5));//formula #5
			cout << "result: " << result_formula_5_a;
			break;
		}
		else if (choose_formula == 6) {
			system("cls");
			cout << "*\n" << "*\n" << "  6.b = x + pow(p, 3)\n" << "*\n" << "*\n";
			// x = 11;
			// p = 2.6;
			cout << "the x is constant;\n x = 11\n";
			cout << "the p is constant;\n p = 2.6\n";
			double result_formula_6_b = x_6 + pow(p_6, 3);//formula #6
			cout << "result: " << result_formula_6_b;
			break;
		}
		else {
			cout << "*\n" << "*\n" << "\t Your input is incorrect" << "*\n" << "*\n";
		}
	}
}










