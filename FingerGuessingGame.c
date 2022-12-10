#include <stdio.h>

int main()
{
   /*  Write C code in this online editor and run it. */
    char player1,player2;
    printf("请两名选手出拳，（在r-rock，c-cloth，s-scissors中选择输入2个字符分别代码两个选手出拳内容）");
	scanf("%c,%c",&player1,&player2);
	printf("player1 is %c, player2 is %c",player1,player2);
	switch(player1)
	{
		case 'r':
			switch(player2)
			{
					case 'r':
						printf("draw.");
						break;
					case 'c':
						printf("player2 win.");
						break;
					case 's':
					    printf("player1 win.");
						break;
					default:
						printf("can't recognize player2's gesture.");
						break;
			}
			break;
		case 'c':
			switch(player2)
			{
					case 'r':
						printf("player1 win.");
						break;
					case 'c':
						printf("draw.");
						break;
					case 's':
						printf("player2 win.");
						break;
					default:
						printf("can't recognize player2's gesture.");
						break;
			}
			break;
		case 's':
			switch(player2)
			{
					case 'r':
						printf("player2 win.");
						break;
					case 'c':
						printf("player1 win.");
						break;
					case 's':
						printf("draw.");
						break;
					default:
						printf("can't recognize player2's gesture.");
						break;
			}
			break;
		default:
			printf("can't recognize player1's gesture.");
			break;
	}
   return 0;
}