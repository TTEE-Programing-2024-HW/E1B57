#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<conio.h>

int main(void){
	
//第一題
   
  char myclass[]="E1B";                       //宣告班級字串 
  int number=57;                              //宣告座號變數  
  char name[]="Emma";                         //宣告姓名字串
  char cartoon[]="Minions";                   //宣告卡通名稱字串 
  
  printf("Class：%s\n",myclass);               //輸出班級 
  printf("--------------------\n");
  printf("Numner：%d\n",number);                //輸出座號 
  printf("--------------------\n");
  printf("Name：%s\n",name);                  //輸出姓名 
  printf("--------------------\n");
  printf("My favorite cartoon is：%s！\n",cartoon);   //輸出卡通名稱 
  printf("--------------------\n"); 
  
  system("pause"); //畫面暫停 等待使用者按任意鍵
  system("CLS");
  
  int i,password=0,count; //宣告變數 
	
    for(i=0;i<=3;i++){ //進入迴圈,最多輸入三次密碼 
		 
      printf("Please enter the 4-digit password:"); //輸出提示字句 
      scanf("%d",&password); //讀取密碼 
    
      if(password==2024){ //判斷密碼是否正確 
    	printf("The password is correct, welcome! !\n"); //印出正確字句 
    	break;
	  }else if(password!=2024&&count<3){ //否則 
	    printf("Wrong password！");
	    count++;
		} //錯誤次數加一 
		else{ //判斷輸入錯誤次數是否超過三次 
		  printf("Wrong password three times！",'\a'); //印出錯誤字句 
		  system("pause"); //畫面暫停 
	    return 0; //結束程式 
	    }
	}
	system("pause"); //畫面暫停 等待使用者按任意鍵 
	system("CLS"); //清除螢幕
	
//第二三題 

	 
	
}
} 
