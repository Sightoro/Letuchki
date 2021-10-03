#include <iostream>
/// ВЫДЕЛИТЬ ФУНКЦИИ В ОТДЕЛЬНЫЕ ЗАГОЛОВОЧНЫЙ И ОБЪЕКТНЫЙ ФАЙЛ И В ПРОСТРАНСТВО ИМЕН BMSTU

/// неправильная конвенция названия функции (см. название функции ниже) видите разницу? 
/// функция должна принимать на вход УКАЗАТЕЛЬ, а не массив
/// массив символов не с-строка
size_t LengthString(const char mass[]){
    int i = 0;
    while (mass[i]){
        i++;
    }
    return i;
}

/// неправильное название функции
/// она обращается к массиву, это не понятно из названия, функция должна принимать символ, и все
int convert_char2int(int c, char *mass){
    if (mass[c] - '0' < 0){
        return -1;
     }
     if ((0 <= mass[c] - '0') && (mass[c] - '0' <= 9)){
         return mass[c] - '0';
     }
     if ((0 <= mass[c] - 'A') && (mass[c] - 'A' <= 5)){
         return mass[c] - 'A' + 10;
     }
    if ((0 <= mass[c] - 'a') && (mass[c] - 'a' <= 5)){
        return mass[c] - 'a' + 10;
    }
    else{ /// неправильное оформление кода
        return 0;
    }
}
/// mass == это масса
/// array == это массив ! (подсказка)
int main(int argc, char *argv[]) {
    int converted_mass[argc - 1];
    /// minus_vector WTF?~?~?
    int minus_vector = 1;
    for (int i = 1; i < argc; i++){
        int hex2dec = 0;
        if (convert_char2int(0, argv[i]) == -1){
            minus_vector = -1;
        }
        for (int n = 2; n < LengthString(argv[i]); n++){
            hex2dec = hex2dec * 16 + convert_char2int(n, argv[i]);
        }
        converted_mass[i] = hex2dec * minus_vector;
    }
    for (int i = argc - 1; i > 0; i--) {
        /// выделите свой вариант в отдельную статическую константу
        std::cout << converted_mass[i] + 111 << std::endl;
    }
    return 0;
}
