n=0; e=1/exp(1); res=((n-1)/n)^(n);

while abs(e-res)>0.001
n=n+1;
res=((n-1)/n)^(n);
err=((e-res)/e)*100;
n; res; err;

disp('n=')
disp(n)
disp('근사치:' )
disp(res)
disp('오차율:' )
disp( err)

end