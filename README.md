# Задание по Си на 31.03.2022

### 141 группа. Практическое задание на 31 марта

Написать программу для решения следующей задачи:

Со стандартного потока ввода вводится текст, признак конца текста - конец файла. Определить, сбалансирован ли текст по скобкам ( ),{ } и [ ]. Ответ напечатать в стандартный поток вывода.

Для решения задачи использовать стек. Реализовать стек на основе массива и оформить в виде отдельного модуля (создать заголовочный файл и файл с реализацией, заголовочный файл должен быть защищен от повторного включения).

При переполнении стека или попытке достать из пустого стека элемент в стандартный поток ошибок (stderr) должно выдаваться соответствующее сообщение: 

fprintf (stderr, "An errror message\n"); 

Для сборки программы написать makefile. 

При сдаче задания на семинаре в четверг необходимо продемонстрировать 4 файла: основную программу, заголовочный файл для стека, файл с реализацией стека, makefile.

После успешной сдачи практического задания на семинаре модуль стек сохраните, он будет нужен для следующих практических заданий.
