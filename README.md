# Software_And_Data_Security_1st_homework
# Домашняя работа по дисциплине "Защита программ и данных"

## Задание

Реализовать программу на языке C\C++, которая должна включать следующую последовательность действий:
- Запрос какой-либо информации от пользователя (логин, номер телефона, номер какого-либо документа, ключ любого вида и т.д.)
- Произведение манипуляций по разработанному алгоритму с введённой пользователем информацией для генерации ответа на ключевой вопрос.
- Запрос ключа от пользователя и сравнение его со сгенерированным ключом на этапе 2.
- Выдача результата по принципу: сгенерированный и алгоритмом и введённый пользователем ключи совпадают – TRUE-> Поздравление или доступ к какой либо информации; Не совпадают – ошибка.

При реализации программы должны быть соблюдены условия:
- Внутри программы должен быть какой-либо алгоритм преобразования данных для генерации ключевой информации. Например, сложение по модулю кодов букв из таблицы ASCII, Подсчёт количества букв в логине пользователя и умножение его на текущий год, запросы системного времени или к каким-либо заранее определённым файлам.
- Должны быть реализованы меры защиты от отладки: специальные функции языка, искусственное усложнение кода, директивы препроцессора, условия сборки компилятора, упаковщики и т. д.

Результатом выполнения задания должна быть разработанная программа в виде исходных кодов, make/cmake файла сборки или инструкции по сборке в случае применения дополнительных средств или специальных скриптов. Документация к программе с описанием алгоритма работы, описанием входных и выходных данных и применяемых в программе мер защиты.

## Описание работы программы

1. На входе программа запрашивает дату рождения в установленной форме (например, 01.01.2012).
2. По разработанному алгоритму программа генерирует ключ.
3. Затем программа запрашивает пользовательский ключ.
4. Происходит сравнения ключа, введённого пользователем, с ключом, сгенерированным программой. На выходе программа выводит одну из двух строчек: "Success" или "Failed".

## Алгоритм генерации ключа

Я придумал и реализовал следующий алгоритм (весь понятный читабельный код алгоритма до внесения защитных мер - в файле ```SDS1homework_old(not protected).cpp```):

![Альтернативный текст](https://sun9-51.userapi.com/impg/Jzw4fF7lhi7xKecoZDTt6qI0So5tYCxdb-bSeQ/9hEL6Lr-BrE.jpg?size=1553x687&quality=96&sign=a2380cf25a2030c42e5fcbee8b7a2f20&type=album)

Генерирующийся программно ключ является строкой, состоящей из 6 частей, которые я назвал:

- ``` day0 ``` - символьный элемент, образующийся путем объединения ASCII кодов символа ```D``` (68 в dec) и символа ```dob[0]```(первый элемент, введенный пользователем, а именно цифра от 0 до 3 (соответственно, 48-51 в dec), отвечающая за десятки дней).

По умолчанию, заполненный массив даты рождения будет выглядеть так: (на примере 01.01.2012)

```[0][1][2][3][4][5][6][7][8][9]``` - индекс элемента строки

```[0][1][.][0][1][.][2][0][1][2]``` значение элемента строки

Соответственно, первому индексу соответствует элемент ```dob[0]```, второму - ```dob[1]``` и так далее.


- ``` day1 ``` - целочисленный элемент, образующийся из ASCII кодов ```dob[0]```, ```dob[1]``` и ```A``` (65 в dec) с небольшой модификацией деления с остатком.

Например: пользователь ввел 01.01.2012. Тогда day1 = 49 + 65 * (48 % 10) (=8) =  569

- ``` mon0 ``` - образуется следующим образом: (48 + 49) * ( (48 - 48) + (49 - 48) ) * 12 = 1164

Все последующие составляющие высчитываются схожим образом.

- ``` code ``` - объединенный код, собранный программой. Является "сцепкой" ``` day0 - day2```, ```mon0``` , ```mon1``` и ``` year0 ``` в особой последовательности.

Финальным кодом является "вырезка" с 3 по 11 элемент, с которым программа и будет сравнивать пользовательский код.


## Примененные меры защиты

1. Лексическая обфускация: замена названий идентификаторов на случайные наборы символов; комментарии не отображаюсь действительность и являются ложными.
2. Обфускация потока управления: добавление избыточного мертвого кода в виде функций и действий, которые не используются для главной задачи; "переплетение" функций; использование оператора goto.
3. Использованы флагов: -s для удаления таблицы .symtab, -O3 (оптимизация и ухудшение читабельности).
4. Обработка бинарного файла с помощью утилиты strip (с флагом -s (удаление символов и информации о перемещении)).

## Пример работы программы

![Альтернативный текст](https://sun9-53.userapi.com/impg/jpRujClBxSKX2ItygIQQ-SuLuIZGygBqyu51DA/HWgKLRpJRRg.jpg?size=916x78&quality=96&sign=69a52c906c19e25f8b339631189b04fe&type=album)

![Альтернативный текст](https://sun9-43.userapi.com/impg/UEdo_ouuT44dC5VJmKsoqxQo1_eeGYtoPXP5Zw/rdIJqSmvQmM.jpg?size=936x82&quality=96&sign=21dcd163796bd0b5cbc441a2edda3973&type=album)
