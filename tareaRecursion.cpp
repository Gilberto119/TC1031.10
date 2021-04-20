#include <iostream>
using namespace std;

int iterativa(int n)// Metodo iterativo, la complejidad computacional se da forma lineal
{
    int resultado = 0;
    for (size_t i = 0; i < n+1; i++)
    {
        resultado += i;

    }
    return resultado;

}

int recursiva(int n) //Metodo recursivo, la complejidad computacional se da forma lineal

{

    if (n >= 1)
        return (recursiva(n - 1) + n);

    else if (n == 0)
    {
        return 0;
    }

    else
        return 1;
}

int directa(int n){ //Metodo de suma directa, la complejidad solo se da una vez
   return n*(n+1)/2; // Metodo de Gauss
}

int factorial(int n){ // Metodo factorial, la complejidad computacional se de forma lineal
  if(n >1)
  return (factorial(n-1)*n);
  else
  return 1;

}
int j; // Se crea una variable global con el fin
void patron(int n){ // patron de caractere, la complejidad se da de forma lineal
  if (n > 1) {
    patron(n -1);
  }
  for (size_t x = 0; x < j-n; x++) {
    cout<<" ";
  }
    for (size_t i = 1; i <= n; i++) {
      cout<<"* ";
    }
    cout<<endl;

}

void fibonaccIterativo(int n){ //Fibonaccio Iterativo
   int a =1 ,resultado =0;
   if (n!=0){
       for (size_t i = 1; i <= n; i++){
        a += resultado;
        resultado = a- resultado;

        cout<<"F("<<i<<")= "<<resultado<<endl;
        }
   }
   else
   {
      cout<<"F(0)= 0"<<endl;
   }
}
// Metodos recursivos e iterativos
int fb(int n){ // Fibonacci recursivo
    if(n > 1){
        return fb(n-1) + fb(n -2);
    }
    else if (n == 1){
        return 1;
    }
    else
    {
        return 0;
    }

}

double bacteria(double n){ // Bacteria iterativo
    double a = 1, resultado=0;
    for (size_t i = 0; i < n; i++)
    {
        a = a*(3.78-2.34);
    }

   return a;
}

double ba(double n){ // Bacteria recursivo
    double result =0;
    if(n>=1){
         result += ba( n -1)* (3.78-2.34);
    }
    else{
      return 1;
    }
    return result;
}

double inversion(double n){ // Inversion iterativa
    double a , resultado=0;
    cout<<"Ingresa valor inicial "<<endl;
    cin>>a;
    for (size_t i = 0; i < n; i++)
    {
        a =+ a*(1.1875);
    }

   return a;
}

double inv(double n, double monto){ //

  if(n>= 1){
    monto = inv(n -1,monto)*(1.1875);
    return monto;
  }
  else{
    return monto;
  }
}

int exponencial(int x, int y) {
  int exp =0 ;
  if (y > 1) {
    exp += exponencial(x, y-1) *x;
  }
  else{
    return x;
  }

}

int main()
{

    //Ejercicios de la actividad
    cout << '\n';
    double result;int n, y,resp;
    do
    {
        cout << "Previsualizacion de opciones "<<'\n';
        cout << "1) Funciones Iterativas, Recursivas y su análisis de Complejidad "<<endl;
        cout << "2) Fibonacci"<<endl;
        cout << "3) Bacteria "<<endl;
        cout << "4) Inversion "<<endl;
        cout << "5) Potencia "<<endl;
        cout <<"-1) Salir"<<'\n';

        cout<< "Opcion... "; cin>>resp;
        cout<<endl;

        switch (resp)
        {
        case 1: // Actividad 1.1

            cout << "Ingrese un limite" << endl;
            cin >> n;

            cout << "Calculado por el metodo de: Recursivadad "<<recursiva(n) << endl<<endl;
            cout <<"Calculado por el metodo de: Iterativa " <<iterativa(n) << endl<<endl;
            cout <<"Calculado por el metodo de: Suma Directa " <<directa(n)<<endl<<endl;
            cout <<"Calculado por el metodo de: Factorial " <<factorial(n)<<endl<<endl;
            j =n;
            patron(n);

            break;
        case 2:
            cout << "Ingrese un limite" << endl;
            cin >> n;

            cout<<"Metodo iterativo "<<endl;
            fibonaccIterativo(n);
            cout<<"Metodo recursivo"<<endl;
            cout<<fb(n)<<endl;
            break;


        case 3: // bacteria
            cout << "Ingrese un limite" << endl;
            cin >> n;

            cout<<"Metodo iterativo "<<endl;
            cout<<bacteria(n)<<endl;
            cout<<"Metodo recursivo"<<endl;
            cout<<ba(n)<<endl;
            break;

        case 4:
            cout << "Ingrese un limite" << endl;
            cin >> n;

            cout<<"Metodo iterativo "<<endl;
            cout<<inversion(n)<<endl;
            cout<<"Metodo recursivo"<<endl;
            cout<<"Ingresa valor inicial "<<endl;
            cin>>result;
            cout<<inv(n,result)<<endl;
            break;
        case 5:
            cout << "Ingrese un numero base" << endl;
            cin >> n;

            cout<<"Metodo recursivo"<<endl;
            cout<<"a que numero va estar elevado"<<endl;

            cin>>y;
            cout<<exponencial(n,y)<<endl;
            break;

        default:
            break;
        }

    } while ( resp != -1);

}
