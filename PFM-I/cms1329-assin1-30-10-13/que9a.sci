x=linspace(-2,2,20);
y=linspace(-2,2,20);
deff('[vx]=fx(x,y)','vx=(x.^2).*y')
deff('[vy]=fy(x,y)','vy=y.^3')
vx=feval(x,y,fx);
vy=feval(x,y,fy);
champ(x,y,vx,vy)
xtitle('F(x,y)=((x^2)*y)i+(y^3)j')
