//Find if matrix is square.If square,find inverse.
function[]=mat(x)
[r,c]=size(x)
    if(r==c) then
        disp('Matrix is square matrix')
        y=det(x)
         if(y==0) then 
            disp('Deteminant is 0')
         else
            disp('Determinant is')
            disp(y)
            z=inv(x)
            disp('Inverse is')
            disp(z)
         end
    else
        disp('Not square matix')
    end
endfunction
