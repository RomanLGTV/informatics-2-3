﻿////------------------------------------------------------25-01.cpp
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
/*     int n, s, k, a;
    scanf("%d", &a);
    for (n = a, s = 0; n != 0; n = n / 10)
    {
        k = n % 10; s = s + k;   //находждение суммы цифр числа
    }
    printf("%d", s); */

////--------------------------------------------------------14
/*     int n, a, s, k;
    scanf("%d", &a);
    for (n = a, s = 0; n != 0; n = n / 10)
    {
        k = n % 10; if (k > s) s = k;
    }                      //находит наибольшую цифру числа (макс остатка числа)
    printf("%d", s); */

////--------------------------------------------------------15
/*     int n, a, s, k;
    scanf("%d", &a);
    for (n = a, s = 0; n != 0; n = n / 10)     //программа отзеркаливает исходное число
    {
        k = n % 10; s = s * 10 + k;
    }
    printf("%d", s); */

////--------------------------------------------------------16
/*     int i, n;
    int A[10] = {0,1,2,3,20,5,35,53,8,9};
    int a = 100;
    for (i = 0, n = a; n != 0; i++, n = n / 10);
    for (A[i--] = -1, n = a; n != 0; i--, n = n / 10)        // программа в элементы массива заносит цифры исходного числа по порядку
        A[i] = n % 10;                                       // или изменение элементов массива, индекс которых кратен 10
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", A[i]);
    } */

////--------------------------------------------------------17
/*     int j, a, s, n, i, k;
    int A[30000];
    for (j = 0, a = 10; a < 30000; a++) {
        for (n = a, s = 0; n != 0; n = n / 10)      // При каждом входе в цикл отсекается последняя цифра числа
        {
            k = n % 10; s = s + k;                  // Нахождение суммы цифр числа
        }
        if (a == s * s * s) A[j++] = a;             // Проверка на то, если куб суммы цфир числа равен самому
    }                                               // числу а, то это число запоминается в массив
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", A[i]);
    } */
////--------------------------------------------------------18
/* // Если в массиве есть палендром, то они записываются в массив с индеком j и выводятся
    int j, s, a, n, k;
    int A[1000];                                    // Массив со значениями от 0 до 1000    
    int v = 1000;                                   // Макс. значение а
    for (j = 0, a = 10; a < v; a++) {               // Цикл работает до 
        for (n = a, s = 0; n != 0; n = n / 10)      // После прохода цикла отсекается последняя цифра числа
        {
            k = n % 10; s = s * 10 + k;             // А в переменную k записывается последняя цифра числа, а
        }                                           // после s умножается на 10 и добавляется последняя цифра числа
        if (a == s) A[j++] = a;                     // Проверка на то, равны ли исходное число и перевёрнутое,
    }                                               // если да, то вносится в массив
    for (j = 0; j < 10; j++)
    {
        printf("%d ", A[j]);
    }
    return 0; */
////--------------------------------------------------------19
/* // Для каждого элемента, который меньше 0, происходит сдвиг массива,
// если индекс массива меньше чем вводимое число n - 1
    int i, j;
    int n = 10;
    int A[10] = {-3,-2,-1,0,1,2,3,4,5,6};
    for (i = 0; i < n; i++) {
        if (A[i] < 0) {
            for (j = i; j < n - 1; j++) A[j] = A[j + 1];
            n--;
            i--;
        }
    }
    for (j = 0; j < 10; j++) {
        printf("%d ", A[j]);
    } */
////--------------------------------------------------------20
/*     int i, k, j;                                                
    int A[10] = {2,5,12,75,1,3,17,60,24,39};          // элементы массива, которые должны быть меньше n
    int n = 10;                                       // Макс. элемент i
    for (i = 1, k = 0; i < n; i++)                    // поиск максимального числа в массиве и запоминание его индекса
        if (A[i] > A[k]) k = i;
    for (j = k; j < n - 1; j++) A[j] = A[j + 1];      // происходит условный сдвиг массива (по условию если j меньше каждого
    n--;                                              // элемента массива с индексом i, кроме последнего, то элемент, прошедший
    for (j = 0; j < 10; j++)                          // условия заменяется на последний и записывается в конце)
    {
        printf("%d ", A[j]);
    } */
