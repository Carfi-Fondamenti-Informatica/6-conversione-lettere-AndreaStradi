//
// Created by andre on 30/11/2021.
//

#include "lib.h"

char funzione (char let){
    char res;
    if ((let >= 'a' && let <= 'z') || (let>='A' && let<='Z')) {
        if (let >= 'a' && let <= 'z'){
            res= let - 32;
            return res;
        }else if(let>='A' && let<='Z'){
            res=let + 32;
            return res;
        }
    }else{
        return '0';
    }}
