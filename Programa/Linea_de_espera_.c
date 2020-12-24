 /**
 * @file Linea_de_espera_.c
 * @version 5.11
 * @date 23/12/2020
 * @author Morales Antonio Fabiola 
 * @brief Se inicaliza cada una de las funciones
 */
 
 /* ---------------------------------------------------------------------------
                                 Incluye
 --------------------------------------------------------------------------- */ 
 #include "Linea_de_espera.h"
 
  /* ---------------------------------------------------------------------------
                             Códigos de función
 --------------------------------------------------------------------------- */
 
 void capacidadSal(int cap_salidas[100], int cajas[50],int cap_uni,int hr_ini,int hr_fin)//funcion que obtiene  multiplicando el numero de cajas abiertas * la capacidad unitaria
 {
    for(i=hr_ini;i<hr_fin;i++)
  {
    cap_salidas[i]=cajas[i]*cap_uni;	//realiza la operacion para obtener la capacidad de salidas
    printf("\t%i",cap_salidas[i]);
   }
 }
 
 void col_Espera(int cajas[50],int entradaCli[150],int hr_ini,int hr_fin,int cap_uni)//funcion para obtener la cola de espera
 {
   int aux[50];
  for(i=hr_ini;i<hr_fin;i++)
  {
    aux[i]=(entradaCli[i])-(cap_uni*cajas[i]);
    aux[i]=aux[i]+aux[i-1];
    fflush(stdin);
  }
  
 }
 
 void Mostrartab(int hr_ini,int hr_fin,int entradaCli[150],int cajas[50])//funcion que muestra la tabla con los resultados
 {
  printf ("\nHoras\t\t");
for(h=hr_ini;h<hr_fin; h++)
    {
  printf ("\t%i-%i",h,h+1);
   }
   printf ("\nllegadas clientes:");
   for(j=hr_ini;j<hr_fin;j++)
   {
    printf ("\t%i",entradaCli[j]);
   }
    printf("\nNo. de cajas abiertas:");
    for(f=hr_ini;f<hr_fin;f++)
    {
    printf("\t%i",cajas[f]);
  }
    printf("\ncapacidad de salidas:");
    capacidadSal(cap_salidas,cajas, cap_uni, hr_ini, hr_fin);

    printf("\nsalidas de clientes:");
    capacidadSal(cap_salidas, cajas, cap_uni, hr_ini, hr_fin);

   printf ("\nCola de espera:\t");
   int auxi[50];
   for(i=hr_ini;i<hr_fin;i++)
   {
     auxi[i]=(entradaCli[i])-(cap_uni*cajas[i]);
     auxi[i]=auxi[i]+auxi[i-1];
     printf ("\t%i",auxi[i]);
   }
  }
