#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main(){
//    int m,n,ge,shi,bai;
//     int found=0;
//     scanf("%d %d",&m,&n);
//    for(int i=m;i<=n;i++){
//        if(m>=100&&n<=999){
//        int ge=i%10;
//        int shi=(i/10)%10;
//        int bai=i/100;
//        if(ge*ge*ge+shi*shi*shi+bai*bai*bai==i){
//            // if(found){
//            // printf(" ");
//            // }
//            printf("%d ",i);
//            found=1;
//        }
//        // else
//        if(found)
//            printf("No Answer");}
//        
//    }
//   
//}
//#include<stdio.h>
//int main() {
//    int m, n, ge, shi, bai;
//    int found = 0;
//    scanf("%d %d", &m, &n);
//    for (int i = m; i <= n; i++) {
//        if (i >= 100 && i <= 999) {
//            ge = i % 10;
//            shi = (i / 10) % 10;
//            bai = i / 100;
//            if (ge * ge * ge + shi * shi * shi + bai * bai * bai == i) {
//                printf("%d ", i);
//                found = 1;
//            }
//        }
//        if (found == 0)
//            printf("No Answer");
//    }
//}

//#include<stdio.h>
//#include<stdio.h>
//int arr[50] = { 0 };
//int sushu(a, b)
//{
//    for (int i = 2; i <= sqrt(a); i++)
//    {
//        if (a % i != 0)
//        {
//            for (int i = 2; i <= sqrt(b); i++)
//            {
//                if (b % i != 0)
//                {
//                    return 1;
//                }
//            }
//        }
//        else
//            return 0;
//    }
//}
//int sushu1(i)
//{
//    int arr[50] = { 0 };
//    for (int m = 2; m <= sqrt(i); m++)
//    {
//        if (i % m != 0)
//        {
//            arr[m]=i;
//        }
//    }
//}
//int main()
//{
//    int a, b;
//    //
//    scanf("%d %d", &a, &b);
//    sushu(a, b);
//    if (sushu)
//    {
//        for (int i = a; i <= b; i++)
//        {
//            sushu1(i);
//            printf("%d", arr[i]);
//        }
//    }
//    else
//    {
//        for (int i = a; i <= b; i++)
//        {
//            if (i % 5 == 0)
//            {
//                printf("%d", i);
//            }
//        }
//    }
//    return 0;
//}

//
//#include<stdio.h>
//#include<math.h>
//
//int sushu(int m)
//{
//    if (m < 2) {
//        return 0;
//    }
//    for (int i = 2; i <= sqrt(m); i++)
//    {
//        if (m % i == 0)
//        {
//            return 0;
//        }
//    }
//    return 1;
//}
//int main()
//{
//    int a=0, b=0;
//    scanf("%d %d", &a, &b);
//    if (sushu(a) && sushu(b))
//    {
//        int count = 0, sum = 0;//计数用于求平均和求和
//        for (int i = a; i <= b; i++)
//        {
//            if (sushu(i))
//            {
//                count++;
//                sum += i;
//                printf("%d,", i);
//            }
//        }
//        printf("ave=%.1f", (double)sum / count);
//    }
//    else
//    {
//        for (int i = a; a <= b; i++)
//        {
//            if (i % 5 == 0) {
//                printf("%d,", i);
//            }
//        }
//    }
//    return 0;
//
//}
//
//
//#include<stdio.h>
//int main()
//{
//    int y;
//    scanf("%d", &y);
//    int count = 0;
//    if (y > 2000)
//    {
//        for (int i = 2001; i <= y; i++)
//        {
//            if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
//            {
//                printf("%d\n", i);
//                count = 1;
//            }
//        }
//        if (count == 0) {
//            printf("None");
//        }
//    }
//    else {
//        printf("Invalid year!");
//    }
//    return 0;
//}
// 
// 
// 
//#include<stdio.h>
//int fun(n)
//{
//    if (n == 1 || n == 0)
//    {
//        return 1;
//    }
//    else
//        return n * fun(n - 1);
//}
//int main()
//{
//    double n = 0;
//    scanf("%lf", &n);
//    // double jie=1.0;
//    double sum = 1.0;
//    // for(int i=1;i<=n+1;i++)
//    // {
//    //     jie=i*jie;//计算n+1的阶乘
//    //     sum+=1.0/jie;
//    // }
//    // printf("%.8f",sum);
//    // return 0;
//    for (int i = 2; i <= n; i++)
//    {
//        sum += 1.0 / fun(i);
//    }
//    printf("%.8lf", sum);
//}


