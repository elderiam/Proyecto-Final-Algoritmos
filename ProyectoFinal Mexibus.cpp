/*Trabajo realizado por el equipo los juegas.
Integrantes :
Alvarado Miranda Elder Israel
Atonal Hernandez Jesus
Campos Juarez Jose Eduardo
10/12/16*/

#include "stdafx.h"
#include <iomanip>
#include <iostream>  
#include <string>
#include <cmath>

//define del login

#define USER "juegas"
#define PASS "1234"


/*MENUS FINALIZADOS*/
class TRANSPORTE
{

public:

	void MENUMEXIBUS();
	void MENUMEXICABLE();
	void MENUCREDITOS();
	//
	void MENUPRINCIPAL();

	TRANSPORTE();
	~TRANSPORTE();

protected:

	double RECARGAI;
	double COBRO;

	double SALDOI;
	double SALDOF;
	double SALDOT;
};

TRANSPORTE::TRANSPORTE()
{
	SALDOI = 0;
	SALDOF = 0;
	SALDOT = 0;
	RECARGAI = 0;
	COBRO = 0;

}

TRANSPORTE::~TRANSPORTE()
{
}


class MEXIBUS :public TRANSPORTE
{
public:

	void LINEA1();
	void LINEA2();

private:

};
/*LINEA 1 FINALIZADO EL MAPA*/
class LINEA1 :public MEXIBUS
{
public:


private:

};
class LINEA2 :public MEXIBUS
{
public:


private:

};

class MAQUINA : public TRANSPORTE
{
public:

	void TORNIQUETE();
	void SALDO();
	void RECARGA();
	void TARJETA();

private:

};



/*FINALIZADA*/
class MEXICABLE :public TRANSPORTE {

public:





private:


};



using namespace std;

int main()
{
	char opc;
	TRANSPORTE OBJ;

	//variables del login
	string usuario, password;
	int cont = 0;
	bool ingresa = false;
	//empieza el login
	do
	{
		system("CLS");
		system("COLOR 0B");

		cout << "      ---------------------------------------------------------------------\n";
		cout << "              <<<<<<<<<<  LOGIN DE USURARIO    >>>>>>>>>>";
		cout << "\n      ---------------------------------------------------------------------\n\n";
		cout << "\n\tUSUARIO:   ";
		getline(cin, usuario);
		cout << "\n\tPASSWORD:   ";
		getline(cin, password);

		if ((usuario == USER) && (password == PASS)) {
			ingresa = true;

			cout << "\n\tBienvenido" << endl;

			//empieza el main
			system("CLS");
			do
			{
				OBJ.MENUPRINCIPAL();
				cin >> opc;
				opc = toupper(opc);
				cout << "La opcion fue: " << opc << "\n\n";

				//inicio switch xcase 
				switch (opc)
				{

					/*MENU MEXIBUS*/
				case 'A':
				{

					MEXIBUS MENU;

					MENU.MENUMEXIBUS();

					break; }
				/*ANUNCIO DE CONSTRUCCION MEXICABLE*/
				case 'B':
				{
					MEXICABLE ENCONSTRUCCION;

					ENCONSTRUCCION.MENUMEXICABLE();

					break; }

				/*CREDITOS  DE CREACION DE GRUPO*/
				case 'C':
				{
					system("CLS");
					cout << "         ******** CREDITOS ********\n\n";

					TRANSPORTE CREDITOS;

					CREDITOS.MENUCREDITOS();
					break; }

				/*SALIDA DEL PROGRAMA*/
				case 'D':
				{
					system("CLS");
					cout << "         ******** SALIR ********\n\n";
					cout << "SALIENDO DEL PROGRAMA\n\n";
					break; }

				/*ERROR POR EQUIBOCACION DE OPCCION*/
				default: {


					cout << "ERROR INGRESA UNA NUEVA OPCION ";
					break; }


				}
			} while (opc == 'a' || opc == 'b' || opc == 'c' || opc == 'd');
			//esto es del login 
		}
		else {

			cout << "\n\tEl usuario y/o password son incorrectos" << endl;
			cont++;
			system("PAUSE");
		}

	} while ((ingresa == false) && (cont < 3));
	if (ingresa == false)
	{
		cout << "\nUsted no pudo ingresar al sistema" << endl;
	}
	else {
		cout << endl;
	}
	//termina el login

	system("PAUSE");

	return 0;

}

/*MENUS DEL PROGRAMA*/


