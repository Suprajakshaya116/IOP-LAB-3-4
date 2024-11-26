#include<stdio.h>
//104) AN ENUMERATION WITH COLOR NAMES CAN BE USED IN A SWITCH STATEMENT TO DISPLAY THE HEXADECIMAL COLOR CODE.
 
 enum colours{ red,green,blue,black,white};

 char* fun(fav_colour){
     
        switch(fav_colour)
        {
        case red:
            return "#FF0000";
        case green:
            return "#00FF00";
        case blue:
            return "#0000FF";
        case black:
            return "#000000";
        case white:
            return "#FFFFFF";
        default:
            return "Unknown color";
        }
     }
int main()
{
      enum colours my=blue;
      printf("the hexadecimal value of blue is %s",fun(my));
     
    return 0;
}