//fen5*5+fen2*2+fen1*1=x
/*将一笔零钱换成5分、2分和1分的硬币，要求每种硬币至少有一枚，有几种不同的换法？
输入格式:
输入在一行中给出待换的零钱数额x∈(8,100)。

输出格式:
要求按5分、2分和1分硬币的数量依次从大到小的顺序，输出各种换法。每行输出一种换法，格式为：“fen5:5分硬币数量, fen2:2分硬币数量, fen1:1分硬币数量, total:硬币总数量”。最后一行输出“count = 换法个数”。*/
//#include<stdio.h>
//int main()
//{
//    int fen5, fen2, fen1, total=3, count=0, x;
//    scanf("%d", &x);
//    for (int fen5 = 1; fen5 < 20; fen5++)
//    {
//        //fen2=93-fen5-
//        for (int fen2 = 1; fen2 <= 47; fen2++)
//        {
//            for (fen1 = 1; fen1 <= 93; fen1++)
//            {
//                if (x == 5 * fen5 + 2 * fen2 + fen1)
//                {
//                    count++;
//                    total = fen5 + fen2 + fen1;
//                    printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, total);
//                }
//            }
//        }
//    }
//    printf("count = %d", count);
//    return 0;
//}



//2.0版本
//fen5*5+fen2*2+fen1*1=x
//#include<stdio.h>
//int main()
//{
//    int fen5, fen2, fen1, total = 3, count = 0, x;
//    scanf("%d", &x);
//    for (int fen5 = 1; fen5 < 20; fen5++)
//    {
//        fen2=47-
//    }
//    printf("count = %d", count);
//    return 0;
//}


//正确版本
#include<stdio.h>
// int fun(n)
//     {
//         if(n==1||n==0)
//         {
//             return 1;
//         }
//         else
//             return n*fun(n-1);
//     }
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    double jie = 1.0;
//    double sum = 1.0;
//    for (int i = 1; i <= n; i++)
//    {
//        jie = 1.0;
//        for (int j = 1; j <= i; j++) {
//            jie = j * jie;//计算n+1的阶乘
//        }
//        sum += 1.0 / jie;
//    }
//    printf("%.8f", sum);
//    return 0;
//    // for(int i=2;i<=n;i++)
//    // {
//
//    //     sum+=1.0/fun(i);
//    // }
//   // printf("%.8f",sum);
//}




//硬币换算
//#include <stdio.h>
//
//int main() {
//    char startChar;
//    int height;
//    scanf("%c %d", &startChar, &height);
//    int halfHeight = height / 2 + 1;
//    for (int i = 0; i < height; i++) {
//        int spaces = abs(halfHeight - i - 1);
//        char ch = startChar + abs(halfHeight - i - 1);
//        for (int j = 0; j < spaces; j++) {
//            printf(" ");
//        }
//        if (i == 0 || i == height - 1 || spaces == 0) {
//            printf("%c\n", ch);
//        }
//        else {
//            printf("%c ", ch);
//            for (int k = 0; k < height - 2 * spaces - 2; k++) {
//                printf(" ");
//            }
//            printf("%c\n", ch);
//        }
//    }
//    return 0;
//}



