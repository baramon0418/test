t=-5:0.1:5;
x=(1+(t.^2)).*sin(20*t);
y=(1+(t.^2)).*cos(20*t);
Z=t;
[X,Y]=meshgrid(x,y);
w=plot3(X,Y,Z);