void TRANSPORTE::MENUPRINCIPAL() {


	cout << "\n\n\n   **********     SISTEMA DE TRANSPORTE MEXIBUS Y MEXICABLE     **********\n";
	cout << "\n          *************      MENU PRINCIPAL          *************        \n\n\n";


	cout << "    	             ._________________." << endl;
	cout << "                    |.---------------.|" << endl;
	cout << "                    ||               ||" << endl;
	cout << "                    ||   -._ .-.     ||" << endl;
	cout << "                    ||   -._| | |    ||" << endl;
	cout << "                    ||   -._|*|*|    ||" << endl;
	cout << "                    ||   -._|.-.|    ||" << endl;
	cout << "                    ||_______________||" << endl;
	cout << "                    /.-.-.-.-.-.-.-.-.\"" << endl;
	cout << "                   /.-.-.-.-.-.-.-.-.-.\"" << endl;
	cout << "                  /.-.-.-.-.-.-.-.-.-.-.\"" << endl;
	cout << "                 /_______/__________\____\"" << endl;
	cout << "                 \_______________________/" << endl;
	cout << "\n\n";




	cout << "  A)	MEXIBUS\n";
	cout << "  B)	MEXICABLE\n";
	cout << "  C)	CREDITOS \n";
	cout << "  D)	SALIR \n";
	cout << " Ingresa una de las opciones [A-D]:";

}
void TRANSPORTE::MENUMEXIBUS() {
	system("CLS");

	int  opciones = 0, n1 = 0, n2 = 0;
	char opc = '  ';

	system("CLS");
	do
	{


		cout << "========================================================================================================================" << "\n";
		cout << "||====================================================================================================================||" << "\n";
		cout << "||||      //////   ///////  //////////  ////   /////    ////  ////////   ////   ////  ////////////////////////      ||||" << "\n";
		cout << "||||     /////// ////////  ///          ///   ////     ////  ///   ///  ////   ////  /////               ////       ||||" << "\n";
		cout << "||||    ////   //   ////  //////////     //////       ////  ////////   ////   ////  /////////           ////        ||||" << "\n";
		cout << "||||   ////        ////  ///           ///   ///     ////  ////  ///  ///////////         ////         ////         ||||" << "\n";
		cout << "||||  ////        ////  //////////   ////     ////  ////  /////////    ///////    ///////////         ////          ||||" << "\n";
		cout << "||||                                                                                                 ////           ||||" << "\n";
		cout << "||||  //////////////////////////////////////////////////////////////////////////////////////////////////            ||||" << "\n";
		cout << "|||| //                                        ///////////////////////////////////////////////////                  ||||" << "\n";
		cout << "||||/                                         //                      //////////////////////                        ||||" << "\n";
		cout << "||||                                         /                       //                                             ||||" << "\n";
		cout << "||||                                                                /                                               ||||" << "\n";
		cout << "||====================================================================================================================||" << "\n";
		cout << "========================================================================================================================" << "\n";


		cout << " ****************************************************************\n";
		cout << " \n";
		cout << "  @@@@@@@@@@@@@@@@@@¦¦¦¦¦@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ \n";
		cout << " @      ######      ¦¦¦¦¦   ######       ######      #  @ \n";
		cout << " @      ######      ¦¦¦¦¦   ######       ######      ##  @ \n";
		cout << " @      ######      ¦¦¦¦¦   ######       ######      ###  @ \n";
		cout << " @                  ¦¦¦¦¦                                 @ \n";
		cout << " @      000         ¦¦¦¦¦     000                000      @ \n";
		cout << "  @@@@-0 ° 0-@@@@@@@¦¦¦¦¦@@@-0 ° 0-@@@@@@@@@@@@-0 ° 0-@@@@ \n";
		cout << "        000                   000                000       \n";
		cout << " \n";
		cout << " ****************************************************************\n";

		cout << "\n\n\n         **********  MENU INICIO  **********        \n\n\n";

		cout << "  A)	LINEA 1 \n";
		cout << "  B)	LINEA 2\n";
		cout << "  C)	SALIR \n";

		cout << " Ingresa una de las opciones [A-D]:";
		cin >> opc;
		cout << "\n\nTecleaste : " << opc << "\n\n";
		opc = toupper(opc);
		cout << "La opcion fue: " << opc << "\n\n";



		//inicio switch xcase 
		switch (opc)
		{


		case 'A':
		{
			system("CLS");
			MEXIBUS MENULINEA1;

			MENULINEA1.LINEA1();


			break; }


		case 'B':
		{
			system("CLS");
			MEXIBUS MENULINEA2;
			MENULINEA2.LINEA2();

			break; }

		case 'C':
		{

			system("CLS");
			cout << "         ******** SALIR ********\n\n";
			cout << "SALIENDO DEL PROGRAMA\n\n";
			system("PAUSE");
			system("CLS");
			return MENUPRINCIPAL();
			break; }

		default: {


			cout << "ERROR INGRESA UNA OPCCION CORRECTA ";
			system("PAUSE");
			system("CLS");
			return MENUPRINCIPAL();
			break; }


		}
	} while (opc == 'a' || opc == 'b' || opc == 'c');




}
void TRANSPORTE::MENUMEXICABLE() {
	system("CLS");



	cout << "========================================================================================================================" << "\n";
	cout << "||====================================================================================================================||" << "\n";
	cout << "||||      //////   ///////  //////////  ////   /////    ////  /////////  ///////////  //////    ///        /////////||||" << "\n";
	cout << "||||     /////// ////////  ///          ///   ////     ////  ///  ///   ////   ////  ///  //   ///        ////      ||||" << "\n";
	cout << "||||    ////   //   ////  //////////     //////       ////  ///        ///////////  ///////   ///        //////     ||||" << "\n";
	cout << "||||   ////        ////  ///           ///   ///     ////  ///   ///  ////   ////  ///  ///  ///        ////        ||||" << "\n";
	cout << "||||  ////        ////  //////////   ////     ////  ////  ////////// ////   ////  ///////   /////////  //////////   ||||" << "\n";
	cout << "||||             ////        ////            ////  ////        ////        ////     ////       ////         ////    ||||" << "\n";
	cout << "||||  ////////////////////////////////////////////////////////////////////////////////////////////////////////      ||||" << "\n";
	cout << "|||| //                                        ///////////////////////////////////////////////////                  ||||" << "\n";
	cout << "||||/                                         //                      //////////////////////                        ||||" << "\n";
	cout << "||||                                         /                       //                                             ||||" << "\n";
	cout << "||||                                                                /                                               ||||" << "\n";
	cout << "||====================================================================================================================||" << "\n";
	cout << "========================================================================================================================" << "\n";


	cout << "**************************** EN CONSTRUCCION  ************************************\n";
	cout << "****************************    ESPERALO      ************************************\n";
	cout << "**************************** EN CONSTRUCCION  ************************************\n";
	cout << "****************************  PROXIMAMENTE    ************************************\n";
	cout << "**************************** EN CONSTRUCCION  ************************************\n";
	system("PAUSE");
	system("CLS");
	return MENUPRINCIPAL();

}
void TRANSPORTE::MENUCREDITOS() {

	cout << "=========================================================" << "\n";
	cout << "||=====================================================||" << "\n";
	cout << "||||                                                 ||||" << "\n";
	cout << "||||                                                 ||||" << "\n";
	cout << "||||    EQUIPO:                LOS JUEGAS            ||||" << "\n";
	cout << "||||                                                 ||||" << "\n";
	cout << "||||                                                 ||||" << "\n";
	cout << "||||    INTEGRANTES:      ATONAL HERNANDEZ JESSUS    ||||" << "\n";
	cout << "||||                      ALVARADO MIRANDA ELDER     ||||" << "\n";
	cout << "||||                      CAMPOS JUREZ JOSE EDUARDO  ||||" << "\n";
	cout << "||||                                                 ||||" << "\n";
	cout << "||||                                                 ||||" << "\n";
	cout << "||||    FECHA:         10/12/16                      ||||" << "\n";
	cout << "||||    MATERIA:  ALGORITMOS Y ESTRUCTURA DE DATOS   ||||" << "\n";
	cout << "||||                                                 ||||" << "\n";
	cout << "||=====================================================||" << "\n";
	cout << "=========================================================" << "\n";

	system("PAUSE");
	system("CLS");
	return MENUPRINCIPAL();

}

