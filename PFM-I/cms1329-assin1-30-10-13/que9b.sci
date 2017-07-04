x=linspace(-2,2,20);
y=linspace(-2,2,20);
deff('[vx]=fx(x,y)','vx=y.^3')
deff('[vy]=fy(x,y)','vy=3.*x.*y')
vx=feval(x,y,fx);
vy=feval(x,y,fy);
champ(x,y,vx,vy)
xtitle('F(x,y)=(y^3)i+(3xy)j')
