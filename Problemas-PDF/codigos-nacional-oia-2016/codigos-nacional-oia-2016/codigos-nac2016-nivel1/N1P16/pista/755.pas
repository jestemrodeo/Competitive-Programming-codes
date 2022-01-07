program pista;
type TV=array[1..10000] of longint;
var m,h,i,cantp,max,cont:longint;
    v,pi,pf:TV;
    archin,archout:text;
begin
  assign(archin,'pista.in');
  assign(archout,'pista.out');
  reset(archin);
  rewrite(archout);
  readln(archin,m);
  max:=0;
  cont:=0;
  cantp:=0;
  for i:=1 to m do
    begin
      read(archin,h);
      v[i]:=h;
    end;
  for i:=1 to m do
    if i<>m then
      if v[i]>v[i+1] then
         cont:=cont+1
         else if cont=max then
                begin
                  cantp:=cantp+1;
                  pi[cantp]:=i-cont;
                  pf[cantp]:=i;
                  cont:=0;
                end
              else if cont>max then
                     begin
                        cantp:=1;
                        pi[cantp]:=i-cont;
                        pf[cantp]:=i;
                        max:=cont;
                        cont:=0;
                     end;
  cont:=0;
  for i:=1 to m do
    if i<>m then
      if v[i]<v[i+1] then
         cont:=cont+1
         else if cont=max then
                begin
                  cantp:=cantp+1;
                  pi[cantp]:=i;
                  pf[cantp]:=i-cont;
                  cont:=0;
                end
              else if cont>max then
                     begin
                        cantp:=1;
                        pi[cantp]:=i;
                        pf[cantp]:=i-cont;
                        max:=cont;
                        cont:=0;
                     end;
  writeln(archout,cantp,' ',max);
  for i:=1 to cantp do
      writeln(archout,pi[i],' ',pf[i]);
  close(archin);
  close(archout);
end.
