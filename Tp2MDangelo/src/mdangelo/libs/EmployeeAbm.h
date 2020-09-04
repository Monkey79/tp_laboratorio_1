/*
 * EmployeeAbm.h
 * Created on: 2 sep. 2020
 * Author: monkey
 */

#ifndef MDANGELO_LIBS_EMPLOYEEABM_H_
#define MDANGELO_LIBS_EMPLOYEEABM_H_

int emp_initializeEmployees(Employee *employees, int len);
void emp_buildShowMenu(int *pOptSlct);
void emp_executeOptSelected(int ptSelected, Employee *employees, int len, int *id);

#endif /* MDANGELO_LIBS_EMPLOYEEABM_H_ */
