/* Nama: Leonard Matheus
   Kelas: IF3
   NIM : 13519215
   */

/* PRAKTIKUM 1*/

int chiba (int x, int y){
    return (~(x&~y)&~(~x&y));
}

int haitatsu(void){
    return ~(1<<31);
}

int hokkaido (int x, int n){
    return (x >> (n << 3)) & 0xFF;
}

int kayo (int x, int n){
    return (x + ((x >> 31)&((1 << n)+ ~0))) >> n;
}

unsigned aya (unsigned uf){
    unsigned shr = (uf >> 23)& 0xFF;
    unsigned shl = uf << 9;
    if (shr == 0xFF && shl != 0x00){
        return uf;
    }else{
        return uf ^ (1<<31);
    }
}

int misato (int x){
    return (~(~(~x+1)>>31)+1)&~(~x>>31)+1;
}

int shinigami (int x){
    int shr = x>>31;
    int tanda = shr & 1;
    int kali2 = x+ x;
    int tandakali2 = (kali2 >> 31)&1;
    int kali3 = kali2+x;
    int tandakali3 = (kali3 >> 31)&1;
    int overflow (tanda^tandakali2) | (tandakali2^tandakali3);
    int shr_overflow = (overflow << 31) >> 31;
    int over (~shr)^(0x01 << 31);
    return (shr_overflow & over) | ((~shr_overflow)& kali3);
}

int mirai(int x){
    int batas1, batas2, batas3, cekbatas, cektujuh, ceksembilan;
    batas1 = 0x30;
    cekbatas = x^batas1;
    batas2 = 0x9;
    ceksembilan = cekbatas & ~batas2;
    batas3 = 0x7;
    cektujuh = cekbatas & ~batas3;
    return !cektujuh | !ceksembilan;
}

int omoide(unsigned uf){
    int tanda = (uf >> 31)&1;
    int syarat = (uf >> 23)& 0xFF;
    int bagi = uf & 0x7FFFFF;
    int bias = syarat - 127;
    *Kalau NaN dan Inf*/
   if (!syarat){
       return 0;
   }
   if (bias < 0){
       return 0;
   }
   if (bias >= 30){
       return 0x80000000u;
   }

   bagi = bagi | 0x800000;
   if (bias > 23){
       bagi = bagi << (bias-23);
   }else{
       bagi = bagi >> (23-bias);
   }
   if (tanda){
       return ~bagi+1;
   }
   return bagi;
}

int revival (int x){
    int const dlpn = x>>3;
    int const bts = x & 7;
    return dlpn + (dlpn << 2) + (bts + (bts << 2) + (x >> 31 & 7) >> 3);
}



