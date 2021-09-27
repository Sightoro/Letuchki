#include <iostream>
#include <cmath>

/// Добавте в .gitignore все ненужные файлы 
/// запрещено использовать пространство имен std:: глобально
using namespace std;

/// Учите слово длинна
/// функции в языке называем стилем under_score
int LenghtString(const char mass[]){
    int i = 0;
    while (mass[i]){
        i++;
    }
    return i;
}

int main(int argc, char *argv[]) {
/// Лишгий комментарий
//    cout << strlen(argv[1]) << endl; // можно и таким образом посчитать длинну строки
    int summa_v_dec = 0;
    /// плохое название переменной
    int sixt_in_dec[argc - 1];
    int sign = 1;
    for (int i = 1; i < argc; i++){
        /// выделите функционал в отдельную функцию
        /// алгоритм не верный
        /// функционал выделить в отдельную функцию в пространстве имен BMTSU
        int symbol_in_int[LenghtString(argv[i])];
        int c = 0;
        int dec_number = 0;
        for (int n = LenghtString(argv[i]) - 1; n >= 0; n--){
            if (argv[i][c] - 0 == 45){
                sign = -1;
                c++;
            }
            /// не пишите коды символов, происходит неявное привидение типов
            /// -0 wtf
            else if ((48 <= argv[i][c] - 0) && (argv[i][c] - 0 <= 57)){
                symbol_in_int[n] = argv[i][c] - 48;
                /// нужно обойтись без возведения в степень
                dec_number += symbol_in_int[n] * pow(16, n); // pow(что возвести, во что возчести)
                c++;
            }
            /// тут почему-то вы используете символы
            else if ((0 <= argv[i][c] - 'A') && (argv[i][c] - 'A' <= 5)){
                symbol_in_int[n] = argv[i][c] - 'A' + 10;
                dec_number += symbol_in_int[n] * pow(16, n);
                c++;
            }
            else{
                /// по условию задачи числа на вход попадают корректные
                cout << "This number isn't in 16 system" << endl;
            }
        }

        sixt_in_dec[i] = dec_number * sign;
        summa_v_dec += dec_number;
    }
    /// обявите ваш номер варианта в глобальную константную переменную
    for (int i = 1; i < argc; ++i){
        cout << sixt_in_dec[i] + 111 << endl;
    }
    /// ненужный комментарий
    //cout << sixt_in_dec[argc - 1] << "=" << summa_v_dec << endl; // можно вывести сумму вводимых чисел
    //cout << (sizeof (sic_in_dec))/sizeof(sic_in_dec[0]) << endl; // вычисление длинны маассива
    return 0;
}
/// Глупые и не нужные комментарии, в следущий раз если такое будет присутствовать в коде, то остальное проверять не буду
//В первый день зимы
//На краешке Земли
//Нечаянно расстались мы с тобой
//Падал первый снег
//И розы отцвели
//От нас ушла весенняя любовь
//Но ты была отчаянно красива
//
//Красиво
//Ты вошла в мою грешную жизнь
//Красиво
//Ты ушла из нее
//Источник teksty-pesenok.ru
//Но, играя, разбила мне душу
//А ведь это совсем не игрушка
//Это сердце мое
