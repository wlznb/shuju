#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    /*
    某游戏中近战武器的实际伤害计算公式：
    武器实际最大伤害 = 武器最大伤害 * （玩家力量+100）/100
    现有如下武器，武器最大伤害256，要求输入玩家力量，打印武器实际最大伤害
    double weapons;//武器实际最大伤害
    double maxweapons = 256;//武器最大伤害
    double playerpower;//玩家力量
    printf("请输入玩家力量：");
    scanf("%lf",&playerpower);
    weapons = maxweapons *(playerpower + 100)/100;
    printf("武器实际最大伤害：%.2lf",weapons);
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
    printf("5 > 8吗？%d\n",5 >  8);
    printf("sizeof(int) = %d\n",sizeof(int));
    printf("sizeof(long) = %d\n",sizeof(1000l));
    printf("sizeof(float) = %d\n",sizeof(34.4f));
    printf("sizeof(double) = %d\n",sizeof(double));
    printf("sizeof(char) = %d\n",sizeof(char));
    int num = 10;
    int result = num++ > 11 && --num < 20;
    printf("result = %d\tnum = %d\n",result,num);
    printf("我：你想看什么?\n");
    printf("你：不知道\n");
    printf("我；那你想喝点什么\n");
    printf("你：用抛硬币来决定吧\n");
    printf("我：好吧！\n");
    int num;                //硬币正反面，1表示正，0表示反，不是0和1，为硬币立正
    printf("开始抛硬币：");
    scanf("%d",&num);
    if(num > 1)
    {
        printf("一起来喝咖啡吧\n");
    }
    else if(num < 0)
    {
        printf("啦啦啦，喝橙汁吧！");
    }
    else
    {
        printf("不喝了吧，我们一起去看电影吧");
    }
    //使用循环实现输错三次密码直接跳出系统
    int i = 0;//循环次数
    double password = 12345;//密码
    double inputpassword;//输入密码
    while(i<3)
    {
        printf("请输入密码：");
        scanf("%lf",&inputpassword);
        if(inputpassword != password)
        {
            printf("密码输入错误，请重新输入，当前输错%d次\n",i+1);
        }
        else
        {
            printf("密码正确");
            break;
        }
        if(i == 2)
        {
            printf("密码输错%d次,系统强制退出",i+1);
            exit(0);
        }
        i++;

    }
    //某宝双十一2015年的交易额为800亿，每年递增25%
    //问:按次速度，那年交易额达到2000亿
    int year = 2015;//年
    double num = 800;//交易额
    while(num<=2000)
    {
        num = num * 1.25;
        year++;
    }
    printf("按此速度，在%d年交易额达到2000亿",year);
    srand(time(NULL));
    printf("随机数字：%d\n",rand());
    /*使用循环模拟玩家对战
    双方初始生命值为100(hp)
    每次攻击5-15
    hp最先到0或以下即被ko
    int hp1 = 100,hp2 = 100;    //游戏两人初始生命值
    int attack,attack1,i = 0;   //两人的攻击力
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
        printf("第%d轮\n",i + 1);
        printf("玩家1的攻击力%d\t玩家2的生命值%d\n",attack,hp2);
        printf("玩家2的攻击力%d\t玩家1的生命值%d\n",attack1,hp1);
        printf("*********************************************\n");
        i++;
        if(hp1 <=0 &&  hp2 <= 0)
        {
            printf("第%d轮\n",i + 1);
            printf("游戏结束，玩家1的血量%d\t玩家2的血量%d\n",hp1,hp2);
            break;
        }
    }
    printf("ko~游戏结束，玩家1的血量%d\t玩家2的血量%d\n",hp1,hp2);
}
    int i=1,a=10;
   do
    {
        a-=i;
        i++;;
   }while(a-- < 0);
    printf("%d\n",a);
    double wages,avgwage,Totalwages;     //工资,平均工资,总工资
    int i;                                   //循环次数,总计
    for(i=0;i<6;i++)
    {
       printf("请输入第%d个月工资：",i+1);
       scanf("%lf",&wages);
       Totalwages += wages;
    }
    avgwage = Totalwages / 6;
    printf("%lf\n",avgwage);
    //打印简易加法表
    int i;               //循环变量
    int num;             //输入的数字
    printf("请输入一个数字：");
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
    //我们书写一个猜商品的小游戏
   //1.我们设定一个商品的价格，让用户去猜
   //2.用户输入猜测的价格后，系统给出大小提示
   //3.如果在五轮内就猜到 正确的价格，给予一些奖励
   int commodityprice;     //商品价格
   int usercompr;          //用户猜的商品价格
   int i;                  //循环次数，游戏轮数
   srand((unsigned)time(NULL));
   commodityprice = rand() * 1000 % 10000;
   printf("%d\n",commodityprice);
   for(i=0;i<5;i)
   {
       printf("第%d轮:请输入猜测的商品价格：",i+1);
       scanf("%d",&usercompr);
       if(usercompr>commodityprice)
       {
           printf("你所猜测的价格高了\n");
       }
       else if(usercompr<commodityprice)
       {
           printf("哎！价格猜低了\n");
       }
       else
       {
           printf("恭喜你猜对了，请您别走开，我们还有惊喜~\n");
           break;
       }
       i++;
   }
//循环录入用户性别，只能使用字符m/M(男)或f/F()女。一旦输入错误，结束录入
//要求统计录入正确的次数
char sex;
int i = 0;
while(1)
  {
    printf("请您输入用户性别：");
    scanf("%c",&sex);
    fflush(stdin);
    if(sex != 'm' && 'M' && 'F' && 'f')
    {
        break;
    }
    i++;
  }
 printf("录入%d次",i);
//循环输入5个玩家的年龄，统计年龄为负的录入次数
//如果录入正确，跳过，输入错误则计算器加1
int age;
int i,count=0;
for(i=0;i<5;i++)
  {
      printf("请输入玩家年龄：");
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
    //求1到100之间的偶数和
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
