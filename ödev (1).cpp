#include <stdio.h>
#include <string.h>

// Anahtar ile �ifreli mesajlar�n girilmesi
void decryptMessage(char cipher[], int key) {
    int length = strlen(cipher);
    const int alphabet_size = 26;

    for (int i = 0; i < length; i++) {
        char ch = cipher[i];

        // K���k harfse
        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + (ch - 'a' - key + alphabet_size) % alphabet_size;
        }
        // B�y�k harfse
        else if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + (ch - 'A' - key + alphabet_size) % alphabet_size;
        }

        // Sonu�lar� g�ncelle
        cipher[i] = ch;
    }
}

int main() {
    // �ifreli mesaj
    char cipher[] = "Lnlqj nludqj!";

    // Kayd�rma miktar�(anahtar)
    int key = 2;

    // �ifreli mesajlar�n dizilmesi
    decryptMessage(cipher, key);

    // ��z�lm�� mesajlar�n yazd�r�lmas�
    printf("Cozulmus Mesaj: %s\n", cipher);

    return 0;
}

