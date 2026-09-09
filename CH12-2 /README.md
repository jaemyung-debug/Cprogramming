#실습 과제 1
-| 수식 | 결과값 | 결과값의 자료형 |
-|---|---|---|
-| &ch | 100 | char* |
-| &in | 101 | int* |
-| &db | 105 | double* |
-| *&ch | A | char |
-| *&in | 10 | int |
-| *&db | 3.4 | double |

#실습 과제 2
<br>
-int a = -100;
>정수형 a -100으로 초기화

-char b = 'A';
>문자형 b A로 초기화

-double c = 3.14;
>실수형 c 3.14로 초기화

-int *pa = &a;
>포인터 pa가 a의 주소를 가르킴

-char *pb = &b;
>포인터 pb가 b의 주소를 가르킴

-double *pc = &c;
>포인터 pc가 c의 주소를 가르킴

-printf("a = %d\n", *pa);
>포인터 pa 즉 a의 실제 값 출력

-printf("b = %c\n", *pb);
>포인터 pb 즉 b의 실제 값 출력


-printf("c = %lf\n", *pc);
>포인터 pc 즉 c의 실제 값 출력


-return 0;
>프로그램 종료

#실습 과제 2-1
<br>



#실습 과제 3
<br>
-*ptr로 125번지에 값을 저장하려고 하면 어떠한 값이 있는지 모르는 메모리에 접근하게 되어 실행 오류가 발생하고 프로그램이 중단된다.

#실습 과제 4
<br>
-int num1 = 20, num2=30;
>num1은 20, num2는 30으로 초기화

-int* pi =NULL;
>포인터 pi NULL값으로 초기화

-pi = &num1;
>num1 주소를 pi에 가져옴

-(*pi) += 2;
>pi가 가르키는 값에 2를 더함

-pi = &num2;
>num2 주소를 pi에 가져옴

-(*pi) -= 10;
>pi가 가르키는 값에 -10을 더함

-printf("%d*%d=%d\n", num1, num2, num1*num2);
>num1과 num2의 값을 구하고 그 값을 표출함

-return 0;
>프로그램 종료

#실습과제4-1

