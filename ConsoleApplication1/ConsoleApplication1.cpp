#include <stdio.h>

int main() {
//--------------------------------------------------------1
/*     for (i = n1; !(n1 % i == 0 && n2 % i == 0); i--);
    printf("i = %d \n", i); */

//--------------------------------------------------------2
/*     for (n = a; n % a != 0 || n % b != 0; n++);
    printf("n = %d \n", n); */

//--------------------------------------------------------3
    // Находит минимальный делитель n для числа a
/*     for (n = 2; n < a; n++)
        if (a % n == 0) break;
    
    if (n == a) return 1;
    printf("n = %d \n" ,n);
    return 0;
} */

//--------------------------------------------------------4
/*     for (n = 2; n < a && a % n != 0; n++);
    if (n == a) return 1;
    printf("n = %d \n", n);
    return 0; */

//--------------------------------------------------------5
/*     for (s = 0, n = 2; n < a; n++)
        if (a % n == 0) s++;
    
    if (s == 0) return 1;
    // Количество делителей числа a за исключением самого числа a
    printf("n = %d \n", s);
    return 0; */

////--------------------------------------------------------6
/*     for (s = 0, n = 2; n < a; n++)
        if (a % n == 0) { s = 1; break; }
    printf("s = %d \n", s);
    // Возвращает 1, если число составное, 0, если число простое
    return s; */

////--------------------------------------------------------7
/*     n = 2
    while (a % n != 0) {
        n++;
        if (n == a) return 1;
    }
    // Возвращает 0, если число составное, 1, если число простое
    return 0; */

////--------------------------------------------------------8
/*     n = 10;
    for (i = 0; i < n; i++)
        if (A[i] < 0) break;
    // Если весь массив заполнен неотрицательными числами, то возвращает 1
    if (i == n) return 1;
    return 0; */

////--------------------------------------------------------9
/*      n = 10;
    for (i = 0; i < n && A[i]>0; i++);
    // Если весь массив заполнен положительными числами, то возвращает 1
    if (i == n) return 1;
    return 0; */

////--------------------------------------------------------10
/*     n = 10;
    for (s = 0, i = 0; i < n; i++)
    if (A[i] < 0) s++;
    // Возвращает 1, если в массиве нет отрицательных чисел 
    if (s == 0) return 1;
    return 0; */

////--------------------------------------------------------11
/*     n = 10;
    for (s = 0, i = 0; i < n; i++)
        if (A[i] < 0) { s = 1; break; }
    // Возвращает 1, если в массиве есть отрицательное число
    return s; */

////--------------------------------------------------------12
/*     n = 10;
    
    while (A[i] > 0) {
        i++;
        if (i == n) return 1;
    } 
    // Возвращает 1, если в массиве все числа больше нуля
    return 0; */

////--------------------------------------------------------13
/*     int num, sum, mod, en_Num;
    scanf("%d", &en_Num);
    for (num = en_Num, sum = 0; num != 0; num = num / 10)
    {
        mod = num % 10; sum = sum + mod;   //находждение суммы цифр числа
    }
    printf("%d", sum); */

////--------------------------------------------------------14
/*     int num, en_Num, max_mod, mod;
    scanf("%d", &en_Num);
    for (num = en_Num, max_mod = 0; num != 0; num = num / 10)
    {
        mod = num % 10; if (mod > max_mod) max_mod = mod;
    }                      //находит наибольшую цифру числа (макс остатка числа)
    printf("%d", max_mod); */

////--------------------------------------------------------15
/*     int num, en_Num, ans, mod;
    scanf("%d", &en_Num);
    for (num = en_Num, ans = 0; num != 0; num = num / 10)     //программа отзеркаливает исходное число
    {
        mod = num % 10; ans = ans * 10 + mod;
    }
    printf("%d", ans); */

////--------------------------------------------------------16
/*     int i, num;
    int A[10] = {0,1,2,3,20,5,35,53,8,9};
    int max_a = 100;
    for (i = 0, num = max_a; num != 0; i++, num = num / 10);
    for (A[i--] = -1, num = max_a; num != 0; i--, num = num / 10)        // программа в элементы массива заносит цифры исходного числа по порядку
        A[i] = num % 10;                                                 // или изменение элементов массива, индекс которых кратен 10
    for (i = 0; i < 10; i++)                                             // Проще говоря, распределяет цифры числа по элементам массива
    {
        printf("%d\n", A[i]);
    } */

////--------------------------------------------------------17
/*     int j, a, sum, num, i, mod;
    int A[30000];
    for (j = 0, a = 10; a < 30000; a++) {
        for (num = a, sum = 0; num != 0; num = num / 10)      // При каждом входе в цикл отсекается последняя цифра числа
        {
            mod = num % 10; sum = sum + mod;                  // Нахождение суммы цифр числа
        }
        if (a == sum * sum * sum) A[j++] = a;             // Проверка на то, если куб суммы цифр числа равен самому
    }                                               // числу а, то это число запоминается в массив
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", A[i]);
    } */
////--------------------------------------------------------18
    // Если в массиве есть палендром, то они записываются в массив с индеком j и выводятся
/*     int j, sum, a, num, mod;
    int A[1000];                                    // Массив со значениями от 0 до 1000    
    int v = 1000;                                   // Макс. значение а
    for (j = 0, a = 10; a < v; a++) {               // Цикл работает до 
        for (num = a, sum = 0; num != 0; num = num / 10)      // После прохода цикла отсекается последняя цифра числа
        {
            mod = num % 10; sum = sum * 10 + mod;             // А в переменную mod записывается последняя цифра числа, а
        }                                           // после sum умножается на 10 и добавляется последняя цифра числа
        if (a == sum) A[j++] = a;                     // Проверка на то, равны ли исходное число и перевёрнутое,
    }                                               // если да, то вносится в массив
    for (j = 0; j < 10; j++)
    {
        printf("%d ", A[j]);
    }
    return 0; */
////--------------------------------------------------------19
    // Удаляет все отрицательные числа в массиве 
/*     int i, j;
    int max = 10;
    int A[10] = {-3,-2,-1,0,1,2,3,4,5,6};
    for (i = 0; i < max; i++) {
        if (A[i] < 0) {
            for (j = i; j < max - 1; j++) A[j] = A[j + 1];
            max--;
            i--;
        }
    }
    for (j = 0; j < 10; j++) {
        printf("%d ", A[j]);
    } */
////--------------------------------------------------------20
    //Удаление наибольшего элемента массив
/*     int i, imax, j;                                                
    int A[10] = {2,5,12,75,1,3,17,60,24,39};          // элементы массива, которые должны быть меньше max
    int max = 10;                                       // Макс. элемент i
    for (i = 1, imax = 0; i < max; i++)                    // поиск максимального числа в массиве и запоминание его индекса
        if (A[i] > A[imax]) imax = i;
    for (j = imax; j < max - 1; j++) A[j] = A[j + 1];      // происходит условный сдвиг массива (по условию если j меньше каждого
    max--;                                              // элемента массива с индексом i, кроме последнего, то элемент, прошедший
    for (j = 0; j < 10; j++)                          // условия заменяется на последний и записывается в конце)
    {
        printf("%d ", A[j]);
    } */
////--------------------------------------------------------21
    // Вывод массива простых чисел 
/*     int i, num, en_Num;
    int max = 20;                                      // Макс значение en_Num
    int A[10] = {0,1,2,3,4,5,6,7,8,9};
    for (i = 0, en_Num = 2; en_Num < max; en_Num++) {
    for (num = 2; num < en_Num; num++)                 // Цикл проверяет все num, начиная с 2 до en_Num
        {
            if (en_Num % num == 0) break;              // Если число en_Num кратно num, то цикл прерывается
        }
        if (num == en_Num) A[i++] = en_Num;            // Если число num равно числу en_Num, то происходит замена
    }                                                  // i-ого элемента массива на число en_Num
    A[i] = 0;                                          // Метка разделяющая найденные числа en_Num и исходные элементы массива 

    for (i = 0; i < 10; i++) 
    {
        printf("%d ", A[i]);
    } */
////--------------------------------------------------------22
    // Программа почти схожа с предыдущей программой, но слегка отличается, тем, что
    // она просто находит простые числа
/*     int i, s, num, en_Num;                             
    int max = 20;                                            // Макс. значение en_Num
    int A[10] = {0,1,2,3,4,5,6,7,8,9};
    for (i = 0, en_Num = 2; en_Num < max; en_Num++) {
        for (s = 0, num = 2; num < en_Num; num++)            // Цикл проверяет все num, начиная с 2 до en_Num
            if (en_Num % num == 0) { s = 1; break; }         // Если в цикле находится элемент en_Num кратный num, то s = 1. Цикл прерывается
        if (s == 0) A[i++] = en_Num;                         // Если en_Num не кратно num, то i-тый элемент заменяем на en_Num.
    }
    A[i] = 0;                                                // Метка разделяющая найденные числа а и исходные элементы массива 

    for (i = 0; i < 10; i++) 
    {
        printf("%d ", A[i]);
    } */
////--------------------------------------------------------23
/*    // Программа находит простые числа в массиве А и записывает их в массив В
    int i, j, n, m;
    int A[5] = { 2, 5, 3, 10, 1 };
    int B[5] = { 0, 0, 0, 0, 0 };
    n = 5;
    for (j = 0, i = 0; i < n; i++) {
        for (m = 2; m < A[i]; m++)  //проверяет, больше ли текущее значение массива, чем текущее значение m
        {
            if (A[i] % m == 0) break; //проверка выполняется, если больше. Проверяем делится ли текущее значение массива на значение m
        }                             //производим выход из внутреннего цикла, если условие выполняется
        if (m == A[i]) B[j++] = A[i];   //если текущее знаение массива совпадает со значеем m, в массив B записываем текущее значение из массива А
    }
    B[j] = 0;
    for (j = 0; j < 10; j++) 
    {
        printf("%d ", B[j]);
    }  */
////--------------------------------------------------------24
/*     //программа находит в массиве А простые числа и записывает их в массив В
	int i, j, n, m, s;
	int A[4] = { 1, 4, 3, 6 };
	int B[4] = { 0, 0 , 0 , 0 };
    n = 4;
	for (j = 0, i = 0; i < n; i++) {
	    for (s = 0, m = 2; m < A[i]; m++)   //принцип практичестки тот же, что и в задании 23, только здесь "индикатором"
	        if (A[i] % m == 0) { s = 1; break; } //того, что найдены посторонние делители, кроме 1, служит переменная s, которая в этом случае принимает значение 1 и прерывает цикл
	    if (s == 0) B[j++] = A[i];
	}
	B[j] = 0;
    for (j = 0; j < 10; j++) 
    {
        printf("%d ", B[j]);
    }  */
////--------------------------------------------------------25
/*     //программа убирает из цикла все простые числа, сдвигая влево составные числа
    int i, j, n, m;
    int A[6] = { 3, 4, 7, 6, 10, 2 };
    n = 6;
    for (i = 0; i < n; i++) {
        for (m = 2; m < A[i]; m++)
        {
            if (A[i] % m == 0) break;
        }
        if (m == A[i]) {
            for (j = i; j < n - 1; j++) A[j] = A[j + 1];
            n--;
            i--;
        }
    } */
////--------------------------------------------------------26
    // Удаление из массива простых чисел, но скорее формально, так как длина массива фактически не сокращается.
/*     int j, i, s, n = 5, m, A[5] = { 1, 45, 8, 900, 67 }; 
    for (j = 0, i = 0; i < n; i++) {                     // проход по массиву 
        for (s = 0, m = 2; m < A[i]; m++)                   // цикл ищет простые числа 
            if (A[i] % m == 0) { s = 1; break; }            // если элемент кратен m, то s=1 и мы выходим из внут. цикла 
        if (s == 0) {
            for (j = i; j < n - 1; j++) A[j] = A[j + 1];    // если s=0,то ты делаем сдвиг влево
            n--;                                            // из массива исключаются простые числа 
            i--;
        }
    }
    for (j = 0; j < n; j++) printf("%d ", A[j]); */
////--------------------------------------------------------27
    // Раскладывание числа на простые множители 
/*     int i, n = 5, val = 10, m, A[5] = { 4, 33, 902, 88, 5 }; 
    for (i = 0; i < n - 1 && val != 1; i++) {               
        for (m = 2; val % m != 0; m++);            // если val не кратен m, то m++;цикл завершается,как только val становится кратным
        val /= m; A[i] = m;                        //присваиваем в val целую часть от деления на m, в текущий эелемент присваиваем m 
    }
    A[i] = 0;                                      // при завершении цикла в текущий эелемент присваиваем 0 

    for (i = 0; i < n; i++) printf("%d ", A[i]);  */
////--------------------------------------------------------28
    // Поиск наибольшего общего делителя 
/*     int v, s, i, n = 5, A[5] = { 10, 902, 88, 602, 4 }; 
    v = A[0] + 1;                                       //первый элемент массива +1 
    do {
        v--;
        for (i = 0, s = 0; i < n; i++)
            if (A[i] % v != 0) { s = 1; break; }        // если элемент не кратен v, то выходим из внут. цикла, s=1 
    } while (s == 1);

    printf("%d", v); */
////--------------------------------------------------------29
    // Находит наибольший делитель из диапазона v 
/*     int i,v = 10, n = 5, A[5] = { 100, 68, 32, 4, 2 }; 
    for (i = 0; i < n; i++)
        if (A[i] % v != 0) { v--; i = -1; }

    printf("%d", v); */

////--------------------------------------------------------30
/*     int j, i, a;
    int A[10] = {0,1,2,3,4,5,6,7,8,9};
    int v = 1500; // Макс. значение а
    int m = 10; // Кол-во элементов массива, которые нужно поменять или длина массива, хз

    int s = 0; // Видимо вместо boolean
    // Заполняет исходный массив уникальными элементами не кратными друг другу, начиная с 2
    // Эти найденные уникальные элементы должны быть меньше чем v
    for (i = 0, a = 2; a < v && i < m - 1; a++) {
        // Для каждого а < v 
        for (s = 0, j = 0; j < i; j++)
            // Если а кратно A[j], то s = 1. Прерываем цикл
            if (a % A[j] == 0) { s = 1; break; }

        if (s == 0) A[i++] = a; // Если а не делится ни на один из элементов массива,
    }                           // то i-тый элемент заменяем на а.

    // Метка разделяющая найденные числа а и исходные элементы массива                            
    A[i] = 0;


    for (i = 0; i < 10; i++) {
        printf("%d ", A[i]);
    } */

////--------------------------------------------------------31
/*     // Эта программа возвращает индекс первого элемента массива, 
    // который не является уникальным, т.е. если в массиве минимум 2 элемента с одинаковым значением
    int j, i;
    int c[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 1 };
    int n = 10; // Длина массива

    // Каждый элемент массива с индексом i, кроме последнего
    for (i = 0; i < n - 1; i++)
        for (j = i + 1; j < n; j++)
            // Сравниваем с последующими элементами
            // Если находим элемент равный исходному(с[i]), то возвращаем индекс элемента (i) в массиве с.
            if (c[i] == c[j]) return i;

    // Если массив не содержит одинаковых чисел, возвращаем -1.
    return -1; */

////--------------------------------------------------------32
/*     // Эта программа вычисляет самое часто встречающееся число в массиве.
    // Т.е. для int A[4] = {1, 2, 2, 2} после выполнения программы b = 1, s = 3.
    // Если в массиве несколько чисел с одинаковым числом встреч ({1, 1, 1, 2, 2, 2}),
    // то b = 0, s = 3.
    int i, j;
    int c[10] = { 1, 2, 3, 2, 3, 3, 7, 8, 9, 4 };
    int n = 10; // Длина массива

    int s; // Макс. количество встреч числа в массиве.
    int b; // Индекс самого часто встречающегося числа.
    int k; // Счётчик количества встреч текущего числа в массиве. 

    // Каждый элемент (c[i]) массива
    for (s = 0, i = 0; i < n; i++) {
        for (k = 0, j = 0; j < n; j++)
            // Обнуляем счетчик k.
            // Cравниваем с остальными.
            // Если находим число равное c[i], то увеличиваем счётчик k на 1.
            // То есть считаем сколько раз число встречается в массиве.
            if (c[i] == c[j]) k++;

        // Если текущее число (c[i]) встречается чаще предыдущего,
        // то заменяем b на индекс текущего числа, s на кол-во встреч текущего числа
        if (k > s) s = k, b = i;
    }

    printf("s: %d\n", s);
    printf("b: %d\n", b); */

////--------------------------------------------------------33
/*     // Находит индекс первого элемента самой длинной цепочки равных(одинаковых) чисел
    // и вычисляет длину этой цепочки
    int i;
    int A[10] = {0,1,2,3,4,5,6,7,8,9};
    int n = 10;
    int k;// Счётчик количества равных чисел идущих подряд {2, 2, 2, 2, 2, 2}
    // или длина цепочки равных чисел
    int b; // Индекс первого элемента самой длинной цепочки равных чисел
    int s; // Макс. длина цепочки равных чисел

    // Для каждого эл-та массива, кроме последнего
    for (s = 0, i = 0; i < n - 1; i++)
        // Если текущий элемент равен следующему
        if (A[i] == A[i + 1]) {
            // Считаем количество равных чисел идущих подряд т.е. длину цепочки равных чисел
            for (k = 2; i + k < n && A[i] == A[i + k]; k++);

            // Сравниваем с предыдущей цепочкой 
            // Если длина текущей цепочки больше предыдущей, то присваиваем b и s новые значения
            if (k > s) s = k, b = i;
        }

    printf("s: %d\n", s);
    printf("b: %d\n", b); */

////--------------------------------------------------------34 
// программа находит возможное количество делений числа
// на 2 числа max, т.е. сколько раз надо умножить 1 на 2, не превышая max 
/*     int code;
    int number; 
    int max=32; //количество элементов массива и число, для которого надо найти сколько раз его можно разделить на 2 
	for (code = 0, number = 1; number <= max; code++, number = number * 2);
    printf("Programm exited with code %d\n", code-1);
	return code - 1; */
////--------------------------------------------------------35
    //программа переворачивает массив
/*     int i;
    int j;
    int n=10; 
    int k;
    int c[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	    for (i = 0, j = n - 1; i < j; i++, j--)     // Цикл действует до предпоследнего элемента
	    {
		    k = c[i]; c[i] = c[j]; c[j] = k;        // Переприсваивание элементов, для переварачивания
		
	    }
	    for (i = 0; i < n; i++) {
		    printf("c[%d]= %d \n", i, c[i]);
	    } */
////--------------------------------------------------------36
// Программа сравнивает элементы массива( сначала 1ый элемент со всеми, потом второй элемент со всеми и т д) Проверяет меньше ли второй 
//элемент массива, чем первый элемент, затем меньше ли третий элемент,чем первый и т д. Если количество элементов больших c[i] и меньших чем c[i] совпадает, то программа выводит i 
//т.е. индекс того элемента. Если количество больших элементов ни разу за всю проверку не было равно числу меньших элементов, то выводим 
// количество больших элементов чем последний элемент и количество меншьших элементов, чем последний элемент массива
/*     int i;
    int n=11;
    int k1, k2;
    int j;
    int c[] = { 2,3,3,4,6,6,4,6,9,6 };
        for (i = 0; i < n; i++) {   //цикл проверяет элементы от 0 до n
            for (j = k1 = k2 = 0; j < n; j++)//цикл проверяет элементы от 0 до n  
                if (c[i] != c[j])
                {
                    if (c[i] < c[j]) k1++; else k2++; //сравнивает больше ли с[j] чем c[i]
                }
            if (k1 == k2) return i;
        }
        printf("k1=%d\n",k1);
        printf("k2=%d\n",k2);
        return -1; */
////--------------------------------------------------------37 
/*     int s, n, m, b, i, j;
    int c[10] = {0,9,9,1,9,5,4,7,8};

    n = 10;
    b = 0;

    for (s = 0, i = 0; i < n - 1; i++)          // Находит максимальное кол-во совпадений значений элементов массива
    {                                           // и номер первого элемента, с которого начинатеся совпадение
        for (j = i + 1, m = 0; j < n; j++) 

            if (c[i] == c[j]) m++;

        if (m > s) s = m, b = i;
    }

    printf("%d\n", s);
    printf("%d\n", b); */

////--------------------------------------------------------38
//Максимальное кол-во совпадений, идущих подряд, и индекс элемента, идущего перед совпадением.
/*     int i, count, max_count, n, ans_ind;
    int c[10] = { 1,2,2,3,3,5,6,7,8,9 };

    n = 10;                                                                         // Максимальное значение массива
    ans_ind = 0;

    for (i = count = max_count = 0; i < n - 1; i++)                                 // Цикл действует до n - 1 (до предпоследнего)
        if (c[i] == c[i + 1]) count++;                                              // Проверка на то, если активный i-тый элемент равен следующему
        else                                                                        // i-тому элементу (i + 1). При выполнении увеличивается количество на 1.
        {                                                                           // Если пред. условие не выполнилось, то проверяется след. условие:
            if (count > max_count) max_count = count, ans_ind = i - count - 1;      // Если количество больше максимального количества, то max_count = count, а также
            count = 0;                                                              // b присваивается индекс элемента уменьшенный на количество и единицу,
        }                                                                           // а после count присваивается 0 и цикл снова ищет числа, идущие подряд, которые совпадают

    printf("Max Count = %d\n", max_count);
    printf("Operation = %d\n", ans_ind); */

////--------------------------------------------------------39
    // Считает сумму положительных элементов массива до первого нуля
/*     int A[10] = {-1, 2, 2, 67, 6, 7, -8, 9, 0, 12000};
    int n = 10;
    int i;
    int s; // Сумма
    for (s = 0, i = 0; i < n; i++) {
        if (A[i] < 0) continue; // Если число отрицательное, то пропускаем итерацию
        if (A[i] == 0) break; // Если встречается ноль, то прерываем выполнение цикла
        s = s + A[i];
    }
    printf("s: %d\n", s); */
////--------------------------------------------------------40
    // Нахождение суммы положительных элементов массива до первого отрицательного
/*     int s, i, n = 10;
    int A[10] = {1, 6, -2, -10, 4, 5, -24, -1, 17, -6};
    for (s = 0, i = 0; i < n && A[i]>0; i++) {
        s = s + A[i];
        printf("%d\n", s);
    } */
////--------------------------------------------------------41
    //Нахождение суммы первых положительных элементов массива до отрицательного включительно
/*     int k, s, i;
    int A[10] = {1, 2, 3, 2, -7, -12, -32, -8, -10, -14};
    int n = 10;
    for (k = 0, s = 0, i = 0; i < n && k == 0; i++) {   // Цикл действует, если индекс i меньше макс значения n и k = 0
        if (A[i] < 0) k = 1;                            // Если элемент массива отрицательный, то k = 1.
        s = s + A[i];
    }
    printf("%d\n", s); */
////--------------------------------------------------------42
    // Нахождение такого индекса массива, при котором сумма элементов с меньшими индексами
    // примерно равна сумме элементов с большими индексами (При этом элементы входят в сумму, то есть являются одним целым)
/*     int s1, s2, i, j;
    int n = 10;
    int A[10] = {1, 2, 5, 10, 2, 13, 26, 2, 4, 10};
    for (s1 = 0, s2 = 0, i = 0, j = n - 1; i <= j;) {
        if (s1 < s2) s1 += A[i], i++;
        else s2 += A[j], j--;
    }
    printf("s1 = %d; s2 = %d\n", s1, s2);
    printf("\ni = %d; j = %d\n", i, j);
    return i; */
////--------------------------------------------------------43
    //Нахождение разности сумм четных и нечетных чисел в массиве
/*     int s, i;
    int n = 5;
    int A[5] = {2, 3, 4, 3, 6};
    for (s = 0, i = 0; i < n; i++) {        
        if (i % 2 == 0)	s = s + A[i];   // Если элементы массива чётные, то элементы суммируются
        else s = s - A[i];              // Если же отрицательные, то вычитаются.
    }
    printf("%d\n", s); */
////--------------------------------------------------------44
    //Сортировка выборкой по возрастанию, которая записывается в массив B
/*     int j, i, k;
    int A[10] = {1, 15, 9, 3, 7, 2, 16, 21, 1, 10};
    int B[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n = 10;
    for (j = 0; n != 0; j++) {
        for (k = 0, i = 1; i < n; i++)              // Цикл действует пока n не равен нулю, а также i < n
            if (A[i] < A[k]) k = i;                 // Если элемент i-того массива меньше элемента k-того массива, то k = i;
        B[j] = A[k];                                // В массив B записывается элемент с массива A k-того.
        for (; k < n - 1; k++) A[k] = A[k + 1];     // Цикл действует пока индекс k меньше предпоследнего максимального. Сдвигается массив.
        n--;                                        // Уменьшение максимального числа n.
    }
    for(int i = 0; i < 10; i++) {
        printf("B[%d] = %d\n", i,  B[i]);
    } */

////--------------------------------------------------------45
    //Заполняет массив В элементами из массива А по возрастанию
/*     int j, max, n=10, k, i;
    int A[10] = { 1, 2, 19, 100, 0, 12, 13, 4, 3, 5 };
    int B[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    for (j = 0, max = A[0]; j < n; j++)                    //нахождение максимального элемента в массиве А
        if (A[j] > max) max = A[j];

    for (j = 0; j < n; j++) {
        for (k = 0, i = 1; i < n; i++)  //Сортировка массива А в порядке возрастания
            if (A[i] < A[k]) k = i;     // Для каждого j-того места в массиве B ищем оставшееся минимальное из массива А
        B[j] = A[k];
        A[k] = max + 1; // Присваиваем минимальному элементу макс. значение+1, чтобы он не мешался при след. итерации
    }

    for (i = 0; i < n; i++) {            
        printf("B[%d] = %d\n", i, B[i]);
    } */

////--------------------------------------------------------46
/*     int n = 10, k, i, c, A[10] = { 1, 15, 29, 10, 0, -1, -12, 3, 5, 6 };
    while (n != 0)
    {
        for (k = 0, i = 1; i < n; i++)
            if (A[i] < A[k]) k = i;           //запоминает номер минимального элемента      
        c = A[k]; A[k] = A[n - 1]; A[n - 1] = c;     //сортирует массив в порядке убывания
        n--;
    }
    for (i = 0; i < 10; i++)
        printf("A[%d] = %d\n", i, A[i]); //выводит отсортированный массив */

////--------------------------------------------------------47
    //  Заполняет массив числами, в которых каждая цифра делит само число без остатка.
/*     int j, a, s, n, k;
    int v = 16;
    int A[5];
    for (j = 0, a = 10; a < v; a++) {
        for (s = 0, n = a, s = 0; n != 0; n = n / 10) {    // Цикл выполняется пока n не равен 0, при этом после каждого действия
            k = n % 10;                                    // запоминается последняя цифра числа и откидываеся у изначального (div и mod)
            if (k != 0 && a % k != 0) { s = 1; break; }    // Если последняя цифра числа k и остаток от деления числа а на k не равны нулю, то s = 1. Цикл прекращает работу.
        }
        if (s == 0) A[j++] = a;                            // Если выполнилось условие и s = 0, то в массив сохраняется число a
    }
    for (j = 0; j < 5; j++)
        printf("A[%d] = %d\n", j, A[j]); */
////--------------------------------------------------------48
    // Удаляет по два равных элемента, которые идут подряд
    // На места удалённых элементов сдвигаются последующие элементы массива
/*     int A[10] = { -1,2,2,0,0,0,7,-8,9,7 };
    int n = 10; // Длина массива
    int i, j;
    for (i = 0; i < n - 1; i++)
        // Если текущий и след. элемент равны
        if (A[i] == A[i + 1]) {
            // То сдвигаем массив влево, так что вместо текущего и след. элемента
            // окажутся числа которые шли после
            for (j = i; j < n - 2; j++) A[j] = A[j + 2];
            n = n - 2;
            i--;
        }
    
    for (i = 0; i < n; i++) {
        printf("%d ", A[i]);
    } */

////--------------------------------------------------------49
    //ищет минимальный неотрицательный элемент массива
/*     int i, s, k, A[10] = { 0, 2, -2, -1, 5, 6, 9, 11, 15, 20};
    for (i = 0, k = -1; i < 10; i++) {
        if (A[i] < 0) continue;             //пропускает отрицательные элементы
        if (k == -1) k = i;
        else if (A[i] < A[k]) k = i;        //запоминает номер минимального элемента 
    }
    printf("Min=%d", A[k]); */

////--------------------------------------------------------50
/* 	int s, i, k, A[10] = { -1, 2, 3, -1, 4, -6, -1, 5, 11, -9 };
	for (i = 0, s = 0, k = 0; i < 10; i++)
		if (A[i] < 0) k = 1;
		else {                      //ищет количестов пар элементов(отрицательный элемент, положительный элемент, которые идут друг за другом) 
			if (k == 1) s++;        //s - переменная счетчик    
			k = 0;
		}
	printf("%d", s); */

////--------------------------------------------------------51
/* 	int i, s, A[10] = { 1, 2, 3, 4, 5, 6, -7, -8, 9, 10 };
	for (i = 0, s = 0; i < 10; i++)
		if (A[i] > s) s = A[i];    //поиск максимума в массиве, путем присваивания максимального элемента переменной
	printf("%d", s); */

////--------------------------------------------------------52
/* 	int i, k, A[10] = { 1, 2, 3, 4, 5, 6, -7, 9, 10, 11 };
	for (i = 1, k = 0; i < 10; i++)
		if (A[i] > A[k]) k = i;           //поиск максимума в массиве, путем запоминания индекса максимального элемента
	printf("%d\n", A[k]); */

////--------------------------------------------------------53
    // Поиск минимального неотрицательного элемента массива, путем запоминания его номера
/* 	int i, k, A[10] = { 5, 2, 3, 4, 5, 6, 7, -8, 9, -10 };
	for (i = 0, k = -1; i < 10; i++)
	{
		if (A[i] < 0) continue;         // Пропуск отрицательных элементов массива
		if (k == -1) k = i;             // Если k по прежнему -1, то k заменяется на индекс i
		else if (A[i] < A[k]) k = i;    // Иначе же если значение массива i-того меньше значения массива k-того
	}                                   // То k также заменяется на i
	    printf("%d\n", A[k]); */

////--------------------------------------------------------54
/* 	int i, k, A[10] = { 1, 2, 3, 4, 5, 0, 7, 8, 9, -10 };
	for (i = 0, k = -1; i < 10; i++)
	{                                           //поиск минимального неотрицательного элемента массива, запоминая его номер
		if (A[i] < 0) continue;                 //пропуск отрицательных элементов
		if (k == -1 || A[i] < A[k]) k = i;      //сложное условие "или"
	}
	printf("%d", A[k]); */

////--------------------------------------------------------55
/* 	int i, s, A[10] = { -1, 2, 3, 4, -5, 6, 7, 8, 9, -11 };
	for (i = 0, s = 0; i < 10; i++) //определяет количество отрицательных элементов массива
		if (A[i] < 0) s++;          //переменная счетчик
	printf("%d", s); */

////--------------------------------------------------------56
/* 	int i, s, A[10] = { 1, -2, -3, 0, -5, 0, 7, 8, -11, 1 };  
	for (i = 1, s = 0; i < 10; i++)          //ищет количество положительных элементов, перед которыми стоят отрицательные элементы
		if (A[i] > 0 && A[i - 1] < 0) s++;   //переменная счетчик 
	printf("%d", s); */

////--------------------------------------------------------57
    // Подсчитывается количество подряд идущих чисел, до макс. большого включительно, но тогда ответ будет
    // на единицу меньше. Или же просто до макс. большого числа не включительно.
/*     int i, s, k;
    int A[7]={1,2,10,9,3,19,5};
    for (i = 1, s = 0, k = 0; i < 10; i++) {
        if (A[i - 1] < A[i]) k++;               // Проверка на то, больше ли данный элемент массива чем предыдущий
        else {
            if (k > s) s = k;                   // Если нет, то проверяем больше ли количество подряд идущих чисел больших предыдущего
            k = 0;                              // чем s. Если условие верно, то присваиваем переменной s значение переменной k
        }                                       // Обнуляем k
    }                                           // В итоге подсчитываются все такие значения и выводятся
    printf("MaxCountOut = %d \n", s);
    printf("MaxCountIn = %d \n", s + 1); */

////--------------------------------------------------------58
/*     // Считает количество пар (отрицательное число, положительное число),
    // числа в паре должны идти друг после друга
    int A[10] = { -1, 2, -3, 4, -5, 6, 7, 8, 9, 10 };
    int i;
    int s; // Количество пар (отрицательное число, неотрицательное число)
    int k; // Индикатор знака предыдущего числа (0 - неотрицательное число, 1 - отрицательное)
    // Проходим по всему массиву
    for (i = 0, s = 0, k = 0; i < 10; i++)
        if (A[i] < 0) 
            k = 1;
        else { // Если число не меньше нуля,
            // То проверяем было ли пред. число меньше нуля
            if (k == 1)
                s++;
            k = 0; // Обнуляем индикатор знака пред. числа
        }
    printf("s: %d\n", s); */

////--------------------------------------------------------59
//for (s = 1, i = 1; i <= n; i++) s = s * i;
////--------------------------------------------------------60
//for (s = 1, i = 0; i <= n; i++) s = s * 2;
////--------------------------------------------------------61
//for (s = 0, i = 0; i < n; i++) s = s + A[i];
////--------------------------------------------------------62
//for (s = 1, i = 0; i < 10; i++) s = s * A[i];
////--------------------------------------------------------63
//for (n = 2; n < a; n++)
//{
//    if (a % n == 0) break;
//}
//if (n == a) puts("Good");
////--------------------------------------------------------64
//for (s = 0, n = 2; n < a; n++)
//{
//    if (a % n == 0) s++;
//}
//if (s == 0) puts("Good");
////--------------------------------------------------------65
//for (i = 0; i < n; i++)
//    if (A[i] < 0) break;
//if (i == n) puts("Good");
////--------------------------------------------------------66
//for (i = 2; i < a; i++)
//    if (a % i == 0) break;
//if (i == a) puts("Good");
////--------------------------------------------------------67
//for (s = A[0], i = 1; i < 10; i++)
//    A[i - 1] = A[i];
//A[9] = s;

}
