////////#define _CRT_SECURE_NO_WARNINGS
////////
////////#include<stdio.h>
////////int main() {
////////    long int a = 0;
////////    scanf("%d", &a);
////////    if (a % 4 == 0) {
////////        if (a % 100 != 0)
////////            printf("输入年份：%d是闰年", a);
////////    }
////////    else if (a % 400 == 0) {
////////        printf("输入年份：%d不是闰年", a);
////////    }
////////    else
////////        return -1;
////////}#include<stdio.h>
////////int main() {
////////    int a = 0;
////////    scanf("%d", &a);
////////    if (a % 4 == 0) {
////////        if (a % 100 != 0)
////////            printf("输入年份：%d 是闰年", a);
////////    }
////////    else if (a % 400 == 0) {
////////        printf("输入年份：%d 不是闰年", a);
////////    }
////////    else
////////        return -1;
////////}
////////#include<stdio.h>
////////double x;
////////
////////int main() {
////////    scanf_s("%lf", &x);
////////    if (x <= 10) {
////////        double y = 500 * x;
////////        printf("%.2lf", y);
////////    }
////////    else {
////////        double y = 5000 + 800 * (x - 10);
////////        printf("%.2lf", y);
////////    }
////////}
////////#include<stdio.h>
////////  int main(){
////////      int t[100],i,z,d=0,n,j;
////////       scanf("%d",&n);
////////      for(i=1;i<=n;i++){
////////          scanf("%d/n",&z);
////////          t[i]=z;}             //这个for循环用来给数组t[i]赋值
////////      for(i=1;i<=n;i++){       //外边的for循环用来让t[i]往下个数字走
////////          for(j=1;j<=i;j++){     //里面的for循环用来与前面的数字比较，如果小于该数则用来计数的d加一
////////              if(t[j]<t[i]) d++;}
////////          printf("%d ",d);d=0; }    // 输出d的值，然后给d赋0
////////          return 0;
////////}
////////#include<stdio.h>
////////  int main() {
////////      int t[100], i, z, d = 0, n, j;
////////      scanf("%d", &n);
////////      for (i = 1; i <= n; i++) {
////////          scanf("%d/n", &z);
////////          t[i] = z;
////////      }             //这个for循环用来给数组t[i]赋值
////////      for (i = 1; i <= n; i++) {       //外边的for循环用来让t[i]往下个数字走
////////          for (j = 1; j <= i; j++) {     //里面的for循环用来与前面的数字比较，如果小于该数则用来计数的d加一
////////              if (t[j] < t[i]) d++;
////////          }
////////          printf("%d ", d); d = 0;
////////      }    // 输出d的值，然后给d赋0
////////      return 0;
////////  }
////////#include <stdio.h>
////////#include <stdlib.h>
////////
////////int main() {
////////	int num;
////////	int arr[100];
////////	scanf_s("%d", &num);
////////	//int* arr = (int*)malloc(num * sizeof(int));
////////	for (int i = 0; i <num; i++) {
////////		scanf_s("%d", &arr[i]);
////////	}
////////	int count = 0;
////////	for (int i = 0; i < num; i++) {
////////		for (int j = 0; j < i; j++) {
////////			if (arr[j] < arr[i]) {
////////				count++;
////////			}
////////		}
////////			printf("%d ", count); count = 0;
////////		
////////	}
////////	//free(arr);
////////	return 0;
////////}
////////#include<stdio.h>
////////#include<math.h>
////////int main() {
////////    double a, b, c, x1, x2;
////////    scanf_s("%lf%lf%lf", &a, &b, &c);
////////    x1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
////////    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
////////    double shibu1 = -b / (2 * a);
////////    double xubu1 = sqrt(4 * a * c - b * b) / (2 * a);
////////    if (b*b == 4 * a * c) {
////////        printf("x1=x2=%.5lf", x1);
////////    }
////////    else if (b * b > 4 * a * c) {
////////        printf("x1=%.5lf;x2=%.5lf", x1, x2);
////////    }
////////    else if (b * b < 4 * a * c) {
////////        printf("x1=%.5lf+%.5lfi;x2=%.5lf-%.5lfi", shibu1, xubu1, shibu1, xubu1);
////////    }
////////
//////// #include<stdio.h>
////////#include<stdio.h>
////////int main() {
////////    int a, b, c;
////////    scanf("%d%d%d", &a, &b, &c);
////////    if (a > 100 || a < 0 || b>100 || b < 0 || c>100 || c < 0) {
////////        return -1;
////////    }
////////    if (a >= 80 && b >= 80 && c >= 80) {
////////        printf("A\n");
////////
////////    }
////////    else {
////////        printf("B");
////////    }
////////}
////////#include<stdio.h>
////////int main() {
////////    int a;
////////    char b;
////////    scanf_s("%d %c",&a,&b);
////////    if (a % 5 == 0 ) {
////////        if( b == 'Y')
////////        {
////////            printf("Right");
////////        }
////////    }
////////    else if (a % 5 != 0 )
////////    {
////////        if(b == 'N')
////////
////////        {
////////            printf("Right");
////////        }
////////   
////////    } else
////////    {
////////        printf("Wrong");
////////    }
////////    return 0;
////////}
//////
//////
//////
//////
//////
////////#include<stdio.h>
////////int main() {
////////
////////    double money1, money2, money3, all_money;
////////    scanf("%lf%lf%lf", &money1, &money2, &money3);
////////    if (money1 <= 9.9 && money2 <= 9.9 && money3 <= 9.9) {
////////        all_money = money1 + money2 + money3 + 0.99 * 3;
////////        printf("%.2lf \n", all_money);
////////        printf("\n");
////////    }
////////    else if (money1 >= 9.9 && money2 >= 9.9 && money3 >= 9.9) {
////////        printf("%.2lf\n", money1 + money2 + money3);
////////    }
////////    else if (money1 >= 9.9 && money2 <= 9.9 && money3 <= 9.9) {
////////        printf("%.2lf\n", money1 + money2 + money3 + 2 * 0.99);
////////    }
////////    else if (money1 >= 9.9 && money2 >= 9.9 && money3 <= 9.9) {
////////        printf("%.2lf\n", money1 + money2 + money3 + 0.99);
////////    }
////////    else if (money1 <= 9.9 && money2 >= 9.9 && money3 >= 9.9) {
////////        printf("%.2lf\n", money1 + money2 + money3 + 0.99);
////////    }
////////    else if (money1 <= 9.9 && money2 >= 9.9 && money3 <= 9.9) {
////////        printf("%.2lf\n", money1 + money2 + money3 + 2 * 0.99);
////////    }
////////    else if (money1 <= 9.9 && money2 <= 9.9 && money3 >= 9.9) {
////////        printf("%.2lf\n", money1 + money2 + money3 + 2 * 0.99);
////////    }
////////    else if (money1 >= 9.9 && money2 <= 9.9 && money3 >= 9.9) {
////////        printf("%.2lf\n", money1 + money2 + money3 + 0.99);
////////    }
////////    return 0;
////////}
////////#include<stdio.h>
////////int main() {
////////    double a, b = 0;
////////    for (int i = 0; i < 3; i++) {
////////        scanf("%lf", &a);
////////            if (a < 9.9) {
////////                b += a + 0.99;
////////            }
////////            else
////////            {
////////                b += a;
////////            }
////////    }
////////    printf("%.2lf", b);
////////    return 0;
////////}
//////#include <stdio.h>
////////循坏输入后分成绩
//////int main() {
//////    int score;
//////    int countA = 0, countP = 0, countF = 0;
//////    while (1) {
//////        scanf_s("%d", &score);
//////        if (score < 0) {
//////            break;
//////        }
//////        if (score >= 90 && score <= 100) {
//////            countA++;
//////        }
//////        else if (score >= 60 && score <= 89) {
//////            countP++;
//////        }
//////        else if (score >= 0 && score <= 59) {
//////            countF++;
//////        }
//////    }
//////    printf("A 等级 %d 人\n", countA);
//////    printf("P 等级 %d 人\n", countP);
//////    printf("F 等级 %d 人\n", countF);
//////    return 0;
//////}
//#include<stdio.h>
//int main()
//{
//	int f, r;
//	double h;
//	scanf_s("%d %lf", &f, &h);
//	r = (int)(h / 24);
//	switch (f) {
//	case 1:
//		if (h <= 1)
//			printf("5.00");
//		else if (h > 1 && h < 22.5)
//			printf("%.2lf", (h - 1) * 4 + 5);
//		else if (h >= 22.5 && h < 24)
//			printf("50.00");
//		else if (h >= 24) {
//			if (h - r * 24 <= 1)
//				printf("%.2lf", r * 50 + 5.00);
//			else if (h - r * 24 > 1 && h - r * 24 < 22.5)
//				printf("%.2lf", r * 50 + (h - r * 24 - 1) * 4 + 5);
//		}
//		break;
//	case 2:
//		if (h <= 2)
//			printf("5.00");
//		else if (h > 2 && h < 12.5)
//			printf("%.2lf", (h - 2) * 2 + 5);
//		else if (h >= 12.5 && h < 24)
//			printf("30.00");
//		else if (h >= 24) {
//			if (h - r * 24 <= 2)
//				printf("%.2lf", r * 30 + 5.00);
//			else if (h - r * 24 > 2 && h - r * 24 < 12.5)
//				printf("%.2lf", r * 30 + (h - r * 24 - 2) * 2 + 5);
//		}
//		break;
//	case 3:
//		if (h <= 3)
//			printf("5.00");
//		else if (h > 3 && h < 15)
//			printf("%.2lf", (h - 3) * 1 + 5);
//		else if (h >= 15 && h < 24)
//			printf("20.00");
//		else if (h >= 24) {
//			if (h - r * 24 <= 3)
//				printf("%.2lf", r * 20 + 5.00);
//			else if (h - r * 24 > 3 && h - r * 24 < 15)
//				printf("%.2lf", r * 20 + (h - r * 24 - 3) * 1 + 5);
//		}
//		break;
//	}
//	return 0;
//}
////#include <stdio.h>
////
////int main() {
////    double e;
////    scanf_s("%lf", &e);
////    double sum = 1.0;
////    double term = 1.0;
////    int n = 1;
////    double factorial = 1.0;
////    while (term > e) {
////        factorial *= (2 * n + 1) * (2 * n + 2);
////        term = 1.0 / factorial;
////        sum += term;
////        n++;
////    }
////    printf("一共计算了%d项，结果是%.6lf", n, sum);
////    return 0;
////}
//#include <stdio.h>
//int fun(int n) {
//    if (1 == n) {
//        return 1;
//    }
//    else {
//        return n * fun(n - 1);
//    }
//}
//int main() {
//    double e;
//    int n = 0;
//    scanf_s("%lf", &e);
//    double sum = 0;
//    double final = 1.0;
//    for (int i = 1; final >= e; i += 2) {
//        final = 1.0 / fun(i);
//        n++;
//        sum = sum + final;
//    }
//    printf("一共计算了%d项，结果是%lf", n, sum);
//    return 0;
//}