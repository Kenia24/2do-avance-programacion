#include<iostream>
#include<string>

using namespace std;

string nombres, caracteristicas, genero, descripcion, clasificacion;

int precio, opcion;
bool a = true;

void Agregar();
void lista();

void main() {
    while (a)
    {
        cout << "      Menu      " << endl;
        cout << "1.Agregar articulo" << endl;
        cout << "2.Mostrar lista" << endl;
        cout << "3.Limpiar pantalla" << endl;
        cout << "4.Salir del programa" << endl;
        cout << "Selecciona una opcion para continuar..." << endl;
        cin >> opcion;
        switch (opcion)
        {
        case 1:
        {
            Agregar();
            break;
        }
        case 2:
        {
            lista();
            break;
        }
        case 3:
        {
            system("cls");
            break;
        }
        case 4:
        {
            cout << "Usted esta saliendo del programa" << endl;
            a = false;
            system("pause>null");

        }
        default:
        {
            cout << "Opcion incorrecta..." << endl;
            break;
        }
        }

    }

}

void Agregar() {
    cout << "Ingresar nombre" << endl;
    cin >> nombres;
    cout << "ingresa una caracteristica" << endl;
    cin >> caracteristicas;
    cout << "Ingresa un genero" << endl;
    cin >> genero;
    cout << "Ingresa una descripcion" << endl;
    cin >> descripcion;
    cout << "Ingresa una clasificacion" << endl;
    cin >> clasificacion;
    cout << "Ingresa el precio" << endl;
    cin >> precio;
    cout << "El impuesto del juego es de 100 pesos" << endl;
}

void lista() {
    cout << "El nombre del juego que ingreso fue:" << nombres << endl;
    cout << "La caracteristica es:" << caracteristicas << endl;
    cout << "El genero es:" << genero << endl;
    cout << "La descripcion es:" << descripcion << endl;
    cout << "La clasificacion es:" << clasificacion << endl;
    cout << "El precio es:" << precio << endl;


