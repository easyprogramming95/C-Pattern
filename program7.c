/**
 * @file        program7.c
 * @author      Dhruv Ghadiali 
 * (easy.programming95@gmail.com)
 * 
 * @brief 
 * @version     0.1
 * @date        11 January 2023
 * 
 * @copyright   Copyright (c) 2023
 * @details     
 * Program for print following pattern 
 * ( This patten only work for odd numbers.)
 * 
 *      + 
 *      + + 
 *      + + +
 *      + + 
 *      + 
 */

#include <stdio.h>

int main()
{  
    printf("\n \n \n");
    printf("Program 7 \n \n \n");

    int endIndex = 11;
    int endIndexOfLoop1 = endIndex / 2;
    int endIndexOfLoop2 = endIndex - endIndexOfLoop1;

    for(int index1 = 0; index1 < endIndexOfLoop1; index1++){
        for(int index2 = 0; index2 <=  index1; index2++){
            printf("+ ");
        }
        printf("\n");
    }

    for(int index3 = endIndexOfLoop2; index3 > 0; index3--){
        for(int index4 = 0; index4 < index3; index4++){
            printf("+ ");
        }
        printf("\n");
    }

    printf("\n \n \n");
    return 0;
}