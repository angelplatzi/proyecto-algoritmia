#include <iostream>
#include <stdlib.h>
#include <cmath>
using namespace std;

//funcion de menus
void menu();
void submenu_Areas();
void submenu_Volumenes();
void submenu_Temperaturas();
void submenuMonedas();
void submenuArreglos_Matrices();
void submenuVarios();

//funcion de las operaciones
//Funciones Áreas:
void AreaTriangulo();
void AreaCirculo();
void AreaRectangulo();
void AreaCuadrado();

//Funcion Volúmenes
void VolumenEsfera();
void VolumenParalelepipedo();
void VolumenCubo();

//Funciones Temperaturas
void Tempe_CelsiusKelvin();
void Tempe_CelsiusFarenh();
void Tempe_FarenhCelsius();

//Funciones Monedas
void Moneda_PesoDolar();
void Moneda_PesoEuro();
void Moneda_DolarPeso();
void Moneda_EuroPeso();
void Moneda_EuroDolar();
void Moneda_DolarEuro();

//Funcion Arreglos y matrices
void OrdenArreglo();
void BuscarArreglo();
void SumaMatrices();
void MultiplicacionMatrices();
void BuscarMatrices();

//funcion varios
void DistanciaPuntos();
void RaicesFuncionCuadratica();
void Factorial();
void Fibonacci();
void Primo();


int main()
{
    menu();

    return 0;
}


void menu() //menu principal

{

    int opcion = 0;
    bool repetir = true;



    do
    {
        system("clear||cls");

        cout<< "\n\t\t\t\t\t  Hola este es nuestro sistema de menu " <<endl;
        cout << "\t\t\t\t\t----------------------------------------" << endl;

        cout<< "\t\t\t\t\t\tHecho por Jhojan y  Angel " <<endl;
        cout<< "\n" <<endl;
        cout<< " Te presentamos un menu con opciones Selecciona la necesaria  " <<endl;
        cout<< " [1] Areas  " <<endl;
        cout<< " [2] Volumenes  " <<endl;
        cout<< " [3] Temperaturas  " <<endl;
        cout<< " [4] Monedas  " <<endl;
        cout<< " [5] Arreglos y Matrices  " <<endl;
        cout<< " [6] Varios  " <<endl;
        cout<< " [7] Salir  " <<endl;
        cout<< " Ingrese una opcion  " <<endl;
        cin>>opcion;
        system("clear||cls");

        switch (opcion)
        {
            case 1:submenu_Areas();
                break;

            case 2:submenu_Volumenes();
                break;

            case 3:submenu_Temperaturas();
                break;

            case 4:submenuMonedas();
                break;

            case 5:submenuArreglos_Matrices();
                break;

            case 6:submenuVarios();
                break;

            case 7: repetir = false;
                break;

            default:
                break;
        }
    } while (repetir & opcion<=7);

}

void submenu_Areas() //sub menu de areas encontramos triangulos y demas

{
    int opcion = 0;
    bool repetir = true;

    do
    {

        cout<<endl;

        cout<< " Escogiste Areas, Estas son nuestras opciones  " <<endl;
        cout<< " [1] Area triangulo  " <<endl;
        cout<< " [2] Area circulo  " <<endl;
        cout<< " [3] Area rectangulo  " <<endl;
        cout<< " [4] Area cuadrado  " <<endl;
        cout<< " [5] Volver al menu  " <<endl;
        cout<< " Ingrese una opcion  " <<endl;
        cin>>opcion;
        system("clear||cls");
        switch (opcion)
        {
            case 1: AreaTriangulo();
                break;
            case 2: AreaCirculo();
                break;
            case 3: AreaRectangulo();
                break;
            case 4: AreaCuadrado();
                break;
            case 5: repetir = false;
                break;

            default:
                break;
        }
    } while (repetir & opcion<=5);


    system("clear||cls");

}

void submenu_Volumenes() //sub menu volumenes de la esfera y otras figuras

{


    int opcion = 0;
    bool repetir = true;

    do
    {

        cout<<endl;

        cout<< " Escogiste Volumenes, Estas son nuestras opciones  " <<endl;
        cout<< " [1] Volumen Esfera  " <<endl;
        cout<< " [2] Volumen Paralelepipedo  " <<endl;
        cout<< " [3] Volumen Cubo  " <<endl;
        cout<< " [4] Volver al menu  " <<endl;
        cout<< " Ingrese una opcion  " <<endl;
        cin>>opcion;
        system("clear||cls");
        switch (opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4: repetir = false;
                break;

            default:
                break;
        }
    } while (repetir & opcion<=4);


    system("clear||cls");

}

