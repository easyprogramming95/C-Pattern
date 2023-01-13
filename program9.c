/**
 * @file        program9.c
 * @author      Dhruv Ghadiali (easy.programming95@gmail.com)
 * 
 * @brief 
 * @version     0.1
 * @date        12 January 2023
 * 
 * @copyright   Copyright (c) 2023
 * @details     Program for print following pattern
 * 
 *          + 
 *        + + +  
 *      + + + + +
 *    + + + + + + +
 */

#include <stdio.h>

int main()
{  
    printf("\n \n \n");
    printf("Program 9 \n \n \n");

    int endIndex = 11;
    int endIndexOfLoop1In = endIndex * 2;
    
    for(int index1 = 0; index1 < endIndex; index1++){
        for(int index2 = 0; index2 < endIndexOfLoop1In; index2++){
            printf(" ");
        }
        endIndexOfLoop1In = endIndexOfLoop1In - 2;

        for(int index3 = 0; index3 <= index1 * 2; index3++){
            printf("+ ");
        }
        printf("\n");
    }

    printf("\n \n \n");
    return 0;
}