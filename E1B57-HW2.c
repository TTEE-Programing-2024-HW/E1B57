#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 

int main(void)
{
  //�Ĥ@�D 

    char myclass[]="E1B";                       //�ŧi�Z�Ŧr�� 
	int number=57;                              //�ŧi�y���ܼ�  
	char name[]="Emma";                         //�ŧi�m�W�r��
	char cartoon[]="Minions";                   //�ŧi�d�q�W�٦r�� 
	
	printf("�Z�šG%s\n",myclass);               //��X�Z�� 
	printf("--------------------\n");
	printf("�y���G%d\n",number);                //��X�y�� 
	printf("--------------------\n");
	printf("�m�W�G%s\n",name);                  //��X�m�W 
	printf("--------------------\n");
	printf("�ڳ̳��w���d�q�O%s�I\n",cartoon);   //��X�d�q�W�� 
	printf("--------------------\n");
	
	system("pause"); //�e���Ȱ� ���ݨϥΪ̫����N��
    system("CLS"); //�M���ù� 
    
    int i,password=0,count=0; //�ŧi�ܼ� 
	
    for(i=0;i<=3;i++){ //�i�J�j��,�̦h��J�T���K�X 
		 
      printf("�п�J4��Ʀr�K�X:"); //��X���ܦr�y 
      scanf("%d",&password); //Ū���K�X 
    
      if(password==2024){ //�P�_�K�X�O�_���T 
    	printf("�K�X���T�A�w��I�I\n"); //�L�X���T�r�y 
    	break;
	  }else{ //�_�h 
	    printf("�K�X���~�I");
	    count++; //���~���ƥ[�@ 
		if(count>=3){ //�P�_��J���~���ƬO�_�W�L�T�� 
		  printf("�K�X���~�T���I",'\a'); //�L�X���~�r�y 
		  system("pause"); //�e���Ȱ� 
	    return 0; //�����{�� 
	    }
	}
	system("pause"); //�e���Ȱ� ���ݨϥΪ̫����N�� 
	system("CLS"); //�M���ù�
}
  //�ĤG�T�D
  
  while(1){ //�L���j�� 
    printf(" ------------------------ \n"); //�L�X�D��� 
  	printf("|  a. �e�X�����T����      |\n");
  	printf("|  b. ��ܭ��k��          |\n");
  	printf("|  c.����                 |\n");
  	printf(" ------------------------ \n"); 
  	
  	fflush(stdin); //�M�ſ�J�w�İ� 
  
    int a,n,num,i,j,k,x,b; //�ŧi�ܼ� 
    char option;
    
    printf("�п�J�@�Ӧr�šG"); //��X���ܦr�y 
    scanf("%c",&a); //Ū���r�� 
    
    switch(a){ //Ū���r�Ű���۹������{�� 
    	
    case 'A':
    case 'a':
      system("CLS"); //�M���ù�
      printf("�п�J�@��'a'��'n'���r���G"); //��X���ܦr�y
      scanf(" %c",&n); //Ū���r�� 
      
      while(n<'a'||n>'n'){ //�Y��J�r�����ba��n����,�h�n�D���s��J 
  	      printf("�Э��s��J�@��'a'��'n'���r���G");
  	      scanf(" %c",&n);
        }
        
        num=n-'a'+1; //�p���X���r���ƶq 
        for(i=0;i<num;i++){ //��X�����T���� 
          
		  for(j=0;j<=i;j++)
  	        printf("%c",n+j);
  	        n--;
  	      for(k=num;k>i+1;k--)
  	        printf(" ");
  	        printf("\n");
  	}
  	getch(); //���ݨϥΪ̫����N�� 
    system("CLS"); //�M���ù�
    break;
    
    case 'B':
    case 'b':
      system("CLS"); //�M���ù�
      printf("�п�J�@��1~9����ơG"); //��X���ܦr�y 
      scanf("%d",&x); //Ū���ƭ� 
      while(x<1||x>9){ //�Y��J�ƭȤ��b1��9����,�h�n�D���s��J 
      	printf("�Э��s��J�@��1~9����ơG");
      	scanf("%d",&x);
	  }
	  for(a=1;a<=x;a++){ //��X���k�� 
	  	for(b=1;b<=a;b++){
	  		printf("%d*%d=%d",a,b,a*b);
	  		printf("\n");
		  }
	  }
	getch(); //���ݨϥΪ̫����N�� 
    system("CLS"); //�M���ù�
    break;
    
    case 'C':
    case 'c':
    	system("CLS"); //�M���ù�
    	printf("Continue?(y/n)\n"); //��X���ܦr�y 
    	scanf(" %c",&option); //Ū���r�� 
    	if(option=='Y'||option=='y'){ //�Y��JY��y,�^��D��� 
    	break;
        }
    	else if(option=='N'||option=='n'){ //�Y��JN��n,�{������ 
    	return 0;
        }
    	else{ //�Y�����O,��X���~�r�y 
    		printf("���~�T���I\n");
    		continue; //�~��U�Ӱj��,�^��D��� 
		}
	}
} 
}

/*�o�����@�~�G,�@�}�l�n�]�w����github�b���u���Z�x����,�]�������S����Ĳ�L,�ΰ_�Ӥ]�ܤ���
�ܱ`�����D�ۤv�n�䪺�F��b��,�Ʊ椧��i�H��F��,�����@�Ӧn�u��C������@�~���e,��ı�o��@�~�@����
���O�Ĥ@��%C������,�@�}�l����@��Ū�����~�]���X�ڷQ�n���F��,��Ӭd�F�ܦh��Ƥ~�o�{
�n�b�e���[�@�ӪŮ�~�~�|Ū���쥿�T�r��,�٦����k������,�]���S���U���㪺���O
�]�F�ܦh�_�Ǫ��⦡,�g�L�h���ק�~�ש󦨥\�I*/