////--------------------------------------------------------21
/*     int i, n, a;
    int v = 20;                             // Макс значение a
    int A[10] = {0,1,2,3,4,5,6,7,8,9};
    for (i = 0, a = 2; a < v; a++) {
    for (n = 2; n < a; n++)                 // Цикл проверяет все n, начиная с 2 до a
        {
            if (a % n == 0) break;          // Если число a кратно n, то цикл прерывается
        }
        if (n == a) A[i++] = a;             // Если число n равно числу a, то происходит замена
    }                                       // i-ого элемента массива на число а
    A[i] = 0;                               // Метка разделяющая найденные числа а и исходные элементы массива 

    for (i = 0; i < 10; i++) 
    {
        printf("%d ", A[i]);
    } */
////--------------------------------------------------------22
/*     int i, s, n, a;                             // Программа почти схожа с предыдущей прграммой, но слегка отличается
    int v = 20;                                 // Макс. значение а
    int A[10] = {0,1,2,3,4,5,6,7,8,9};
    for (i = 0, a = 2; a < v; a++) {
        for (s = 0, n = 2; n < a; n++)          // Цикл проверяет все n, начиная с 2 до a
            if (a % n == 0) { s = 1; break; }   // Если в цикле находится элемент a кратный n, то s = 1. Цикл прерывается
        if (s == 0) A[i++] = a;                 // Если а не кратно n, то i-тый элемент заменяем на а.
    }
    A[i] = 0;                                   // Метка разделяющая найденные числа а и исходные элементы массива 

    for (i = 0; i < 10; i++) 
    {
        printf("%d ", A[i]);
    } */
