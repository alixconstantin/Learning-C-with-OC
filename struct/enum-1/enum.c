#include <stdio.h>

typedef enum Volume
{
    FAIBLE = 1,
    MOYEN,
    FORT
} Volume;

int main() {
    Volume volume_sonore = MOYEN;
    printf("Le volume sonore est défini à : %d\n", volume_sonore);

    volume_sonore = FORT;
    printf("Le volume sonore est maintenant défini à : %d\n", volume_sonore);

    return 0;
}

