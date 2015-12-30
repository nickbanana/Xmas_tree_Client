#include "io430.h"
unsigned char Buf[8];
unsigned int LED2[11];

void parsing_LED2(void);
void light_up_LED2(void);
void clear_LED2(void);

void clear_LED2()
{
  int a;
  for(a=0;a<11;a++)
  {
    LED2[a]=0;
  }
}

void parsing_LED2(void)
{
  if((Buf[2]&BIT4)!=0)
    {LED2[0]=1;}
    if((Buf[2]&BIT4)==0)
    {LED2[0]=0;}
    if((Buf[2]&BIT3)!=0)
    {LED2[1]=1;}
    if((Buf[2]&BIT3)==0)
    {LED2[1]=0;}
    if((Buf[2]&BIT2)!=0)
    {LED2[2]=1;}
    if((Buf[2]&BIT2)==0)
    {LED2[2]=0;}
    if((Buf[2]&BIT1)!=0)
    {LED2[3]=1;}
    if((Buf[2]&BIT1)==0)
    {LED2[3]=0;}
    if((Buf[2]&BIT0)!=0)
    {LED2[4]=1;}
    if((Buf[2]&BIT0)==0)
    {LED2[4]=0;}
  //}
  //if(count==3)
  //{
    if((Buf[3]&BIT7)!=0)
    {  LED2[5]=1;}
    if((Buf[3]&BIT7)==0)
    {  LED2[5]=0;}
    if((Buf[3]&BIT6)!=0)
    {  LED2[6]=1;}
    if((Buf[3]&BIT6)==0)
    {  LED2[6]=0;}
    if((Buf[3]&BIT5)!=0)
    {  LED2[7]=1;}
    if((Buf[3]&BIT5)==0)
    {  LED2[7]=0;}
    if((Buf[3]&BIT4)!=0)
    {  LED2[8]=1;}
    if((Buf[3]&BIT4)==0)
    {  LED2[8]=0;}
    if((Buf[3]&BIT3)!=0)
    {  LED2[9]=1;}
    if((Buf[3]&BIT3)==0)
    {  LED2[9]=0;}
    if((Buf[3]&BIT2)!=0)
    {  LED2[10]=1;}
    if((Buf[3]&BIT2)==0)
    {  LED2[10]=0;}
}
void light_up_LED2(void)
{
  if(LED2[0]==1)
  {  P1OUT |=BIT2;}
  if(LED2[0]==0)
  {  P1OUT &= ~BIT2;}
  if(LED2[1]==1)
  {  P1OUT |=BIT3;}
  if(LED2[1]==0)
  {  P1OUT &= ~BIT3;}
  if(LED2[2]==1)
  {  P1OUT |=BIT5;}
  if(LED2[2]==0)
  {  P1OUT &= ~BIT5;}  
  if(LED2[3]==1)
  {  P2OUT |=BIT0;}
  if(LED2[3]==0)
  {  P2OUT &= ~BIT0;}
  if(LED2[4]==1)
  {  P2OUT |=BIT2;}
  if(LED2[4]==0)
  {  P2OUT &= ~BIT2;}
  if(LED2[5]==1)
  {  P2OUT |=BIT3;}
  if(LED2[5]==0)
  {  P2OUT &= ~BIT3;}
  if(LED2[6]==1)
  {  P2OUT |=BIT4;}
  if(LED2[6]==0)
  {  P2OUT &= ~BIT4;}
  if(LED2[7]==1)
  {  P2OUT |=BIT5;}
  if(LED2[7]==0)
  {  P2OUT &= ~BIT5;}
  if(LED2[8]==1)
  {  P2OUT |=BIT6;}
  if(LED2[8]==0)
  {  P2OUT &= ~BIT6;}
  if(LED2[9]==1)
  {  P8OUT |=BIT1;}
  if(LED2[9]==0)
  {  P8OUT &= ~BIT1;}
  if(LED2[10]==1)
  {  P8OUT |=BIT2;}
  if(LED2[10]==0)
  {  P8OUT &= ~BIT2;}  
}