/*LINEAS DEL MEXIBUS*/
void MEXIBUS::LINEA1() {

	char opc;


	do
	{

		cout << "\n\n\n**********      LINEA 1        **********        \n\n\n";


		cout << "    	 @  = ESTACIONES PRINCIPALES                       " << endl;
		cout << "        * = ESTACIONES NORMALES                           " << endl;
		cout << "                                                          " << endl;
		cout << "                                                          " << endl;
		cout << "               @   (A) TERMINAL OJO DE AGUA               " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (B) ESMERALDA                          " << endl;
		cout << "               |                                          " << endl;
		cout << "               @   (C) TRANSBORDE CUAUHTEMOC NORTE        " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (D) CUAUHTEMOC SUR                     " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (E) HIDALGO                            " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (F) LAS TORRES                         " << endl;
		cout << "               |                                          " << endl;
		cout << "               @   (G) TERMINAL CENTRAL DE BASTOS         " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (H) 19 DE SEPTIEMBRE                   " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (I) PALOMAS                            " << endl;
		cout << "               |                                          " << endl;
		cout << "               @   (J) TRANSABORDE JARDINES DE MORELOS    " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (K) HOSPITAL                           " << endl;
		cout << "               |                                          " << endl;
		cout << "               @   (L) TRANSBORDE 1RO DE MAYO             " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (M) LAS AMERICAS                       " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (N) VALLE ECATEPEC                     " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (O) VOCACIONAL 3                       " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (P) ADOLFO LOPEZ MATEO                 " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (Q) ZODIACO                            " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (R) A. TORRES                          " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (S) UNITEC                             " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (T) INDUSTRIAL                         " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (U) JOSEFA ORTIZ                       " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (V) QUINTO SOL                         " << endl;
		cout << "               |                                          " << endl;
		cout << "               @   (W) TERMINAL CD. AZTECA                " << endl << endl;

		cout << "                   (X)       SALIR DEL PROGRAMA           " << endl;



		cout << " ELIGE UNA OPCCION [A-X]:";
		cin >> opc;
		cout << "\n\nTecleaste : " << opc << "\n\n";
		opc = toupper(opc);
		cout << "La opcion fue: " << opc << "\n\n";



		//inicio switch xcase 
		switch (opc)
		{


		case 'A':
		{
			system("CLS");
			cout << "               @   (A) TERMINAL OJO DE AGUA               " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			}




			break; }
		case 'B':
		{
			system("CLS");
			cout << "               *   (B) ESMERALDA                          " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}


			break; }
		case 'C':
		{
			system("CLS");

			cout << "               @   (C) TRANSBORDE CUAUHTEMOC NORTE        " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}




			break; }
		case 'D':
		{
			system("CLS");

			cout << "               *   (D) CUAUHTEMOC SUR                     " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}



			break; }
		case 'E':
		{
			system("CLS");
			cout << "               *   (E) HIDALGO                            " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}


			break; }
		case 'F':
		{
			system("CLS");
			cout << "               *   (F) LAS TORRES                         " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}

			break; }
		case 'G':
		{
			system("CLS");
			cout << "               @   (G) TERMINAL CENTRAL DE BASTOS         " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}


			break; }
		case 'H':
		{
			system("CLS");

			cout << "               *   (H) 19 DE SEPTIEMBRE                   " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}

			break; }
		case 'I':
		{
			system("CLS");
			cout << "               *   (I) PALOMAS                            " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}




			break; }
		case 'J':
		{
			system("CLS");
			cout << "               @   (J) TRANSABORDE JARDINES DE MORELOS    " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}


			break; }
		case 'K':
		{
			system("CLS");
			cout << "               *   (K) HOSPITAL                           " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}



			break; }
		case 'L':
		{
			system("CLS");
			cout << "               @   (L) TRANSBORDE 1RO DE MAYO             " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}



			break; }
		case 'M':
		{
			system("CLS");
			cout << "               *   (M) LAS AMERICAS                       " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}



			break; }
		case 'N':
		{
			system("CLS");

			cout << "               *   (N) VALLE ECATEPEC                     " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}


			break; }
		case 'O':
		{
			system("CLS");
			cout << "               *   (O) VOCACIONAL 3                       " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}



			break; }
		case 'P':
		{
			system("CLS");

			cout << "               *   (P) ADOLFO LOPEZ MATEO                 " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}


			break; }
		case 'Q':
		{
			system("CLS");

			cout << "               *   (Q) ZODIACO                            " << endl;
			cout << "               |                                          " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;


			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}


			break; }
		case 'R':
		{
			system("CLS");
			cout << "               *   (R) A. TORRES                          " << endl;
			cout << "               |                                          " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}


			break; }
		case 'S':
		{
			system("CLS");
			cout << "               *   (S) UNITEC                             " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}

			break; }
		case 'T':
		{
			system("CLS");
			cout << "               *   (T) INDUSTRIAL                         " << endl;
			cout << "               |                                          " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}


			break; }
		case 'U':
		{
			system("CLS");
			cout << "               *   (U) JOSEFA ORTIZ                       " << endl;
			cout << "               |                                          " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}


			break; }
		case 'V':
		{
			system("CLS");

			cout << "               *   (V) QUINTO SOL                         " << endl;
			cout << "               |                                          " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}

			break; }
		case 'W':
		{
			system("CLS");
			cout << "               @   (W) TERMINAL CD. AZTECA                " << endl << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA1();
				break;

			}

			break; }

		case 'X':
		{
			system("CLS");
			cout << "         ******** SALIR ********\n\n";
			cout << "SALIENDO DEL PROGRAMA\n\n";
			system("PAUSE");
			system("CLS");
			return MENUMEXIBUS();
			break; }

		default: {


			cout << "EERRRROORRRRRRR ";
			system("PAUSE");
			system("CLS");
			return MENUMEXIBUS();
			break; }


		}
	} while (opc == 'a' || opc == 'b' || opc == 'c' || opc == 'd' || opc == 'e' || opc == 'f' || opc == 'g' || opc == 'h' || opc == 'i' || opc == 'j' || opc == 'k' || opc == 'l' || opc == 'm' || opc == 'n' || opc == 'o' || opc == 'p' || opc == 'q' || opc == 'r' || opc == 's' || opc == 't' || opc == 'u' || opc == 'v' || opc == 'w' || opc == 'x');


}
void MEXIBUS::LINEA2() {

	int opc;


	do
	{

		cout << "\n\n\n**********      LINEA 2        **********        \n\n\n";


		cout << "    	 @  = ESTACIONES PRINCIPALES                       " << endl;
		cout << "        * = ESTACIONES NORMALES                           " << endl;
		cout << "                                                          " << endl;
		cout << "               @   (1) LA QUEBRADA              " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (2) LECHERIA                          " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (3) VIDRIERIA        " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (4) CIUDAD LAVOR                     " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (5) CHILPA                            " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (6) COCEM                         " << endl;
		cout << "               |                                          " << endl;
		cout << "               @   (7) BUENAVISTA        " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (8) LA BANDERA / TULTITLAN                   " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (9) BELLO HORIZONTE              " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (10) CARTAGENA    " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (11) DE LA CRUZ / SAN MATEO                          " << endl;
		cout << "               |                                          " << endl;
		cout << "               @   (12) FUENTES DEL VALLE            " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (13) MARISCALA / REAL DEL BOSQUE                       " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (14) VILLAS DE SANJOSE                    " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (15) SANTA MARIA                      " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (16) COACALCOBERRILOZABAL                " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (17) BOSQUES DEL VALLE                         " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (18) EXHACIENDA SAN FELIPE                          " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (19) COACALCO TULPETLAC                            " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (20) HEROES / CANOSAS                         " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (21) SAN FRANSISCO                      " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (22) LAS FLORES ZACUATITLAN                        " << endl;
		cout << "               |                                          " << endl;
		cout << "               @   (23) 1RA DE VILLA               " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (24) EJE 8              " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (25) PARQUE RESIDENCIAL               " << endl << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (26) LA LAGUNA              " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (27) SAN CARLOS             " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (28) FOVISSSTE              " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (29) VENUSTIANO CARRANZA              " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (30) GUADALUPE VICTORIA            " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (31) DIF          " << endl;
		cout << "               |                                          " << endl;
		cout << "               @   (32) ECATEPEC              " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (33) EL CARMEN          " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (34) ISSEMYM             " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (35) AGRICULTURA            " << endl;
		cout << "               |                                         " << endl;
		cout << "               *   (36) SAN CRISTOBAL               " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (37) UPE              " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (38) CASA DE MORELOS             " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (39) PUENTE DE FIERRO             " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (40) SAN MARTIN              " << endl;
		cout << "               |                                          " << endl;
		cout << "               *   (41) 1RO DE MAYO              " << endl;
		cout << "               |                                         " << endl;
		cout << "               @   (42) LAS AMERICAS           " << endl << endl;



		cout << "                   (43)       SALIR DEL PROGRAMA           " << endl;



		cout << " ELIGE UNA OPCCION [1-43]:";
		cin >> opc;
		cout << "La opcion fue: " << opc << "\n\n";



		//inicio switch xcase 
		switch (opc)
		{


		case 1:
		{
			system("CLS");
			cout << "               @   (1) LA QUEBRADA               " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}



			break; }
		case 2:
		{
			system("CLS");

			cout << "               *   (2) LECHERIA                          " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


			break; }
		case 3:
		{
			system("CLS");


			cout << "                *   (3) VIDRIERIA         " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}




			break; }
		case 4:
		{
			system("CLS");

			cout << "               *   (4) CIUDAD LAVOR                      " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();

				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}



			break; }
		case 5:
		{
			system("CLS");
			cout << "               *   (5) CHILPA                          " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


			break; }
		case 6:
		{
			system("CLS");
			cout << "               *   (6) COCEM                        " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

			break; }
		case 7:
		{
			system("CLS");
			cout << "               @   (7) BUENAVISTA              " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


			break; }
		case 8:
		{
			system("CLS");

			cout << "               *   (8) LA BANDERA / TULTITLAN                     " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

			break; }
		case 9:
		{
			system("CLS");
			cout << "               *   (9) BELLO HORIZONTE      " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

		}
		case 10:
		{
			system("CLS");
			cout << "               *   (10) CARTAGENA              " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}



			break; }
		case 11:
		{
			system("CLS");

			cout << "               *   (11) DE LA CRUZ / SAN MATEO                        " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


			break; }
		case 12:
		{
			system("CLS");


			cout << "               @   (12) FUENTES DEL VALLE        " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}




			break; }
		case 13:
		{
			system("CLS");

			cout << "              *   (13) MARISCALA / REAL DEL BOSQUE                  " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				
				system("PAUSE");
				system("CLS");
				return LINEA2(); break;

			}



			break; }
		case 14:
		{
			system("CLS");

			cout << "                *   (14) VILLAS DE SANJOSE                     " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}



			break; }
		case 15:
		{
			system("CLS");
			cout << "                *   (15) SANTA MARIA                           " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


			break; }
		case 16:
		{
			system("CLS");
			cout << "                *   (16) COACALCOBERRILOZABAL                      " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

			break; }
		case 17:
		{
			system("CLS");
			cout << "               *   (17) BOSQUES DEL VALLE           " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


			break; }
		case 18:
		{
			system("CLS");

			cout << "               *   (18) EXHACIENDA SAN FELIPE                     " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

			break; }
		case 19:
		{
			system("CLS");
			cout << "               *   (19) COACALCO TULPETLAC     " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

		}
		case 20:
		{
			system("CLS");
			cout << "               *   (20) HEROES / CANOSAS       " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

		}
		case 21:
		{
			system("CLS");
			cout << "               *   (21) SAN FRANSISCO               " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}



			break; }
		case 22:
		{
			system("CLS");

			cout << "               *   (22) LAS FLORES ZACUATITLAN                          " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


			break; }
		case 23:
		{
			system("CLS");


			cout << "               @   (23) 1RA DE VILLA          " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}




			break; }
		case 24:
		{
			system("CLS");

			cout << "               *   (24) EJE 8                    " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}



			break; }
		case 25:
		{
			system("CLS");
			cout << "               *   (25) PARQUE RESIDENCIAL                            " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


			break; }
		case 26:
		{
			system("CLS");
			cout << "               *   (26) LA LAGUNA                        " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

			break; }
		case 27:
		{
			system("CLS");
			cout << "               *   (27) SAN CARLOS          " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


			break; }
		case 28:
		{
			system("CLS");

			cout << "               *   (28) FOVISSSTE                    " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

			break; }
		case 29:
		{
			system("CLS");
			cout << "               *   (29) VENUSTIANO CARRANZA       " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


		}
		case 30:
		{
			system("CLS");
			cout << "               *   (30) GUADALUPE VICTORIA      " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

		}
		case 31:
		{
			system("CLS");
			cout << "               *   (31) DIF               " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}



			break; }
		case 32:
		{
			system("CLS");

			cout << "               @   (32) ECATEPEC                           " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


			break; }
		case 33:
		{
			system("CLS");


			cout << "               *   (33) EL CARMEN        " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}




			break; }
		case 34:
		{
			system("CLS");

			cout << "               *   (34) ISSEMYM                      " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}



			break; }
		case 35:
		{
			system("CLS");
			cout << "               *   (35) AGRICULTURA                           " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


			break; }
		case 36:
		{
			system("CLS");
			cout << "               *   (36) SAN CRISTOBAL                         " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

			break; }
		case 37:
		{
			system("CLS");
			cout << "               *   (37) UPE         " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

			break; }
		case 38:
		{
			system("CLS");

			cout << "               *   (38) CASA DE MORELOS                  " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}

			break; }
		case 39:
		{
			system("CLS");
			cout << "               *   (39) PUENTE DE FIERRO    " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}
		}
		case 40:
		{
			system("CLS");
			cout << "               *   (40) SAN MARTIN                 " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}



			break; }
		case 41:
		{
			system("CLS");

			cout << "               *   (41) 1RO DE MAYO                         " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();	
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}


			break; }
		case 42:
		{
			system("CLS");


			cout << "              @   (42) LAS AMERICAS         " << endl;
			int opti;
			cout << "\n Seleccione una opcion: \n";
			cout << " 1)Saldo  \n 2)Recarga \n 3)Tarjeta \n 4)Torniquete \n 5)salir \n";
			cin >> opti;
			MAQUINA o;
			switch (opti) {
			case 1:
				o.SALDO();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 2:
				o.RECARGA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 3:
				o.TARJETA();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 4:
				o.TORNIQUETE();
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			case 5:
				system("EXIT");
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;
			default:
				cout << "\n Opcion incorrecta seleccione otra opcion \n";
				system("PAUSE");
				system("CLS");
				return LINEA2();
				break;

			}




			break; }
		case 43:
		{
			system("CLS");
			cout << "         ******** SALIR ********\n\n";
			cout << "SALIENDO DEL PROGRAMA\n\n";
			system("PAUSE");
			system("CLS");
			return MENUMEXIBUS();

			 }


		default: {


			cout << "EERRRROORRRRRRR ";
			system("PAUSE");
			system("CLS");
			return MENUMEXIBUS();
			break; }


		}
	} while (opc == '1' || opc == '2' || opc == '3' || opc == '4' || opc == '5' || opc == '6' || opc == '7' || opc == '8' || opc == '9' || opc == '10' || opc == '11' || opc == '12' || opc == '13' || opc == '14' || opc == '15' || opc == '16' || opc == '17' || opc == '18' || opc == '19' || opc == '20' || opc == '21' || opc == '22' || opc == '23' || opc == '24' || opc == '25' || opc == '26' || opc == '27' || opc == '28' || opc == '29' || opc == '30' || opc == '31' || opc == '32' || opc == '33' || opc == '34' || opc == '35' || opc == '36' || opc == '37' || opc == '38' || opc == '39' || opc == '40' || opc == '41' || opc == '42' || opc == '43');


}

