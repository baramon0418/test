t=[0:pi/180:2*pi];
y1=sin(t);
y2=cos(t);
hold on
plot(t,y1,'b-');
plot(t,y2,'g:');
axis([0 2 -1 1])
xlabel('Radian Value');
ylabel('Magnitude');
title('Sine and Cosine Function');
grid on
gtext('sin(x)');
gtext('cos(x)');