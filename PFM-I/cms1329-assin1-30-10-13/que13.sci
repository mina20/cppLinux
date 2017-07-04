//Find roots
function[]=polyroot()
    x=poly([-13,-5,0,-3,1],'x','c')
    disp('Equation is')
    disp(x)
    disp('Roots are')
    b=roots(x)
    disp(b)
    
    x=poly([-1,0,0,0,0,0,0,0,0,0,0,1],'x','c')
    disp('Equation is')
    disp(x)
    disp('Roots are')
    c=roots(x)
    disp(c)
    endfunction
