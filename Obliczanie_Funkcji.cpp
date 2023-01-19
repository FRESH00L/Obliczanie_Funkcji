#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	double x, a, b, c;
	char funkcja;
	double wynik, obl;

	cout << "Podaj wartości zmiennych, w kolejności: x, a, b, c\n"; cin >> x >> a >> b >> c;
	cout << "Podano wartości:\n x = " << x << "\n a = " << a << "\n b = " << b << "\n c = " << c << endl;

	const double D = 2.5;
	const double E = 5 * 3.1415 * sqrt(5);
	const double e = 2.7182;

	cout << "Wybierz z poniższych, funkcję jaką wykonać ma program:\n f, g, h" << endl;
	cin >> funkcja;

	switch (funkcja)
	{
	case 'f':
		if (a == -5 && c <= 0)
		{
			cout << "Nie można dzielić przez zero, oraz dla podanych zmiennych, liczba logarytmowana jest mniejsza lub równa 0.\nWprowadź inną wartość dla zmiennej a oraz zmiennej c.\n";
		}
		else if (a == -5)
		{
			cout << "Nie można dzielić przez zero, wprowadź inną wartość dla zmiennej a.\n" << endl;
			return 1;
		}
		else if (c <= 0)
		{
			cout << "Dla podanych zmiennych, liczba logarytmowana jest mniejsza lub równa 0.\nProszę wprowadzić takie dane, aby liczba ta była dodatnia.";
			return 1;
		}
	DEFAULT: wynik = E + D * pow((2 * (b / (5.0 + a)) * x + log(c)), (e + (x / 2.0)));
		cout << setprecision(2) << fixed << "f(x) = " << wynik << ";"; break;
	case 'g':

		obl = abs(2.5 * x + b);

		if (a + obl < 0)
		{
			cout << "Dla podanych zmiennych wartość pod pierwiastkiem jest ujemna.\nProszę wprowadzić inne dane.";
			return 1;
		}

		wynik = pow(obl, 1.0 / 6.0);
		cout << setprecision(2) << fixed << "g(x) = " << wynik << ";"; break;
	case 'h':
		if (a * x + b == 0)
		{
			cout << "Dla wprowadzonych zmiennych wartość mianownika jest równa zeru.\nProszę wprowadzić inną wartość zmiennych." << endl;
			return 1;
		}
		wynik = (D * cos(a * x - b)) / (E * sin(a * x + b));
		cout << setprecision(2) << fixed << "h(x) = " << wynik << ";"; break;


	default:
		goto DEFAULT;
	}
}

