unit encriptado;

interface
    function encriptado(clave, N : longint; texto : ansistring) : ansistring;
type
  vec = array of longint;
  vec2 = array of char;
implementation
    function encriptado(clave, N : longint; texto : ansistring) : ansistring;
    var
      i,e,j : longint;
      s,s2 : ansistring;
      v,v4 : vec;
      v2,v3 : vec2;
    begin
        s := 'ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ';
        SetLength(v,N);
        for i := 1 to N do
         begin
           v[i] := N mod 10;
           N := (N - N mod 10) div 10;
         end;
        j := 1;
        setlength(v2,length(texto));
        for i := 1 to length(texto) do
         begin
           if texto[i] = ' ' then
           else 
            begin
              v2[j] := texto[i];
              j := j + 1;
            end;
          end;
        setlength(v3,j-1);
        for i := 1 to j-1 do
          for e := 1 to 26 do
            if v2[i] = s[e] then
              v4[i] := e;
        for i := 1 to j-1 do
          v3[i] := s[v4[i]+v[(i mod N)+N*(i div N)]];
        s2 := '';
        for i := 1 to j-1 do
          s2 := s2 + v3[i];
        encriptado := s2;
    end;
begin
end.
