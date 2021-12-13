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

Я придумал и реализовал следующий алгоритм:

![Альтернативный текст](https://sun9-51.userapi.com/impg/Jzw4fF7lhi7xKecoZDTt6qI0So5tYCxdb-bSeQ/9hEL6Lr-BrE.jpg?size=1553x687&quality=96&sign=a2380cf25a2030c42e5fcbee8b7a2f20&type=album)


