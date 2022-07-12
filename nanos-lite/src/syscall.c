#include <common.h>
#include "syscall.h"
//自己加
//extern void yield();
//extern void halt(); 
size_t write( int  fd, const void * buf,size_t count){
        if((fd == 1) | (fd == 2)){
          for(int i=0; i < count-1; i++){
            
            char* out = (char*) buf;
              putch ((out)[i]);
          }
          return 0;
        }
        else return -1;
        //putch('o');
};
  
void do_syscall(Context *c) {
  uintptr_t a[4];
  a[0] = c->GPR1;  //a7
  a[1] = c->GPR2;  //a0
  a[2] = c->GPR3;  //a1
  a[3] = c->GPR4;  //a2
  //a[4] = c->GPRx;
  printf("gpr a0 = %lx\n",a[1]);
  switch (a[0]) {
    case 1:{
      yield();
      c->GPRx = 0;
      putch('1');
      printf("gpr a0 = %lx",a[0]);
      break;
      
      }
    case 0:{
      halt(c->GPRx); 
      printf("gpr a0 = %lx",a[0]);
      break; //是否指向这个宏存疑，以及每个宏代表的寄存器
    }
    case 4:{
      printf("gpr a0 = %lx",a[0]);
      c->GPRx = write((int)a[1],(void*)a[2],(size_t)a[3]);
      break;
      
    }
    default: panic("Unhandled syscall ID = %d", a[0]);
  }
}
