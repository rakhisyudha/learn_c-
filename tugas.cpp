/* #include <stdio.h>

int main()
{
    int testInteger = 5;
    testInteger = testInteger * 2 + 3; // Added operation: multiplication and addition
    printf("Number = %d\n", testInteger);
    return 0;
}

#include <stdio.h>

int main() {
    int fib[10];
    int *ptr = fib;
    *ptr = 0;
    *(ptr + 1) = 1;

    for(int i = 2; i < 10; i++) {
        *(ptr + i) = *(ptr + i - 1) + *(ptr + i - 2); // Mistake here!
    }

    for(int i = 0; i < 10; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
*/
#include <iostream>

int main() {
    int age;

    // Dapatkan Usia User
    std::cout << "Enter your age: ";
    std::cin >> age;

    // Cek Umur dan Tampilkan Pesan
    if (age < 13) {
        std::cout << "Kamu anak-anak!" << std::endl;
    } else if (age >= 13 && age < 20) {
        std::cout << "Kamu remaja!" << std::endl;
    } else if (age >= 20 && age < 60) {
        std::cout << "Kamu dewasa!" << std::endl;
    } else {
        std::cout << "Kamu sudah tua!" << std::endl;
    }

    return 0;
}
