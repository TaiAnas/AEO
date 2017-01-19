:IP rgb2hexa $E807
;
:IP hexa2rgb $B803
;

slave
start

master

:main

$1f btn
switch
$1f btn
switch
$1f btn
switch
rgb2hexa
or
hexa2rgb
and
7seg
$1f btn


;
start
	main
endprogram;
