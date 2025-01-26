#include <stdio.h>


void menu_action_1();
void menu_action_2();
int menu_exit();

void menu_main()
{
  int exit_condition = 1;
  int menu_action_selection = 0;
  while(exit_condition)
  {
    printf("Input action selection\n");
    scanf("%d",&menu_action_selection);
    switch (menu_action_selection)
    {
      case 1:
      {
        menu_action_1();
        break;
      }
      case 2:
      {
        menu_action_2();
        break;
      }
      default:
      {
        exit_condition = menu_exit();
        break;
      }
    }
  }
}
