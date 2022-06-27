function [avg_x, avg_y, avg_z]=paint_mean(x,y,z)
     if nargin==1
         plot(x,sin(x));
         avg_x=mean(x);
     elseif nargin==2
         bar(x,y);
         avg_x=mean(x);
         avg_y=mean(y);
     else
         bar3(x,y,z)
         avg_x=mean(x);
         avg_y=mean(y);
         avg_z=mean(z);
     end
end