//#include <stdio.h>
//// 1、先画出实心菱形（把菱形分成上下俩部分，再分成正三角和倒三角 ） 
//// 2、 把输入的N（n层）带入循环 
//// 3、 用if语句使菱形中心为空
//// 4、 利用ASCII码的加减  实现字母组成 
//int main()
//{
//	int n,i,j;
//	char c;
//	scanf("%c %d",&c,&n);
//	//针对奇数层的菱形 上部分
//	for(i=1;i<=n/2+1;i++)
//	{
//		//第一个为上班边的倒三角 
//		for(j=n/2;j>=i;j--)
//			printf(" ");
//		//第二个上半边的正三角 
//		for(j=0;j<i*2-1;j++)
//		{
//			//菱形中间的空心用if else来实现 
//			if(j==0 || j==i*2-2) 
//				printf("%c",c);
//			else 
//				printf(" ");
//		}
//		c+=1;
//		printf("\n");
//	}
//	c-=1; 
//	//下部分
//	for(i=1;i<=n/2;i++)
//	{
//		c-=1;
//		//第三个为下半边的正三角 
//		for(j=1;j<=i;j++)
//			printf(" ");
//		//第四个三角形为倒三角形
//		for(j=n-2;j>=i*2-1;j--)
//		{
//			if(j==n-2 || j==i*2-1) 
//				printf("%c",c);
//			else 
//				printf(" ");
//		} 
//		printf("\n");
//	}
//}

//空心字符菱形
//#include<stdio.h>
//int main()
//{
//    int h;
//    char x;
//    scanf("%c %d", &x, &h);
//	for (int i = 1; i <= 1 + (h / 2); i++)//上部分
//    {
//		for (int j = h / 2; j >= i; j--)//倒三角如果是大于h则左上方没有空格
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i - 1; j++)//正三角,空心用ifelse实现
//		{
//			if (j == 0 || j == 2 * i - 2)
//			{
//				printf("%c",x);
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		x+=1;
//		
//		printf("\n");
//    }
//	x-=1;//下半部分
//	for (int i = 1; i <= h / 2; i++)
//	{
//		x--;
//		//下半边正三角
//		for (int j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = h - 2; j >= 2 * i - 1; j--)
//		{
//			if (j == h-2 || j == 2 * i - 1)
//			{
//				printf("%c", x);
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//    return 0;
//}



//换硬币
//#include<stdio.h>
//int main()
//{
//    int fen5 = 0, fen2 = 0, fen1 = 0;
//    int x, total, count = 0;
//    scanf("%d", &x);
//    for (fen5 = x / 5; fen5 > 0; fen5--)
//    {
//        for (fen2 = x / 2; fen2 > 0; fen2--)
//        {
//            fen1 = x - 5 * fen5 - 2 * fen2;//5和2分过多会超出x的金额所以还要判断fen1是否大于零
//            if (fen1 > 0 && fen1 + fen2 * 2 + fen5 * 5 == x)
//            {
//                count++;
//                total = fen1 + fen2 + fen5;
//                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, total);
//            }
//        }
//    }
//    printf("count = %d", count);
//}
//#include<stdio.h>
//int main()
//{
//    int fen5 = 0, fen2 = 0, fen1 = 0;
//    int x, total = 3, count = 0;
//    scanf("%d", &x);
//    for (fen5 = x / 5; fen5 > 0; fen5--)
//    {
//        for (fen2 = x / 2; fen2 > 0; fen2--)
//        {
//            fen1 = x - 5 * fen5 - 2 * fen2;//5和2分过多会超出x的金额所以还要判断fen1是否大于零
//
//            if (fen1 > 0 && fen1 + fen2 * 2 + fen5 * 5 == x)
//            {
//                count++;
//
//                printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", fen5, fen2, fen1, fen1 + fen2 + fen5);
//            }
//
//        }
//    }
//    printf("count = %d", count);
//}



////人民币兑换
//#include<stdio.h>
//int main()
//{
//    int fen5 = 1, fen2 = 1, fen1 = 1;
//    //fen5*5+fen2*2+fen1==150
//    //fen5+fen2+fen1=100
//    //fen5*4+fen2=50
//    int i, j, k, n;
//    int count = 0;
//    scanf("%d", &n);
//
//    // for(fen2=1;fen2<=50;fen2++)
    // {
    //     fen5=(50-fen2)/4;
    //     fen1=100-fen5-fen2;
    //     {
    //         printf("%d %d %d\n",fen5,fen2,fen1);
    //     }
    //     count++;
    // }
