#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define max 7
#define days 5

main()
{
	char emperorname[20];	
	char tempname[20];					//�ʵ۵����� 
	int choice,choice2,choice3;
	int i,k=0,temp=0,temp1=0,ran,day=1;
	int count=6;									//�ʵ۵�ѡ��1~4֮�� 
	char  place[4][20]={"����֮��","��ʯ����","�����Ա�","СϪ����"};
	char  names[max][20]={"��ǫ","���¸�","�߷�","����ƽ","����ΰ","����"};
	char  levelnames[6][10]={"��Ӧ","����","����","����","�ʹ���","�ʺ�"};
	int   level[]={1,1,2,1,2,1};
	int   loves[]={80,80,80,80,80,80};
	printf("\n�����ʮ���ʱ�䣬�����ڼ�������κ��£�����Ҫע�������ǵĺøж�Ŷ\n");
	printf("\n������ �ǻ��������ţ�");
	scanf("%s",emperorname);
	printf("%s���ϼ��٣��������࣬�����˳���\n",emperorname); 
	Sleep(2000); 
	printf("\n......\n");
	Sleep(1000); 
	printf("\n...\n"); 
	system("cls");
	while(day<=days)
	{
		Sleep(1000); 
		printf("\n********************��%d��********************\n",day);
		printf("\n*********************************************\n");
		Sleep(1000); 
//	printf("%12s%12s\t�øж�","����","����"); 
//	for(i=0;i<count;i++)
//	{
//		printf("\n%12s%12s\t%d",names[i],levelnames[level[i]],loves[i]);
//	}
	Sleep(1000); 
	printf("\n|***********************************************|"); 
	printf("\n|\t������Ҫ��ʲô��\t\t\t|\n");
	printf("|\t1���ʵ���ּѡ����\t\t\t|\n");
	printf("|\t2�����Ƴ��ң�\t\t\t\t|\n");
	printf("|\t3�������乬��\t\t\t\t|\n");
	printf("|\t4�������ټ�����С������������¡�\t|\n");
	printf("|***********************************************|\n");  
	printf("������ѡ��");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1://1���ʵ���ּѡ����\t\t�����ӹ��ܣ�\n
			if (count<=max) 
			{
				printf("�������µ���������䣺");
				scanf("%s",names[count]);
				Sleep(1000); 
				printf("�µ����%s�Ѿ��빬����",names[count]);
				Sleep(1000); 
				printf("\n�����裬��������øжȼ��壡\n���ߣ����ϲ��������أ�");
				for(i=0;i<count;i++) 
				{
					loves[i]-=5;
				}
				level[count]=0;
				loves[count]=80;
				count++;
//				��������øжȼ�ʮ

			}
			else
			{
				Sleep(1000); 
				printf("���ϱ������尡�����Ѿ�����Ϊ��������");
			}
			break;
		case 2://2�����Ƴ��ң�\t\t���޸�״̬���ܣ�\n
			//���������Ӻøжȼ�ʮ���������Ӻøжȼ�ʮ 
			printf("���ϣ�������Ҫ������λ���ﰡ��");
			while (1)
			 { 
				scanf("%s",tempname); 
				for(i=0;i<count;i++)
				{
					if(strcmp(tempname,names[i])==0)
					{
						loves[i]+=10;
						Sleep(1000); 
						printf("\n�����򸣼��飬%s��������ĺøж����������أ�",names[i]);
						temp=1; 
					}
					else
						loves[i]-=10;
				}
				if (temp==1)
				{
					Sleep(1000);
					printf("\n���ں󹬼�����ǧ������������һ�ˣ�\n�������ﶼ��Ľ���ʺ��ţ��øжȼ�ʮ���ߣ����С���ˣ���");
					break;
				}
				else
				{
					for(i=0;i<count;i++)
						loves[i]+=10;
					Sleep(1000);
					printf("���ϣ�û����λ����Ŷ����������ѡ��ɣ�");
					
				}
					
				
			}
			
			break;
		case 3://3�������乬��\t\t��ɾ�����ܣ�\n
			printf("���������λ��������乬ѽ��");
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
				printf("�����ǣ��龪һ�����óԳԸúȺ�"); 
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
			printf("�����ֻ����øжȼ�ʮ��"); 
			}
			break;
		case 4://4�������ټ�����С������������¡�\n
			while(1)
			{
				Sleep(1000);
				printf("�������ټ���λ���ﰡ��");
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
					printf("���ϣ�û����λ����G��");
				}
				else
				{
					Sleep(1000);
					printf("���%s�μ����ϣ������򸣽�\n",names[k]);
					break;
				}
			}
			printf("\n1�������ǿ�����");
			printf("\n2,��ʫ�ʸ踳̸��������ѧ");
			printf("\n3,ץ���Ҿ�����ٺٺ�");
			printf("\n4,������һ���Ģ��\n");
			printf("����������ʲôѽ������������");
			scanf("%d",&choice2); 
			switch(choice2)
			{
				case 1:
					printf("�㿴����������ִ���Բ\n�㿴�����������С����\n");
					Sleep(2000);
					printf("......\n");
					Sleep(1000);
					printf("...\n");
					printf("��ϲ���ϻ�á�rap֮�����ĳƺţ�������������������");
					 for(i=0;i<count;i++)
					{
					if(strcmp(tempname,names[i])==0)
					{
						loves[i]+=10;
						continue; 
					}
					loves[i]+=5;
					}
					printf("�����ҵ�����øж�������ʮ�㣬��������øж�������㣡");
					break;
				case 2:
					Sleep(1000);
					printf("������ﲻ�򵥣�\n������Ů�·��䡣\n���Ц�ݱ�����\n���ú����˽�����\n\n\n");
					Sleep(1000);
					printf("��ʪ��ʪ\n");
					for(i=0;i<count;i++)
						if(strcmp(tempname,names[i])==0)
							loves[i]+=10;
							Sleep(1000);
					printf("������㰮Ľ���ѣ��øжȼ�ʮ(��ʫ֮�������鴫��)");
					break;
				case 3:
					Sleep(1000);
					printf("���¿�Ҫ�պ��۾�������͵����ֻ�����λ���Ŷ��\n");
					srand((unsigned)time(NULL));
						ran=rand()%4+1;
					printf("\n%d\n",ran); 
					for(i=1;i<=3;i++)
					{
						printf("1,����֮��\n");
						printf("2,��ʯ����\n");
						printf("3,�����Ա�\n");
						printf("4,СϪ����\n");
						printf("�²����������");
						scanf("%d",&choice3); 
						if (choice3==ran) 
						{
							printf("���Ϻ������أ�\n");
							Sleep(1000);
							level[k]+=1;
							loves[k]+=30;
							Sleep(1000);
							printf("%s�������ĺø�ֱ���������øж�������ʮ���ȼ�����Ϊ%s",names[k],levelnames[level[k]]);
						 	break; 
						}
						else if (i==3)
						{
							Sleep(1000);
							printf("�ðɣ�����������Ŷ����\n");
						}
						else
						{
							Sleep(1000);
							printf("�´���Ŷ������һ�ΰ�\n");
						}
					}
					if(i==4)
					Sleep(1000);
						printf("������������%s������\n",place[rand()%4+1]);
					break;
				case 4:
					Sleep(1000);
					printf("�������ֱ��\n");
						loves[k]-=10;
						Sleep(1000);
						printf("���ڻ���û�кúð��ջ��ᣬ����øж� ��ʮ");
						break; 
				default: Sleep(1000);printf("���ϣ�ѡ����Ҳû��ϵ��ֻ����ūһ����֪��Ŷ��");break;
				
			 } 
			break;
		default:
