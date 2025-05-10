import math

def menu():
    print("\n=== KALKULATOR KOMPLEKS ===")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Pangkat")
    print("6. Akar Kuadrat")
    print("7. Logaritma (log basis 10)")
    print("8. Faktorial")
    print("9. Keluar")

def kalkulator():
    while True:
        menu()
        pilihan = input("Pilih operasi (1-9): ")

        if pilihan == '9':
            print("Terima kasih! Keluar dari kalkulator.")
            break

        try:
            if pilihan in ['1', '2', '3', '4', '5']:
                a = float(input("Masukkan angka pertama: "))
                b = float(input("Masukkan angka kedua: "))

                if pilihan == '1':
                    print("Hasil:", a + b)
                elif pilihan == '2':
                    print("Hasil:", a - b)
                elif pilihan == '3':
                    print("Hasil:", a * b)
                elif pilihan == '4':
                    if b == 0:
                        print("Error: Pembagian dengan nol!")
                    else:
                        print("Hasil:", a / b)
                elif pilihan == '5':
                    print("Hasil:", math.pow(a, b))

            elif pilihan == '6':
                a = float(input("Masukkan angka: "))
                if a < 0:
                    print("Error: Akar dari bilangan negatif!")
                else:
                    print("Hasil:", math.sqrt(a))

            elif pilihan == '7':
                a = float(input("Masukkan angka (>0): "))
                if a <= 0:
                    print("Error: log hanya untuk angka > 0!")
                else:
                    print("Hasil:", math.log10(a))

            elif pilihan == '8':
                a = int(input("Masukkan angka bulat >= 0: "))
                if a < 0:
                    print("Error: Faktorial hanya untuk angka >= 0!")
                else:
                    print("Hasil:", math.factorial(a))

            else:
                print("Pilihan tidak valid!")

        except ValueError:
            print("Error: Input tidak valid!")
# andra laiskodat 4665
# Jalankan program
kalkulator()
