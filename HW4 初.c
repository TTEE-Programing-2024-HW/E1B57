#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<conio.h>

int main(void){
	
//�Ĥ@�D
   
  char myclass[]="E1B";                       //�ŧi�Z�Ŧr�� 
  int number=57;                              //�ŧi�y���ܼ�  
  char name[]="Emma";                         //�ŧi�m�W�r��
  char cartoon[]="Minions";                   //�ŧi�d�q�W�٦r�� 
  
  printf("Class�G%s\n",myclass);               //��X�Z�� 
  printf("--------------------\n");
  printf("Numner�G%d\n",number);                //��X�y�� 
  printf("--------------------\n");
  printf("Name�G%s\n",name);                  //��X�m�W 
  printf("--------------------\n");
  printf("My favorite cartoon is�G%s�I\n",cartoon);   //��X�d�q�W�� 
  printf("--------------------\n"); 
  
  system("pause"); //�e���Ȱ� ���ݨϥΪ̫����N��
  system("CLS");
  
  int i,password=0,count; //�ŧi�ܼ� 
	
    for(i=0;i<=3;i++){ //�i�J�j��,�̦h��J�T���K�X 
		 
      printf("Please enter the 4-digit password:"); //��X���ܦr�y 
      scanf("%d",&password); //Ū���K�X 
    
      if(password==2024){ //�P�_�K�X�O�_���T 
    	printf("The password is correct, welcome! !\n"); //�L�X���T�r�y 
    	break;
	  }else if(password!=2024&&count<3){ //�_�h 
	    printf("Wrong password�I");
	    count++;
		} //���~���ƥ[�@ 
		else{ //�P�_��J���~���ƬO�_�W�L�T�� 
		  printf("Wrong password three times�I",'\a'); //�L�X���~�r�y 
		  system("pause"); //�e���Ȱ� 
	    return 0; //�����{�� 
	    }
	}
	system("pause"); //�e���Ȱ� ���ݨϥΪ̫����N�� 
	system("CLS"); //�M���ù�
	
//�ĤG�T�D 

	 
	
}
} 
