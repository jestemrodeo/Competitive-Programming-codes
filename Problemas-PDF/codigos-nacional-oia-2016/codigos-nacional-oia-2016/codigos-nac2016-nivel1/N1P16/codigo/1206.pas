program codigo;
type TV=array[1..9] of longint;
var s,k:string;
    c:TV;
    n,t,l,i,j,o:longint;
    archin,archout:text;
begin
  assign(archin,'codigo.in');
  assign(archout,'codigo.out');
  reset(archin);
  rewrite(archout);
  k:='ABCDEFGHIJKLMNOPQRSTUVWXYZ';
  read(archin,n);
  for i:=1 to n do
    begin
      read(archin,o);
      c[i]:=o;
    end;
  readln(archin);
  readln(archin,t);
  readln(archin,s);
  l:=length(s);
  for i:=1 to l do
      if s[i]=' ' then
         delete(s,i,1);
  l:=length(s);
  for i:=1 to l do
    begin
      j:=0;
      repeat
        j:=j+1;
      until s[i]=k[j];
      if i mod n<>0 then
        if j+c[i mod n]>26 then
           write(archout,k[j+(c[i mod n])-26])
        else write(archout,k[j+c[i mod n]]);
      if i mod n=0 then
        if j+c[n]>26 then
           write(archout,k[j+(c[i mod n])-26])
        else write(archout,k[j+c[i mod n]]);
    end;
  close(archin);
  close(archout);
end.
