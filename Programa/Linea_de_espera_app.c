/**
  * @file Linea_de_espera_app.c
  * @version 5.11
  * @date 23/12/2020
  * @author Morales Antonio Fabiola
  * @brief Es el programa principal 
  */
 
 /* ---------------------------------------------------------------------------
                                 Incluye
 --------------------------------------------------------------------------- */ 

#include "Linea_de_espera.h"

int main(){

 	printf("==============================\n");
 	printf("GESTION DE LINEA DE ESPERA DE UN MERCADO\n ");
 	printf("==============================\n");
 	printf("ingresa el horario \n");
 	printf("ingresa hora de inicio\n:");
 	scanf("%i",&hr_ini);//hora de inicio
 	printf("ingresa hora  final\n:");
 	scanf("%i",&hr_fin); 	//hora final
 	printf("capacidad unitaria ");
 	scanf("%i",&cap_uni);//capacidad unitaria
 	printf("ingresa la cantidad de entrada de clientes por hora\n");//se cargan el numero  de clientes que entran en una hora
 	for(j=hr_ini;j<hr_fin;++j)
 	{
 		scanf("%i",&entradaCli[j]);
	}
	 printf("ingresa numero de cajas abiertas por hora\n");
	 for(f=hr_ini;f<hr_fin;++f)
	 {
	 	scanf("%i",&cajas[f]);//se cargan los valores al arreglo cajas[]
	 }

   Mostrartab(hr_ini,hr_fin,entradaCli, cajas);
   col_Espera(cajas, entradaCli, hr_ini, hr_fin, cap_uni);
	 return 0;

 }//fin de la funcion princ
