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
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("ID: ");
        scanf("%d", &students[i].id);
        printf("Math score: ");
        scanf("%d", &students[i].math);
        printf("Physics score: ");
        scanf("%d", &students[i].physics);
        printf("English score: ");
        scanf("%d", &students[i].english);
        students[i].average = (students[i].math + students[i].physics + students[i].english) / 3.0;
    }
    system("CLS");
}

// 顯示學生成績函數
void displayGrades(const Student students[], int studentCount) {
    int i; 
    printf("Student grades:\n");
    for (i = 0; i < studentCount; i++) {
        printf("Name: %s\n", students[i].name);
        printf("ID: %d\n", students[i].id);
        printf("Math score: %d\n", students[i].math);
        printf("Physics score: %d\n", students[i].physics);
        printf("English score: %d\n", students[i].english);
        printf("Average score: %.1f\n", students[i].average);
        printf("--------------------\n");
    }
    printf("\n");
    system("pause");
    system("CLS");
}


// 搜尋學生成績函數
void searchGrades(const Student students[], int studentCount) {
    int i;
    char searchName[100];
    printf("Enter the name to search: ");
    scanf("%s", searchName);
    int found = 0;
    for (i = 0; i < studentCount; i++) {
        if (strcmp(students[i].name, searchName) == 0) {
            printf("Student found:\n");
            printf("Name: %s\n", students[i].name);
            printf("ID: %d\n", students[i].id);
            printf("Math score: %d\n", students[i].math);
            printf("Physics score: %d\n", students[i].physics);
            printf("English score: %d\n", students[i].english);
            printf("Average score: %.1f\n", students[i].average);
            printf("--------------------\n");
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Student not found.\n");
    }
}

// 成績排名函數
void gradeRanking(Student students[], int studentCount) {
    int i, j;
    Student temp;
    for (i = 0; i < studentCount - 1; i++) {
        for (j = 0; j < studentCount - i - 1; j++) {
            if (students[j].average < students[j + 1].average) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
    printf("Grade ranking:\n");
    for (i = 0; i < studentCount; i++) {
        printf("%d. Name: %s, Average score: %.1f\n", i + 1, students[i].name, students[i].average);
    }
    printf("\n");
    system("pause");
    system("CLS");
}

// 退出系統函數
void exitSystem(int *running) {
    char choice;
    do {
        printf("確定離開？(y/n): ");
        choice = _getch(); // 使用 _getch() 獲取單個字符輸入
        if (choice == 'y' || choice == 'Y') {
            *running = 0; // 設置 running 為 0 以退出主循環
            printf("\n系統即將退出...\n");
        } else if (choice == 'n' || choice == 'N') {
            printf("\n返回主選單...\n");
            break; // 返回主選單
        } else {
            printf("\n無效輸入，請重新輸入。\n");
        }
    } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');
}

/*這次的程式作業對我來說蠻困難的,很多地方都是查了很多資料看了很多範例才重新修改成可以編譯過的
例如一個程式中有兩個主函式,還有不同函式要怎麼宣告變數,以及中間讀取學生資料那裡也是改了好久,
一開始一直讀不到！這次交作業也有記得打完一部分先commit一次,這樣自己也會比較方便查看*/ 

