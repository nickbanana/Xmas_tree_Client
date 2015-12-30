#include "io430.h"

unsigned char Buf[8];
unsigned int Branch_B[11];

void light_up_Branch_B(void);
void parsing_Branch_B(void);
void clear_Branch_B(void);

void clear_Branch_B()
{
  int a;
  for(a=0;a<10;a++)
  {
    Branch_B[a]=0;
  }
}

void parsing_Branch_B(void)
{
    if((Buf[6]&BIT3)!=0)
    {  Branch_B[0]=1;}
    if((Buf[6]&BIT3)==0)
    {  Branch_B[0]=0;}
    if((Buf[6]&BIT2)!=0)
    {  Branch_B[1]=1;}
    if((Buf[6]&BIT2)==0)
    {  Branch_B[1]=0;}
    if((Buf[6]&BIT1)!=0)
    {  Branch_B[2]=1;}
    if((Buf[6]&BIT1)==0)
    {  Branch_B[2]=0;}
    if((Buf[6]&BIT0)!=0)
    {  Branch_B[3]=1;}
    if((Buf[6]&BIT0)==0)
    {  Branch_B[3]=0;}
    if((Buf[7]&BIT7)!=0)
    {  Branch_B[4]=1;}
    if((Buf[7]&BIT7)==0)
    {  Branch_B[4]=0;}
    if((Buf[7]&BIT6)!=0)
    {  Branch_B[5]=1;}
    if((Buf[7]&BIT6)==0)
    {  Branch_B[5]=0;}
    if((Buf[7]&BIT5)!=0)
    {  Branch_B[6]=1;}
    if((Buf[7]&BIT5)==0)
    {  Branch_B[6]=0;}
    if((Buf[7]&BIT4)!=0)
    {  Branch_B[7]=1;}
    if((Buf[7]&BIT4)==0)
    {  Branch_B[7]=0;}
    if((Buf[7]&BIT3)!=0)
    {  Branch_B[8]=1;}
    if((Buf[7]&BIT3)==0)
    {  Branch_B[8]=0;}
    if((Buf[7]&BIT2)!=0)
    {  Branch_B[9]=1;}
    if((Buf[7]&BIT2)==0)
    {  Branch_B[9]=0;}
    if((Buf[7]&BIT1)!=0)
    {  Branch_B[10]=1;}
    if((Buf[7]&BIT1)==0)
    {  Branch_B[10]=0;}
}


void light_up_Branch_B(void)
{
  if(Branch_B[0]==1)
  {  P1OUT |=BIT2;}
  if(Branch_B[0]==0)
  {  P1OUT &= ~BIT2;}
  if(Branch_B[1]==1)
  {  P1OUT |=BIT3;}
  if(Branch_B[1]==0)
  {  P1OUT &= ~BIT3;}
  if(Branch_B[2]==1)
  {  P1OUT |=BIT5;}
  if(Branch_B[2]==0)
  {  P1OUT &= ~BIT5;}  
  if(Branch_B[3]==1)
  {  P2OUT |=BIT0;}
  if(Branch_B[3]==0)
  {  P2OUT &= ~BIT0;}
  if(Branch_B[4]==1)
  {  P2OUT |=BIT2;}
  if(Branch_B[4]==0)
  {  P2OUT &= ~BIT2;}
  if(Branch_B[5]==1)
  {  P2OUT |=BIT3;}
  if(Branch_B[5]==0)
  {  P2OUT &= ~BIT3;}
  if(Branch_B[6]==1)
  {  P2OUT |=BIT4;}
  if(Branch_B[6]==0)
  {  P2OUT &= ~BIT4;}
  if(Branch_B[7]==1)
  {  P2OUT |=BIT5;}
  if(Branch_B[7]==0)
  {  P2OUT &= ~BIT5;}
  if(Branch_B[8]==1)
  {  P2OUT |=BIT6;}
  if(Branch_B[8]==0)
  {  P2OUT &= ~BIT6;}
  if(Branch_B[9]==1)
  {  P8OUT |=BIT1;}
  if(Branch_B[9]==0)
  {  P8OUT &= ~BIT1;}
  if(Branch_B[10]==1)
  {  P8OUT |=BIT2;}
  if(Branch_B[10]==0)
  {  P8OUT &= ~BIT2;}  
}
