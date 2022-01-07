type
vec=array [1..9] of integer;
le=array [1..25] of char;
var
l:le;
ch,es:char;
v:vec;
n,i,e,lon,i2,z:longint;
textin,textout:text;
begin
assign(textin,'codigo.in');
assign(textout,'codigo.out');
reset(textin);
rewrite(textout);
read(textin,n);
read(textin,ch);
l[1]:='a';
l[2]:='b';
l[3]:='c';
l[4]:='d';
l[5]:='e';
l[6]:='f';
l[7]:='g';
l[8]:='h';
l[8]:='i';
l[9]:='j';
l[10]:='k';
l[11]:='l';
l[12]:='m';
l[13]:='n';
l[14]:='o';
l[15]:='p';
l[16]:='q';
l[17]:='r';
l[18]:='s';
l[19]:='t';
l[20]:='u';
l[21]:='v';
l[22]:='w';
l[23]:='x';
l[24]:='y';
l[25]:='z';
i2:=0;
for i:=1 to n do
 begin
 read(textin,ch);
 val(ch,v[i],e);
 end;
readln(textin,lon);
z:=1;
for i:=1 to lon do
 begin
  read(textin,es);
   if es<>' ' then
    begin
     if z=1 then
      begin
      repeat
      i2:=i2+1;
      until es=l[i2];
      if (l[i2+v[z]])<'z' then
       write(textout,l[i2+v[z]])
      else
       write(l[i2+v[z]-25]);
      z:=n;
      end
     else
      if z=2 then
       begin
      repeat
      i2:=i2+1;
      until es=l[i2];
      if (l[i2+v[z]])<'z' then
       write(textout,l[i2+v[z]])
      else
       write(l[i2+v[z]-25]);
    end; 
 end;
close(textin);
close(textout);
end.
