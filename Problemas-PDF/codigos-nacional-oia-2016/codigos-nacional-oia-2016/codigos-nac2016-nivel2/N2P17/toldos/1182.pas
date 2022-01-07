unit toldos;

interface
    function toldos(feriantes, costos : array of longint) : longint;
type
  vec = array of longint;
implementation
    function toldos(feriantes, costos : array of longint) : longint;
    var
        F,P,i,e,j : longint;
        v,v2,min : vec;
    begin
         F := Length(feriantes);
        P := Length(costos);
        setlength(min,F+1);
        setlength(v,P);
        setlength(v2,P);
        for i := 0 to F div 2 do
          for e := 0 to F-i-2 do
            if feriantes[e] > feriantes[e+1] then
              begin
                j := feriantes[e];
                feriantes[e] := feriantes[e+1];
                feriantes[e+1] := j;
              end;
        j := 0;
        for i := 0 to F-1 do
          v2[feriantes[i]] := 1;
        for i := 0 to P-1 do
          if v2[i] = 1 then 
           begin
             j := j + 1;
             v[i] := j;
           end
          else
            v[i] := j;
        min[0] := 0;
        min[1] := costos[0];
        for i := 0 to P-1 do
          if min[1] > costos[i] then
            min[i] := costos[i];
        for i := 2 to F do
         begin
          min[i] := min[i-1] + costos[0];
          for e := 0 to P-1 do
            begin
              if e+1 <= feriantes[i-1] then
               begin
                if costos[e] + min[v[feriantes[i-1]-e-1]] < min[i] then
                 begin
                   min[i] := costos[e] + min[v[feriantes[i-1]-e-1]];
                 end;
                end
              else
               if costos[e] < min[i] then
                min[i] := costos[e];
            end;         
         end;   
       toldos := min[F];
end;

begin
end.
