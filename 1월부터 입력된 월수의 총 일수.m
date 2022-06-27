while (1)
    m= input('1월부터 몇 월까지의 총 일을 구할까요?:');
  switch(m)
      case 1
             for total=31
                fprintf('1월부터 %d월까지는 총%d일이 있습니다\n.',m,total);
             end
      case 2
             for total=28
                fprintf('1월부터 %d월까지는 총%d일이 있습니다\n',m,total+31);
             end
      case 3
             for total=31
                fprintf('1월부터 %d월까지는 총%d일이 있습니다\n',m,total+59);
             end
      case 4
             for total=30
                fprintf('1월부터 %d월까지는 총%d일이 있습니다\n',m,total+90);
             end
      case 5
             for total=31
                fprintf('1월부터 %d월까지는 총%d일이 있습니다\n',m,total+120);
             end
      case 6
             for total=30
                fprintf('1월부터 %d월까지는 총%d일이 있습니다\n',m,total+151);
             end
      case 7
              for total=31
                fprintf('1월부터 %d월까지는 총%d일이 있습니다\n',m,total+181);
              end
      case 8
              for total=31
                fprintf('1월부터 %d월까지는 총%d일이 있습니다\n',m,total+212);
              end
      case 9
              for total=30
                fprintf('1월부터 %d월까지는 총%d일이 있습니다\n',m,total+243);
              end
      case 10
              for total=31
                fprintf('1월부터 %d월까지는 총%d일이 있습니다\n',m,total+273);
              end
       case 11
              for total=30
                fprintf('1월부터 %d월까지는 총%d일이 있습니다\n',m,total+304);
              end
       case 12
              for total=31
                fprintf('1월부터 %d월까지는 총%d일이 있습니다\n',m,total+334);
              end
  end
end
