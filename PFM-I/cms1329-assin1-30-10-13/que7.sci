//Equation
function[e]=eqn(a,b)
    c=[a b]
    d=rref(c)
    e=d(:,$)
endfunction
