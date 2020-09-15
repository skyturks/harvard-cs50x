#include <stdio.h>
#include <cs50.h>
#include <math.h>
int main(void)
{
    float para;
    
    do
    {
        para=get_float("para miktarı giriniz!\n");
    }
    while(para<0);
    {
      int kurus=round(para*100);
     
      int Gvpara=0;

      int paralar[]={25,10,5,1};
      int boyut=sizeof(paralar)/sizeof(int);

      for(int i=0;i<boyut;i++)
      {
          Gvpara+=kurus / paralar[i];
          kurus%=paralar[i];
      }
        printf("Toplam verilen metal para sayısı:%i\n",Gvpara);
    }
}
