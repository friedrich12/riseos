#include <stdio.h>

#include <kernel/tty.h>
#include <kernel/pmm.h>

void kernel_main(void) {
    init_bitmap();
    terminal_initialize();
    printf("Hello, kernel World!\n");
	//TODO: Handle newlines and check if PMM actually works
    //printf("Testing memeory manager\n");
    //for(int i = 0; i < 100; i++){
    //    physaddr_t frame = kalloc_page_frame();
     //   printf("Made frame at: %s \n", frame);
   // }
}
