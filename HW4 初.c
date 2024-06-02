#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

//第一題
int main1(){
 
  char myclass[]="E1B";                       
  int number=57;                             
  char name[]="Emma";                         
  char cartoon[]="Minions";                   
  
  printf("Class：%s\n",myclass);               
  printf("--------------------\n");
  printf("Numner：%d\n",number);                
  printf("--------------------\n");
  printf("Name：%s\n",name);                  
  printf("--------------------\n");
  printf("My favorite cartoon is：%s！\n",cartoon);   
  printf("--------------------\n"); 
  
  system("pause"); 
  system("CLS");
  
  int i,password=0,count; 
 
    for(i=0;i<=3;i++){ 
   
      printf("Please enter the 4-digit password:"); 
      scanf("%d",&password); 
    
      if(password==2024){ 
     printf("The password is correct, welcome! !\n"); 
     break;
   }else if(password!=2024&&count<3){ 
     printf("Wrong password！");
     count++;
  } 
  else{ 
    printf("Wrong password three times！",'\a'); 
    system("pause"); 
     return 0; 
     }
 }
 system("pause"); 
 system("CLS"); 
}
 
//第二三題 

typedef struct {
    char name[100];
    int id;
    int math;
    int physics;
    int english;
    float average;
} Student;  

// 函數宣告
void displayMenu();
void enterGrades(Student students[], int *studentCount);
void displayGrades(const Student students[], int studentCount);
void searchGrades(const Student students[], int studentCount);
void gradeRanking(Student students[], int studentCount);
void exitSystem(int *running);

int main() {
    const int MAX_STUDENTS = 10; 
    Student students[MAX_STUDENTS]; 
    int studentCount = 0; 
    int running = 1; 

    while (running) {
        displayMenu(); 
        char choice;
        scanf(" %c", &choice); 

        switch (choice) {
            case 'a':
                system("CLS"); 
                enterGrades(students, &studentCount); 
                break;
            case 'b':
                system("CLS"); 
                displayGrades(students, studentCount); 
                break;
            case 'c':
                system("CLS");
                searchGrades(students, studentCount); 
                break;
            case 'd':
                system("CLS"); 
                gradeRanking(students, studentCount); 
                break;
            case 'e':
                system("CLS"); 
                exitSystem(&running); 
                break;
            default:
                printf("Invalid choice! Please try again.\n"); 
                break;
        }
    }

    return 0;
}


// 顯示主選單函數
void displayMenu() {
    printf("------------[Grade System]----------\n");
    printf("| a. Enter student grades          |\n");
    printf("| b. Display student grades        |\n");
    printf("| c. Search for student grades     |\n");
    printf("| d. Grade ranking                 |\n");
    printf("| e. Exit system                   |\n");
    printf("------------------------------------\n");
    printf("Enter your choice: ");
}

// 輸入學生成績函數
void enterGrades(Student students[], int *studentCount) { 
    int i;
    printf("Enter the number of students (5-10): ");
    scanf("%d", studentCount); 

    while (*studentCount < 5 || *studentCount > 10) { 
        printf("Invalid input. Please enter a number between 5 and 10: ");
        scanf("%d", studentCount); 
    }

    for (i = 0; i < *studentCount; i++) { 
        printf("Enter details for student %d:\n", i + 1);
    }
    system("CLS");
}

// 顯示學生成績函數
void displayGrades(const Student students[], int studentCount) {
}

// 搜尋學生成績函數
void searchGrades(const Student students[], int studentCount) {
}

// 成績排名函數
void gradeRanking(Student students[], int studentCount) {
}

// 退出系統函數
void exitSystem(int *running) {
    *running = 0; 
}
    

