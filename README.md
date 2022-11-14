# c-help

*Дисклеймер: практически все необходимые алгоритмы уже кем-то придуманы и описаны, с помощью google и stackoverflow можно найти решение задач практически любой сложности и фактически это самый важный в разработке инструмент. Главное запомнить основный систаксис и функции языка.*

### 1. Главная функция:
```
int main() {
    return 0;
}
```
Запуск программы всегда начинается с функции `main()`. `return` это функция возрата, в данном случае после завершения функции `main()` возращается нуль, туда без проблем можно поставить любое число, но в программировании принято возвращать что-то отличное от нуля только в случае возникнования ошибок, например код ошибки.

### 2. Переменные:
```
int a = 4;
float b = 5.0;
char c = 'g';
```
Объявление переменный (ее создание) начинается с [типа данных](https://ru.wikipedia.org/wiki/%D0%A1%D0%B8%D1%81%D1%82%D0%B5%D0%BC%D0%B0_%D1%82%D0%B8%D0%BF%D0%BE%D0%B2_%D0%A1%D0%B8), вроде int (целые числа), float (числа с плавающей запятой) или char (символы по таблице [ANCII](https://ru.wikipedia.org/wiki/ASCII)), далее ее название, и при необходимости значение.

Основная задача переменных хранить значения, которые можно использовать при вычислениях, выводе на экран или в функции `return`:
```
int main() {
    int a = 10;
    return a;
}
```

### 3. Комментарии:
Комментарии крайне полезная вещь при разработки программ, например с их помощью можно описать как работает сложный алгоритм. Компилятор их полностью игноирует, они нужны только для тех кто пишет код:
```
//Строчный комментарий, игноируется все что после двойного слэша
/* Многострочный комментарий, игноируется все что между слэшем со звездой, его необходимо всегда закрывавть */
```

### 4 Арифметические выражения: 
Си поддерживает множество привычных арифметических операций от обычного сложения до деления с остатком. Основные операции:
```
int main() {
    int a = 19;
    int b = 11;
    int c = 7;
    
    int result;
    
    result = a + b; // сложение
    printf("Result sum: %d\n", result); //%d это обозначение формата целых чисел, необходимую букву можно найти в таблице по ссылке типы данных. \n переход на следующую строку. 
    
    result = a - b; // вычитание
    printf("Result sub: %d\n", result);
    
    result = a * b; // умножениее
    printf("Result mul: %d\n", result);
    
    result = a / b; // деление, важно чтобы получить дродь, необходимо использовать тип данных float или double, при int всегда результат округляется в меньшуу сторону т.е. при 9.99 получим 9
    printf("Result div: %d\n", result);
    float result2 = (float)a / (float)b; //(float) это преобразование типа, т.е. целочисленный тип преобразуется в тип с плавающей запятой далее происходит деление
    printf("Result div 2%f\n", result2); // не забываем поменять %d на %f
    
    result = a % b; // остаток от деления
    printf("Result mod: %d\n", result);
    
    //си так же не игноирует порядок действий, т.е. сначала будут вычисляться умножение и деление, тольео потом сложение и вычитаение.
    result = a + b * c;
    printf("Result: %d", result);
    
    return 0;
}
```

Результат кода:
```
Result sum: 30
Result sub: 8
Result mul: 209
Result div: 1
Result div 21.727273
Result mod: 8
Result: 96
```