void submenu_Temperaturas() //sub menu de las distintas mediciones de temperatura

{
    int opcion = 0;
    bool repetir = true;

    do
    {
        cout<<endl;

        cout<< " Escogiste Temperaturass, Estas son nuestras opciones  " <<endl;
        cout<< " [1] De Celsius a Kelvin  " <<endl;
        cout<< " [2] De Kelvin a Fahrenheit  " <<endl;
        cout<< " [3] De Fahrenheit a Celsius " <<endl;
        cout<< " [4] Volver al menu  " <<endl;
        cout<< " Ingrese una opcion  " <<endl;
        cin>>opcion;
        system("clear||cls");
        switch (opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4: repetir = false;
                break;

            default:
                break;
        }
    } while (repetir & opcion<=4);


    system("clear||cls");

}

void submenuMonedas()//pasar de pesos a otras monedas y mas

{

    int opcion = 0;
    bool repetir = true;

    do
    {
        cout<<endl;

        cout<< " Escogiste Monedas, Estas son nuestras opciones  " <<endl;
        cout<< " [1] De Pesos a Dolar  " <<endl;
        cout<< " [2] De pesos a Euros  " <<endl;
        cout<< " [3] De Dolar a Pesos  " <<endl;
        cout<< " [4] De Euros a Pesos  " <<endl;
        cout<< " [5] De Euros a Dolar  " <<endl;
        cout<< " [6] De Dolar a Euros " <<endl;
        cout<< " [7] Volver al menu  " <<endl;

        cout<< " Ingrese una opcion  " <<endl;
        cin>>opcion;
        system("clear||cls");
        switch (opcion)
        {
            case 1: Moneda_PesoDolar();
                break;
            case 2: Moneda_PesoEuro();
                break;
            case 3:Moneda_DolarPeso();
                break;
            case 4:Moneda_EuroPeso();
                break;
            case 5:Moneda_EuroDolar();
                break;
            case 6:Moneda_DolarEuro();
                break;
            case 7: repetir = false;
                break;


            default:
                break;
        }
    } while (repetir & opcion<=7);


    system("clear||cls");
}

void submenuArreglos_Matrices()//arreglos matrices entre otros

{

    int opcion = 0;
    bool repetir = true;

    do
    {
        cout<<endl;

        cout<< " Escogiste Arreglos y matrices, Estas son nuestras opciones  " <<endl;
        cout<< " [1] Ordenar un Arreglo  " <<endl;
        cout<< " [2] Buscar un valor en un Arreglo  " <<endl;
        cout<< " [3] Suma de Matrices  " <<endl;
        cout<< " [4] Multiplicacion de Matrices  " <<endl;
        cout<< " [5] Buscar un valor en una Matriz  " <<endl;
        cout<< " [6] Volver al menu  " <<endl;
        cout<< " Ingrese una opcion  " <<endl;
        cin>>opcion;
        system("clear||cls");
        switch (opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6: repetir = false;
                break;

            default:
                break;
        }
    } while (repetir & opcion<=6);


    system("clear||cls");
}

void submenuVarios() //desde fibonacci y mas

{
    int opcion = 0;
    bool repetir = true;

    do
    {
        cout<<endl;

        cout<< " Escogiste Varios, Estas son nuestras opciones  " <<endl;
        cout<< " [1] Distancia entre dos Puntos  " <<endl;
        cout<< " [2] Raices de una funcion cuadratica  " <<endl;
        cout<< " [3] Factorial  " <<endl;
        cout<< " [4] Fibonacci  " <<endl;
        cout<< " [5] Primo  " <<endl;
        cout<< " [6] Volver al menu  " <<endl;
        cout<< " Ingrese una opcion  " <<endl;
        cin>>opcion;
        system("clear||cls");
        switch (opcion)
        {
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6: repetir = false;
                break;

            default:
                break;
        }
    } while (repetir & opcion<=6);


    system("clear||cls");

}


//Funciones Áreas:
void AreaTriangulo()
{
    float lado1 = 0;
    float lado2 = 0;
    float lado3 = 0;

    cout<<"ingrese la medida en metros del lado #1"<<endl;
    cin>>lado1;
    cout<<"ingrese la medida en metros del lado #2"<<endl;
    cin>>lado2;
    cout<<"ingrese la medida en metros del lado #3"<<endl;
    cin>>lado3;

    float sp=(lado1+lado2+lado3)/2;
    float spl=(sp-lado1)*(sp-lado2)*(sp-lado3);
    if(spl>0)
    {
        float areat= sqrt(sp*spl);
        cout<<"el area del triangulo es "<<areat<<endl;
    }

    else{
        cout<<"las medidas ingresadas no coinciden con las de un triangulo"<<endl;
    }

}


