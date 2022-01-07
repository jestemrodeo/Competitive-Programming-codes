unit desvela;

interface
    function desvela(captado, conocido : ansistring) : ansistring;
implementation
    type
      V=array of integer;
      c=array ['A'..'Z'] of integer;
      
    function desvela(captado, conocido : ansistring) : ansistring;
    var
      aux,aux2:ansistring;
      dif,dif2:V;
      cont,cont2,long,long2,d,e,cuenta:longint;
      letras:c;
    begin  
        begin          
        letras['A']:=0;
        letras['B']:=1;
        letras['C']:=2;
        letras['D']:=3;
        letras['E']:=4;
        letras['F']:=5;
        letras['G']:=6;
        letras['H']:=7;
        letras['I']:=8;
        letras['J']:=9;
        letras['K']:=10;
        letras['L']:=11;
        letras['M']:=12;
        letras['N']:=13;
        letras['O']:=14;
        letras['P']:=15;
        letras['Q']:=16;
        letras['R']:=17;
        letras['S']:=18;
        letras['T']:=19;
        letras['U']:=20;
        letras['V']:=21;
        letras['W']:=22;
        letras['X']:=23;
        letras['Y']:=24;
        letras['Z']:=25;
        end;
        
        long:=length(conocido);
        aux:='';
        
        for cont:=1 to long do
          if conocido[cont]<>' ' then
            if conocido[cont]<> '*' then
              aux:=aux+conocido[cont];
        
        conocido:=aux;      
        long:=length(conocido);
        long2:=length(captado);
        
        SetLength(dif,long-2);
        SetLength(dif2,long2-2);
        
        aux:='';
        aux2:='';
        
        for cont:=1 to long-2 do
          begin
           dif[cont]:=letras[conocido[cont]]-letras[conocido[cont+2]];
           aux:=aux+chr(dif[cont]);
          end;
           
        for cont:=1 to long2-2 do
          begin
           dif2[cont]:=letras[captado[cont]]-letras[captado[cont+2]];
           aux2:=aux2+chr(dif2[cont]);
          end;
          
        cont2:=pos(aux,aux2);
        
        d:=letras[captado[cont2]]-letras[conocido[1]];
        e:=letras[captado[cont2+1]]-letras[conocido[2]];

        cont2:=cont2 mod 2;
        
        desvela:='';
        
        for cont:=1 to long2 do
          if cont mod 2=cont2 then
            begin
              cuenta:=(letras[captado[cont]]-d+26) mod 26;
              desvela:=desvela+chr(cuenta+ 65);
            end
          else
            begin
              cuenta:=(letras[captado[cont]]-e+26) mod 26;
              desvela:=desvela+chr(cuenta+ 65);
            end;
           
    end;
begin
end.