//			Sleep(1000);

			printf("���ϣ�����Ϸ�ԣ���������ѡ�񣡣�");day--;
			choice=0; 
			break;
	
	}
//	��ӡһ������ 
	printf("\n*********************************************\n"); 
	printf("%12s%12s\t�øж�","����","����"); 
	for(i=0;i<count;i++)
	{
		printf("\n%12s%12s\t%d",names[i],levelnames[level[i]],loves[i]);
	}
	printf("\n*********************************************\n"); 
	Sleep(2000);
	system("cls");
//	��Ϸʧ�ܵ��ж� 
	for(i=0;i<count;i++)
	{
		if (loves[i]<60)
		{
			temp1=1;
			printf("\n��������ˣ���Ȼ������������ǣ�������尡��\n");Sleep(1000);
			printf("����������Ǳ���\n");Sleep(1000);
			printf("********************�ʵ���********************\n");Sleep(1000);
			printf("*******************����%d��*******************\n",day); Sleep(1000);
			printf("**********����Ӧ��Ҫ��¶��մ��������***********\n");Sleep(1000);
			
		}
	}
	day++;
 	}
 	if (temp1==0)
// 	��Ϸ�ɹ�����ʾ 
	{
		printf("\nʮ�������������");
		printf("\n$MISSION SUCCESS$\n");Sleep(1000);
 		printf("\n*********************************************\n"); 
		printf("%12s%12s\t�øж�","����","����"); 
		for(i=0;i<count;i++)
		{
			printf("\n%12s%12s\t%d",names[i],levelnames[level[i]],loves[i]);
		}
		printf("\n*********************************************\n"); 
		printf("������������˳�");
		Sleep(5000); 
		exit(0);
	}
//	��Ϸʧ�ܵ���ʾ 
 	else
	{
		printf("\n$GAME OVER$\n");Sleep(1000); 
		printf("\n*********************************************\n"); Sleep(1000);
		printf("%12s%12s\t�øж�","����","����");Sleep(1000); 
		for(i=0;i<count;i++)
		{
			printf("\n%12s%12s\t%d",names[i],levelnames[level[i]],loves[i]);
		}
		printf("\n*********************************************\n"); 
		printf("������������˳�");
		Sleep(5000); 
		exit(0); 
	}
	 
 } 
