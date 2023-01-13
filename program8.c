/**
 * @file        program8.c
 * @author      Dhruv Ghadiali (easy.programming95@gmail.com)
 * 
 * @brief 
 * @version     0.1
 * @date        12 January 2023
 * 
 * @copyright   Copyright (c) 2023
 * @details     Program for print following pattern
 *              This patten only work for odd numbers
 * 
 *          + 
 *        + +  
 *      + + +  
 *        + + 
 *          +
 */

#include <stdio.h>

int main()
{  
    printf("\n \n \n");
    printf("Program 8 \n \n \n");

    int endIndex = 11;
    int endIndexOfLoop1 = endIndex/2;
    int endIndexOfLoop2 = endIndex - endIndexOfLoop1;
    int endIndexOfLoop1In = endIndex % 2 != 0 ? endIndexOfLoop1 * 2 : (endIndexOfLoop1 * 2) - 2;
    int endIndexOfLoop2In = 0;

    for(int index1 = 0; index1 < endIndexOfLoop1; index1++){
        for(int index2 = 0; index2 <= endIndexOfLoop1In; index2++){
             printf(" ");
        }
        endIndexOfLoop1In = endIndexOfLoop1In - 2;

        for(int index3 = 0; index3 <= index1; index3++){
            printf("+ ");
        }
        printf("\n");
    }

    for(int index4 = endIndexOfLoop2; index4 > 0; index4--){
         for(int index5 = 0; index5 < endIndexOfLoop2In ; index5++){
            printf(" ");
        }
        endIndexOfLoop2In = endIndexOfLoop2In + 2;

        for(int index6 = 0; index6 < index4; index6++){
            printf(" +");
        }         
        printf("\n");
    }

    printf("\n \n \n");
    return 0;
}