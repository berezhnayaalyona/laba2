#include stdafx.h
#include iostream
#include stdio.h  printf
#include conio.h  getch
using namespace std;
void BinOut(unsigned char Buf, int len) {
int i, j;
unsigned char byte;
for (i = len - 1; i = 0; i--)
for (j = 1, byte = Buf[i]; j = 8; byte = 1, j++)
_putch(byte & 0x80  '1'  '0');
printf(n);
}
void BinIn(unsigned char Buf, int len) {
int i, j;
char ch;
for (i = len - 1; i = 0; i--)
for (j = 1, Buf[i] = 0; j = 8; Buf[i] = (Buf[i]  1) + (ch - '0'), j++) {
while ((ch = _getch()) != '0' && ch != '1');
_putch(ch);
}
printf(n);
}
int main(int argc, char argv[]) {
 float x;
coutEnter number of a float type ;
cinx;
coutThis is its binary representationendl;
BinOut((unsigned char)&x,sizeof(x));
coutEnter binary representation of a float numberendl;
BinIn((unsigned char)&x,sizeof(x));
coutThis is its value xendl;
 unsigned char n;
cout  Enter number of a unsigned char type ;
cin  n;
cout  This is its binary representation  endl;
BinOut((unsigned char)&n, sizeof(n));
cout  Enter binary representation of unsigned char number  endl;
BinIn((unsigned char)&n, sizeof(n));
cout  This is its value   n  endl; 
typedef  float arr[3];
arr A;
for (int i = 0; i  3; i++) {
cout  Enter number of a float type (A[  i + 1  ]) ;
cin  A[i];
}
BinOut((unsigned char)&A, sizeof(A));
cout  Enter binary representation of a float number  endl;
BinIn((unsigned char)&A, sizeof(A));
cout  This is its value ;
for (int i = 0; i  3; i++) {	
cout  A[i]   ;
}	
_getch();
return 0;
}