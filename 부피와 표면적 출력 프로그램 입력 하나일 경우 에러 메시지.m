function [area, vol]= fd(r,h)
      if nargin==2
          area=pi*r*r*h;
          vol=2*pi*r*h;
      elseif nargin==1
      end
end