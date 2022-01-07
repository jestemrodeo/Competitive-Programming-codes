program almacenamiento;
type TV=Array[1..50000] of longint;
var archin,archout:text;
    v:TV;
    i,cont,min,c,a,j,sum:longint;
    b:boolean;
begin
  assign(archin,'almacenamiento.in');
  assign(archout,'almacenamiento.out');
  reset(archin);
  rewrite(archout);
  readln(archin,c,a);
  for i:=1 to c do
    begin
      read(archin,v[i]);
      if v[i]>=a then
         b:=TRUE;
    end;
  if b=TRUE then
     writeln(archout,1)
  else begin
         min:=maxlongint;
         for j:=1 to c-1 do
          begin
           i:=j;
           cont:=1;
           sum:=v[j];
           repeat
              i:=i+1;
              sum:=sum+v[i];
              cont:=cont+1;
           until (sum>=a) or (i=c);
           if sum>=a then
              if cont<min then
                 min:=cont;
         end;
         writeln(archout,min);     
       end;  
  close(archin);
  close(archout);
end.
