while(1)
    
    game_data=struct('user',[],'computer',[],'comuser_win_count',0,'com_win_count',0);
    
    n=input('몇판을 하시겠습니까?');
    
    for k=1:n
        user=input('1에서 100까지 중 임의의 숫자를 입력하시오:');
        com=ceil(rand(1)*100);
     
        game_data.user(k)=user;
        game_data.computer(k)=com;
        
        fprintf('user=%d, com=%d\n',user,com);
        if(user>com)
            result=1;
        elseif(com>user)
            result=2;
        else
            result=0;
        end
        
        switch(result)
            case 0
                fprintf('비겼습니다.\n');                
            case 1
                fprintf('user가 이겼습니다.\n'); 
                game_data.comuser_win_count=game_data.comuser_win_count+1;
            case 2
                fprintf('computer가 이겼습니다.\n');
                game_data.com_win_count=game_data.com_win_count+1;
        end
    end
    
    if(game_data.comuser_win_count>game_data.com_win_count)
        for i=1:n
            fprintf('%dth user_data=%d, %dth com_data=%d\n',i,game_data.user(i),i,game_data.computer(i));
        end
        fprintf('user가 %d : %d으로 이겼습니다\n',game_data.comuser_win_count,game_data.com_win_count);
    
    elseif(game_data.com_win_count>game_data.comuser_win_count)
        for i=1:n
            fprintf('user_data[%d]=%d, com_data[%d]=%d\n',i,game_data.user(i),i,game_data.computer(i));
        end
         fprintf('computer가 %d : %d으로 이겼습니다\n',game_data.com_win_count,game_data.comuser_win_count);
    else(game_data.comuser_win_count==game_data.com_win_count)
        fprintf('비겼습니다.\n');
    end
      
end