# 실습 과제1
## 함수의 인자와 매개변수의 차이를 설명하라.
- 인자는 호출하는 함수 쪽에서 선언된 변수이고 매개변수는 호출되는 함수 쪽에서 선언된 변수이다.

## 함수가 호출될 때 컴퓨터에 의해 자동으로 실행되는 2가지를 설명하라.
- 매개변수를 메모리에 할당, 매개변수를 인자로 초기화한다.

## 값에 의한 함수 호출 방식의 문제점을 설명하라.
- 값에 의한 호출 방식으로 다른 함수에서 선언된 지역변수의 값을 변경하는 것은 불가능하다.

## 주소에 의한 함수 호출 방식이 필요한 경우를 설명하라
- 원본이 전달될 필요가 있을 때 주소의 의한 호출 즉 포인터가 필요하다.

# 실습 과제2
<img width="655" height="237" alt="image" src="https://github.com/user-attachments/assets/7819ba87-ee82-4408-a1fc-7afc4f4c4fe1" />

- 위 사진과 같이 수정된 함수를 호출하고 실행시켜도 실제 number메모리에 들어있는 값은 변하지 않는다.

# 실습 과제 2-1
- <img width="254" height="131" alt="image" src="https://github.com/user-attachments/assets/3072f5f5-c195-4c10-87a9-fa5d9cbb21e5" />

# 실습 과제 3
<img width="371" height="152" alt="image" src="https://github.com/user-attachments/assets/6bda96a9-d653-49cc-b0bb-43188a0d06b8" />

# 실습 과제 4
| main 함수 호출 후 | → | swap 함수 호출 직후 | → | ① 실행 | → | ② 실행 | → | ③ 실행 | → | swap 함수 종료 후 |
|---|---|---|---|---|---|---|---|---|---|---|
| x → 10<br>y → 20<br>z → 30 | → | x → 10<br>y → 20<br>z → 30<br>px → 92<br>py → 96<br>k | → | k → 100 | → | a → 200<br>b → 200 | → | a → 200<br>b → 100 | → | a → 200<br>b → 100 |

# 실습 과제 4-1
<img width="372" height="153" alt="image" src="https://github.com/user-attachments/assets/5bef3dbe-6059-47f5-8bb8-0b861013c5be" />


# 실습 과제5

