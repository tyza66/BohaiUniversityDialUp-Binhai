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
	printf("*������ѧ����У԰�������Զ����ӹ��ع���  *\n");
	printf("*���ߣ�20012349     �������ڣ� 2022.3.4  *\n");
	printf("*����ѧϰ���� ��ȫ��� ������⴫������  *\n");
	printf("*�����Ӧ����ʹ����Ӧ���ܣ�              *\n");
	printf("*1.���������������Զ�����                *\n");
	printf("*2.ȡ�������������Զ�����                *\n");
	printf("*3.�˳�                                  *\n");
	printf("******************************************\n");
	scanf("%d",&cod);
	if(cod==1){
		printf("*ע�⣺���ؿ����Զ�����֮ǰҪ�����ֶ�����һ�Σ����������������Ҫ�벦��������һ��\n"); 
		printf("*�������������ַ�����������Ҫ��Ӣ�Ļ����֣��ڲ�����������Ĭ����\"�������\"��\n");
		scanf("%s",&linkName);
		printf("*�������˺ţ�һ��Ϊѧ�ţ�\n");
		scanf("%s",&id);
		printf("*���������루һ��Ϊ���֤�ź���λ��\n");
		scanf("%s",&password);
		printf("*���ڹ��ؿ���������������ɱ���������Ȩ����������\n");
		strcat(end," ");
	 	strcat(end,linkName);
	 	strcat(end," ");
	 	strcat(end,id);
	 	strcat(end," ");
	 	strcat(end,password);
	 	FILE* f = fopen("C:/ProgramData/Microsoft/Windows/Start Menu/Programs/Startup/BHU.bat","w");
	 	if(f==NULL)  {
	 		puts("*����ʧ�ܣ�(����ɱ����������Թ���ԱȨ�����б������)/n");
	    	exit(1);
	 	}
	 	else{
	 		fprintf(f,"%s",end);//������ļ�B.txt
	 	} 
	 	fclose(f);
	}	
	if(cod==2){
		unlink("C:/ProgramData/Microsoft/Windows/Start Menu/Programs/Startup/BHU.bat"); 
		puts("*��ȡ����ǰ���Ǳ�����й���ԱȨ�ޣ�\n");
	}
	system("pause"); 
}
