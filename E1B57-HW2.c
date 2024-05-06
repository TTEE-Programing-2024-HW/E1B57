#include<stdio.h>
#include<stdlib.h>
#include<conio.h> 

int main(void)
{
  //第一題 

    char myclass[]="E1B";                       //宣告班級字串 
	int number=57;                              //宣告座號變數  
	char name[]="Emma";                         //宣告姓名字串
	char cartoon[]="Minions";                   //宣告卡通名稱字串 
	
	printf("班級：%s\n",myclass);               //輸出班級 
	printf("--------------------\n");
	printf("座號：%d\n",number);                //輸出座號 
	printf("--------------------\n");
	printf("姓名：%s\n",name);                  //輸出姓名 
	printf("--------------------\n");
	printf("我最喜歡的卡通是%s！\n",cartoon);   //輸出卡通名稱 
	printf("--------------------\n");
	
	system("pause"); //畫面暫停 等待使用者按任意鍵
    system("CLS"); //清除螢幕 
    
    int i,password=0,count=0; //宣告變數 
	
    for(i=0;i<=3;i++){ //進入迴圈,最多輸入三次密碼 
		 
      printf("請輸入4位數字密碼:"); //輸出提示字句 
      scanf("%d",&password); //讀取密碼 
    
      if(password==2024){ //判斷密碼是否正確 
    	printf("密碼正確，歡迎！！\n"); //印出正確字句 
    	break;
	  }else{ //否則 
	    printf("密碼錯誤！");
	    count++; //錯誤次數加一 
		if(count>=3){ //判斷輸入錯誤次數是否超過三次 
		  printf("密碼錯誤三次！",'\a'); //印出錯誤字句 
		  system("pause"); //畫面暫停 
	    return 0; //結束程式 
	    }
	}
	system("pause"); //畫面暫停 等待使用者按任意鍵 
	system("CLS"); //清除螢幕
}
  //第二三題
  
  while(1){ //無限迴圈 
    printf(" ------------------------ \n"); //印出主選單 
  	printf("|  a. 畫出直角三角形      |\n");
  	printf("|  b. 顯示乘法表          |\n");
  	printf("|  c.結束                 |\n");
  	printf(" ------------------------ \n"); 
  	
  	fflush(stdin); //清空輸入緩衝區 
  
    int a,n,num,i,j,k,x,b; //宣告變數 
    char option;
    
    printf("請輸入一個字符："); //輸出提示字句 
    scanf("%c",&a); //讀取字符 
    
    switch(a){ //讀取字符執行相對應之程式 
    	
    case 'A':
    case 'a':
      system("CLS"); //清除螢幕
      printf("請輸入一個'a'到'n'的字元："); //輸出提示字句
      scanf(" %c",&n); //讀取字符 
      
      while(n<'a'||n>'n'){ //若輸入字元不在a到n之間,則要求重新輸入 
  	      printf("請重新輸入一個'a'到'n'的字元：");
  	      scanf(" %c",&n);
        }
        
        num=n-'a'+1; //計算輸出的字元數量 
        for(i=0;i<num;i++){ //輸出直角三角形 
          
		  for(j=0;j<=i;j++)
  	        printf("%c",n+j);
  	        n--;
  	      for(k=num;k>i+1;k--)
  	        printf(" ");
  	        printf("\n");
  	}
  	getch(); //等待使用者按任意鍵 
    system("CLS"); //清除螢幕
    break;
    
    case 'B':
    case 'b':
      system("CLS"); //清除螢幕
      printf("請輸入一個1~9的整數："); //輸出提示字句 
      scanf("%d",&x); //讀取數值 
      while(x<1||x>9){ //若輸入數值不在1到9之間,則要求重新輸入 
      	printf("請重新輸入一個1~9的整數：");
      	scanf("%d",&x);
	  }
	  for(a=1;a<=x;a++){ //輸出乘法表 
	  	for(b=1;b<=a;b++){
	  		printf("%d*%d=%d",a,b,a*b);
	  		printf("\n");
		  }
	  }
	getch(); //等待使用者按任意鍵 
    system("CLS"); //清除螢幕
    break;
    
    case 'C':
    case 'c':
    	system("CLS"); //清除螢幕
    	printf("Continue?(y/n)\n"); //輸出提示字句 
    	scanf(" %c",&option); //讀取字符 
    	if(option=='Y'||option=='y'){ //若輸入Y或y,回到主選單 
    	break;
        }
    	else if(option=='N'||option=='n'){ //若輸入N或n,程式結束 
    	return 0;
        }
    	else{ //若都不是,輸出錯誤字句 
    		printf("錯誤訊息！\n");
    		continue; //繼續下個迴圈,回到主選單 
		}
	}
} 
}

/*這次的作業二,一開始要設定那個github帳號真的蠻困難的,因為完全沒有接觸過,用起來也很不順
很常不知道自己要找的東西在哪,希望之後可以更了解,成為一個好工具。而關於作業內容,我覺得比作業一複雜
像是第一個%C的部分,一開始執行一直讀取錯誤跑不出我想要的東西,後來查了很多資料才發現
要在前面加一個空格才才會讀取到正確字符,還有乘法表的部分,因為沒有下完整的指令
跑了很多奇怪的算式,經過多次修改才終於成功！*/

