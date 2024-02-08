
#include <iostream>
using namespace std;

int main()
{
    int mes;
    cout << "ingrese un numero del 1 al 12" << endl;
    cin >> mes;

	while (mes > 12 || mes <=0 )
	{
		cout << "ingrese un numero del 1 al 12" << endl;
    cin >> mes;
	}
	

    switch (mes)
    {
    case 1:
        cout << "Enero";
        break;
    case 2:
        cout << "Febrero";
        break;
    case 3:
        cout << "Marzo";
        break;
    case 4:
        cout << "Abril";
        break;
    case 5:
        cout << "Mayo";
        break;
    case 6:
        cout << "Junio";
        break;
    case 7:
        cout << "Julio";
	case 8:
        cout << "Agosto";
	case 9:
        cout << "Septiembre";
	case 10:
        cout << "Octubre";
	case 11:
        cout << "Noviembre";
	case 12:
        cout << "Diciembre";
					


        break;
    default:
        cout << "numero errado" << endl;
        break;
    }
    return 0;
}
