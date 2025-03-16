# TP3DPBO2025C2
# Janji
Saya Kasyful Haq Bachariputra dengan NIM 2304820 mengerjakan Tugas Praktikum 3 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

# Diagram
![diagram](https://github.com/user-attachments/assets/b51ec187-f255-411e-95f1-860245b50752)

# Penjelasan Program dan Alur
## Program
Pada program ini, terdiri dari 5 class, yaitu:
### BasicMove
    Atribut:
    - name (string): Berisi nama dari gerakan
    - duration (int): Berisi durasi dari gerakan (dalam detik)
    - difficulty (string): Berisi tingkat kesulitan dari gerakan tersebut
    Method:
    - Setter dan Getter untuk atribut yang ada
### Spin (child class dari BasicMove)
    Atribut:
    - spinSpeed (int): Berisi kecepatan berputar dari gerakan
    Method:
    - Setter dan Getter utnuk atribut spinSpeed
    Alasan Spin inherit dari BasicMove adalah Spin masih tetap sama objeknya dengan BasicMove (gerakan) serta Spin dapat menggunakan semua atribut yang ada di BasicMove
### Step (child class dari BasicMove)
    Atribut:
    - stepIntensity (int): Berisi seberapa keras gerakan step, 1 = low, 2 = medium, 3 = high
    Method:
    - Setter dan Getter untuk atribut stepIntensity
    Alasan Step inherit dari BasicMove adalah Step masih tetap sama objeknya dengan BasicMove (gerakan) serta Step dapat menggunakan semua atribut yang ada di BasicMove
### Jump (child class dari BasicMove)
    Atribut:
    - jumpHeight (int): Berisi seberapa tinggi gerakan lompat ke atas
    Method:
    - Setter dan Getter untuk jumpHeight
    Alasan Jump inherit dari BasicMove adalah Jump masih tetap sama objeknya dengan BasicMove (gerakan) serta Jump dapat menggunakan semua atribut yang ada di BasicMove
### Dancer
    Atribut:
    - nameDancer (string): Berisi nama dari penari
    - ageDancer (int): Berisi umur dari penari
    - spinMove (list of Spin): Berisi list of objek dari Spin, menunjukkan gerakan Spin apa saja yang sudah dipelajari oleh dancer
    - stepMove (list of Step): Berisi list of objek dari Step, menunjukkan gerakan Step apa saja  yang sudah dipelajari oleh dancer
    - jumpMove (list of Jump): Berisi list of objek dari Jump, meunjukkan gerakan jump apa saja yang sudah dipelajari oleh dancer
    Method:
    - Setter dan Getter untuk atribut nameDancer dan ageDancer
    - learnSpin(string, int, string, int): Method untuk menambah objek Spin ke list of Spin
    - learnStep(string, int, string, int): Method untuk menambah objek Step ke list of Step
    - learnJump(string, int, string, int): Method untuk menambah objek Jump ke list of Jump
    - showMoves (): Method untuk menampilkan nama dan semua gerakan yang telah dipelajari oleh dancer
## Alur
Pertama-tama, akan terdapat input untuk nama dari dancer dan umur dari dancer.
Kemudian, instansiasi dancer baru.
Lalu, akan diminta inputtan untuk berapa kali input gerakan Spin (n), Step (m), serta Jump (k).
Lalu, terdapat for loop yang mengiterasi sebanyak n, m, dan k untuk masing-masing gerakan berisi inputtan untuk nama gerakan, durasi gerakan, difficulty, serta atribut unik tiap class (spinSpeed, stepIntensity, dan jumpHeight).
Terakhir, akan dipanggil method showMoves() untuk menampilkan semua gerakan yang diketahui oleh dancer.

# Dokumentasi CPP
![WhatsApp Image 2025-03-16 at 00 44 33_ad330f8f](https://github.com/user-attachments/assets/c68e39c5-26c2-4bad-85e8-1f10ba0c8d08)

# Dokumentasi Python
![WhatsApp Image 2025-03-16 at 05 38 09_6301c06e](https://github.com/user-attachments/assets/865df33c-dda7-4d2f-8cb3-ea4c7e10a5e1)
