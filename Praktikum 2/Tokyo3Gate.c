/*Kode C
Nama: Leonard Matheus
NIM : 13519215
Kelas: 03
Matkul: Or/Arsikom*/

int Tokyo3Gate(*char[] s){
    int result;
    result = strings_not_equal(s, "A knight must never run away, no matter how mighty the enemy.");
    if (result){
        bad_instruction();
    }
    return result;
}