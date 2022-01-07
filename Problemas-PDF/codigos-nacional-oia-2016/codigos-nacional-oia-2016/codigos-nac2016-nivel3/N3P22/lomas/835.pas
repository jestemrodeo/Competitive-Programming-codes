unit lomas;

interface
    type Arreglo = array of longint;
    type Matriz  = array of Arreglo;
    procedure lomas(t : Matriz; k : longint; var fil, col : Arreglo);
implementation

	function min(a,b,c:longint):longint;
	begin
		if a<b then
		  begin
		    if a<c then
		      min:=a
		    else
		      min:=c;
		  end
		else
		  begin
		    if b<c then
		      min:=b
		    else
		      min:=c;
		  end;
	end;

    procedure lomas(t : Matriz; k : longint; var fil, col : Arreglo);
    var
        M,N, cont, cont2, cant: longint;
        d,max:Matriz;
    begin
        M := Length(t);
        N := Length(t[0]);
        
        SetLength(d,M,N);
        SetLength(max,M,N);

		for cont:=1 to M-2 do
          for cont2:=1 to N-2 do
             max[cont,cont2]:=10;
             
             
        //ESTO ES PARA ARRIBA-IZQUIERDA
		for cont:=1 to M-1 do
		  d[cont,0]:=0;
		for cont:=1 to N-1 do
		  d[0,cont]:=0;
		  
        for cont:=1 to M-1 do
          for cont2:=1 to N-1 do
            begin
              if (t[cont,cont2]>t[cont-1,cont2-1]) and (t[cont,cont2]>t[cont,cont2-1]) and (t[cont,cont2]>t[cont-1,cont2]) then
                begin
                    if (t[cont-1,cont2-1]<t[cont,cont2-1]) and (t[cont-1,cont2-1]<t[cont-1,cont2]) then
                      d[cont,cont2]:=min(d[cont-1,cont2],d[cont,cont2-1],d[cont-1,cont2-1])+1
                    else
                      d[cont,cont2]:=0;
                 end
              else
                d[cont,cont2]:=0;
            end;
         
        for cont:=1 to M-2 do
          for cont2:=1 to N-2 do
           if max[cont,cont2]>d[cont,cont2] then
             max[cont,cont2]:=d[cont,cont2];
             
             
        //ESTO ES PARA ARRIBA-DERECHA        
        for cont:=1 to M-1 do
		  d[cont,N-1]:=0;
		for cont:=1 to N-1 do
		  d[0,cont]:=0;
		  
        for cont:=1 to M-1 do
          for cont2:=N-2 downto 0 do
            begin
              if (t[cont,cont2]>t[cont-1,cont2+1]) and (t[cont,cont2]>t[cont,cont2+1]) and (t[cont,cont2]>t[cont-1,cont2]) then
                begin
                    if (t[cont-1,cont2+1]<t[cont,cont2+1]) and (t[cont-1,cont2+1]<t[cont-1,cont2]) then
                      d[cont,cont2]:=min(d[cont-1,cont2],d[cont,cont2+1],d[cont-1,cont2+1])+1
                    else
                      d[cont,cont2]:=0;
                 end
              else
                d[cont,cont2]:=0;
            end;
         
        for cont:=1 to M-1 do
          for cont2:=1 to N-1 do
           if max[cont,cont2]>d[cont,cont2] then
             max[cont,cont2]:=d[cont,cont2];
             
             
        //ESTO ES PARA ABAJO-DERECHA        
        for cont:=1 to M-1 do
		  d[cont,N-1]:=0;
		for cont:=1 to N-1 do
		  d[M-1,cont]:=0;
		  
        for cont:=M-2 downto 0 do
          for cont2:=N-2 downto 0 do
            begin
              if (t[cont,cont2]>t[cont+1,cont2+1]) and (t[cont,cont2]>t[cont,cont2+1]) and (t[cont,cont2]>t[cont+1,cont2]) then
                 begin
                    if (t[cont+1,cont2+1]<t[cont,cont2+1]) and (t[cont+1,cont2+1]<t[cont+1,cont2]) then
                      d[cont,cont2]:=min(d[cont+1,cont2],d[cont,cont2+1],d[cont+1,cont2+1])+1
                    else
                      d[cont,cont2]:=0;
                 end
              else
                d[cont,cont2]:=0;
            end;
         
        for cont:=1 to M-2 do
          for cont2:=1 to N-2 do
           if max[cont,cont2]>d[cont,cont2] then
             max[cont,cont2]:=d[cont,cont2];
             
             
        //ESTO ES PARA ABAJO-IZQUIERDA       
        for cont:=1 to M-1 do
		  d[cont,0]:=0;
		for cont:=1 to N-1 do
		  d[M-1,cont]:=0;
		  
        for cont:=M-2 downto 0 do
          for cont2:=1 to N-1 do
            begin
              if (t[cont,cont2]>t[cont+1,cont2-1]) and (t[cont,cont2]>t[cont,cont2-1]) and (t[cont,cont2]>t[cont+1,cont2]) then
                 begin
                    if (t[cont+1,cont2-1]<t[cont,cont2-1]) and (t[cont+1,cont2-1]<t[cont+1,cont2]) then
                      d[cont,cont2]:=min(d[cont+1,cont2],d[cont,cont2-1],d[cont+1,cont2-1])+1
                    else
                      d[cont,cont2]:=0;
                 end
              else
                d[cont,cont2]:=0;
            end;
         
        for cont:=1 to M-2 do
          for cont2:=1 to N-2 do
           if max[cont,cont2]>d[cont,cont2] then
             max[cont,cont2]:=d[cont,cont2];
             
        //BUSCO k
        cant:=0;
        for cont:=1 to M-2 do
          for cont2:=1 to N-2 do
           if max[cont,cont2]>=k then
             begin
               cant:=cant+1;
               SetLength(fil,cant);
               SetLength(col,cant);
               fil[cant-1]:=cont+1;
               col[cant-1]:=cont2+1;
             end;
        
    end;
begin
end.