//    for (fen5 = 1; fen5 < 13; fen5++)
//   {
//       fen2 = 50 - 4 * fen5;
//        fen1 = 100 - fen2 - fen5;
//       if (fen5 * 5 + fen2 * 2 + fen1 == 150)
//        {
//           count++;
//            if (count <= n)
//            {
//                printf("%d %d %d\n", fen5, fen2, fen1);
//            }
//        }
//    }
//    return 0;
//}



//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    double sum = 0;
//    int jie = 1;
//    scanf("%d", &n);
//    for (int i = 1; i <= n; i++)
//    {
//        jie = 1;
//        for (int j = 1; j <= i; j++)
//        {
//            jie *= j;
//           
//        } sum += 1.0 / jie;
//    }
//    printf("%.8lf", sum);
//}





//打印出0102030405
//      06070809
//      101112
//      1314
//      15
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int m = 1;
//    for (int i = n; i > 0; i--)
//    {
//        for (int j = 0; j < i; j++)
//        {
//                printf("%02d", m);
//                m++;
//        }
//        printf("\n");
//    }
//}


//}




////阶乘累加
////数据最终范围只有n<=20，再大就要用到高精度的知识
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    long long int sum = 0;
//    long long int jie=1;
//    for (int i = 1; i <= n; i++)
//    {
//        int jie = 1;
//        for (int j = 1; j <= i; j++)
//        {
//            jie *= j;
//        }
//        sum += jie;
//    }
//    printf("%d", sum);
//}
//


//#include<stdio.h>
//int main()
//{
//    int k = 0, n=0 ;
//    double sum = 0.0;
//    scanf("%d", &k);
//    for (int i =1 ; ; i++)
//    {
//        sum += 1.0 / i;
//        if (sum > k)
//        {
//            n = i;
//            break;
//            
//        }
//    }
//    printf("%d",n );
//    return 0;
//}


//
//#include<stdio.h>
//#include<math.h>
////int main()
////{
////    int L = 0;
////    scanf("%d", &L);
////    int count = 0;
////    int cou = 0;
////    for (int i = 2; i <= 10; i++)
////    {
////        for (int j = 2; j <= 50; j++)
////        {
////            if (i % j != 0&&cou<L)
////            {
////                cou += i;
////                count++;
////                printf("%d\n", i);
////            }
////            
////        }
////    }
////    printf("%d", count);
////}


//数字反转
//#include<stdio.h>
//int main()
//{
//    int old, new = 0;
//    scanf("%d", &old);
//    while (old)
//    {
//        new *= 10;
//        new += old % 10;
//        old /= 10;
//    }
//    printf("%d", new);
//}
/*二、代码逐行解释
int old, new = 0;：
声明了两个整数变量old和new。其中old用于存储用户输入的原始整数，new初始化为 0，将用于存储反转后的整数。
scanf("%d", &old);：
从标准输入读取一个整数，并将其存储到变量old中。
while (old)：
这是一个循环条件，只要old不为 0，循环就会继续执行。因为当old变为 0 时，说明已经处理完了输入整数的所有位。
new *= 10;：
在每次循环开始时，将new乘以 10。这是为了在new的末尾腾出一个位置，以便将从old中取出的个位数字添加到new中。例如，第一次循环时new为 0，乘以 10 后仍为 0；第二次循环时如果上一次添加了数字 3，此时new为 3，乘以 10 后变为 30，为添加下一个数字做好准备。
new += old % 10;：
old % 10的作用是取old的个位数字。例如，如果old是 123，那么old % 10的结果是 3。然后将这个个位数字添加到new中。
old /= 10;：
将old除以 10，目的是去掉old的个位数字，以便在下一次循环中处理下一位数字。例如，old从 123 变为 12。
printf("%d", new);：
当循环结束后，输出反转后的整数new。
三、示例运行
假设输入整数为 1234。
第一次循环：
new *= 10后，new仍为 0。
new += old % 10，即new += 1234 % 10，结果为new = 4。
old /= 10后，old变为 123。
第二次循环：
new *= 10后，new变为 40。
new += old % 10，即new += 123 % 10，结果为new = 43。
old /= 10后，old变为 12。
第三次循环：
new *= 10后，new变为 430。
new += old % 10，即new += 12 % 10，结果为new = 432。
old /= 10后，old变为 1。
第四次循环：
new *= 10后，new变为 4320。
new += old % 10，即new += 1 % 10，结果为new = 4321。
old /= 10后，old变为 0，循环结束。
最后程序输出 4321。*/



