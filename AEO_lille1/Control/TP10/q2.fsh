:IP fibo $CC03
;

slave
start

master

:main

$1f btn switch dec dec
ticraz
1 1
rot
for
  dup rot add
next
tic dup $FFFF and $1f btn 7seg
$10 -> $FFFF and $1f btn 7seg
$1f btn 7seg
$1f btn
;
start
	main
endprogram;
