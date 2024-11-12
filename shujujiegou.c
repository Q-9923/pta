#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
////
////#include <stdlib.h>
////
////void reorder(int* a, int* b, int* c, char* order) {
////    int arr[3] = { *a, *b, *c };
////    for (int i = 0; i < 2; i++) {
////        for (int j = i + 1; j < 3; j++) {
////            if (arr[i] > arr[j]) {
////                int temp = arr[i];
////                arr[i] = arr[j];
////                arr[j] = temp;
////            }
////        }
////    }
////    for (int k = 0; k < 3; k++) {
////        if (order[k] == 'A') {
////            *a = arr[k];
////        }
////        else if (order[k] == 'B') {
////            *b = arr[k];
////        }
////        else {
////            *c = arr[k];
////        }
////    }
////}
////
////int main() {
////    int a, b, c;
////    char order[3];
////    scanf("%d %d %d", &a, &b, &c);
////    scanf("%s", order);
////    reorder(&a, &b, &c, order);
////    printf("%d %d %d", a, b, c);
////    return 0;
////}
//int main() {
//	int arr[3];
//	
//	for (int i = 0; i < 3; i++) {
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < i ; j++) {
//			if (arr[j] < arr[j + 1]) {
//				int m = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = m;
//			}
//		}
//	}
//	while (arr[0] != 0) {
//		int k = arr[0];
//		arr[0] = arr[2] % arr[0];
//		arr[2] = k;
//	}
//	printf("%d/%d", arr[2], arr[0]);
//}
//#include<stdio.h>
//#include<math.h>
//int main() {
//	double  a, b, c;
//	scanf_s("%lf %lf %lf", &a, &b, &c);
//	double sum = a + b + c;
//	int round_sum = (int)(round(sum));
//	printf("%.1lf %d", sum, round_sum);
//	return 0;
//}
//#include<stdio.h>
//int main() {
//    int m, n;
//    int count = 0;
//    scanf("%d %d", &m, &n);
//    for (int i = m; i <= n; i++) {
//        int ge = i % 10;
//        int shi = i / 10 % 10;
//        int bai = i / 100;
//        if (i == ge * ge * ge + shi * shi * shi + bai * bai * bai) {
//            count++;
//        }
//    }
//    printf("%d", count);
//}



//
//#include<stdio.h>
//int main()
//{
//    int A, B;
//    scanf("%d %d", &A, &B);
//    for (int i = 0; i < A; i++) {
//        for (int j = 0; j < B; j++) {
//            printf("%c", 'A' + j*2+i);
//        }
//        printf("\n");
//    }
//}
#include<stdio.h>
//int main()
//{
//    int x, day = 1, all = 0, z = 1, a = 0;//i天数z当天金币
//    scanf("%d", &x);
//    while (day <= x)
//    {
//        all+= z;
//        a++;
//        if (a == z)
//        {
//            z++;
//            a = 0;
//        }
//        day++;
//    }
//    printf("%d", all);
//}
//int main() {
//	int day, coin, a, all,day1=1;
//	scanf("%d", &day);
//	while (day < day1) {
//
//	}
//}
//#include<stdio.h>
//int main()
//{
//    int a, c, d;
//    char b;
//    scanf("%d", &a);
//    while (1)
//    {
//        scanf("%c", &b);
//        switch (b)
//        {
//        case '+':
//            scanf("%d", &c);
//            a = a + c;
//            break;
//        case '-':
//            scanf("%d", &c);
//            a = a - c;
//            break;
//        case '*':
//            scanf("%d", &c);
//            a = a * c;
//            break;
//        case '/':
//            scanf("%d", &c);
//            {
//                if (c == 0) {
//                    printf("ERROR");
//                    break;
//                }
//                else
//                {
//                    a = a / c;
//                    break;
//                }
//            }
//        case '=':
//            printf("%d", a);
//            break;
//        default:
//            printf("ERROR");
//        }
//        if (c == 0)
//        {
//            break;
//        }
//        if (b == '=')
//        {
//            break;
//        }
//    }
//}
//#include<stdio.h>
//int main() {
//    char a;
//    int x, y, z;
//    scanf("%d", &y);
//    while (1) {
//        scanf("%c", &a);
//        switch (a) {
//        case'+':
//            scanf("%d", &x);
//            y = y + x;
//            break;
//        case'-':
//            scanf("%d", &x);
//            y = y - x;
//            break;
//        case'*':
//            scanf("%d", &x);
//            y = y * x;
//            break;
//        case'/':
//            scanf("%d", &x);
//            if (x == 0) {
//                printf("ERROR");
//                break;
//            }
//            else {
//                y = y / x;
//                break;
//            }
//        case'=':
//            printf("%d", y);
//            break;
//        default:
//        { printf("ERROR"); }
//        if (x == 0) {
//            break;
//        }
//        else if (a == '=') {
//            break;
//        }
//        }
//    }
//}
////猜数字游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main() {
//    int m, guess;
//    int count = 0;
//    srand((unsigned)time(NULL));
//    m = rand() % 100 + 1;
//    while (1) {
//        scanf("%d", &guess);
//         if (guess < 0) {
//            printf("Game Over");
//            break;
//        }else if (guess != m) {
//            if (guess < m) {
//                printf("Too small\n");
//            }
//            else {
//                printf("Too big\n");
//            }
//            count++;
//        }
//        
//        else {
//            printf("猜到了");
//            if (count == 1) {
//                printf("Bingo!");
//                break;
//            }
//            else if (count < 3) {
//                printf("Lucky You!");
//                break;
//            }
//            else if (count >= 3) {
//                printf("Good Guess!");
//                break;
//            }
//        }
//    }
//}





//自定义猜数字
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main() {
//    int m, guess;
//    int count = 0;
//    // srand((unsigned)time(NULL));
//    // m=rand()%100+1;
//    scanf("%d %d", &guess, &count);
//    while (1) {
//        //scanf("%d", &guess);
//        if (guess != m) {
//            if (guess < m) {
//                printf("Too small");
//            }
//            else {
//                printf("Too big");
//            }
//            count++;
//        }
//        else if (guess < 0) {
//            printf("Game Over");
//            break;
//        }
//        else {
//            printf("猜到了");
//            if (count == 1) {
//                printf("Bingo!");
//                break;
//            }
//            else if (count < 3) {
//                printf("Lucky You!");
//                break;
//            }
//            else if (count >= 3) {
//                printf("Good Guess!");
//                break;
//            }
//        }
//    }
//
//}



//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//int main() {
//    int m, guess;
//    int count = 0;
//    int N, a;
//    // srand((unsigned)time(NULL));
//    // m=rand()%100+1;
//    scanf("%d %d", &guess, &N);
//    scanf("%d", &a);
//    while (1) {
//        //scanf("%d", &guess);
//        if (guess < 0) {
//            printf("Game Over");
//            break;
//        }
//        else if (a != guess) {
//            if (a < guess) {
//                printf("Too small");
//                //break;
//            }
//            else {
//                printf("Too big");
//                //break;
//            }
//            count++;
//        }
//
//        else {
//            printf("猜到了");
//            if (count == 1) {
//                printf("Bingo!");
//                break;
//            }
//            else if (count <= 3) {
//                printf("Lucky You!");
//                break;
//            }
//            else if (count > 3 && count < N) {
//                printf("Good Guess");
//                break;
//            }
//            else {
//                printf("Game Over");
//                break;
//            }
//        }
//    }
//}