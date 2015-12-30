#include "io430.h"

unsigned char Buf[8];
unsigned int LED1[11];

void light_up_LED1(void);
void parsing_LED1(void);
void clear_LED1(void);

void clear_LED1()
{
  int a;
  for(a=0;a<11;a++)
  {
    LED1[a]=0;
  }
}
void light_up_LED1(void)
{
  if(LED1[0]==1)
  {P1OUT |=BIT2;}
  if(LED1[0]==0)
  {  P1OUT &= ~BIT2;}
  if(LED1[1]==1)
  { P1OUT |=BIT3;}
  if(LED1[1]==0)
  {P1OUT &= ~BIT3;}
  if(LED1[2]==1)
  {P1OUT |=BIT5;}
  if(LED1[2]==0)
  {  P1OUT &= ~BIT5;}  
  if(LED1[3]==1)
  {  P2OUT |=BIT0;}
  if(LED1[3]==0)
  {  P2OUT &= ~BIT0;}
  if(LED1[4]==1)
  {  P2OUT |=BIT2;}
  if(LED1[4]==0)
  {  P2OUT &= ~BIT2;}
  if(LED1[5]==1)
  {  P2OUT |=BIT3;}
  if(LED1[5]==0)
  {  P2OUT &= ~BIT3;}
  if(LED1[6]==1)
  {  P2OUT |=BIT4;}
  if(LED1[6]==0)
  {  P2OUT &= ~BIT4;}
  if(LED1[7]==1)
  {  P2OUT |=BIT5;}
  if(LED1[7]==0)
  {  P2OUT &= ~BIT5;}
  if(LED1[8]==1)
  {  P2OUT |=BIT6;}
  if(LED1[8]==0)
  {  P2OUT &= ~BIT6;}
  if(LED1[9]==1)
  {  P8OUT |=BIT1;}
  if(LED1[9]==0)
  {  P8OUT &= ~BIT1;}
  if(LED1[10]==1)
  {  P8OUT |=BIT2;}
  if(LED1[10]==0)
  {  P8OUT &= ~BIT2;}
}

void parsing_LED1(void)
{
  if((Buf[1]&BIT7)!=0)
    {LED1[0]=1;}
    if((Buf[1]&BIT7)==0)
    {LED1[0]=0;}
    if((Buf[1]&BIT6)!=0)
    {LED1[1]=1;}
    if((Buf[1]&BIT6)==0)
    {LED1[1]=0;}
    if((Buf[1]&BIT5)!=0)
    {LED1[2]=1;}
    if((Buf[1]&BIT5)==0)
    {LED1[2]=0;}
    if((Buf[1]&BIT4)!=0)
    {LED1[3]=1;}
    if((Buf[1]&BIT4)==0)
    {LED1[3]=0;}
    if((Buf[1]&BIT3)!=0)
    {LED1[4]=1;}
    if((Buf[1]&BIT3)==0)
    {LED1[4]=0;}
    if((Buf[1]&BIT2)!=0)
    {LED1[5]=1;}
    if((Buf[1]&BIT2)==0)
    {LED1[5]=0;}
    if((Buf[1]&BIT1)!=0)
    {LED1[6]=1;}
    if((Buf[1]&BIT1)==0)
    {LED1[6]=0;}
    if((Buf[1]&BIT0)!=0)
    {LED1[7]=1;}
    if((Buf[1]&BIT0)==0)
    {LED1[7]=0;}

    if((Buf[2]&BIT7)!=0)
    {LED1[8]=1;}
    if((Buf[2]&BIT7)==0)
    {LED1[8]=0;}
    if((Buf[2]&BIT6)!=0)
    {LED1[9]=1;}
    if((Buf[2]&BIT6)==0)
    {LED1[9]=0;}
    if((Buf[2]&BIT5)!=0)
    {LED1[10]=1;}
    if((Buf[2]&BIT5)==0)
    {LED1[10]=0;}
}