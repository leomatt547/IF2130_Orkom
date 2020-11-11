/*Kode C
Nama: Leonard Matheus
NIM : 13519215
Kelas: 03
Matkul: Or/Arsikom*/
#include <stdio.h>
int CommandCenter(n){
    int n1, n2, n3, result;
    if (isoc99_sscanf(n, "%d %d", &n2, &n3) != 2 || (unsigned int) n2 > 14 ){
        bad_instruction();
    }
    if (func4(n2,0,14) != 10 || n3 != 10){
        bad_instruction();
    }
    return result;
}

int func4(int n1, int n2, int n3){
    int a;

    a = n2 + (n3 - n2)/2;
    if (n3 > n1){
        a += func4(n1, n2, a-1);
    }
    else if (a < n1){
        a += func4(n1,a+1,n3);
    }
    return a;
}