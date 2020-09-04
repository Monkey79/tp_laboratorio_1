/*
 * ArrayEmployee.h
 * Created on: 22 abr. 2020
 * Author: mdangelo
 */

#ifndef UTN_CUSTOM_LIBS_UTN_ARRAY_EMPLOYEES_H_
#define UTN_CUSTOM_LIBS_UTN_ARRAY_EMPLOYEES_H_

typedef struct {
	int id;
	char name[51];
	char lastName[51];
	float salary;
	int sector;
	int isEmpty;
}Employee;

int ae_initEmployees(Employee *list,int len);
int ae_addEmployee(Employee *list, int len, int id, char name[], char lastName[], float salary, int sector);
int ae_updateEmployee(Employee *list, int len, Employee empl);
int ae_findEmployeeById(Employee *list, int len, int id);
int ae_removeEmployee(Employee *list, int len, int id);
int ae_sortEmployees(Employee *list, int len, int order);
int ae_printEmployees(Employee* list, int len);
void ae_calcSalaryAverage(Employee *employees, int len);
int ae_canOperate(Employee *employees, int len);


#endif /* UTN_CUSTOM_LIBS_UTN_ARRAY_EMPLOYEES_H_ */
