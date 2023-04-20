# 4.20
Arduino Communication

+ ChattingTest_UART
  + 각 아두이노의 GND를 서로 연결하고 10번핀을 11번핀에 11번핀을 10번핀에 연결해서 채팅을 주고받는 통신을 한다.
  
+ I2C_Receive_Test & I2C_Transmit_Test
  + 서로의 VCC와 GND를 연결하고 A4(SDA),A5(SCL)를 연결하여 ASCII값을 'A'부터 'z'까지 출력한다.
  
+ SPI_Receive_Test & SPI_Transmit_Test
  + 각 아두이노의 GND를 서로 연결하고 10,11,12,13번핀을 또 다른 아두이노의 각 10,11,12,13번핀에 연결해서 'K'값을 입력받을 때마다 ASCII값을 'A'부터 'z'까지 출력한다.
  
+ UART_Receive_Test & UART_Transmit_Test
  + 각 아두이노의 GND를 서로 연결하고 RX핀을 TX핀에 연결해서 ASCII값을 'A'부터 'z'까지 출력한다.
  
