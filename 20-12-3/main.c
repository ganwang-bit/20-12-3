//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    printf("Hello world!\n");
//    return 0;
//}
//#include<stdio.h>
//struct A
//{
//    int a:2;
//    int b:5;
//    int c:10;
//    int d:32;
//};//位段-二进制位
//int main()
//{
//    struct A a={0};
//    printf("%d\n",sizeof(a));
//    return 0;
//}
//#include<stdio.h>
//enum Sex
//{
//    MALE,
//    FAMLE,
//    SECRET
//};
//enum Color
//{
//    RED,
//    YELLOW,
//    BULE
//};//枚举常量
//int main()
//{
//    enum Sex s=MALE;
//    enum Color c=BULE;
//    printf("%d\n",);
//    return 0;
//}
//#include<stdio.h>
//int add(int x,int y)
//{
//	int z;
//	z=x+y;
//	return z;
//}
//int main()
//{
//	int n,a,b,sum;
//	scanf("%d",&n);
//	getchar();
//	while(n--){
//		scanf("add(%d,%d)",&a,&b);
//		getchar();
//		sum=add(a,b);
//		printf("%d",sum);
//	}
//	return 0;
//}
//
//#include<stdio.h>
//int arr[10000];
//int j=0;
//void sum(int n)
//{
//    int a,b;
//    scanf("add(%d,%d)",&a,&b);
//    getchar();
//    arr[j]=a+b;
//    j++;
//    if(n!=1)
//        sum(n-1);
//}
//int main()
//{
//    int n;
//    scanf("%d",&n);
//    getchar();
//    sum(n);
//    int i;
//    for(i=0;i<n;i++)
//        printf("%d\n",arr[i]);
//    return 0;
//}
//#include<stdio.h>
//struct a
//{
//int a;
//struct a* b;
//};
//struct a* wh(int n)
//{
//if(n==1)
// {
//  static struct a AA={1,NULL};
//  return &AA;
// }
//else
//{
//   static struct a AAA={0};
//   AAA.a=n;
//   AAA.b=wh(n-1);
//   return &AAA;
//}
//}
//int main()
//{
//    struct a*p=wh(3);
//    while(p->b!=NULL)
//    {
//        printf("%d\n",p->a);
//        p=p->b;
//    }
//    return 0;
//}
//#include<stdio.h>
//enum Color
//{
//    BULE,
//    YELOW,
//    GREEN
//};
//int main()
//{
//    enum Color a=BULE;
//    return 0;
//}
//#include<stdio.h>
//union Un//联合体-共用体
//{
//    char c;
//    int i;
//};
//int main()
//{
//    union Un u;
//    printf("%d\n",sizeof(u));
//    printf("%p\n",&u);
//    printf("%p\n",&(u.c));
//    printf("%p\n",&(u.i));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    char a=97;
//    printf("%c\n",a);
//    return 0;
//}
//#include<stdio.h>
//enum Sex
//{
//    MALE,
//    FEMALE,
//    stetsa,
//    setar,
//    seraewat
//};
//int main()
//{
//    printf("%d\n",sizeof(enum Sex));
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("v   v\n v v\n  v\n");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//    printf("The size of short is %d bytes.\n",sizeof(short));
//    printf("The size of int is %d bytes.\n",sizeof(int));
//    printf("The size of long is %d bytes.\n",sizeof(long));
//    printf("The size of long long is %d bytes.\n",sizeof(long long));
//    //printf("%c\n",33);
//    //printf("abc\ndef");
//    return 0;
//}
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//    while(1)
//    {
//        char ch=getchar();
//        getchar();
//        printf("%c\n",tolower(ch));
//    }
////    printf("%o %x %s",1234,1234,"1234");
//    return 0;
//}
//#include<stdio.h>
//int main()
//{
//
//   int arr[85],n,i,k,temp=0,j;
//   scanf("%d",&n);
//   	 for(i=0;i<n;i++)
//   	 {
//   	  scanf("%d",&k);
//	  arr[i]=k;
//     }
//   	for(i=0;i<n-1;i++)
//   	{
//	     for(j=0;j<n-1-i;j++)
//    {
//		   if(arr[j]<arr[j+1])
//        {
//   	       temp=arr[j];
// 	   	   arr[j]=arr[j+1];
// 	   	   arr[j+1]=temp;
//        }
//    }
//   	}
//   	for(i=0;i<n;i++)
//   	printf("%d ",arr[i]);
//    return 0;
//}
#include<stdio.h>
int main()
{
    char arr[]="abcdef";
    printf("%c%c\b%c\n",arr[0],arr[1],arr[2]);
    printf("%s\n",arr);
    return 0;
}
