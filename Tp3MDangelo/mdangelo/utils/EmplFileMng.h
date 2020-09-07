/*
 * EmplFileMng.h
 * Created on: 6 sep. 2020
 * Author: monkey
 */

#ifndef MDANGELO_UTILS_EMPLFILEMNG_H_
#define MDANGELO_UTILS_EMPLFILEMNG_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#include "../../LinkedList.h"
#include "../../mdangelo/entities/MainEntities.h"
#include "../../mdangelo/repositories/EmployeeRepo.h"


FILE * fmng_openFileByMode(char *pFilePath,char *pFileMode);
int fmng_closeFile(FILE* pFile);

int fmng_chargeLinkedListFromTxtFile(FILE *pFile,LinkedList *linkedlist);
int fmng_chargeLinkedListFromBinaryFile(FILE *pFile,LinkedList *linkedlist);

int fmng_writeBinaryFileFromLinkedList(FILE *pFile,LinkedList *linkedlist);
int fmng_writeTextFileFromLinkedList(FILE* pFile, LinkedList* linkedlist);

#endif /* MDANGELO_UTILS_EMPLFILEMNG_H_ */
