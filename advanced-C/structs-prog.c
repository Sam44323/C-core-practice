#include <stdio.h>

// declaring the blueprint for struct rectange
// typedef allows us to use this strcut as any other data type
typedef struct
{
  int length;
  int width;
} rectangle;

typedef struct
{
  int x;
  int y;
} position;

typedef struct
{
  char owner[30];
  rectangle Rectangle;
  position Position;

} buildingplan;

int main()
{
  buildingplan someHouse = {"John Mayer", {5, 10}, {34, 45}};

  printf("House of size(%d, %d), position(%d, %d) is owned by %s \n",
         someHouse.Rectangle.length,
         someHouse.Rectangle.width,
         someHouse.Position.x,
         someHouse.Position.y,
         someHouse.owner);

  // example of creating an array of structs
  position path[] = {{4, 17}, {5, 13}, {14, 41}};
  for (int i = 0; i < 3; i++)
  {
    printf("Postion is (%d, %d) \n", path[i].x, path[i].y);
  };

  // declaring a pointer to a struct
  buildingplan *buildPointer = &someHouse;
  printf("Enter the first name of the owner: \n");
  scanf("%s", buildPointer->owner);
  printf("Printing the name thorough a struct:  %s \n", buildPointer->owner);

  return 0;
}