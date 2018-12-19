//
//  Palindrome.c
//  Chapter12_Message_reversal
//
//  Created by Nicholas Morris on 19/12/18.
//  Copyright © 2018 Nicholas Morris. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>


#define N 100

int main(void){
    
    bool palindrome = true;
    int ch;
    int array[N];
    int *p = array, *start, *end;
    
//    printf("Enter a message: ");
//    //Get user input while not new line or EOF
//    while ((ch = getchar()) != '\n' && ch != EOF) {
//        //Convert to uppercase to ignore differences in case
//        ch = toupper(ch);
//        //If it as an alphabet add to array and ignore otherwise
//        if(isalpha(ch) ){
//            array[i++] = ch;
//        }
//
//
//    }
//    k = i;
//    //Starting from beginning and end and moving towards center or array compare the letters.
//    for(j = 0; j < i; j++, k--){
//        if(array[j] != array[k-1]){
//            palindrome = false;
//        }
//    }
//    if(palindrome){
//        printf("Palindrome");
//    }
//    else{
//        printf("Not palindrome");
//    }
//    puts("\n");
//
//    //Sucessful exit
//    return 0;
    printf("Enter a message: ");
    while((ch = getchar()) != '\n' && ch != EOF){
        ch = toupper(ch);
        if(isalpha(ch)){
            *p++ = ch;
        }
    }
    end = p;
    for(start = array; start < p; end--, start++){
        
        if((char)*start != (char)*(end - 1)){
            palindrome = false;
        }
    }
    if(palindrome){
        printf("Palindrome");
    }
    else{
        printf("Not palindrome");
    }
    puts("");
    
    
}
