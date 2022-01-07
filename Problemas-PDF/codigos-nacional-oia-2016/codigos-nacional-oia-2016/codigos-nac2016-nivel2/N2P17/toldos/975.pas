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
        setlength(min,F+P+1);
        setlength(v,P);
        setlength(v2,P);
        for i := 1 to F do
          for e := 1 to F-i do
            if feriantes[i] < feriantes[i+1] then
              begin
                j := feriantes[i];
                feriantes[i] := feriantes[i+1];
                feriantes[i+1] := j;
              end;
        j := 0;
        for i := 1 to F do
          v2[feriantes[i]] := 1;
        for i := 1 to P do
          if v2[i] = 1 then 
           begin
             j := j + 1;
             v[i] := j;
           end
          else
            v[i] := j;
        min[0] := 0;
        min[1] := costos[1];
        for i := 1 to P do
          if min[1] > costos[i] then
            min[i] := costos[i];
        for i := 2 to F do
         begin
          min[i] := min[i-1] + costos[1];
          for e := 2 to P do
            if costos[e] + min[v[feriantes[i]-e]] < min[i] then
              min[i] := costos[e] + min[v[i - e]]; 
         end;   
       toldos := min[F];
    end;
begin
end.