////--------------------------------------------------------23
/*    //программа находит простые числа в массиве А и записывает их в массив В
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
//for (j = 0, i = 0; i < n; i++) {
//    for (s = 0, m = 2; m < A[i]; m++)
//        if (A[i] % m == 0) { s = 1; break; }
//    if (s == 0) {
//        for (j = i; j < n - 1; j++) A[j] = A[j + 1];
//        n--;
//        i--;
//    }
//}
////--------------------------------------------------------27
//for (i = 0; i < n - 1 && val != 1; i++) {
//    for (m = 2; val % m != 0; m++);
//    val /= m; A[i] = m;
//}
//A[i] = 0;
////--------------------------------------------------------28
//v = A[0] + 1;
//do {
//    v--;
//    for (i = 0, s = 0; i < n; i++)
//        if (A[i] % v != 0) { s = 1; break; }
//} while (s == 1);
////--------------------------------------------------------29
//for (i = 0; i < n; i++)
//    if (A[i] % v != 0) { v--; i = -1; }

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
//for (k = 0, m = 1; m <= n; k++, m = m * 2);
//return k - 1; }
////--------------------------------------------------------35
//for (i = 0, j = n - 1; i < j; i++, j--)
//{
//    k = c[i]; c[i] = c[j]; c[j] = k;
//}
////--------------------------------------------------------36
//for (i = 0; i < n; i++) {
//    for (j = k1 = k2 = 0; j < n; j++)
//        if (c[i] != c[j])
//        {
//            if (c[i] < c[j]) k1++; else k2++;
//        }
//    if (k1 == k2) return i;
//}
//return -1;
////--------------------------------------------------------37 
//for (s = 0, i = 0; i < n - 1; i++) {
//    for (j = i + 1, m = 0; j < n; j++)
//        if (c[i] == c[j]) m++;
//    if (m > s) s = m, b = i;
//}
////--------------------------------------------------------38
//for (i = k = m = 0; i < n - 1; i++)
//    if (c[i] == c[i + 1]) k++;
//    else {
//        if (k > m) m = k, b = i - k - 1;
//        k = 0;
//    }
////--------------------------------------------------------39
// Считает сумму положительных элементов массива до первого нуля
//int A[10] = {-1, 2, 2, 67, 6, 7, -8, 9, 0, 12000};
//int n = 10;
//int i;
//int s; // Сумма
//for (s = 0, i = 0; i < n; i++) {
//    if (A[i] < 0) continue; // Если число отрицательное, то пропускаем итерацию
//    if (A[i] == 0) break; // Если встречается ноль, то прерываем выполнение цикла
//    s = s + A[i];
//}
//printf("s: %d\n", s);
////--------------------------------------------------------40
//for (s = 0, i = 0; i < n && A[i]>0; i++)
//s = s + A[i];
////--------------------------------------------------------41
//for (k = 0, s = 0, i = 0; i < n && k == 0; i++) {
//    if (A[i] < 0) k = 1;
//    s = s + A[i];
//}
////--------------------------------------------------------42
//for (s1 = 0, s2 = 0, i = 0, j = n - 1; i <= j;) {
//    if (s1 < s2) s1 += A[i], i++;
//    else s2 += A[j], j--;
//}
//return i;
////--------------------------------------------------------43
//for (s = 0, i = 0; i < n; i++) {
//    if (i % 2 == 0)	s = s + A[i];
//    else s = s - A[i];
//}
////--------------------------------------------------------44
//for (j = 0; n != 0; j++) {
//    for (k = 0, i = 1; i < n; i++)
//        if (A[i] < A[k]) k = i;
//    B[j] = A[k];
//    for (; k < n - 1; k++) A[k] = A[k + 1];
//    n--;
//}
////--------------------------------------------------------45
// Заполняет массив В элементами из массива А по возрастанию
//int j, max, n=10, k, i;
//int A[10] = { 1, 2, 19, 100, 0, 12, 13, 4, 3, 5 };
//int B[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
//for (j = 0, max = A[0]; j < n; j++)                    //нахождение максимального элемента в массиве А
//	if (A[j] > max) max = A[j];

//for (j = 0; j < n; j++) {
//	for (k = 0, i = 1; i < n; i++)  //Сортировка массива А в порядке возрастания
//		if (A[i] < A[k]) k = i;     // Для каждого j-того места в массиве B ищем оставшееся минимальное из массива А
//	B[j] = A[k];
//	A[k] = max + 1; // Присваиваем минимальному элементу макс. значение+1, чтобы он не мешался при след. итерации
//}

//for (i = 0; i < n; i++) {            
//	printf("A[%d] = %d\n", i, A[i]); //Вывод массива А в порядке возрастания
//	printf("B[%d] = %d\n", i, B[i]);
//}

////--------------------------------------------------------46
//while (n != 0) {
//    for (k = 0, i = 1; i < n; i++)
//        if (A[i] < A[k]) k = i;
//    c = A[k]; A[k] = A[n - 1]; A[n - 1] = c;
//    n--;
//}
////--------------------------------------------------------47
//for (j = 0, a = 10; a < v; a++) {
//    for (s = 0, n = a, s = 0; n != 0; n = n / 10) {
//        k = n % 10;
//        if (k != 0 && a % k != 0) { s = 1; break; }
//    }
//    if (s == 0) A[j++] = a;
//}
////--------------------------------------------------------48
//for (i = 0; i < n - 1; i++)
//    if (A[i] == A[i + 1]) {
//        for (j = i; j < n - 2; j++) A[j] = A[j + 2];
//        n = n - 2;
//        i--;
//    }
////--------------------------------------------------------49
//for (i = 0, k = -1; i < 10; i++) {
//    if (A[i] < 0) continue;
//    if (k == -1) k = i;
//    else
//        if (A[i] < A[k]) k = i;
//}
////--------------------------------------------------------50
//for (i = 0, s = 0, k = 0; i < 10; i++)
//    if (A[i] < 0) k = 1;
//    else {
//        if (k == 1) s++;
//        k = 0;
//    }
////--------------------------------------------------------51
//for (i = 0, s = 0; i < 10; i++)
//    if (A[i] > s) s = A[i];
////--------------------------------------------------------52
//for (i = 1, k = 0; i < 10; i++)
//    if (A[i] > A[k]) k = i;
////--------------------------------------------------------53
//for (i = 0, k = -1; i < 10; i++)
//{
//    if (A[i] < 0) continue;
//    if (k == -1) k = i;
//    else
//        if (A[i] < A[k]) k = i;
//}
////--------------------------------------------------------54
//for (i = 0, k = -1; i < 10; i++)
//{
//    if (A[i] < 0) continue;
//    if (k == -1 || A[i] < A[k]) k = i;
//}
////--------------------------------------------------------55
//for (i = 0, s = 0; i < 10; i++)
//    if (A[i] > 0) s++;
////--------------------------------------------------------56
//for (i = 1, s = 0; i < 10; i++)
//    if (A[i] > 0 && A[i - 1] < 0) s++;
////--------------------------------------------------------57
/*     int i, s, k;
    int A[7]={1,5,3,9,3,19,5};
    for (i = 1, s = 0, k = 0; i < 10; i++) {
        if (A[i - 1] < A[i]) k++;               // Проверка на то, больше ли элемент массива чем предыдущий
        else {
            if (k > s) s = k;                   // Если же нет, то проверяем больше ли количество подряд идущих чисел больших предыдущего
            k = 0;                              // чем s. Если условие верно, то присваиваем переменной s значение переменной k.
        }                                       // Обнуляем k
    }                                           // В итоге подсчитываются все такие значения и выводятся
    printf("%d \n", k);
    printf("%d \n", s); */
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
