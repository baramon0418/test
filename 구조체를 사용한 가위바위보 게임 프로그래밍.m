
game_data=struct('user',[],'computer',[],'user_win_count',0,'com_win_count',0);

while(1)
    game_select=input('어떤 게임을 하시겠습니까? 1: 가위바위보게임 2: 369게임 3:종료\n');
 
    if game_select==3
        break;
    end

     switch game_select
         case 1
             n=input('몇 판을 하시겠습니까?');
             for k=1:n
                 user_data=input('가위바위보를 내세요: 1)바위 2)보 3)가위\n');
                 com_data=ceil(mod(rand(1)*100,3));
                 %%fprintf('user : %d, com : %d\n',user_data,com_data);
                 if(user_data>com_data) || (user_data==3 && com_data==1)
                       fprintf('user가 이겼습니다.\n');
                     game_data.user_win_count=game_data.user_win_count+1;
                 else 
                     game_data.com_win_count=game_data.com_win_count+1;
                 end
             end
             fprintf('user : %d com : %d\n',game_data.user_win_count,game_data.com_win_count);
             if game_data.user_win_count>game_data.com_win_count 
                 fprintf('user가 이겼습니다.\n');
             else
                 fprintf('computer가 이겼습니다.\n');  
             end
             
         case 2
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
               
         
     end
end