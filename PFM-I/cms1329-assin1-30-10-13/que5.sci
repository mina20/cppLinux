//Write a function to find sum of series 
function[]=fun(x,n)
    for i=0:n
        z=factorial(i)
        a=x*x/z
        c=c+a
    end
    disp(c)
endfunction
