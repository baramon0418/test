Data(1) = struct('name','Lee_YoungSoo','ID',2008012316,'grade',[87 98 76 90]);
Data(2) = struct('name','Hong_KillDong','ID',2012010668,'grade',[95 98 80 92]);
Data(3) = struct('name','Park_KiYoon','ID',2017012118,'grade',[87 80 85 95]);

while(1)
user=input('1번: 이름으로 검색, 2번:ID로 검색, 3번: 전체출력 4번: 종료');
   if (user==4)
   break;
   end
   
   if(user==1)
        str=input('이름 입력:','s');
if strcmp(str,'Lee_YoungSoo')
disp('name:Lee_YoungSoo,ID:2008012316,grade:(87 98 76 90)');

elseif strcmp(str,'Hong_KillDong')
disp('name:Hong_KillDong,ID:2012010668,grade:(95 98 80 92)');

elseif strcmp(str,'Park_KiYoon')
disp('name:Park_KiYoon,ID:2017012118,grade:(87 80 85 95)');

end
   end


if(user==2)
    str=input('ID 입력:','s');
if strcmp(str,'2008012316')
disp('name:Lee_YoungSoo,ID:2008012316,grade:(87 98 76 90)');

elseif strcmp(str,'2012010668')
disp('name:Hong_KillDong,ID:2012010668,grade:(95 98 80 92)');

elseif strcmp(str,'2017012118')
disp('name:Park_KiYoon,ID:2017012118,grade:(87 80 85 95)');

end
end

if(user==3)
    disp('name:Lee_YoungSoo,ID:2008012316,grade:(87 98 76 90), name:Hong_KillDong,ID:2012010668,grade:(95 98 80 92), name:Park_KiYoon,ID:2017012118,grade:(87 80 85 95)');
end



end