#include <std/io.h>

void k_main()
{
  vga_init();
  vga_clean();

  printf("Booting Kernel...\n");
  
  printf("\n    (\\_/) \n");
  printf("   ( o.o ) \n");
  printf("   /  |  \\ <- This is Neko! Say 'Hi' to Neko\n");
  printf("  /   |   \\ \n");
  printf(" (    |    )\n\n");
  
  printf("VGA...   [ OK ]\n");

  printf("\nNeko Say -> Welcome to Neko Kernel! :D\n");
}
