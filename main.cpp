#include <iostream>
#include <cmath>

using namespace std;

int LenghtString(const char mass[]){
    int i = 0;
    while (mass[i]){
        i++;
    }
    return i;
}

int main(int argc, char *argv[]) {
//    cout << argv[1] << endl;
//    cout << argv[3][0] << endl;
//    cout << argv[3][0] - 0 << endl;
//    cout << 35 * (-1) << endl;

//    cout << strlen(argv[1]) << endl; // можно и таким образом посчитать длинну строки
    int summa_v_dec = 0;
    int sixt_in_dec[argc - 1];
    int sign = 1;
    for (int i = 1; i < argc; i++){
        int symbol_in_int[LenghtString(argv[i])];
        int c = 0;
        int dec_number = 0;
        for (int n = LenghtString(argv[i]) - 1; n >= 0; n--){
            if (argv[i][c] - 0 == 45){
                sign = -1;
                c++;
            }
            else if ((48 <= argv[i][c] - 0) && (argv[i][c] - 0 <= 57)){
                symbol_in_int[n] = argv[i][c] - 48;
                dec_number += symbol_in_int[n] * pow(16, n); // pow(что возвести, во что возчести)
                c++;
            }
            else if ((0 <= argv[i][c] - 'A') && (argv[i][c] - 'A' <= 5)){
                symbol_in_int[n] = argv[i][c] - 'A' + 10;
                dec_number += symbol_in_int[n] * pow(16, n);
                c++;
            }
            else{
                cout << "This number isn't in 16 system" << endl;
            }

        }

        sixt_in_dec[i] = dec_number * sign;
        summa_v_dec += dec_number;
    }
    for (int i = 1; i < argc; ++i){
        cout << sixt_in_dec[i] + 111 << endl;
    }
    //cout << sixt_in_dec[argc - 1] << "=" << summa_v_dec << endl; // можно вывести сумму вводимых чисел
    //cout << (sizeof (sic_in_dec))/sizeof(sic_in_dec[0]) << endl; // вычисление длинны маассива
    return 0;
}
