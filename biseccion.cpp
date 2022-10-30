//Programa para aplicar el metodo de bisección
//Elaborado en clase de métodos numéricos con el profesor Marco Aurelio Ramirez
//Alumno. Juan Aguilera Huerta
#include <iostream>
#include <iomanip> //setPrecision, cuantos decimales usaremos
#include <cmath>

#define PRECISION 6
#define INTERVALOS 10
using namespace std;

double f(double x);
void imprimirPuntos(double a, double b);
int main()
{
    cout << setprecision(PRECISION);
    double a, b, tolerancia;    //a y b son nuestro rango
    cout << "Introduce el valor de a: " << endl;
    cin >> a;

    cout << "Introduce el valor de b: " << endl;
    cin >> b;

    imprimirPuntos(a, b);

    cout << "Selecciona los puntos donde hay cambio de signo" << endl;
    cout << "Introduce el valor de a: " << endl;
    cin >> a;

    cout << "Introduce el valor de b: " << endl;
    cin >> b;

    double xr, Ep, xrant;
    int Flag = 0;

    if( f(a) * f(b) > 0)
    {
        cout << "El metodo de biseccion no se puede aplicar" << endl;
        cout << "porque f(" << a << ") y f(" << b << ") tiene el mismo signo" << endl;
    }
    else
    {
        cout << "Escribe la tolerancia: " << endl;
        cin >> tolerancia;
        cout << "\na\tb\tx\tf(a)\t\tf(b)\t\tf(x)\n" << endl;
        do{
            xr = (a + b)/2.0;
            cout << a << "\t" << b << "\t" << xr << "\t";
            cout << f(a) << "\t" << f(b) << "\t" << f(xr) << endl;
            if(Flag == 1)
            {
            Ep = abs((xr-xrant)/(xr))*100;
            }

            if(Flag == 0)
            {
                xrant = xr;
                if(f(xr) * f(a) > 0)
                {
                    a = xr;
                }
                else
                {
                    if(f(xr) * f(b) > 0)
                    {
                        b = xr;
                    }
                }
            }
            else
            {
                if (Ep < 1)
                {
                    cout << "\n\n Para una tolerancia " << tolerancia << " la raiz de f es: " << xr << endl;
                    break;
                }
                else
                {
                        xrant = xr;
                        if(f(xr) * f(a) > 0)
                        {
                            a = xr;
                        }
                        else
                        {
                            if(f(xr) * f(b) > 0)
                            {
                                b = xr;
                            }
                        }
                    }
                }
                Flag = 1;
            }
            while(1); 
        }
        cin.get();
        cin.get();
        return 0;
}

void imprimirPuntos(double a, double b)
{
    int puntos = INTERVALOS + 1;
    double ancho = (b - a) / INTERVALOS;
    cout << endl;
    cout << "\tx\tf(x)\n" << endl;

    for(int i = 0; i < puntos; i++)
    {
        cout << "\t" << a << "\t" <<  f(a) << endl;
        a = a + ancho;
    }
}

double f(double x)
{
    return (5*x*x*x) - (5*x*x) + (6*x)-2;
}