#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*
    ĳ��Ϸ�н�ս������ʵ���˺����㹫ʽ��
    ����ʵ������˺� = ��������˺� * ���������+100��/100
    ����������������������˺�256��Ҫ�����������������ӡ����ʵ������˺�
    double weapons;//����ʵ������˺�
    double maxweapons = 256;//��������˺�
    double playerpower;//�������
    printf("���������������");
    scanf("%lf",&playerpower);
    weapons = maxweapons *(playerpower + 100)/100;
    printf("����ʵ������˺���%.2lf",weapons);
    int num1 = 5 , num2 = 2 ;
    double result1 , result2 , result3 , result4;
    result1 = num1 / num2;
    result2 = num1 % num2;
    result3 = ++num1;
    result4 = --num2;
    printf("num1 / num2 = %lf\n",result1);
    printf("num1 %% num2 = %lf\n",result2);
    printf("++num1 = %lf\n",result3);
    printf("--num1 = %lf\n",result4);
    printf("%d\n",5%3);
    printf("5 > 8��%d\n",5 >  8);
    printf("sizeof(int) = %d\n",sizeof(int));
    printf("sizeof(long) = %d\n",sizeof(1000l));
    printf("sizeof(float) = %d\n",sizeof(34.4f));
    printf("sizeof(double) = %d\n",sizeof(double));
    printf("sizeof(char) = %d\n",sizeof(char));
    int num = 10;
    int result = num++ > 11 && --num < 20;
    printf("result = %d\tnum = %d\n",result,num);
    printf("�ң����뿴ʲô?\n");
    printf("�㣺��֪��\n");
    printf("�ң�������ȵ�ʲô\n");
    printf("�㣺����Ӳ����������\n");
    printf("�ң��ðɣ�\n");
    int num;                //Ӳ�������棬1��ʾ����0��ʾ��������0��1��ΪӲ������
    printf("��ʼ��Ӳ�ң�");
    scanf("%d",&num);
    if(num > 1)
    {
        printf("һ�����ȿ��Ȱ�\n");
    }
    else if(num < 0)
    {
        printf("���������ȳ�֭�ɣ�");
    }
    else
    {
        printf("�����˰ɣ�����һ��ȥ����Ӱ��");
    }
    //ʹ��ѭ��ʵ�������������ֱ������ϵͳ
    int i = 0;//ѭ������
    double password = 12345;//����
    double inputpassword;//��������
    while(i<3)
    {
        printf("���������룺");
        scanf("%lf",&inputpassword);
        if(inputpassword != password)
        {
            printf("��������������������룬��ǰ���%d��\n",i+1);
        }
        else
        {
            printf("������ȷ");
            break;
        }
        if(i == 2)
        {
            printf("�������%d��,ϵͳǿ���˳�",i+1);
            exit(0);
        }
        i++;

    }
    //ĳ��˫ʮһ2015��Ľ��׶�Ϊ800�ڣ�ÿ�����25%
    //��:�����ٶȣ����꽻�׶�ﵽ2000��
    int year = 2015;//��
    double num = 800;//���׶�
    while(num<=2000)
    {
        num = num * 1.25;
        year++;
    }
    printf("�����ٶȣ���%d�꽻�׶�ﵽ2000��",year);
    srand(time(NULL));
    printf("������֣�%d\n",rand());
    /*ʹ��ѭ��ģ����Ҷ�ս
    ˫����ʼ����ֵΪ100(hp)
    ÿ�ι���5-15
    hp���ȵ�0�����¼���ko
    int hp1 = 100,hp2 = 100;    //��Ϸ���˳�ʼ����ֵ
    int attack,attack1,i = 0;   //���˵Ĺ�����
    while(hp1 >=0 && hp2 >=0)
    {
        attack = rand() % 11 + 5;
        if(attack == 10)
        attack *=2;
        //rond() % (b - a + 1) + a
        attack1 = rand() % 11 + 5;
        hp2 -= attack;
        hp1 -= attack1;
        printf("*********************************************\n");
        printf("��%d��\n",i + 1);
        printf("���1�Ĺ�����%d\t���2������ֵ%d\n",attack,hp2);
        printf("���2�Ĺ�����%d\t���1������ֵ%d\n",attack1,hp1);
        printf("*********************************************\n");
        i++;
        if(hp1 <=0 &&  hp2 <= 0)
        {
            printf("��%d��\n",i + 1);
            printf("��Ϸ���������1��Ѫ��%d\t���2��Ѫ��%d\n",hp1,hp2);
            break;
        }
    }
    printf("ko~��Ϸ���������1��Ѫ��%d\t���2��Ѫ��%d\n",hp1,hp2);
}
    int i=1,a=10;
   do
    {
        a-=i;
        i++;;
   }while(a-- < 0);
    printf("%d\n",a);
    double wages,avgwage,Totalwages;     //����,ƽ������,�ܹ���
    int i;                                   //ѭ������,�ܼ�
    for(i=0;i<6;i++)
    {
       printf("�������%d���¹��ʣ�",i+1);
       scanf("%lf",&wages);
       Totalwages += wages;
    }
    avgwage = Totalwages / 6;
    printf("%lf\n",avgwage);
    //��ӡ���׼ӷ���
    int i;               //ѭ������
    int num;             //���������
    printf("������һ�����֣�");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
       printf("%d + %d = %d",i,(num-i),num);
       if(i % 2 == 0)
       {
           printf("\t");
       }
       else
       {
           printf("\n");
       }
    }
    //������дһ������Ʒ��С��Ϸ
   //1.�����趨һ����Ʒ�ļ۸����û�ȥ��
   //2.�û�����²�ļ۸��ϵͳ������С��ʾ
   //3.����������ھͲµ� ��ȷ�ļ۸񣬸���һЩ����
   int commodityprice;     //��Ʒ�۸�
   int usercompr;          //�û��µ���Ʒ�۸�
   int i;                  //ѭ����������Ϸ����
   srand((unsigned)time(NULL));
   commodityprice = rand() * 1000 % 10000;
   printf("%d\n",commodityprice);
   for(i=0;i<5;i)
   {
       printf("��%d��:������²����Ʒ�۸�",i+1);
       scanf("%d",&usercompr);
       if(usercompr>commodityprice)
       {
           printf("�����²�ļ۸����\n");
       }
       else if(usercompr<commodityprice)
       {
           printf("�����۸�µ���\n");
       }
       else
       {
           printf("��ϲ��¶��ˣ��������߿������ǻ��о�ϲ~\n");
           break;
       }
       i++;
   }
//ѭ��¼���û��Ա�ֻ��ʹ���ַ�m/M(��)��f/F()Ů��һ��������󣬽���¼��
//Ҫ��ͳ��¼����ȷ�Ĵ���
char sex;
int i = 0;
while(1)
  {
    printf("���������û��Ա�");
    scanf("%c",&sex);
    fflush(stdin);
    if(sex != 'm' && 'M' && 'F' && 'f')
    {
        break;
    }
    i++;
  }
 printf("¼��%d��",i);
//ѭ������5����ҵ����䣬ͳ������Ϊ����¼�����
//���¼����ȷ������������������������1
int age;
int i,count=0;
for(i=0;i<5;i++)
  {
      printf("������������䣺");
      scanf("%d",&age);
      if(age>=0)
      {
        continue;
      }
     else
      {
        count++;
      }
   }
  printf("%d\n",count);
    //��1��100֮���ż����
    int i,sum;
    for(i=0;i<=100;i++)
    {
        if(i%2!=0)
        {
           continue;
        }
        else
        {
            sum+=i;
        }
        i++;
    }
    printf("%d\n",sum);
*/
    int i,j;
    for(i=0;i<4;i++)
    {
        for(j=0;j<=2-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=2*i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=4-2*i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
