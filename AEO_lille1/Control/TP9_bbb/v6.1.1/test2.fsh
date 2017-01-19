:IP   hexa2rgb $B818
;
:IP   rgb2hexa $E810
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
$808080
or

hexa2rgb

$1f btn
7seg

$1f btn
7seg

$1f btn
7seg

$1f btn 


;
start
	main
endprogram;
