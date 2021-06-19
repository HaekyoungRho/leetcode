//383. Ransom Note
bool canConstruct(char* ransomNote, char* magazine) {
    int a[26];
    int b[26];
    int k = 0;

    for (int i = 0; i < 26; i++) {
        a[i] = 0;
        b[i] = 0;
    }
    for (int i = 0; i < strlen(ransomNote); i++) {
        a[ransomNote[i] - 'a']++;
    }
    for (int i = 0;i < strlen(magazine);i++) {
        b[magazine[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (a[i] != 0) {
            if (a[i] <= b[i])
                k += a[i];
        }
    }
    if (k == strlen(ransomNote))
        return true;
    return false;
}