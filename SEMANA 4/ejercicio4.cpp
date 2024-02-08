	#include <iostream>
	
	using namespace std;
	void generarSecuenciaCollatz(int n)
	{
	    while (n != 1)
	    {
        cout << n << " ";
        if (n % 2 == 0)
	        {
	            n = n / 2;
	        }
	        else
	        {
	            n = 3 * n + 1;
	        }
	    }
    cout << n << endl;
	}
	
	int main()
	{
	    int n;
	    cout << "Ingrese un numero entero positivo: ";
	    cin >> n;
	
	    cout << "La secuencia de Collatz es: " << endl;
	    generarSecuenciaCollatz(n);
	
	    return 0;
	}


