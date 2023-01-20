/**
 * @file        program10.c
 * @author      Dhruv Ghadiali (easy.programming95@gmail.com)
 * 
 * @brief 
 * @version     0.1
 * @date        20 January 2023
 * 
 * @copyright   Copyright (c) 2023
 * @details     Program for print following pattern (This patten only work for odd numbers)
 * 
 *      +       +
 *      + +   + +
 *      + + + + +  
 *      + +   + +
 *      +       +
 */

#include <stdio.h>

int main()
{  
    printf("\n \n \n");
    printf("Program 11 \n \n \n");

    int endIndex = 11;
    int spaceValueForLoop1 = endIndex - 2;
    int spaceValueForLoop2 = endIndex % 2 == 0 ? 2 : 1;
    int skip = endIndex % 2 == 0 ? 1 :  0;

    for(int index1 = 0; index1 < endIndex / 2; index1++){
        for(int index2 = 0; index2 <= index1; index2++){
            printf("+ ");
        }

        for(int index3 = 0; index3 < spaceValueForLoop1; index3++){
            printf("  ");
        }
        spaceValueForLoop1 = spaceValueForLoop1 - 2;

        for(int index4 = 0; index4 <= index1; index4++){
            printf("+ ");
        }
        printf("\n");
    }

    if(skip == 0){
        for(int index5 = 0; index5 < endIndex; index5++){
            printf("+ ");
        }
        printf("\n");
    }
    

    for(int index6 = endIndex / 2 ; index6 > 0 ; index6--){
        for(int index7 = 0; index7 < index6; index7++){
            printf("+ ");
        }

        if(skip == 1){
            skip = -1;
        }else{
            for(int index8 = 0; index8 < spaceValueForLoop2; index8++){
                printf("  ");
            }
            spaceValueForLoop2 = spaceValueForLoop2 + 2;
        }
        
        for(int index9 = 0; index9 < index6; index9++){
            printf("+ ");
        }
        printf("\n");
    }

    printf("\n \n \n");
    return 0;
}