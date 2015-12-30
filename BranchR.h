#include "io430.h"

unsigned char Buf[8];
unsigned int Branch_R[11];
void parsing_Branch_R(void);
void light_up_Branch_R(void);
void clear_Branch_R(void);
void clear_Branch_R()
{
  int a;
  for(a=0;a<11;a++)
  {
    Branch_R[a]=0;
  }
}
void parsing_Branch_R()
{
  if((Buf[3]&BIT1)!=0)
    {  Branch_R[0]=1;}
    if((Buf[3]&BIT1)==0)
    {  Branch_R[0]=0;}
    if((Buf[3]&BIT0)!=0)
    {  Branch_R[1]=1;}
    if((Buf[3]&BIT0)==0)
    {  Branch_R[1]=0;}
    if((Buf[4]&BIT7)!=0)
    {  Branch_R[2]=1;}
    if((Buf[4]&BIT7)==0)
    {  Branch_R[2]=0;}
    if((Buf[4]&BIT6)!=0)
    {  Branch_R[3]=1;}
    if((Buf[4]&BIT6)==0)
    {  Branch_R[3]=0;}
    if((Buf[4]&BIT5)!=0)
    {  Branch_R[4]=1;}
    if((Buf[4]&BIT5)==0)
    {  Branch_R[4]=0;}
    if((Buf[4]&BIT4)!=0)
    {  Branch_R[5]=1;}
    if((Buf[4]&BIT4)==0)
    {  Branch_R[5]=0;}
    if((Buf[4]&BIT3)!=0)
    {  Branch_R[6]=1;}
    if((Buf[4]&BIT3)==0)
    {  Branch_R[6]=0;}
    if((Buf[4]&BIT2)!=0)
    {  Branch_R[7]=1;}
    if((Buf[4]&BIT2)==0)
    {  Branch_R[7]=0;}
    if((Buf[4]&BIT1)!=0)
    {  Branch_R[8]=1;}
    if((Buf[4]&BIT1)==0)
    {  Branch_R[8]=0;}
    if((Buf[4]&BIT0)!=0)
    {  Branch_R[9]=1;}
    if((Buf[4]&BIT0)==0)
    {  Branch_R[9]=0;}
    if((Buf[5]&BIT7)!=0)
    {  Branch_R[10]=1;}
    if((Buf[5]&BIT7)==0)
    {  Branch_R[10]=0;}
}

void light_up_Branch_R(void)
{
  if(Branch_R[0]==1)
  {  P1OUT |=BIT2;}
  if(Branch_R[0]==0)
  {  P1OUT &= ~BIT2;}
  if(Branch_R[1]==1)
  {  P1OUT |=BIT3;}
  if(Branch_R[1]==0)
  {  P1OUT &= ~BIT3;}
  if(Branch_R[2]==1)
  {  P1OUT |=BIT5;}
  if(Branch_R[2]==0)
  {  P1OUT &= ~BIT5;}  
  if(Branch_R[3]==1)
  {  P2OUT |=BIT0;}
  if(Branch_R[3]==0)
  {  P2OUT &= ~BIT0;}
  if(Branch_R[4]==1)
  {  P2OUT |=BIT2;}
  if(Branch_R[4]==0)
  {  P2OUT &= ~BIT2;}
  if(Branch_R[5]==1)
  {  P2OUT |=BIT3;}
  if(Branch_R[5]==0)
  {  P2OUT &= ~BIT3;}
  if(Branch_R[6]==1)
  {  P2OUT |=BIT4;}
  if(Branch_R[6]==0)
  {  P2OUT &= ~BIT4;}
  if(Branch_R[7]==1)
  {  P2OUT |=BIT5;}
  if(Branch_R[7]==0)
  {  P2OUT &= ~BIT5;}
  if(Branch_R[8]==1)
  {  P2OUT |=BIT6;}
  if(Branch_R[8]==0)
  {  P2OUT &= ~BIT6;}
  if(Branch_R[9]==1)
  {  P8OUT |=BIT1;}
  if(Branch_R[9]==0)
  {  P8OUT &= ~BIT1;}
  if(Branch_R[10]==1)
  {  P8OUT |=BIT2;}
  if(Branch_R[10]==0)
  {  P8OUT &= ~BIT2;}  
}
