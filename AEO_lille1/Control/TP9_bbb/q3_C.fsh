:IP   mon_rdm $9010 //$8810
;

slave
start

master

:main
ticraz
0
$FFFF
begin
	dec // décrémente le 10000
	mon_rdm mul16 // on a calculé le x*x + y*y
	$FFE001 <=
	if
		swap inc swap
	endif
	dup 0 <=	
until
drop
tic dup $FFFF and $1f btn 7seg
$10 -> $FFFF and $1f btn 7seg
$1f btn 7seg
$1f btn
;
start
	main
endprogram;
