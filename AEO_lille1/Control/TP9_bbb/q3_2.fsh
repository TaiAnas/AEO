:IP   mon_rdm $9010
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
	mon_rdm
	dup mul16 // on a calculé le y*y
	swap // et maintenant on va calculer le x*x
	dup mul16 // on a calculé x*x	
	add
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
$01 btn
;
start
	main
endprogram;
