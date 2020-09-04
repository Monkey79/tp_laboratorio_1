/*
 * EmployeeAbm.c
 * Created on: 2 sep. 2020
 * Author: mdangelo
 */



/*
 * utn_abm_tp2.c
 *  Created on: 23 abr. 2020
 *  Author: mdangelo
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "ArrayEmployee.h"
#include "EmployeeAbmHelper.h"
#include "EmployeeAbm.h"
#include "commons/Commons.h"

#define C 1	 //Create
#define U 2  //Update
#define D 3  //Delete
#define R 4  //Show result
#define S 5  //Show all

#define TRUE 1
#define FALSE 0
#define ASC 1
#define DSC 0


//ABM
void _createEmployee(Employee *employees, int len, int *id);
void _updateEmployee(Employee *employees, int len);
void _deleteEmployee(Employee *employees, int len);

//QUESTIONS
void _showOprtResult(Employee *employees, int len);

void _showActiveEmployeesIds(Employee *employees, int len);
void _showAllEmployees(Employee *employees, int len);
int _thereIsAnEmployee(Employee *employees, int len);

int emp_initializeEmployees(Employee *employees, int len) {
	return ae_initEmployees(employees, len);
}

void emp_buildShowMenu(int *pOptSlct) {
	printf("===========Menu (elija una opcion)===========\n");
	printf("-1: ALTA de un empleado \n");
	printf("-2: MODIFICAR un empleado \n");
	printf("-3: BAJA de un empleado \n");
	printf("-4: INFORMAR resultados de los empleados \n");
	printf("-5: [NEW] MOSTRAR los empleados \n");
	printf("-6: SALIR \n");
	__fpurge(stdin);
	scanf("%d", pOptSlct);
}

void emp_executeOptSelected(int ptSelected, Employee *employees, int len, int *id) {
	switch (ptSelected) {
	case C:
		printf("=CREATE=\n");
		_createEmployee(employees, len, id);
		break;
	case U:
		printf("=UPDATE=\n");
		_updateEmployee(employees, len);
		break;
	case D:
		printf("=DELETE=\n");
		_deleteEmployee(employees, len);
		break;
	case R:
		printf("=SHOW RESULT=\n");
		_showOprtResult(employees, len);
		break;
	case S:
		printf("=SHOW ALL=\n");
		_showAllEmployees(employees, len);
		break;
	default:
		break;
	}
}
/***********Private**********************/
void _createEmployee(Employee *employees, int len, int *id) {
	char cConf;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int status;

	eh_getEmployeeData(name, lastName, &salary, &sector);
	eh_getConfirmation("Desea crear este nuevo empleado [S|N]?", &cConf);

	if (cConf == 'S') {
		status = ae_addEmployee(employees, len,*id, name, lastName, salary, sector);
		if (status){
			printf("\n=Empleado id %d creado con Exito=\n", *id);
			(*id)++;
		}
	}
}

void _updateEmployee(Employee *employees, int len) {
	char cConf;
	int id;
	int status;

	Employee emplUpd;

	int thereIsEmp = ae_canOperate(employees, len);
	if (thereIsEmp) {
		printf("Los ids actuales son: ");
		_showActiveEmployeesIds(employees, len);
		printf("\n");

		eh_getValidEmplId(&emplUpd.id);
		eh_getEmployeeData(emplUpd.name, emplUpd.lastName, &emplUpd.salary, &emplUpd.sector);
		eh_getConfirmation("Desea actualizar este empleado [S|N]?", &cConf);

		if (cConf == 'S') {
			emplUpd.isEmpty=FALSE;
			status = ae_updateEmployee(employees,len,emplUpd);
			if (status) {
				printf("\n=Empleado id %d actualizado con Exito=\n", emplUpd.id);
			}
		}
	} else {
		printf("==Error: Antes de hacer esta operacion cree un empleado==\n");
	}
}

void _deleteEmployee(Employee *employees, int len) {
	int id;
	int status;
	int thereIsEmp = ae_canOperate(employees, len);

	if (thereIsEmp) {
		printf("Los ids actuales son: ");
		_showActiveEmployeesIds(employees, len);
		printf("\n");

		eh_getValidEmplId(&id);
		status = ae_removeEmployee(employees, len, id);
		if (status)
			printf("\n=Empleado id %d eliminado con Exito=\n", id);
	} else {
		printf("==Error: Antes de hacer esta operacion cree un empleado==\n");
	}
}

void _showOprtResult(Employee *employees, int len) {
	int thereIsEmp = ae_canOperate(employees, len);
	if (thereIsEmp) {
		ae_sortEmployees(employees, len, ASC);
		ae_printEmployees(employees, len);
		ae_calcSalaryAverage(employees, len);
	} else {
		printf("==Error: Antes de hacer esta operacion cree un empleado==\n");
	}

}

int _thereIsAnEmployee(Employee *employees, int len) {
	int isEmpty = TRUE;
	int i = 0;
	do {
		isEmpty = (*(employees + i)).isEmpty;
		i++;
	} while (isEmpty && i < len);
	return isEmpty;
}

void _showActiveEmployeesIds(Employee *employees, int len) {
	for (int i = 0; i < len - 1; i++) {
		if ((*(employees + i)).isEmpty == FALSE) {
			printf("--%d--", (*(employees + i)).id);
		}
	}
}

void _showAllEmployees(Employee *employees, int len) {
	ae_printEmployees(employees, len);
}

