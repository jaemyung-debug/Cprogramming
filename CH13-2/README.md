# 실습과제 1번
## C언어에서 문자를 메모리에 저장하는 방식에 대하여 설명하라 (아스키코드참고)
- C언어에서는 문자를 char 자료형을 사용하여 메모리에 저장하며, 문자는 ASCII 코드와 같은 문자 코드에 대응하는 정수값으로 저장된다.

## 널 문자의 용도를 설명하라.
- 문자열의 끝을 나타내는 문자로, 문자열이 어디에서 끝나는지 판단하는 데 사용된다.
  
## 메모리에 저장된 문자열의 끝을 찾는 방법을 설명하라.
- 메모리에 저장된 문자열은 문자열의 끝에 널 문자('\0')가 저장된다. 따라서 문자열을 처음부터 하나씩 검사하여 '\0'을 만나면 문자열의 끝으로 판단한다.
  
## 문자열의 길이를 구하는 알고리즘을 설명하라.
- 문자열의 첫 번째 문자부터 시작한다. 현재 문자가 '\0'인지 확인한다. '\0'이 아니면 길이를 1 증가시키고 다음 문자로 이동한다. '\0'을 만나면 반복을 종료한다. 지금까지 센 개수가 문자열의 길이이다.


# 실습과제 2번
## 실행결과
<img width="338" height="261" alt="image" src="https://github.com/user-attachments/assets/49a0765b-720f-47cd-b344-f24bcd924963" />

# 실습과제 3번
## 실행결과
<img width="385" height="181" alt="image" src="https://github.com/user-attachments/assets/31898809-c75d-4db5-96d0-3ebcf5354bc0" />

# 실습과제 4번
## 실행결과
<img width="434" height="203" alt="image" src="https://github.com/user-attachments/assets/d20f21c2-98f2-4292-bfb9-efd70d9b96a8" />

# 실습과제 5번
## 실행결과
<img width="447" height="132" alt="image" src="https://github.com/user-attachments/assets/7777a64c-3c8f-4dcd-b64a-2afcd3c067df" />
