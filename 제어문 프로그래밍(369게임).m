    num=input('100미만의 수를 입력하시오 :');
for k=1:num    
      s=mod(k,10);
      t=mod(floor(k/10),10);
      if(mod(k,3)==0 || (s==3 || s==6 || s==9) || (t==3 || t==6 || t==9))
             fprintf('P');
      else
             fprintf('%d',k);
      end
end