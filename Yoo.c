#include <stdio.h>
#include <unistd.h>

void delay(int seconds) {
    sleep(seconds);
}

int main() {

    printf("\033[2J\033[H");

    printf("       *        .       *\n");
    printf("   .       *       .        *\n");
    delay(1);

    printf("\n");
    printf("        🎉🎉🎉🎉🎉🎉🎉🎉\n");
    printf("      🎂 HAPPY BIRTHDAY 🎂\n");
    printf("        🎉🎉🎉🎉🎉🎉🎉🎉\n");
    delay(1);

    printf("\n");
    printf("          B E L L E\n");
    delay(1);

    printf("\n");
    printf("          M A R I E 💖\n");
    delay(1);

    printf("\n");
    printf("     🎈             🎈\n");
    printf("       🎈         🎈\n");
    printf("         🎈     🎈\n");
    printf("           🎈 🎈\n");
    delay(1);

    printf("\n");
    printf("      =================\n");
    printf("        |  |  |  |\n");
    printf("        |  |  |  |\n");
    printf("       🕯️ 🕯️ 🕯️ 🕯️\n");
    printf("     🍰🍰🍰🍰🍰🍰🍰🍰🍰🍰\n");
    printf("     🍰 HAPPY BIRTHDAY 🍰\n");
    printf("     🍰   BELLE MARIE  🍰\n");
    printf("     🍰🍰🍰🍰🍰🍰🍰🍰🍰🍰\n");

    delay(1);

    printf("\n");
    printf("✨✨✨✨✨✨✨✨✨✨✨✨\n");
    printf("       HAPPY BIRTHDAY!\n");
    printf("          BELLE MARIE 💕\n");
    printf("✨✨✨✨✨✨✨✨✨✨✨✨\n");

    printf("\n");
    printf("May your day be filled with\n");
    printf("happiness, laughter, and love! 💖\n");
    printf("May all your dreams come true! ✨\n");

    printf("\n");
    printf("🎉🎂🎈 HAPPY BIRTHDAY! 🎈🎂🎉\n");

    return 0;
}