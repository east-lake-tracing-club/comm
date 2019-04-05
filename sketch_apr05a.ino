#include <Servo.h>
#include <SoftwareSerial.h>
#include <DS3231.h>
#include<String.h>
String m1="LiYuepeng\n";
String m2="HuangYifan\n";
String m3="XiaRuichong\n";
String m4="XiaoYidi\n";
String m5="WangZheng\n";
String m6="Huangbo\n";
String m7="LiunYike\n";
String m8="Xiehao\n";
String teamname="DongHuBiaoChe";
SoftwareSerial HC12(10,11);
DS3231 current(SDA,SCL);

void setup() {
  HC12.begin(9600);
  current.setTime(12,18,0);
  current.setDate(6,1,2019);
}

void loop() {
 
  HC12.print(m1);
  HC12.print(m2);
  HC12.print(m3);
  HC12.print(m4);
  HC12.print(m5);
  HC12.print(m6);
  HC12.print(m7);
  HC12.print(m8);
  HC12.print(teamname);
  HC12.write(current.getDateStr());
  HC12.write(current.getTimeStr());

}
