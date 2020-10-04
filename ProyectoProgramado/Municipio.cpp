#include "Municipio.h"


void Municipio::solicitarInfo(int numeroMunicipios) {
	cantidadMunicipios = numeroMunicipios;

	cout << "Municipio " << numeroMunicipios + 1 << endl;
	cout << "Ingrese el nombre del Municipio " << numeroMunicipios + 1 << ": " << endl;
	cin >> nombreMunicipio;
	cout << "Ingrese la cantida de Ancianos Hombres: " << endl;
	cin >> cantAncianosHombres;
	cout << "Ingrese la cantida de Ancianos Mujeres: " << endl;
	cin >> cantAncianosMujeres;
	cout << "Ingrese la cantida de Adultos Hombres: " << endl;
	cin >> cantHombres;
	cout << "Ingrese la cantida de Adultas Mujeres: " << endl;
	cin >> cantMujeres;
	cout << "Ingrese la cantida de Ninios: " << endl;
	cin >> cantNinios;
	cout << "Ingrese la cantida de Ninias: " << endl;
	cin >> cantNinias;
}

long Municipio::ObtenerPrima(int numeroMunicipios)
{
	
	 long total = cantNinios + cantNinias;

	 if (total < 100000) {
		 return prima[numeroMunicipios] = 30000;
	 }
	 if (total >= 100000 && total < 200000) {
		 return prima[numeroMunicipios] = 25000;
	 }
	 if (total >= 200000 && total < 500000) {
		 return prima[numeroMunicipios] = 20000;
	 }
	 if (total >= 500000) {
		 return prima[numeroMunicipios] = 10000;
	 }
	 else
		 return 0;

}

long Municipio::totalHabitantes(int numeroMunicipios)
{
	return totalHabitantesMunicipio[numeroMunicipios] = (cantAncianosHombres + cantAncianosMujeres + cantHombres + cantMujeres + cantNinios + cantNinias);
}

Municipio::Municipio()
{
}

Municipio::~Municipio()
{
}
