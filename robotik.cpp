// NAMA		: Farrell Matthew Lim
// NRP		: 5025221258
// Jurusan	: Teknik Informatika

#include <iostream>
#include <cmath>

#define GRAVITASI 10 //10 m/s^2
#define START_PENGUKURAN 1 //pengukuran dimulai dari 1 meter
#define SUDUT 45 //sudut elevasi tembakan

int main() {
  int kecepatan;
  scanf("%d", &kecepatan);

  if(kecepatan<=30 && kecepatan>=21) kecepatan-=5;
  else if(kecepatan<=20 && kecepatan>=11) kecepatan-=3;
  else if(kecepatan<=10 && kecepatan>=0) kecepatan-=1;

  int jarak;
  float vtangensialroller;
  jarak=(pow(kecepatan, 2))/GRAVITASI;
  if(kecepatan<=30 && kecepatan>=21) vtangensialroller=sqrt(jarak*GRAVITASI)+5;
  else if(kecepatan<=20 && kecepatan>=11) vtangensialroller=sqrt(jarak*GRAVITASI)+3;
  else if(kecepatan<=10 && kecepatan>=0)  vtangensialroller=sqrt(jarak*GRAVITASI)+1;

  printf("%d %.4f", jarak, vtangensialroller);
  	
  return 0;
}