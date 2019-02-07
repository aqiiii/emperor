#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define max 7
#define days 5

main()
{
	char emperorname[20];	
	char tempname[20];					//皇帝的名字 
	int choice,choice2,choice3;
	int i,k=0,temp=0,temp1=0,ran,day=1;
	int count=6;									//皇帝的选择1~4之间 
	char  place[4][20]={"竹林之中","巨石后面","大树旁边","小溪里面"};
	char  names[max][20]={"于谦","郭德纲","高峰","栾云平","何云伟","孙悦"};
	char  levelnames[6][10]={"答应","贵人","嫔妃","贵妃","皇贵妃","皇后"};
	int   level[]={1,1,2,1,2,1};
	int   loves[]={80,80,80,80,80,80};
	printf("\n你仅有十天的时间，在这期间可以做任何事，但是要注意妃子们的好感度哦\n");
	printf("\n请输入 登基皇上名号：");
	scanf("%s",emperorname);
	printf("%s皇上驾临，有事启奏，无事退朝！\n",emperorname); 
	Sleep(2000); 
	printf("\n......\n");
	Sleep(1000); 
	printf("\n...\n"); 
	system("cls");
	while(day<=days)
	{
		Sleep(1000); 
		printf("\n********************第%d天********************\n",day);
		printf("\n*********************************************\n");
		Sleep(1000); 
//	printf("%12s%12s\t好感度","姓名","级别"); 
//	for(i=0;i<count;i++)
//	{
//		printf("\n%12s%12s\t%d",names[i],levelnames[level[i]],loves[i]);
//	}
	Sleep(1000); 
	printf("\n|***********************************************|"); 
	printf("\n|\t今天您要做什么？\t\t\t|\n");
	printf("|\t1，皇帝下旨选妃：\t\t\t|\n");
	printf("|\t2，翻牌宠幸：\t\t\t\t|\n");
	printf("|\t3，打入冷宫！\t\t\t\t|\n");
	printf("|\t4，单独召见爱妃小树林做纯洁的事。\t|\n");
	printf("|***********************************************|\n");  
	printf("陛下请选择：");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1://1，皇帝下旨选妃：\t\t（增加功能）\n
			if (count<=max) 
			{
				printf("请输入新的娘娘的名讳：");
				scanf("%s",names[count]);
				Sleep(1000); 
				printf("新的娘娘！%s已经入宫！！",names[count]);
				Sleep(1000); 
				printf("\n后宫争宠，其他娘娘好感度减五！\n（哼！皇上不爱我了呢）");
				for(i=0;i<count;i++) 
				{
					loves[i]-=5;
				}
				level[count]=0;
				loves[count]=80;
				count++;
//				其他娘娘好感度减十

			}
			else
			{
				Sleep(1000); 
				printf("皇上保重龙体啊，后宫已经人满为患啦！！");
			}
			break;
		case 2://2，翻牌宠幸：\t\t（修改状态功能）\n
			//被宠幸妃子好感度加十，其他妃子好感度减十 
			printf("皇上，今天您要宠幸那位娘娘啊：");
			while (1)
			 { 
				scanf("%s",tempname); 
				for(i=0;i<count;i++)
				{
					if(strcmp(tempname,names[i])==0)
					{
						loves[i]+=10;
						Sleep(1000); 
						printf("\n皇上万福吉祥，%s娘娘对您的好感度又上升了呢！",names[i]);
						temp=1; 
					}
					else
						loves[i]-=10;
				}
				if (temp==1)
				{
					Sleep(1000);
					printf("\n由于后宫佳丽三千，您独宠娘娘一人，\n其他娘娘都羡慕嫉妒恨呐，好感度减十（哼，这个小贱人！）");
					break;
				}
				else
				{
					for(i=0;i<count;i++)
						loves[i]+=10;
					Sleep(1000);
					printf("皇上，没有这位娘娘哦！还是重新选择吧：");
					
				}
					
				
			}
			
			break;
		case 3://3，打入冷宫！\t\t（删除功能）\n
			printf("陛下想把哪位娘娘打入冷宫呀：");
			scanf("%s",tempname);
			for(i=0;i<count;i++)
			{
				if(strcmp(tempname,names[i])==0)
				{
					k=i;
					temp=1;
				}
			}
			if(temp==0)
			{
				Sleep(1000);
				printf("娘娘们！虚惊一场，该吃吃该喝喝"); 
			}
			else
			{
				for(i=k;i<count-1;i++)
				{
					strcpy(names[i],names[i+1]);
					loves[i]=loves[i+1];
					level[i]=level[i+1];  
				}
			 count--;
			 for(i=0;i<count;i++)
			 	loves[i]+=10;
			Sleep(1000);
			printf("幸灾乐祸，好感度加十！"); 
			}
			break;
		case 4://4，单独召见爱妃小树林做纯洁的事。\n
			while(1)
			{
				Sleep(1000);
				printf("皇上想召见那位娘娘啊？");
				scanf("%s",tempname);
				for(i=0;i<count;i++)
				{
					if(strcmp(tempname,names[i])==0)
					{
						k=i;
						temp=1;
					}
				}
				if(temp==0)
				{
					Sleep(1000);
					printf("皇上，没有这位娘娘欸！");
				}
				else
				{
					Sleep(1000);
					printf("臣妾%s参见皇上，皇上万福金安\n",names[k]);
					break;
				}
			}
			printf("\n1，看星星看月亮");
			printf("\n2,从诗词歌赋谈到人生哲学");
			printf("\n3,抓到我就让你嘿嘿嘿");
			printf("\n4,和娘娘一起采蘑菇\n");
			printf("皇上你想做什么呀？：（捂脸）");
			scanf("%d",&choice2); 
			switch(choice2)
			{
				case 1:
					printf("你看这个月亮他又大又圆\n你看这个星星他又小又闪\n");
					Sleep(2000);
					printf("......\n");
					Sleep(1000);
					printf("...\n");
					printf("恭喜皇上获得【rap之王】的称号，您的魅力又提升了呢");
					 for(i=0;i<count;i++)
					{
					if(strcmp(tempname,names[i])==0)
					{
						loves[i]+=10;
						continue; 
					}
					loves[i]+=5;
					}
					printf("被宠幸的娘娘好感度上升的十点，其他娘娘好感度上升五点！");
					break;
				case 2:
					Sleep(1000);
					printf("这个娘娘不简单，\n好似仙女下凡间。\n你的笑容比蜜甜，\n长得好像潘金莲。\n\n\n");
					Sleep(1000);
					printf("好湿好湿\n");
					for(i=0;i<count;i++)
						if(strcmp(tempname,names[i])==0)
							loves[i]+=10;
							Sleep(1000);
					printf("娘娘对你爱慕不已，好感度加十(念诗之王名不虚传！)");
					break;
				case 3:
					Sleep(1000);
					printf("陛下可要闭好眼睛，不许偷看，只有三次机会哦！\n");
					srand((unsigned)time(NULL));
						ran=rand()%4+1;
					printf("\n%d\n",ran); 
					for(i=1;i<=3;i++)
					{
						printf("1,竹林之中\n");
						printf("2,巨石后面\n");
						printf("3,大树旁边\n");
						printf("4,小溪里面\n");
						printf("猜猜我在哪里？：");
						scanf("%d",&choice3); 
						if (choice3==ran) 
						{
							printf("皇上好厉害呢！\n");
							Sleep(1000);
							level[k]+=1;
							loves[k]+=30;
							Sleep(1000);
							printf("%s娘娘对你的好感直线上升，好感度增加三十，等级晋升为%s",names[k],levelnames[level[k]]);
						 	break; 
						}
						else if (i==3)
						{
							Sleep(1000);
							printf("好吧，次数用完了哦，，\n");
						}
						else
						{
							Sleep(1000);
							printf("猜错了哦，再来一次吧\n");
						}
					}
					if(i==4)
					Sleep(1000);
						printf("啦啦啦，我在%s这里呐\n",place[rand()%4+1]);
					break;
				case 4:
					Sleep(1000);
					printf("皇上这个直男\n");
						loves[k]-=10;
						Sleep(1000);
						printf("由于皇上没有好好把握机会，娘娘好感度 减十");
						break; 
				default: Sleep(1000);printf("皇上，选错了也没关系，只有老奴一个人知道哦！");break;
				
			 } 
			break;
		default:
//			Sleep(1000);

			printf("皇上，君无戏言，请您慎重选择！！");day--;
			choice=0; 
			break;
	
	}
//	打印一遍数据 
	printf("\n*********************************************\n"); 
	printf("%12s%12s\t好感度","姓名","级别"); 
	for(i=0;i<count;i++)
	{
		printf("\n%12s%12s\t%d",names[i],levelnames[level[i]],loves[i]);
	}
	printf("\n*********************************************\n"); 
	Sleep(2000);
	system("cls");
//	游戏失败的判定 
	for(i=0;i<count;i++)
	{
		if (loves[i]<60)
		{
			temp1=1;
			printf("\n这个臭男人，竟然不换老娘，姐妹们，给老娘冲啊！\n");Sleep(1000);
			printf("后宫起火，娘娘们暴动\n");Sleep(1000);
			printf("********************皇帝卒********************\n");Sleep(1000);
			printf("*******************享年%d天*******************\n",day); Sleep(1000);
			printf("**********皇上应该要雨露均沾啊！！！***********\n");Sleep(1000);
			
		}
	}
	day++;
 	}
 	if (temp1==0)
// 	游戏成功的提示 
	{
		printf("\n十天结束啦！！！");
		printf("\n$MISSION SUCCESS$\n");Sleep(1000);
 		printf("\n*********************************************\n"); 
		printf("%12s%12s\t好感度","姓名","级别"); 
		for(i=0;i<count;i++)
		{
			printf("\n%12s%12s\t%d",names[i],levelnames[level[i]],loves[i]);
		}
		printf("\n*********************************************\n"); 
		printf("程序将在五秒后退出");
		Sleep(5000); 
		exit(0);
	}
//	游戏失败的提示 
 	else
	{
		printf("\n$GAME OVER$\n");Sleep(1000); 
		printf("\n*********************************************\n"); Sleep(1000);
		printf("%12s%12s\t好感度","姓名","级别");Sleep(1000); 
		for(i=0;i<count;i++)
		{
			printf("\n%12s%12s\t%d",names[i],levelnames[level[i]],loves[i]);
		}
		printf("\n*********************************************\n"); 
		printf("程序将在五秒后退出");
		Sleep(5000); 
		exit(0); 
	}
	 
 } 
