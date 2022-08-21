#include "types.h"
#include "stat.h"
#include "user.h"

int main(void){
    printf(1, "La cantidad de procesos en ejecución en la CPU es %d\n", getprocs());
    exit();
}