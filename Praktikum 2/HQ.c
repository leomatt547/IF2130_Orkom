/*Kode C
Nama: Leonard Matheus
NIM : 13519215
Kelas: 03
Matkul: Or/Arsikom*/

int HQ(int n){
    int a;
    int result;
    int arr[6];

    read_six_numbers(n, arr);
    if (arr[0]< 0){
        bad_instruction(); //break supaya aman
    }
    a = 1;
    while (a<6){
        if (arr[a] != arr[a-1]+a){
            bad_instruction();
        }
        else{
            a++;
        }
    }
    return result;
}