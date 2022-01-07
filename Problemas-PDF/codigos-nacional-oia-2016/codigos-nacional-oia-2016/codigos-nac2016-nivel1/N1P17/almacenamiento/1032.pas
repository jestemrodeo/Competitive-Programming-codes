type
 apps=array [1..50000] of integer;
 ca=array [1..1000] of integer;
var
n,a,i,aux1,aux2,y:longint;
c:ca;
textin,textout:text;
ap:apps;
begin
assign(textin,'almacenamiento.in');
assign(textout,'almacenamiento.out');
reset(textin);
rewrite(textout);
readln(textin,n,a);
for i:=1 to n do
 read(textin,ap[i]);
i:=0;
aux2:=ap[1];
repeat
i:=i+1;
if ap[i]=a then
 begin
  writeln(textout,'1');
  y:=1;
 end
 else
 begin
  aux1:=aux2;
  aux2:=ap[i];
 end;
until y=1;
end.
