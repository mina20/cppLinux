//sum of eigen values
function[]=eigen(x)
    a=spec(x)
    disp('Eigen values are')
    disp(a)
    b=real(a)
    c=max(b)
    disp('Max eigen value is')
    disp(c)
endfunction
