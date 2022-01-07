unit karting;

interface
    type Matriz = array of array of longint;
    function karting(barrio : Matriz; var pista : Matriz; var recorrido : ansistring) : longint;
implementation
    type BOO=array of array of boolean;
    type V=array of array of integer;
    type d=array[0..4] of ansistring;
    function karting(barrio : Matriz; var pista : Matriz; var recorrido : ansistring) : longint;
    var
        M,x,y,cont,cont2,aux1,aux2,max,lisx,lisy:longint;
        si:BOO;
        dir,dist:Matriz;
        bfs:V;
        rev:ansistring;
        di:d;
    begin
        M := Length(barrio);
        
        di[0]:='N';
        di[1]:='S';
        di[2]:='E';
        di[3]:='O';
        di[4]:='';
        
        SetLength(si,M,M);
        SetLength(dir,M,M);
        SetLength(dist,M,M);    
       
		for cont:=0 to M-1 do
		  for cont2:=0 to M-1 do
		    begin
		      si[cont,cont2]:=false;
		      dist[cont,cont2]:=0;
		      dir[cont,cont2]:=4;
		    end;
        
        repeat
        max:=0;
        for cont:=0 to M-1 do
          for cont2:=0 to M-1 do
            if (barrio[cont,cont2]>max) and (si[cont,cont2]=false) then
              begin
                max:=barrio[cont,cont2];
                lisx:=cont;
                lisy:=cont2;
              end;
        cont2:=1;
        cont:=1; 
        SetLength(bfs,1,2);
        x:=lisx;
        y:=lisy;
        si[x,y]:=true;
        if max<>0 then
        begin
        bfs[0,0]:=x;
        bfs[0,1]:=y;
        repeat
            aux1:=bfs[cont-1,0];
            aux2:=bfs[cont-1,1];
			if (aux1<M-1) and (barrio[aux1,aux2]>barrio[aux1+1,aux2]) then
				begin
				  if dist[aux1+1,aux2]<dist[aux1,aux2]+1 then
					begin
						cont2:=cont2+1;
						SetLength(bfs,cont2,2);
						bfs[cont2-1,0]:=aux1+1;
						bfs[cont2-1,1]:=aux2;
						dist[aux1+1,aux2]:=dist[aux1,aux2]+1;
						dir[aux1+1,aux2]:=1;
						si[aux1+1,aux2]:=true;
					end;
				end;
				
			if (aux1>0) and (barrio[aux1,aux2]>barrio[aux1-1,aux2]) then
				begin
				  if dist[aux1-1,aux2]<dist[aux1,aux2]+1 then
					begin
						cont2:=cont2+1;
						SetLength(bfs,cont2,2);
						bfs[cont2-1,0]:=aux1-1;
						bfs[cont2-1,1]:=aux2;
						dist[aux1-1,aux2]:=dist[aux1,aux2]+1;
						dir[aux1-1,aux2]:=0;
						si[aux1-1,aux2]:=true;
					end;
				end;
				
			if (aux2<M-1) and (barrio[aux1,aux2]>barrio[aux1,aux2+1]) then
				begin
				  if dist[aux1,aux2+1]<dist[aux1,aux2]+1 then
					begin
						cont2:=cont2+1;
						SetLength(bfs,cont2,2);
						bfs[cont2-1,0]:=aux1;
						bfs[cont2-1,1]:=aux2+1;
						dist[aux1,aux2+1]:=dist[aux1,aux2]+1;
						dir[aux1,aux2+1]:=2;
						si[aux1,aux2+1]:=true;
					end;
				end;
				
			if (aux2>0) and (barrio[aux1,aux2]>barrio[aux1,aux2-1]) then
				begin
				  if dist[aux1,aux2-1]<dist[aux1,aux2]+1 then
					begin
						cont2:=cont2+1;
						SetLength(bfs,cont2,2);
						bfs[cont2-1,0]:=aux1;
						bfs[cont2-1,1]:=aux2-1;
						dist[aux1,aux2-1]:=dist[aux1,aux2]+1;
						dir[aux1,aux2-1]:=3;
						si[aux1,aux2-1]:=true;
					end;
			  	end;	
		  	cont:=cont+1;		
          until cont>=cont2;
        end;
        until max=0;
        

        SetLength(pista,2);
        SetLength(pista[0],2);
        SetLength(pista[1],2);
        
       for cont:=0 to M-1 do
          for cont2:=0 to M-1 do
			begin
			  if dist[cont,cont2]>max then
			    begin
					max:=dist[cont,cont2];
					pista[1][0]:=cont+1;		
					pista[1][1]:=cont2+1;	    
			    end;
			end;
          karting:=max;
          cont:=pista[1][0]-1;
          cont2:=pista[1][1]-1;
          rev:='';
          repeat
			rev:=rev+di[dir[cont,cont2]];
			if dir[cont,cont2]=0 then
				cont:=cont-1
			else if dir[cont,cont2]=1 then
			    cont:=cont+1
			else if dir[cont,cont2]=2 then
			    cont2:=cont2-1
			else if dir[cont,cont2]=3 then  
			    cont2:=cont2+1;
          until dir[cont,cont2]=4;
		recorrido:='';
		cont2:=length(rev);
		for cont:=1 to cont2 do
		  recorrido:=recorrido+rev[cont2+1-cont];
		

    end;
begin
end.
