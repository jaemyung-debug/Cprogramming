# 실습 과제 1
<img width="409" height="92" alt="image" src="https://github.com/user-attachments/assets/29605257-6c6a-4a0a-9278-6e9700114f91" />
<img width="223" height="188" alt="image" src="https://github.com/user-attachments/assets/3d9c6457-1d98-4df8-8945-0affd45c39ac" />

# 실습 과제 2
<img width="270" height="353" alt="image" src="https://github.com/user-attachments/assets/8c8f68e5-313b-4068-8ceb-44d2c951e16f" />

# 실습 과제 3
<img width="280" height="374" alt="image" src="https://github.com/user-attachments/assets/ebad9b87-52ed-412e-94f5-6ff9451ebcef" />

# 실습 과제 4
## 문제 발생 이유
- fscanf 함수에서 %s는 공백 직전까지 문자열을 읽고 공백은 버퍼에 남겨둔다. 이때 %c 앞에 공백이 없기 때문에 성별이 아닌 버퍼에 남아 있는 공백이 gender에 저장된다. 그다음 %d는 문자 M을 정수로 입력받을 수 없으므로 age에 값이 저장되지 않는다. 따라서 첫 번째 출력에서는 초기화되지 않은 쓰레기값이 출력된다.
