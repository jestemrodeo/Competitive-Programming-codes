program codigo;
var s,k:string;
    n,cl,t,l,i,j,w,p:longint;
    archin,archout:text;
begin
  assign(archin,'codigo.in');
  assign(archout,'codigo.out');
  reset(archin);
  rewrite(archout);
  k:='ABCDEFGHIJKLMNOPQRSTUVWXYZ';
  readln(archin,n,cl);
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
      p:=cl;
      if i mod n<>0 then
       begin
        for w:=1 to i mod n do
           p:=p div 10;
           write(archout,k[j+p mod 10]);
       end;
      if i mod n=0 then
       begin
         for w:=1 to (i mod n)-1 do
           p:=p div 10;
           write(archout,k[j+p mod 10]);
       end;
    end;
  close(archin);
  close(archout);
end.
