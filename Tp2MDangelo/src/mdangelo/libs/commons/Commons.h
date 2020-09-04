/*
 * utn_commons.h
 *
 *  Created on: 13 abr. 2020
 *  Author: mdangelo
 */

#ifndef UTN_COMMONS_UTN_COMMONS_H_
#define UTN_COMMONS_UTN_COMMONS_H_


int c_getPositiveInteger(int iFrom);
float c_getPositiveFloat2D(float fFrom);
void c_initializeIntArray(int *pIntArr, int iTop, int iEmptyValue);

int c_getStrArrayLen(char* strArr);
void c_cleanString(char *strValue, int len);

#endif /* UTN_COMMONS_UTN_COMMONS_H_ */
