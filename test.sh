includes=../ft_printf-test/includes

gcc -Wall -Werror -Wextra -Wno-format -I${includes} ../ft_printf-test/main.c -L . -lftprintf
./a.out &
sleep 1
leaks a.out | grep -E "leaks? for"
kill $!
# @leaks a.out | grep -E "leaks? for"
# ps | grep ./a.out | grep -v grep | awk '{ print "kill", $1 }' | sh
