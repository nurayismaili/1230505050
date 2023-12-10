#include <stdio.h>
#include <string.h>

// Anahtar ile þifreli mesajlarýn girilmesi
void decryptMessage(char cipher[], int key) {
    int length = strlen(cipher);
    const int alphabet_size = 26;

    for (int i = 0; i < length; i++) {
        char ch = cipher[i];

        // Küçük harfse
        if (ch >= 'a' && ch <= 'z') {
            ch = 'a' + (ch - 'a' - key + alphabet_size) % alphabet_size;
        }
        // Büyük harfse
        else if (ch >= 'A' && ch <= 'Z') {
            ch = 'A' + (ch - 'A' - key + alphabet_size) % alphabet_size;
        }

        // Sonuçlarý güncelle
        cipher[i] = ch;
    }
}

int main() {
    // þifreli mesaj
    char cipher[] = "Lnlqj nludqj!";

    // Kaydýrma miktarý(anahtar)
    int key = 2;

    // þifreli mesajlarýn dizilmesi
    decryptMessage(cipher, key);

    // çözülmüþ mesajlarýn yazdýrýlmasý
    printf("Cozulmus Mesaj: %s\n", cipher);

    return 0;
}

