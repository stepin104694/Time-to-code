#include "break_string.h"

char break_string(char sen[])
{

    //BHARATH I'm stuck here, I'm not able to figure out how should I compare the two dimentional array return in test_break_string.c
    //BHARATH I wanted to write the code with and without using strtok string function
    //BHARATH The logic works fine in pythontutor visualizer tool which you suggested to use
    //BHARATH, The below commented logic with using strtok function works fine as well in pythontutor(online)
    //BHARATH I request you to solve this and let me know should I test string in unit testing...Thank you


    int k=0;
    int word_count=0;

    char tempstr[25]={0};
    char arrstr[10][15]={0};
    for(int i=0;k<strlen(sen);i++)
    {
        for(int j=0;sen[k]!='\0';j++)
        {
            if(sen[k] == '_')
            {
                tempstr[j] ='\0';k++;
                //printf("\n");
                break;
            }
            else
            {

              tempstr[j]=sen[k];//printf("%c",str[i]);
              k++;
            }
        }
        strcpy(arrstr[i],tempstr);
        strcpy(tempstr,"\0");
        word_count++;
    }
    return arrstr;
/*
    int init_size = strlen(sen);
    char delim[] = " ";
    char arrstr[10][15];
    char *ptr = strtok(sen, delim);
    int i=0;
    while(ptr != NULL)
    {
        strcpy(arrstr[i],ptr);i++;
        ptr = strtok(NULL, delim);
    }
    return arrstr;*/
}
