type
 apps=array [1..50000] of integer;
 ca=array [1..1000] of integer;
var
n,a,i,y,j,q,cuen,min,f:longint;
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
c[1]:=ap[1];
repeat
i:=i+1;
if ap[i]=a then
 begin
  writeln(textout,'1');
  y:=1;
 end;
until (y=1) or (i>n);
i:=1;
j:=0;
f:=0;
cuen:=0;
min:=maxint;
if y<>1 then
 repeat
 i:=i+1;
 repeat
 j:=j+1;
 for q:=0 to i do
  c[j+q]:=ap[j+q]; 
 for q:=0 to i do
  cuen:=cuen+c[j+q];
 if (cuen-a>1) and (cuen-a<min) then
  begin
   min:=cuen-a;
   f:=i;
   cuen:=0;
  end
  else
   cuen:=0;
 until (j>n);
 until (i>n);

writeln(textout,f+1);
close(textin);
close(textout);
end.
