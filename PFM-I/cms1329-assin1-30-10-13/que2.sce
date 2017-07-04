//Write a function to find nature of roots
x=0
function[]=root(a,b,c)
    x=(b*b)-(4*a*c)
    if(x==0) then
        disp('Roots are real and equal')
    end
    if(x>0) then
        disp('Roots are unequal and real')
    end
    if(x<0) then
        disp('Roots are not real')
    end
endfunction
