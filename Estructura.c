#include <stdio.h>
#include <string.h>

struct Persona
{
	char nombre[40];
	long edad;
	char genero;
};

struct Persona usuario;

int main ()
{
	struct Fecha
	{
		int dia;
		char mes[10];
		int anio;
	}fec_act={1,"octubre",2022};

	strcpy(usuario.nombre,"Rosa Flores");
	usuario.edad=21;
	usuario.genero='F';
	printf("%s\n",usuario.nombre);
	printf("%ld\n",usuario.edad);
	printf("%c\n",usuario.genero);
	printf("%d\n",fec_act.dia);
	printf("%s\n",fec_act.mes);
	printf("%d\n",fec_act.anio);
	if(usuario.genero == 'F')
	{
		printf("El genero es femenino\n");
	}
	else{
		printf("El genero es masculino\n");
	}
	return 0;
}
