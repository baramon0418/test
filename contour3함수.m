x=-3:0.1:3;
y=-3:0.1:3;
[X,Y]=meshgrid(x,y);
Z=X.^2+Y.^2;
contour3(X,Y,Z);
xlabel('x-axis'),ylabel('y-axis'),zlabel('z-axis')