/*INPLEMENTACION DE MAQUINA*/
void MAQUINA::TORNIQUETE() {
	int opc = 0;

	cout << "COSTO DE BOLETO $6" << endl;
	cout << "DESEA INGRESAR AL MEXIBUS 1.SI 2.NO" << endl;
	cout << "\nTu opcion:";
	cin >> opc;
	if (opc == 1) {
		if (SALDOF < 6) {
			cout << "Por favor de pasar a recargar" << endl;
			return RECARGA();
		}
		else {
			cout << "BIENVENIDO AL SISTEMA DE TRANPORTE DE MEXIBUS" << endl;
			cout << "BUEN VIAJE" << endl;
		}

	}
	else
	{
		cout << "Lastima que no uso el transporte" << endl;
		cout << "Que Tenga Buen Dia" << endl;
		system("PAUSE");
	}

}
void MAQUINA::SALDO() {

	cout << "TU SALDO ES:"<< SALDOF<<endl;

}
void MAQUINA::RECARGA() {

	cout << "Ingresa la cantidad a recargar:  *Monto Max=120" << endl;
	cout << "$";
	cin >> RECARGAI;
	if (RECARGAI>120) {
		cout << "No puedes ingresar mas de $120. Porfavor de recagar menos" << endl;
		return RECARGA();
	}else{
		if (RECARGAI<0)
		{
			cout << "No puedes ingresar menos de $0 porfavor de recagar  mas " << endl;
			return RECARGA();
		}
		else
		{
			SALDOF = SALDOI + RECARGAI;
		}
		
	}

	cout << "Recarga Exitosa" << endl;
	cout << "Tu Saldo es:" << SALDOF << endl;
	

}
void MAQUINA::TARJETA() {

}
