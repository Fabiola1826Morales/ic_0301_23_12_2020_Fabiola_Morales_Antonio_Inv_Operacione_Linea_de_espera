/* 
 * @file Linea_de_espera_.c
 * @version 5.11
 * @date 22/12/2020
 * @author Morales Antonio Fabiola 
 * @brief Declaracion de las funciones
 */

#ifndef __LINEA_DE_ESPERA_H
#define __LINEA_DE_ESPERA_H

/* ---------------------------------------------------------------------------
                                 Incluye
 --------------------------------------------------------------------------- */ 

#include <stdio.h>
#include <stdlib.h>

/**
 *@brief arreglo entrada clientes
 */
int entradaCli[150];

/**
 *@brief arreglo cajas
 */
int cajas[50];

/**
 *@brief arreglo capacidad salidas
 */
int cap_salidas[100];

/**
 *@brief arreglo cola de espera
 */
int colaespera[100];

/**
 *@brief variables
 */
int hr_ini,hr_fin,No_cajas,cap_uni;

/**
 *@brief contadores
 */
int j,f,i,h;

int out[50];
int output[50];
int aux[50];
int auxi[50];

/**
 * @brief Es la capacidad saliente 
 * @param cap_salidas capacidad saliente  
 * @param  cajas Cantidad de cajas 
 * @param  cap_uni Capacidad unitaria 
 * @param  hr_ini hora de inicio 
 * @param  hr_fin hora final 
 * @return Un valor vacio 
 */ 
void capacidadSal(int cap_salidas[100], int cajas[50],int cap_uni,int hr_ini,int hr_fin);

/**
 * @brief Nos muestra la tabla 
 * @param  hr_ini hora de inicio  
 * @param entradaCli Entra primer cliente
 * @param  cajas Cantidad de cajas   
 * @return Un valor vacio
 */ 
void Mostrartab(int hr_ini,int hr_fin,int entradaCli[150], int cajas[50]);

/**
 * @brief Teimpo de espera 
 * @param  cajas Cantidad de cajas
 * @param entradaCli Entra primer cliente
 * @param  hr_ini hora de inicio
 * @param  hr_fin hora final 
 * @param  cap_uni Capacidad unitaria  
 * @return Un valor vacio 
 */ 
void col_Espera(int cajas[50],int entradaCli[150],int hr_ini,int hr_fin,int cap_uni);

#endif
