/*Kode C
Nama: Leonard Matheus
NIM : 13519215
Kelas: 03
Matkul: Or/Arsikom*/
#include <stdio.h>
int Pyramid(int n){
    int a1, a2, a3, a4, a5, a6, a7, a8, a10, a11, a12;
    int result;

    if (isoc99_sscanf(a1, "%d %d", &a10, &a11) <= 1 )){
        bad_instruction();
    }
    switch(a10){
        case 0:
            a1 = 823;
            goto L1;
        case 1:
            a1 = 0;
        
        L1:
            a2 = a1 - 179;
            goto L2;

        case 2:
            a2 = 0
        L2:
            a3 = a2 + 750;
            goto L3;

        case 3:
            a3 = 0;

        L3:
            a4 = a3 - 899;
            goto L4;

        case 4:
            a4 = 0;
        L4:
            a5 = a4 + 899;
            goto L5;
        
        case 5:
            a5 = 0;
        
        L5:
            a6 = a5 - 899;
            goto L6;
        
        case 6:
            a6 = 0;
        
        L6:
            a7 = a6 + 899;
            break;
        
        case 7:
            a7 = 0;
            break
        
        default:
            bad_instruction();
            return result;
    }
    a8 = a7 - 899;
    if (a10 > 5 || a11 != 8){
        bad_instruction();
    }
    return result;
}