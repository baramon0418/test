while(1)
score_board=struct('game_data',[],'user_score',0,'com_score',0);

user_win_count=0;
com_win_count=0;
   n=30;
   m=input('목표점수 입력:');
   
 for k=1:n
     

  user_data=input('주사위 숫자 입력 1 2 3 4 5 6\n');
  com_data=ceil(mod(rand(1)*100,6));
  score_board.game_data(1,k)=user_data;
  score_board.game_data(2,k)=com_data;
      

       
  fprintf('user : %d, com : %d\n',user_data,com_data);
       
  
   if(user_data>com_data)  
       result=1;
   elseif(user_data<com_data)
        result=2;
   else
       result=0;
    end
        switch(result)
            case 0
                fprintf('비겼습니다.\n');                
            case 1
                fprintf('user가 이겼습니다.\n');
            score_board.user_score=score_board.user_score+user_data;
            user_win_count=user_win_count+1;

            case 2
                fprintf('com이 이겼습니다.\n');
            score_board.com_score=score_board.com_score+com_data;
            com_win_count=com_win_count+1;
        end
          if(n>30)
            fprintf('최종점수 user: %d com: %d\n',score_board.user_score,score_board.com_score);
    
          end
          
          if(score_board.user_score>=m)
        fprintf('user가 %d : %d으로 이겼습니다\n',user_win_count,com_win_count);
        fprintf('최종점수 user: %d com: %d\n',score_board.user_score,score_board.com_score);
          break;

    elseif(score_board.com_score>=m)
         fprintf('computer가 %d : %d으로 이겼습니다\n',com_win_count,user_win_count);
        fprintf('최종점수 user: %d com: %d\n',score_board.user_score,score_board.com_score);
        break;
          end
           
 end
   
   again=input('한판 더 하시겠습니까? (yes:1, no:2):\n');
   if(again==2)
    fprintf('게임종료\n');
      break;
   end
end
