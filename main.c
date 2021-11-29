#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#define p printf
#define g gotoxy
/*
 * The g is define as gotoxy, and p is define as printf this is for the shortage of a certain program
 * This is also to specify the functions in a letter
 */
COORD co = {0,0};
void gotoxy(int x, int y)
{
 co.X=x;
 co.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), co);
}

int main()
{
system("COLOR 70");
p("                                                                                                \n");
p("            The Automated Teller Machine                                                        \n");
p(" ____________________________________________________________                                   \n");
p("                                       .         .           |                                  \n");
p("          .8.    8888888 8888888888   ,8.       ,8.          |[$]Developer: GhostPoltergeist    \n");
p("         .888.         8 8888        ,888.     ,888.         |[$]GitHub: GhostPoltergeist       \n");
p("        :88888.        8 8888       .`8888.   .`8888.        |[$]BugCrowd: GhostPoltergeist     \n");
p("       . `88888.       8 8888      ,8.`8888. ,8.`8888.       |                                  \n");
p("      .8. `88888.      8 8888     ,8'8.`8888,8^8.`8888.      |                                  \n");
p("    .8' `8. `88888.    8 8888   ,8'   `8.`88'   `8.`8888.    |                                  \n");
p("   .8'   `8. `88888.   8 8888  ,8'     `8.`'     `8.`8888.   |\n");
p("  .888888888. `88888.  8 8888 ,8'       `8        `8.`8888.  |\n");
p(" .8'       `8. `88888. 8 8888,8'         `         `8.`8888. |\n");
p(" ____________________________________________________________|\n");
p(" |\n");
p(" |\n");
p(" |");

    char ques;
    char salary;
    char name[20];
    char email[20];
    char pin_number;
    int q;
    p("\n[$]Name: ");
    scanf("%s", &name);
    p(" |");
    p("\n[$]Pin-Number(NumbersOnly): ");
    scanf("%s", &pin_number);
    p(" |");
    p("\n[$]Enter Your Value [a:500, b:1000, c:5000, d:10,000]: ");
    scanf("%s", &salary);

     //CASE SALARY 1

    switch(salary){
     case 'a':
     p(" |");
     p("\n |--[$]You entered 500, your bill will be processed, give us a second\n");
     if(salary==500)
       p(" |");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Including Data's\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Counting & Preparing\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Releasing Exact Amount of Cash\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Generating Receipt\n");
       p("\n");
       p("[$]           _____PROCESSING_____       \n");
       sleep(5);
        p("         ____RECEIPT IS GENERATED____       \n");
        p("       ____  _____________________  ____    \n");
        p("      |      UNDER [$] THE [$] LAW      |   \n");
        p("      |______REPUBLIC ACT No.11449______|   \n");
        p("             NAME: %s                       \n", &name);
        p("             PIN-NUMBER: %s                 \n", &pin_number);
        p("      |_________________________________|   \n");
        p("             DATE : %s                      \n", __DATE__);
        p("             TIME : %s                      \n", __TIME__);
        p("      |_________________________________|   \n");
        p("         THE RECEIPT HAS BEEN RELEASED      \n");
        p("       CHECK THE NEXT PROCESS TO PROCEED    \n");
        p("           EMAIL ADDRESS IS REQUIRED        \n");
        p("      |_________________________________|   \n");
        p("       _________________________________     \n");
        p("      |      ::::::::   :::::::::       |      \n");
        p("      |     :+:    :+:  :+:    :+:      |      \n");
        p("      |     +:+    +:+  +:+    +:+      |      \n");
        p("      |     #+     +:+  +#++:++#:       |      \n");
        p("      |     +#+    #+#  ++#+   +#+      |      \n");
        p("      |     #+#    +#+  #+#     #+#     |      \n");
        p("      |       ######### ###      ###    |      \n");
        p("      | G H 0 S T P O L T E R G E I S T |      \n");
        p("      |    T H A N K   Y O U   F O R    |      \n");
        p("      |      T R U S T I N G   U S      |      \n");
        p("      |_________________________________|      \n");

       p("\n[ATM SYSTEM PROGRAM, PLEASE WAIT]\n");sleep(15);
       p("\n |~[ATM]#:Your Email-Address: ");
       scanf("%s", &email);
       p(" |~[ATM]#:The ATM(ISP) will send you a complete transaction details to your Email \n");
       p(" |");sleep(5);
       p("\n |~[ATM]#:You can now take your selected bill\n");
       p(" |");sleep(5);
       p("\n |--[$]Did the transaction complete[1:Yes]-[2:No]: ");
       scanf("%d", &q);
       p(" |");
      if (q==1){
        p("\n |~[ATM]#:THANK YOU!\n");
      }
      else if(q==2){
        p("\n |~[ATM]#:PLEASE REPEAT THE PROGRAM AND CHOOSE YOUR BILL\n");
      }
      p(" [$]SELECT ANOTHER TRANSACTION?[Y:N]: ");
      scanf("%s", &ques);
      system("cls");
      if (ques == 'Y'){
          return main();
      }
      else if (ques == 'N'){
          return EXIT_SUCCESS;
      }
      break;

      //CASE SALARY 2

     case 'b':
     p(" |");
     p("\n |--[$]You entered 1000, your bill will be processed, give us a second\n");
      if(salary==1000)
       p(" |");
       p(" |");sleep(5);
       p("\n |~[ATM]#:Including Data's\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Counting & Preparing\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Releasing Exact Amount of Cash\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Generating Receipt\n");
       p("\n");
       p("[$]           _____PROCESSING_____       \n");
       sleep(5);
        p("         ____RECEIPT IS GENERATED____       \n");
        p("       ____  _____________________  ____    \n");
        p("      |      UNDER [$] THE [$] LAW      |   \n");
        p("      |______REPUBLIC ACT No.11449______|   \n");
        p("             NAME: %s                       \n", &name);
        p("             PIN-NUMBER: %d                 \n", &pin_number);
        p("      |_________________________________|   \n");
        p("             DATE : %s                      \n", __DATE__);
        p("             TIME : %s                      \n", __TIME__);
        p("      |_________________________________|   \n");
        p("         THE RECEIPT HAS BEEN RELEASED      \n");
        p("       CHECK THE NEXT PROCESS TO PROCEED    \n");
        p("           EMAIL ADDRESS IS REQUIRED        \n");
        p("      |_________________________________|   \n");
        p("       _________________________________     \n");
        p("      |      ::::::::   :::::::::       |      \n");
        p("      |     :+:    :+:  :+:    :+:      |      \n");
        p("      |     +:+    +:+  +:+    +:+      |      \n");
        p("      |     #+     +:+  +#++:++#:       |      \n");
        p("      |     +#+    #+#  ++#+   +#+      |      \n");
        p("      |     #+#    +#+  #+#     #+#     |      \n");
        p("      |       ######### ###      ###    |      \n");
        p("      | G H 0 S T P O L T E R G E I S T |      \n");
        p("      |    T H A N K   Y O U   F O R    |      \n");
        p("      |      T R U S T I N G   U S      |      \n");
        p("      |_________________________________|      \n");

       p("\n[ATM SYSTEM PROGRAM, PLEASE WAIT]\n");sleep(15);
       p("\n |~[ATM]#:Your Email-Address: ");
       scanf("%s", &email);
       p(" |~[ATM]#:The ATM(ISP) will send you a complete transaction details to your Email \n");
       p(" |");sleep(4);
       p("\n |~[ATM]#:You can now take your selected bill\n");
       p(" |");sleep(5);
       p("\n |--[$]Did the transaction complete[1:Yes]-[2:No]: ");
       scanf("%d", &q);
       p(" |");
      if (q==1){
        p("\n |~[ATM]#:THANK YOU!\n");
      }
      else if(q==2){
        p("\n |~[ATM]#:PLEASE REPEAT THE PROGRAM AND CHOOSE YOUR BILL\n");
      }
      p(" [$]SELECT ANOTHER TRANSACTION?[Y:N]: ");
      scanf("%s", &ques);
      system("cls");
      if (ques == 'Y'){
          return main();
      }
      else if (ques == 'N'){
          return EXIT_SUCCESS;
      }
      break;

      //CASE SALARY 3

     case 'c':
     p(" |");
     p("\n |--[$]You entered 5000, your bill will be processed, give us a second\n");
      if(salary==5000)
       p(" |");
       p(" |");sleep(5);
       p("\n |~[ATM]#:Including Data's\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Counting & Preparing\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Releasing Exact Amount of Cash\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Generating Receipt\n");
       p("\n");
       p("[$]           _____PROCESSING_____       \n");
       sleep(5);
        p("         ____RECEIPT IS GENERATED____       \n");
        p("       ____  _____________________  ____    \n");
        p("      |      UNDER [$] THE [$] LAW      |   \n");
        p("      |______REPUBLIC ACT No.11449______|   \n");
        p("             NAME: %s                       \n", &name);
        p("             PIN-NUMBER: %d                 \n", &pin_number);
        p("      |_________________________________|   \n");
        p("             DATE : %s                      \n", __DATE__);
        p("             TIME : %s                      \n", __TIME__);
        p("      |_________________________________|   \n");
        p("         THE RECEIPT HAS BEEN RELEASED      \n");
        p("       CHECK THE NEXT PROCESS TO PROCEED    \n");
        p("           EMAIL ADDRESS IS REQUIRED        \n");
        p("      |_________________________________|   \n");
        p("       _________________________________     \n");
        p("      |      ::::::::   :::::::::       |      \n");
        p("      |     :+:    :+:  :+:    :+:      |      \n");
        p("      |     +:+    +:+  +:+    +:+      |      \n");
        p("      |     #+     +:+  +#++:++#:       |      \n");
        p("      |     +#+    #+#  ++#+   +#+      |      \n");
        p("      |     #+#    +#+  #+#     #+#     |      \n");
        p("      |       ######### ###      ###    |      \n");
        p("      | G H 0 S T P O L T E R G E I S T |      \n");
        p("      |    T H A N K   Y O U   F O R    |      \n");
        p("      |      T R U S T I N G   U S      |      \n");
        p("      |_________________________________|      \n");

       p("\n[ATM SYSTEM PROGRAM, PLEASE WAIT]\n");sleep(15);
       p("\n |~[ATM]#:Your Email-Address: ");
       scanf("%s", &email);
       p(" |~[ATM]#:The ATM(ISP) will send you a complete transaction details to your Email \n");
       p(" |");sleep(4);
       p("\n |~[ATM]#:You can now take your selected bill\n");
       p(" |");sleep(5);
       p("\n |--[$]Did the transaction complete[1:Yes]-[2:No]: ");
       scanf("%d", &q);
       p(" |");
      if (q==1){
        p("\n |~[ATM]#:THANK YOU!\n");
      }
      else if(q==2){
        p("\n |~[ATM]#:PLEASE REPEAT THE PROGRAM AND CHOOSE YOUR BILL\n");
      }
      p(" [$]SELECT ANOTHER TRANSACTION?[Y:N]: ");
      scanf("%s", &ques);
      system("cls");
      if (ques == 'Y'){
          return main();
      }
      else if (ques == 'N'){
          return EXIT_SUCCESS;
      }
      break;

       //CASE SALARY 4

     case 'd':
     p(" |");
     p("\n |--[$]You entered 10,000 your bill will be processed, give us a second\n");
      if(salary==10000)
       p(" |");
       p(" |");sleep(5);
       p("\n |~[ATM]#:Including Data's\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Counting & Preparing\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Releasing Exact Amount of Cash\n");
       p(" |");sleep(3);
       p("\n |~[ATM]#:Generating Receipt\n");
       p("\n");
       p("[$]           _____PROCESSING_____       \n");
       sleep(5);
        p("         ____RECEIPT IS GENERATED____       \n");
        p("       ____  _____________________  ____    \n");
        p("      |      UNDER [$] THE [$] LAW      |   \n");
        p("      |______REPUBLIC ACT No.11449______|   \n");
        p("             NAME: %s                       \n", &name);
        p("             PIN-NUMBER: %d                 \n", &pin_number);
        p("      |_________________________________|   \n");
        p("             DATE : %s                      \n", __DATE__);
        p("             TIME : %s                      \n", __TIME__);
        p("      |_________________________________|   \n");
        p("         THE RECEIPT HAS BEEN RELEASED      \n");
        p("       CHECK THE NEXT PROCESS TO PROCEED    \n");
        p("           EMAIL ADDRESS IS REQUIRED        \n");
        p("      |_________________________________|   \n");
        p("       _________________________________     \n");
        p("      |      ::::::::   :::::::::       |      \n");
        p("      |     :+:    :+:  :+:    :+:      |      \n");
        p("      |     +:+    +:+  +:+    +:+      |      \n");
        p("      |     #+     +:+  +#++:++#:       |      \n");
        p("      |     +#+    #+#  ++#+   +#+      |      \n");
        p("      |     #+#    +#+  #+#     #+#     |      \n");
        p("      |       ######### ###      ###    |      \n");
        p("      | G H 0 S T P O L T E R G E I S T |      \n");
        p("      |    T H A N K   Y O U   F O R    |      \n");
        p("      |      T R U S T I N G   U S      |      \n");
        p("      |_________________________________|      \n");

       p("\n[ATM SYSTEM PROGRAM, PLEASE WAIT]\n");sleep(15);
       p("\n |~[ATM]#:Your Email-Address: ");
       scanf("%s", &email);
       p(" |~[ATM]#:The ATM(ISP) will send you a complete transaction details to your Email \n");
       p(" |");sleep(4);
       p("\n |~[ATM]#:You can now take your selected bill\n");
       p(" |");sleep(5);
       p("\n |--[$]Did the transaction complete[1:Yes]-[2:No]: ");
       scanf("%d", &q);
       p(" |");
      if (q==1){
        p("\n |~[ATM]#:THANK YOU!\n");
      }
      else if(q==2){
        p("\n |~[ATM]#:PLEASE REPEAT THE PROGRAM AND CHOOSE YOUR BILL\n");
      }
       p(" [$]SELECT ANOTHER TRANSACTION?[Y:N]: ");
      scanf("%s", &ques);
      system("cls");
      if (ques == 'Y'){
          return main();
      }
      else if (ques == 'N'){
          return EXIT_SUCCESS;
      }
      break;

      //CASE SALARY DEFAULT

     default:
     p("\nYour salary cannot be reached\n");
    }
}

