#include <stdio.h>
int main()
{
  int SelectionArray[] = {5,2,4,1,3}; //Manually change input
  int n = sizeof(SelectionArray) / sizeof(SelectionArray[0]);
  int temp;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if(SelectionArray[i] > SelectionArray[j])
      {
        temp = SelectionArray[i];
        SelectionArray[i] = SelectionArray[j];
        SelectionArray[j] = temp;
      }
    }
  }
  for(int i = 0; i < n; i++)
  {
    printf(" %d ", SelectionArray[i]);
  }
}
