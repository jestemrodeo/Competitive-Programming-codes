unit encriptado;

interface
    function encriptado(clave, N : longint; texto : ansistring) : ansistring;
type
  vec = array of longint;
  vec2 = array of char;
implementation
    function encriptado(clave, N : longint; texto : ansistring) : ansistring;
    var
      i,j : longint;
      s,s2 : ansistring;
      v : vec;
      v2 : vec2;
    begin
        s := 'ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLMNOPQRSTUVWXYZ';
        SetLength(v,N);
        for i := 1 to N do
         begin
           v[i] := clave mod 10;
           clave := (clave - clave mod 10) div 10;
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
        setlength(s2,j-1);
        for i := 1 to j-1 do
          s2[i] := v2[pos(v2[i],s)+v[N-((i mod N)+N*((N - i mod N) div N))+1]];
        encriptado := s2;
    end;
begin
end.
