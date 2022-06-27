function x=draw_graph(min,max)
      if nargin==2
          x=min:max;

      end
          plot(x,sin(x));
          hold on
          plot(x,cos(x));
end