//
//#include<stdio.h>
//int main()
//{
//	int h;
//	char x;
//	scanf("%c %d", &x, &h);
//	for (int i = 1; i <= 1 + (h / 2); i++)//上部分
//	{
//		for (int j = h / 2; j >= i; j--)//倒三角如果是大于h则左上方没有空格
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i - 1; j++)//正三角,空心用ifelse实现
//		{
//			if (j == 0 || j == 2 * i - 2)
//			{
//				printf("%c", x);
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		x += 1;
//
//		printf("\n");
//	}
//	x -= 1;//下半部分
//	for (int i = 1; i <= h / 2; i++)
//	{
//		x--;
//		//下半边正三角
//		for (int j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (int j = h - 2; j >= 2 * i - 1; j--)
//		{
//			if (j == h - 2 || j == 2 * i - 1)
//			{
//				printf("%c", x);
//			}
//			else
//			{
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//    int a = 0;
//    char c;
//    scanf("%c %d", &c, &a);
//    for (int i = 1; i <= 1 + a / 2; i++)
//    {
//        for (int j = a / 2; j >= i; j--)
//        {
//            printf(" ");
//        }
//        for (int j = 0; j <= 2 * i - 1; j++)
//        {
//            if (j == 0 || j == 2 * i - 2)
//            {
//                printf("%c", c);
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        c++;
//        printf("\n");
//    }
//    c--;
//    for (int i = 1; i <= a / 2; i++)
//    {
//        c--;
//        for (int j=0;j<i;j++)
//        {
//            printf(" ");
//        }
//        for (int j=a-2;j>=2*i-1;j--)
//        {
//            if (j == a - 2 || j == 2 * i - 1)
//            {
//                printf("%c", c);
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//}
//
//#include<stdio.h>
//int main()
//{
//    //gong+mu+xiao=100=n
//   // //5*gong+3*mu+xiao*(1.0/3)=100
//
//    //15*gong+9*mu+xiao==3*n
//    //7*gong+4*mu==n
//    int gong = 0, mu = 0, xiao = 0;
//    int n = 0;
//    scanf("%d", &n);
//    int count = 0;
//    for (int gong = 0; gong <= n / 7; gong++)
//    {
//        mu = (n - 7 * gong) / 4;
//        xiao = n - gong - mu;
//        if (15 * gong + 9 * mu + xiao == 3 * n && xiao >= 0 && gong < 10)
//        {
//            count++;
//            printf("   %d  %d  %d\n", gong, mu, xiao);
//
//        }
//        else if (15 * gong + 9 * mu + xiao == 3 * n && xiao >= 0) {
//
//            printf("  %d   %d  %d", gong, mu, xiao);
//
//        }
//    }
//    if (count == 0)
//    {
//        printf("No Answer");
//    }
//}
//#include<stdio.h>
//int main()
//{
//    int n = 0, arr[50] ;
//    int max = 0,count=1;
//    scanf("%d", &n);//10
//    for (int i = 0; i < n; i++)
//    {
//            scanf("%d", &arr[i]);
//            
//    }
//    for (int i = 1; i <= n; i++)
//    {
//        if (arr[i] - arr[i-1] == 1)
//        {
//            count++;
//        }
//        else
//        {
//            if (count > max)
//            {
//                max = count;
//            }
//            count = 0;
//        }
//    }
//    
//    printf("%d",max);
//}
//#include<stdio.h>
//int main()
//{
//    int  a = 15;
//    printf("%f", a);
//}
//8 3
//12345678910
//89104567123
//8910121345
//
#include <stdio.h>
#include <math.h>
int main()
{
    int N = 0, n = 0;
    int arr1[20];
    int arr2[20];
    scanf("%d", &N);
    scanf("%d", &n);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &arr1[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (arr2[i] != arr1[j])
            {
                printf("%d", arr2[i]);
            }
        }
    }

}