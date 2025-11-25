Открываем скрипт, и видим функции decode_base. Запускаем данный скрипт, вводим любую строку и видим вывод "Wow, noo", в скрипте же такой строки не было, т.е. код зашифрован, и при запуске
скрипта он расшифровывается при помощи функции decode_base и выполняется, таким образом пишем скрипт где расшифровывваем строку 
"JGE9PD47IGlmICgkYSA9fiAicGVybHVzX2ZsYWd1cyIpeyJPa2F5X2l0KWlzX2ZpcnN0X3N0YWdlX2ZsYWcifWVsc2V7Ildvdywgbm9vIn0=".
В итоге получаем "$a=<>; if ($a =~ "perlus_flagus"){"Okay_it)is_first_stage_flag"}else{"Wow, noo"}"
проанализировав код, видим, что введенная строка сравнивается со строкой "perlus_flagus" - это и есть флаг
ТАСКА РЕШЕНА
