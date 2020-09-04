/*
 * utn_abm_data_manager.c
 *  Created on: 25 abr. 2020
 *  Author: mdangelo
 */
#include "commons/Commons.h"
#include "EmployeeAbmHelper.h"

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>


#define TRUE 1
#define FALSE 0



void eh_getConfirmation(char *mssg, char *cConf){
	do{
		printf("%s",mssg);
		scanf("%c",cConf);
		__fpurge(stdin);
		*cConf = toupper(*cConf);
	}while(*cConf!='S' && *cConf!='N');
}

void eh_getValidEmplId(int *id){
	do {
		printf("Ingrese un id valido [mayor a 0]: ");
		scanf("%d", id);
	} while (*id <= 0);
}
void eh_getEmployeeData(char *name, char *lastName, float *salary, int *sector) {
	do {
		printf("Ingrese nombre del empleado :");
		__fpurge(stdin);
		fgets(name, 51, stdin);
		c_cleanString(name,c_getStrArrayLen(name));

		printf("Ingrese apellido del empleado :");
		__fpurge(stdin);
		fgets(lastName, 51, stdin);
		c_cleanString(lastName,c_getStrArrayLen(lastName));

		printf("Ingrese salario del empleado [mayor a 0]:");
		scanf("%f", salary);
		__fpurge(stdin);
		printf("Ingrese sector del empleado [mayor a 0]:");
		scanf("%d", sector);
		__fpurge(stdin);
	} while (*salary <= 0.0 || *sector <= 0);
}
