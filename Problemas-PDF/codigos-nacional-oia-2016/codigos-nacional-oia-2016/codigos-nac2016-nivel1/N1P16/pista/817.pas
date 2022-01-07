program pista;
type TV=array[1..10000] of longint;
     TB=array[1..10000] of boolean;
var m,h,i,cantp,max,cont,j:longint;
    v,pi,pf:TV;
    b:TB;
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
   if cont=max then
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
  if cont=max then
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
  for i:=1 to cantp do
      b[i]:=TRUE;
  for i:=1 to cantp do
      for j:=i+1 to cantp do
          if (pi[i]=pi[j]) and (pf[i]=pf[j]) then
             b[j]:=FALSE;
  writeln(archout,cantp div 2,' ',max);
  for i:=cantp downto 1 do
     if b[i]=TRUE then
      writeln(archout,pi[i],' ',pf[i]);
  close(archin);
  close(archout);
end.
