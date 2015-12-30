#include "io430.h"
//#include "LED1.h"
//#include "LED2.h"
//#include "BranchR.h"
#include "BranchG.h"
//#include "BranchB.h"
//#define LEDONE
//#define LEDTWO
//#define Branch_Red
#define Branch_Gre
//#define Branch_Blu



  int count =0;
  extern unsigned char Buf[8];
#ifdef LEDONE
  extern unsigned int LED1[11];
#endif
#ifdef LEDTWO
  extern unsigned int LED2[11];
#endif
#ifdef Branch_Red
  extern unsigned int Branch_R[11];
#endif
#ifdef Branch_Gre
  extern unsigned int Branch_G[11];
#endif
#ifdef Branch_Blu
  extern unsigned int Branch_B[11];
#endif  
  void port_config(void);
  void clear_buf(void);
  void passwd(void);
void main(void)
{
  
  WDTCTL = WDTPW + WDTHOLD;                 // Stop WDT
  P3SEL |= BIT4;                         // P4.4,5 = USCI_A1 TXD/RXD
  UCA0CTL1 |= UCSWRST;                      // **Put state machine in reset**
  UCA0CTL1 |= UCSSEL_2;                    // CLK = SMCLK
  //P1DIR |= BIT0;
  //P1OUT &= ~BIT0;
  port_config();
  clear_buf();
  count=0;
  //P4DIR |= BIT7;
  //P4OUT &= ~BIT7;

//===========set the baud-rate register====
  UCA0BR0 = 109;
  UCA0BR1 = 0;
  UCA0MCTL = 4;
//=========================================  
  UCA0CTL1 &= ~UCSWRST;                     // **Initialize USCI state machine**
  UCA0IE |= UCRXIE;                         // Enable USCI_A1 RX interrupt
  
  __bis_SR_register(GIE);       // Enter LPM3, interrupts enabled       
  //__no_operation();
  while(1)
  {
  };
// For debugger
}
// Echo back RXed character, confirm TX buffer is ready first
#pragma vector=USCI_A0_VECTOR
__interrupt void USCI_A0_ISR(void)
{
  unsigned char start=0x1e;
  switch(__even_in_range(UCA0IV,4))
  {
  case 0:break;                             // Vector 0 - no interrupt
  case 2:                                   // Vector 2 - RXIFG  
      
      UCA0IFG &= ~UCRXIFG;
        Buf[count]=UCA0RXBUF;
        if(count==8)
        {
          count=0;
        }
        if(Buf[0]==start&&count<8)
        {          
          count++;
        }
        if(Buf[0]==start&&count==8)
        {
          count=0;
          #ifdef LEDONE
          parsing_LED1();
          light_up_LED1();
          clear_LED1();
          #endif
          #ifdef LEDTWO
          parsing_LED2();
          light_up_LED2();
          clear_LED2();
          #endif
          #ifdef Branch_Red
          parsing_Branch_R();
          light_up_Branch_R();
          clear_Branch_R();
          #endif
          #ifdef Branch_Gre
          parsing_Branch_G();
          light_up_Branch_G();
          clear_Branch_G();
          #endif
          #ifdef Branch_Blu
          parsing_Branch_B();
          light_up_Branch_B();
          clear_Branch_B();
          #endif
          clear_buf();
        }
        

     break;	
  case 4:break;                             // Vector 4 - TXIFG
  default: break;  
  }
}

void port_config(void)
{
  P8DIR|= BIT1 + BIT2;
  P1DIR|= BIT2 + BIT3 + BIT5;
  P2DIR|= BIT0 + BIT2 + BIT3 + BIT4 + BIT5 + BIT6;
  P1OUT&= ~(BIT2 + BIT3 + BIT5);
  P2OUT&= ~(BIT0 + BIT2 + BIT3 + BIT4 + BIT5 + BIT6);
  P8OUT&= ~(BIT1 + BIT2);
  
}

void clear_buf(void)
{
  count=0;
  int a=0;
  for(a=0;a<8;a++)
  {
    Buf[a]=0x00;
  }
  return;
}


