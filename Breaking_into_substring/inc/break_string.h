#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/**
*@file break_string.h
*/

/**
*@note arrstr is the array of strings, it's a global variabe
*/
char arrstr[10][15];

/**
*Break the string into substrings based on a delimeter.
*@param[in] sen takes sentence which need to be broken into substrings
*@param[out] arrstr is a two dimentional array that stores substrings
*@return array of strings
*/
char* break_string(char sen[]);
