/*
author: Angel Rojas
date: 4/10/2019
purpose: reverse a string front to back using c

*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char* argv[]){
 int j = 4;
 char str[5] = {'A','N','G','E','L'};
 char temp[5] = {};
 
 printf(" Before: \n");
 printf("String:");
 for(int i=0; i < 5; i++) {
  printf(" %c ", str[i]);
 }
 printf("\n");
 for(int i=0; i != j; i++) {
  temp[i] = str[i];
  printf(" TEMP %c ", temp[i]);
  str[i] = str[j];
  printf(" STRi %c ", str[i]);
  printf(" TEMP again  %c ", temp[i]);
  str[j] = temp[i];
  printf(" STRj %c ", str[j]);
  j--;
 }
 printf("\n After: \n");
 for(int i=0; i < 5; i++) {
  printf(" str %c", str[i]);  // d is integer, f is float, c is character
  printf(" temp %c\n", temp[i]);  // d is integer, f is float, c is character
 }

}
