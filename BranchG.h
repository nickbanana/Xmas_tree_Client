#include "io430.h"

unsigned char Buf[8];
unsigned int Branch_G[11];

void light_up_Branch_G(void);
void parsing_Branch_G(void);
void clear_Branch_G(void);

void clear_Branch_G()
{
  int a;
  for(a=0;a<11;a++)
  {
      Branch_G[a]=0;
  }
}

void parsing_Branch_G(void)
{
    if((Buf[5]&BIT6)!=0)
    {  Branch_G[0]=1;}
    if((Buf[5]&BIT6)==0)
    {  Branch_G[0]=0;}
    if((Buf[5]&BIT5)!=0)
    {  Branch_G[1]=1;}
    if((Buf[5]&BIT5)==0)
    {  Branch_G[1]=0;}
    if((Buf[5]&BIT4)!=0)
    {  Branch_G[2]=1;}
    if((Buf[5]&BIT4)==0)
    {  Branch_G[2]=0;}
    if((Buf[5]&BIT3)!=0)
    {  Branch_G[3]=1;}
    if((Buf[5]&BIT3)==0)
    {  Branch_G[3]=0;}
    if((Buf[5]&BIT2)!=0)
    {  Branch_G[4]=1;}
    if((Buf[5]&BIT2)==0)
    {  Branch_G[4]=0;}
    if((Buf[5]&BIT1)!=0)
    {  Branch_G[5]=1;}
    if((Buf[5]&BIT1)==0)
    {  Branch_G[5]=0;}
    if((Buf[5]&BIT0)!=0)
    {  Branch_G[6]=1;}
    if((Buf[5]&BIT0)==0)
    {  Branch_G[6]=0;}
    if((Buf[6]&BIT7)!=0)
    {  Branch_G[7]=1;}
    if((Buf[6]&BIT7)==0)
    {  Branch_G[7]=0;}
    if((Buf[6]&BIT6)!=0)
    {  Branch_G[8]=1;}
    if((Buf[6]&BIT6)==0)
    {  Branch_G[8]=0;}
    if((Buf[6]&BIT5)!=0)
    {  Branch_G[9]=1;}
    if((Buf[6]&BIT5)==0)
    {  Branch_G[9]=0;}
    if((Buf[6]&BIT4)!=0)
    {  Branch_G[10]=1;}
    if((Buf[6]&BIT4)==0)
    {  Branch_G[10]=0;}
}



void light_up_Branch_G(void)
{
  if(Branch_G[0]==1)
  {  P1OUT |=BIT2;}
  if(Branch_G[0]==0)
  {  P1OUT &= ~BIT2;}
  if(Branch_G[1]==1)
  {  P1OUT |=BIT3;}
  if(Branch_G[1]==0)
  {  P1OUT &= ~BIT3;}
  if(Branch_G[2]==1)
  {  P1OUT |=BIT5;}
  if(Branch_G[2]==0)
  {  P1OUT &= ~BIT5;}  
  if(Branch_G[3]==1)
  {  P2OUT |=BIT0;}
  if(Branch_G[3]==0)
  {  P2OUT &= ~BIT0;}
  if(Branch_G[4]==1)
  {  P2OUT |=BIT2;}
  if(Branch_G[4]==0)
  {  P2OUT &= ~BIT2;}
  if(Branch_G[5]==1)
  {  P2OUT |=BIT3;}
  if(Branch_G[5]==0)
  {  P2OUT &= ~BIT3;}
  if(Branch_G[6]==1)
  {  P2OUT |=BIT4;}
  if(Branch_G[6]==0)
  {  P2OUT &= ~BIT4;}
  if(Branch_G[7]==1)
  {  P2OUT |=BIT5;}
  if(Branch_G[7]==0)
  {  P2OUT &= ~BIT5;}
  if(Branch_G[8]==1)
  {  P2OUT |=BIT6;}
  if(Branch_G[8]==0)
  {  P2OUT &= ~BIT6;}
  if(Branch_G[9]==1)
  {  P8OUT |=BIT1;}
  if(Branch_G[9]==0)
  {  P8OUT &= ~BIT1;}
  if(Branch_G[10]==1)
  {  P8OUT |=BIT2;}
  if(Branch_G[10]==0)
  {  P8OUT &= ~BIT2;}  
}
