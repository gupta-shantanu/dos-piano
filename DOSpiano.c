/*
*	This is a fun C program that is based on
*       sound function of DOS to play piano!
*       Required OS: DOS
*	Use emulater to run this in windows system
* 	Author: Shantanu gupta
*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
int loc(char,char*);
void main()
{
char t;
int y=0;
/* defining frequencies of piano */
float f[]={261.63,293.66,329.63,349.23,392.0,440.0,493.88,523.25,277.18,311.13,369.99,415.13,466.16,523.25,587.33,659.26,698.46,783.99,880.0,987.77,1046.5,554.37,622.25,739.99,830.61,932.33,0.0};
/* mapping frequencies to keyboard keys! */
char keyboard[]={'z','x','c','v','b','n','m',',','s','d','g','h','j','w','e','r','t','y','u','i','o','2','3','5','6','7','\0'};
nosound();
printf("----System Sound Piano----\nUse keys z to , and s to k for lower notes\n w to o and 2 to 8 for higher notes.\n Press '+' sign (i.e shift + =) to exit.");
while(1){
delay(100);
if(kbhit()){
t=getch();
sound(f[loc(t,keyboard)]);
y=0;
if(t=='+')
{
nosound();
break;
}
}
y++;
if(y==3)
{
nosound();
y=0;
}
}
}
int loc(char a,char* f)
{
int i;
for(i=0;f[i]!='\0';i++)
{
if(a==f[i])
return i;
}
return 97;
}
