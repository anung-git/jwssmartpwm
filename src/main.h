// #ifndef MAIN_H
// #define MAIN_H
// #endif /* DMD_H_ */
#include <Arduino.h>
void refres(byte mode);
void tampil_hari(unsigned char a);
void tulis_rtc(void );
void tampil_text(int _alamat_text);
void tampil_segmen();
void baca_jadwal(int daerah );
void shiftOut_cepat( uint8_t valU);
void alarm_on(byte sholat);
void tampil_alarm(byte AL);
void alarm(void);
void tombol();
int set_parameter(byte _nama_set ,int _nilai,int _bawah, int _atas);
void set_waktu(byte a,int b,int c);
void tunggu_down();
void tunggu_up();
void tunggu_menu();
void baca_rtc( void );
void reset ();
void display_eprom(int add);