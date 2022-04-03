#include<stdio.h>
#include<stdlib.h>
#include<string.h>
main(){
	int cod; 
	char linkName[20];
	char id[20];
	char password[20];
	char end[50] = "rasdial"; 
	system("color 2"); 
	printf("******************************************\n");
	printf("*渤海大学有线校园网开机自动连接挂载工具  *\n");
	printf("*作者：20012349     发布日期： 2022.3.4  *\n");
	printf("*仅供学习交流 完全免费 请勿恶意传播贩卖  *\n");
	printf("*输入对应代码使用相应功能：              *\n");
	printf("*1.挂载有线网开机自动连接                *\n");
	printf("*2.取消有线网开机自动连接                *\n");
	printf("*3.退出                                  *\n");
	printf("******************************************\n");
	scanf("%d",&cod);
	if(cod==1){
		printf("*注意：挂载开机自动链接之前要至少手动连接一次，下面填入的连接名要与拨号设置中一致\n"); 
		printf("*请输入低于五个字符的连接名（要求英文或数字，在拨号设置里面默认是\"宽带链接\"）\n");
		scanf("%s",&linkName);
		printf("*请输入账号（一般为学号）\n");
		scanf("%s",&id);
		printf("*请输入密码（一般为身份证号后六位）\n");
		scanf("%s",&password);
		printf("*正在挂载开机链接无线网，杀毒软件限制权限请点击允许！\n");
		strcat(end," ");
	 	strcat(end,linkName);
	 	strcat(end," ");
	 	strcat(end,id);
	 	strcat(end," ");
	 	strcat(end,password);
	 	FILE* f = fopen("C:/ProgramData/Microsoft/Windows/Start Menu/Programs/Startup/BHU.bat","w");
	 	if(f==NULL)  {
	 		puts("*挂载失败！(请检查杀毒软件，并以管理员权限运行本软件！)/n");
	    	exit(1);
	 	}
	 	else{
	 		fprintf(f,"%s",end);//输出到文件B.txt
	 	} 
	 	fclose(f);
	}	
	if(cod==2){
		unlink("C:/ProgramData/Microsoft/Windows/Start Menu/Programs/Startup/BHU.bat"); 
		puts("*已取消（前提是本软件有管理员权限）\n");
	}
	system("pause"); 
}
