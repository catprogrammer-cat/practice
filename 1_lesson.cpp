#include <iostream>
#include <string>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	const float E = 2.71828182845;

	float y_1, j_1; //varibles for mathematical formula ¹1 
	float z_2, x_2, a_2; //varibles for mathematical formula ¹2 
	float x_3; //varibles for mathematical formula ¹3 
	float x_4 = 11, a_4, b_4; //varibles for mathematical formula ¹4 
	float x_5 = 11; //varibles for mathematical formula ¹4 
	float x_6 = 11, p_6 = 2.6; //varibles for mathematical formula ¹4 

	int choose_formula; //input choose value (angle or radian)

	while (true) {
		cout << "Choose formula:\n" << "  1.F = (2 * sin(0.354 * y_1 + 1)) / (log10(y_1 + 2 * j_1))\n"
			<< "  2.N = (pow((z_2 + pow(z_2*x_2,1/2)),(1/5))) / (pow(E,x_2) + pow(a_2,5) * atan(x_2))\n"
			<< "  3.y = (pow(x_3,2)+2*sin(x_3))/(2*x_3+1) + (pow(x_3,1/2) - cos(x_3) / ((2 * x_3 + 1)) * (log10((pow(x_3, 2) + 1))))\n"
			<< "  4.y = pow(x_4, 1/2) * sin(a_4) + pow(b_4, 1/2) * cos(x_4)\n"
			<< "  5.a = log10(abs(x_5))\n"
			<< "  6.b = x_6 + pow(p_6, 3)\n";
		cin >> choose_formula;
		if (choose_formula == 1) {
			system("CLS");
			cout << "*\n" << "*\n" << "  1.F = (2 * sin(0.354 * y + 1)) / (log10(y + 2 * j))\n" << "*\n" << "*\n";
			cout << "Enter varible Y\n";
			cin >> y_1;
			cout << "Enter varible J\n";
			cin >> j_1;
			float result_formula_1_F = (2 * sin(0.354 * y_1 + 1)) / (log10(y_1 + 2 * j_1));//formula #1
			cout << "Result: " << result_formula_1_F;
			break;
		}
		else if (choose_formula == 2) {
			system("CLS");
			cout << "*\n" << "*\n" << "  2.N = (pow((z + pow(z*x,1/2)),(1/5))) / (pow(E,x) + pow(a,5) * atan(x))\n"<< "*\n";
			cout << "Enter varible Z\n";
			cin >> z_2;
			cout << "Enter varible X\n";
			cin >> x_2;
			cout << "Enter varible A\n";
			cin >> a_2;
			float result_formula_2_N = (pow((z_2 + pow(z_2 * x_2, 1 / 2)), (1 / 5))) / (pow(E, x_2) + pow(a_2, 5) * atan(x_2));//formula #2
			cout << "Result: " << result_formula_2_N;
			break;
		}
		else if (choose_formula == 3) {
			system("CLS");
			cout << "*\n" << "*\n" << "  3.y = (pow(x,2)+2*sin(x) ) / (2*x+1) + (pow(x,1/2) - cos(x) / ((2*x+1)) * (log10((pow(x, 2) + 1))))\n" << "*\n";
			cout << "Enter varible X\n";
			cin >> x_3;
			float result_formula_3_y = (pow(x_3, 2) + 2 * sin(x_3)) / (2 * x_3 + 1) + (pow(x_3, 1 / 2) - cos(x_3) / ((2 * x_3 + 1)) * (log10((pow(x_3, 2) + 1))));//formula #3
			cout << "Result: " << result_formula_3_y;
			break;
		}
		else if (choose_formula == 4) {
			system("CLS");
			cout << "*\n" << "*\n" << "  4.y = pow(x, 1/2) * sin(a) + pow(b, 1/2) * cos(x)\n" << "*\n" << "*\n";
			// x = 11;
			// p = 2.6;
			cout << "The X is constant;\n X = 11\n";
			cout << "Enter varible A\n";
			cin >> a_4;
			cout << "Enter varible B\n";
			cin >> b_4;
			float result_formula_4_y = pow(x_4, 1 / 2) * sin(a_4) + pow(b_4, 1 / 2) * cos(x_4);//formula #4
			cout << "Result: " << result_formula_4_y;
			break;
		}
		else if (choose_formula == 5) {
			system("CLS");
			cout << "*\n" << "*\n" << "  5.a = log10(abs(x))\n" << "*\n" << "*\n";
			// x = 11;
			// p = 2.6;
			cout << "The X is constant;\n X = 11\n";
			float result_formula_5_a = log10(abs(x_5));//formula #5
			cout << "Result: " << result_formula_5_a;
			break;
		}
		else if (choose_formula == 6) {
			system("CLS");
			cout << "*\n" << "*\n" << "  6.b = x + pow(p, 3)\n" << "*\n" << "*\n";
			// x = 11;
			// p = 2.6;
			cout << "The X is constant;\n X = 11\n";
			cout << "The P is constant;\n P = 2.6\n";
			float result_formula_6_b = x_6 + pow(p_6, 3);//formula #6
			cout << "Result: " << result_formula_6_b;
			break;
		}
	}
}










