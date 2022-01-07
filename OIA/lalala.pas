program grup;
uses crt;
var
gru,proA,proM,proN,n1,n2:real;
i,j,k,al:integer;
begin
proM:=0;
proA:=0;
proN:=0;
gru:=0;

for i:=1 to 4 do
begin
writeln('cuantos alumnos tiene este grupo?');
readln(al);
	for k:=1 to al do 	
	begin
		for j:=1 to 3 do
		begin
		writeln('ingrese la primera nota');
		readln(n1);
		writeln('ingrese la segunda nota');
		readln(n2);
		proN:=proN+((n1+n2)/2);
		end;
	proN:=proN/3;
	proA:=proA+ProN;
	end;
	gru:=proA/al;
	writeln('el promedio del grupo es');
proM:=0;
proA:=0;
proN:=0;
gru:=0;
end;
end.

	
