#include <iostream>
#include "Pelicula.h"
#include "Administrador.h"
#include "Serie.h"

using namespace std;

int main()
{
    system("COLOR 0A");

    Administrador a;
    Series_TV s;

    string opc;

    a.Recuperar();

    while (true)
    {
        cout << endl;
        cout << "-----BLIM-----" << endl;
        cout << "1) MENU PELICULAS" << endl;
        cout << "2) MENU SERIES" << endl;
        cout << "3) SALIR" << endl;
        cout << "--------------" << endl;
        cout << endl;
        cout << "Ingresa una opcion: ";
        getline(cin,opc);
        cout << endl;

        //MENU PELICULAS
        if (opc=="1")
        {



            while (true)
            {
                //MENU PELICULAS
                cout << "-----PELICULAS-----" << endl;
                cout << "1) AGREGAR PELICULA" << endl; //LISTO
                cout << "2) MOSTRAR PELICULAS" << endl; //LISTO
                cout << "3) BUSCAR PELICULA" << endl; //LISTO
                cout << "4) MODIFICAR PELICULA" << endl; //LISTO "Varias Opciones"
                cout << "5) ELIMINAR PELICULA" << endl; //LISTO
                cout << "0) SALIR" << endl;
                cout << "-------------------" << endl;
                cout << endl;
                cout << "Ingresa una opcion: ";
                getline(cin,opc);
                cout << endl;

                //Opcion 1 "Agregar Peliculas"
                if (opc=="1")
                {
                    Pelicula p;
                    cin >> p;
                    a.Agregar(p);
                    a.Respaldar();
                    cin.ignore();

                }

                //Opcion 2 "Mostrar Peliculas"
                else if (opc=="2")
                {
                    a.Mostrar();
                    cin.ignore();
                }

                //Opcion 3 "Buscar Peliculas"
                else if (opc=="3")
                {
                    Pelicula p;
                    a.Buscar(p);
                    cin.ignore();
                }

                //Opcion 4 "Modificar Pelicula"
                else if (opc=="4")
                {
                    //MENU MODIFICAR PELICULAS
                    while (true)
                    {
                        cout << "-----MODIFICAR-----" << endl;
                        cout << "1) MODIFICAR NOMBRE" << endl;
                        cout << "2) MODIFICAR GENERO" << endl;
                        cout << "3) MODIFICAR ESTRENO" << endl;
                        cout << "4) MODIFICAR IDIOMA" << endl;
                        cout << "5) MODIFICAR TODOS LOS ATRIBUTOS" << endl;
                        cout << "0) SALIR" << endl;
                        cout << "-------------------" << endl;
                        cout << "Ingrese una opcion: ";
                        getline(cin,opc);
                        cout << endl;

                        if (opc=="1")
                        {
                            Pelicula p;
                            a.ModificarNombre(p);
                            a.Respaldar();
                            cin.ignore();
                        }

                        else if (opc=="2")
                        {
                            Pelicula p;
                            a.ModificarGenero(p);
                            a.Respaldar();
                            cin.ignore();
                        }

                        else if (opc=="3")
                        {
                            Pelicula p;
                            a.ModificarEstreno(p);
                            a.Respaldar();
                            cin.ignore();
                        }

                        else if (opc=="4")
                        {
                            Pelicula p;
                            a.ModificarIdioma(p);
                            a.Respaldar();
                            cin.ignore();
                        }
                        else if (opc=="5")
                        {
                            Pelicula p;
                            a.ModificarTodo(p);
                            a.Respaldar();
                            cin.ignore();
                        }

                        else if (opc=="0")
                        {
                            return main();
                        }
                    }
                }

                //Opcion 5 "Eliminar Pelicula"
                else if (opc=="5")
                {
                    string nombre;
                    cout << "Ingrese la pelicula a borrar: ";
                    cin >> nombre;

                    a.Eliminar(nombre);
                    cout << "PELICULA ELIMINADA" << endl;
                    cin.ignore();
                    a.Respaldar();
                    cin.ignore();
                }

                //Opcion 0 "SALIR"
                else if (opc=="0")
                {
                    break;
                }
            }

        }


        else if (opc=="2")
        {
            //MENU SERIES
            cout << "-----SERIES-----" << endl;
            cout << "1) AGREGAR SERIES" << endl;
            cout << "2) MOSTRAR SERIES" << endl;
            cout << "3) BUSCAR SERIE" << endl;
            cout << "4) MODIFICAR SERIE" << endl;
            cout << "5) ELIMINAR SERIE" << endl;
            cout << "0) SALIR" << endl;
            cout << "----------------" << endl;
            cout << endl;
            cout << "Ingrese una opcion: ";
            getline(cin,opc);
            cout << endl;

            //Opcion 1 "AGREGAR SERIE"
            if (opc=="1")
            {
                s.Capturar();
            }

            //opcion 2 "MOSTRAR SERIES"
            else if (opc=="2")
            {
                s.Mostrar();
            }

            //opcion 3 "BUSCAR SERIE"
            else if (opc=="3")
            {
                s.Buscar();
            }

            //opcion 4 "MODIFICAR SERIE"
            else if (opc=="4")
            {
                s.Modificar();
            }

            //opcion 5 "ELIMINAR SERIE"
            else if (opc=="5")
            {
                s.Eliminar();
            }

            //opcion 0 "SALIR"
            else if (opc=="0")
            {
               return main();
            }
        }

        else if(opc=="0")
        {
            return 0;
        }
    }
}