void AreaCirculo()
{
    float radio = 0;
    cout<<"Ingrese la medida en metros del radio del circulo: "<<endl;
    cin>>radio;
    float res = M_PI * (pow(radio,2));
    cout<<"El area es "<< res <<" metros cuadrados";
}

void AreaRectangulo()
{
    float a  = 0;
    float b = 0;
    cout<<"ingrese la medida en metros de la base del rectangulo: "<<endl;
    cin>>a;
    cout<<"ingrese la medida en metros de la altura del rectangulo: "<<endl;
    cin>>b;
    if(a != b)
    {
        float res = a * b;
        cout<<"El area del rectangulo es: " << res << "metros cuadrados";
    }
    else
    {
        cout<<"ups! eso es un cuadrado, por favor ingresa la opcion #4";
    }
}

void AreaCuadrado()
{
    float a = 0;
    cout << "ingrese la medida en metros de un lado: ";
    cin >> a;
    float res = pow(a,2);
    cout << "El area del cuadrado es de: "<< res <<"metros cuadrados";
}

//Funcion Volúmenes
void VolumenEsfera()
{

}

void VolumenParalelepipedo()
{

}

void VolumenCubo()
{

}

//Funciones Temperaturas
void Tempe_CelsiusKelvin()
{

}

void Tempe_CelsiusFarenh()
{

}

void Tempe_FarenhCelsius()
{

}

//Funciones Monedas

void Moneda_PesoDolar()
{
    float dolar;
    float pesos;
    cout<<"ingrese el precio actual de USD en pesos COP: ";
    cin>>dolar;
    cout<<"ingrese la cantidad de COP que desea convertir a USD: ";
    cin>>pesos;
    float res = pesos/dolar;
    cout<<pesos<<" COP en USD son: "<<res<<"$";
}

void Moneda_PesoEuro()
{
    float euros;
    float pesos;
    cout<<"ingrese el precio actual de EUR en pesos COP: ";
    cin>>euros;
    cout<<"ingrese la cantidad de COP que desea convertir a EUR: ";
    cin>>pesos;
    float res = pesos/euros;
    cout<<pesos<<" COP en EUR son: "<<res<<"€";
}

void Moneda_DolarPeso()
{
    float dolar;
    float cantidad;
    cout<<"ingrese el precio actual de USD en pesos COP: ";
    cin>>dolar;
    cout<<"ingrese la cantidad de USD que desea convertir a COP";
    cin>>cantidad;
    float res = dolar*cantidad;
    cout << cantidad << "$ USD convertido a COP son: " <<res;
}

void Moneda_EuroPeso()
{
    float euros;
    float cantidad;
    cout<<"ingrese el precio actual de USD en pesos COP: ";
    cin>>euros;
    cout<<"ingrese la cantidad de USD que desea convertir a COP";
    cin>>cantidad;
    float res = euros*cantidad;
    cout << cantidad << "$ USD convertido a COP son: " <<res;
}

void Moneda_EuroDolar()
{
    float dolar;
    float cantidad;
    cout<<"ingrese el precio actual de USD en pesos EUR: ";
    cin>>dolar;
    cout<<"ingrese la cantidad de EUR a convertir: ";
    cin>>cantidad;
    float res = dolar*cantidad;
    cout<<dolar<<"$ en Euros son: "<<res;
}
void Moneda_DolarEuro()
{
    float dolar;
    float euro;
    cout<<"ingrese el precio actual de USD en pesos EUR: ";
    cin>>dolar;
    cout<<"ingrese la cantidad de EUR a convertir: ";
    cin>>euro;
    float res = dolar/euro;
    cout<<dolar<<"$ en Euros son: "<<res;
}

//Funcion Arreglos y matrices
void OrdenArreglo()
{

}

void BuscarArreglo()
{

}

void SumaMatrices()
{

}

void MultiplicacionMatrices()
{

}

void BuscarMatrices()
{

}

//funcion varios
void DistanciaPuntos()
{

}

void RaicesFuncionCuadratica()
{

}

void Factorial()
{

}

void Fibonacci()
{

}

void Primo()
{

}



