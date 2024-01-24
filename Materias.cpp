#include<iostream>
#include<conio.h>

using namespace std;
class Materia
{
private:

    int Clave;
    string Nombre;
    string Profesor;
    string LibroTexto;
public:

    Materia(int, string, string, string);
    void imprimir();
    void CambiaClave(int);
    void CambiaProfe(string);
};
Materia::Materia(int clave, string nombre, string profesor, string librotexto)
{
    Clave=clave;
    Nombre=nombre;
    Profesor=profesor;
    LibroTexto=librotexto;

}
void Materia::imprimir()
{
    cout<<"Clave :"<<Clave<<endl;
    cout<<"Nombre :"<<Nombre<<endl;
    cout<<"Profesor: "<<Profesor<<endl;
    cout<<"Libro de texto"<<LibroTexto<<endl;
}
void Materia::CambiaClave(int clave)
{
    Clave=clave;
    cout<<"Camio de clave exitoso";
}
void Materia::CambiaProfe(string profe)
{
    Profesor=profe;
    cout<<"Cambio exitoso"<<endl;
}
enum Menu
{
    OPC_MATERIA=1,
    OPC_MAESTRO,
    OPC_IMPRIMIR,
    OPC_SALIR
};
int opc;
int main()
{
    system("color 70");
    Materia Programacion(01,"Programacion","Jaime","Programacion 1");
    Materia BasesDatos(02,"Base de datos", "Nicolas","Database 1");
    do{
        system("cls");
        cout<<"         Selecciones una opccion:"<<endl<<endl<<OPC_MATERIA<<")Cambiar clave de materia de programacion"<<endl
        <<OPC_MAESTRO<<")Cambio de maestro de base de datos"<<endl<<OPC_IMPRIMIR<<")Imprimir datos de la materia de base de datos"<<endl
        <<OPC_SALIR<<")Salir"<<endl;
        cin>>opc;
        cin.ignore();
        switch(opc)
        {
        case OPC_MATERIA:
            {
                int nueva_clave;
                cout<<"Ingrese la nueva clave de la materia de programacion: "<<endl;
                cin>>nueva_clave;
                cin.ignore();
                Programacion.CambiaClave(nueva_clave);
                getch();
                break;
            }
        case OPC_MAESTRO:
            {
                string new_profesor;
                cout<<"Ingrese el nombre del nuevo profesor:"<<endl;
                getline(cin, new_profesor);
                BasesDatos.CambiaProfe(new_profesor);
                getch();
                break;
            }
        case OPC_IMPRIMIR:
            {
                BasesDatos.imprimir();
                getch();
                break;
            }
        case OPC_SALIR:
            {
                cout<<"Buen Dia"<<endl;
                getch();
                break;
            }
        default:
            {
                cout<<"Opccion no disponible"<<endl;
                getch();
            }
        }


    }while(opc!=OPC_SALIR);



    getch();
    return 0;
}
