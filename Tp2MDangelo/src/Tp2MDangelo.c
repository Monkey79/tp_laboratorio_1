/*
 ============================================================================
 Name        : Tp2MDangelo.c
 Author      : mdangelo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "mdangelo/libs/ArrayEmployee.h"
#include "mdangelo/libs/EmployeeAbm.h"

#define TOP 10

#define TEST_MODE 1
#define OK 1
#define FALSE 0

int main(void) {
	int id = 0;
	int ptSelected = 0;
	int status;

	Employee employees[TOP];

	status = emp_initializeEmployees(employees, TOP);

	/***Harcode data****/
	Employee emp1 = { 1, "marcos", "zapato", 22.22, 1, FALSE };
	Employee emp2 = { 2, "adriana", "asturia", 33.33, 2, FALSE };
	employees[0] = emp1;
	employees[1] = emp2;
	id = 3;

	if (status) {
		do {
			emp_buildShowMenu(&ptSelected);
			emp_executeOptSelected(ptSelected, employees, TOP, &id);
		} while (ptSelected >= 1 && ptSelected < 6);
	}

	return EXIT_SUCCESS;
}
