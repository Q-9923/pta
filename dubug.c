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
//        int count = 0, sum = 0;//����������ƽ�������
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
//    //     jie=i*jie;//����n+1�Ľ׳�
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
/*��һ����Ǯ����5�֡�2�ֺ�1�ֵ�Ӳ�ң�Ҫ��ÿ��Ӳ��������һö���м��ֲ�ͬ�Ļ�����
�����ʽ:
������һ���и�����������Ǯ����x��(8,100)��

�����ʽ:
Ҫ��5�֡�2�ֺ�1��Ӳ�ҵ��������δӴ�С��˳��������ֻ�����ÿ�����һ�ֻ�������ʽΪ����fen5:5��Ӳ������, fen2:2��Ӳ������, fen1:1��Ӳ������, total:Ӳ���������������һ�������count = ������������*/
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



//2.0�汾
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


//��ȷ�汾
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
//            jie = j * jie;//����n+1�Ľ׳�
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




//Ӳ�һ���
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
//// 1���Ȼ���ʵ�����Σ������ηֳ����������֣��ٷֳ������Ǻ͵����� �� 
//// 2�� �������N��n�㣩����ѭ�� 
//// 3�� ��if���ʹ��������Ϊ��
//// 4�� ����ASCII��ļӼ�  ʵ����ĸ��� 
//int main()
//{
//	int n,i,j;
//	char c;
//	scanf("%c %d",&c,&n);
//	//�������������� �ϲ���
//	for(i=1;i<=n/2+1;i++)
//	{
//		//��һ��Ϊ�ϰ�ߵĵ����� 
//		for(j=n/2;j>=i;j--)
//			printf(" ");
//		//�ڶ����ϰ�ߵ������� 
//		for(j=0;j<i*2-1;j++)
//		{
//			//�����м�Ŀ�����if else��ʵ�� 
//			if(j==0 || j==i*2-2) 
//				printf("%c",c);
//			else 
//				printf(" ");
//		}
//		c+=1;
//		printf("\n");
//	}
//	c-=1; 
//	//�²���
//	for(i=1;i<=n/2;i++)
//	{
//		c-=1;
//		//������Ϊ�°�ߵ������� 
//		for(j=1;j<=i;j++)
//			printf(" ");
//		//���ĸ�������Ϊ��������
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

//�����ַ�����
//#include<stdio.h>
//int main()
//{
//    int h;
//    char x;
//    scanf("%c %d", &x, &h);
//	for (int i = 1; i <= 1 + (h / 2); i++)//�ϲ���
//    {
//		for (int j = h / 2; j >= i; j--)//����������Ǵ���h�����Ϸ�û�пո�
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i - 1; j++)//������,������ifelseʵ��
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
//	x-=1;//�°벿��
//	for (int i = 1; i <= h / 2; i++)
//	{
//		x--;
//		//�°��������
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



//��Ӳ��
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
//            fen1 = x - 5 * fen5 - 2 * fen2;//5��2�ֹ���ᳬ��x�Ľ�����Ի�Ҫ�ж�fen1�Ƿ������
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
//            fen1 = x - 5 * fen5 - 2 * fen2;//5��2�ֹ���ᳬ��x�Ľ�����Ի�Ҫ�ж�fen1�Ƿ������
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



////����Ҷһ�
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





//��ӡ��0102030405
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




////�׳��ۼ�
////�������շ�Χֻ��n<=20���ٴ��Ҫ�õ��߾��ȵ�֪ʶ
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


//���ַ�ת
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
/*�����������н���
int old, new = 0;��
������������������old��new������old���ڴ洢�û������ԭʼ������new��ʼ��Ϊ 0�������ڴ洢��ת���������
scanf("%d", &old);��
�ӱ�׼�����ȡһ��������������洢������old�С�
while (old)��
����һ��ѭ��������ֻҪold��Ϊ 0��ѭ���ͻ����ִ�С���Ϊ��old��Ϊ 0 ʱ��˵���Ѿ�����������������������λ��
new *= 10;��
��ÿ��ѭ����ʼʱ����new���� 10������Ϊ����new��ĩβ�ڳ�һ��λ�ã��Ա㽫��old��ȡ���ĸ�λ������ӵ�new�С����磬��һ��ѭ��ʱnewΪ 0������ 10 ����Ϊ 0���ڶ���ѭ��ʱ�����һ����������� 3����ʱnewΪ 3������ 10 ���Ϊ 30��Ϊ�����һ����������׼����
new += old % 10;��
old % 10��������ȡold�ĸ�λ���֡����磬���old�� 123����ôold % 10�Ľ���� 3��Ȼ�������λ������ӵ�new�С�
old /= 10;��
��old���� 10��Ŀ����ȥ��old�ĸ�λ���֣��Ա�����һ��ѭ���д�����һλ���֡����磬old�� 123 ��Ϊ 12��
printf("%d", new);��
��ѭ�������������ת�������new��
����ʾ������
������������Ϊ 1234��
��һ��ѭ����
new *= 10��new��Ϊ 0��
new += old % 10����new += 1234 % 10�����Ϊnew = 4��
old /= 10��old��Ϊ 123��
�ڶ���ѭ����
new *= 10��new��Ϊ 40��
new += old % 10����new += 123 % 10�����Ϊnew = 43��
old /= 10��old��Ϊ 12��
������ѭ����
new *= 10��new��Ϊ 430��
new += old % 10����new += 12 % 10�����Ϊnew = 432��
old /= 10��old��Ϊ 1��
���Ĵ�ѭ����
new *= 10��new��Ϊ 4320��
new += old % 10����new += 1 % 10�����Ϊnew = 4321��
old /= 10��old��Ϊ 0��ѭ��������
��������� 4321��*/



//
//#include<stdio.h>
//int main()
//{
//	int h;
//	char x;
//	scanf("%c %d", &x, &h);
//	for (int i = 1; i <= 1 + (h / 2); i++)//�ϲ���
//	{
//		for (int j = h / 2; j >= i; j--)//����������Ǵ���h�����Ϸ�û�пո�
//		{
//			printf(" ");
//		}
//		for (int j = 0; j < 2 * i - 1; j++)//������,������ifelseʵ��
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
//	x -= 1;//�°벿��
//	for (int i = 1; i <= h / 2; i++)
//	{
//		x--;
//		//�°��������
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