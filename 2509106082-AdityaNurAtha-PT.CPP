#include <iostream>
using namespace std;

bool isNumber(string s) {
    if (s.length() == 0) return false;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] < '0' || s[i] > '9') {
            return false;
        }
    }
    return true;
}

int main() {
    string nama;
    string password;
    string passwordNya = "082";
    int percobaan = 0;
    
    // LOGIN
    while (percobaan < 3) {
        cout << "LOGIN,YANG GAMON GABOLEH LOGIN!" << endl;
        cout << "Masukkan Nama     : ";
        cin >> nama;
        cout << "Masukkan Password : ";
        cin >> password;

        if (password == passwordNya) {
            cout << "Login berhasil!" << endl;
            break;
        } else {
            percobaan++;
            cout << "Password salah brok ! Percobaan ke-" << percobaan << endl;
        }
    }

    if (percobaan == 3) {
        cout << "Anda gagal login 3 kaliiii!. Program berhenti." << endl;
        return 0;
    }

    // MENU
    int pilihan;
    double nilai;
    string inputPilihan;

    do {
        cout << "MENU KONVERSI PANJANG" << endl;
        cout << "1. Meter -> Kilometer dan Centimeter" << endl;
        cout << "2. Kilometer -> Meter dan Centimeter" << endl;
        cout << "3. Centimeter -> Meter dan Kilometer" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih menu (1-4): ";
        cin >> inputPilihan;

        if (!isNumber(inputPilihan)) {
        cout << "Input harus integer!" << endl;
        continue;
}

pilihan = stoi(inputPilihan);

        switch (pilihan) {
            case 1:
                cout << "Masukkan nilai dalam Meter: ";
                cin >> nilai;
                cout << "Hasil: " << nilai / 1000 << " Kilometer" << endl;
                cout << "       " << nilai * 100 << " Centimeter" << endl;
                break;

            case 2:
                cout << "Masukkan nilai dalam Kilometer: ";
                cin >> nilai;
                cout << "Hasil: " << nilai * 1000 << " Meter" << endl;
                cout << "       " << nilai * 100000 << " Centimeter" << endl;
                break;

            case 3:
                cout << "Masukkan nilai dalam Centimeter: ";
                cin >> nilai;
                cout << "Hasil: " << nilai / 100 << " Meter" << endl;
                cout << "       " << nilai / 100000 << " Kilometer" << endl;
                break;

            case 4:
                cout << "Terima kasih ya eyy. Program selesai." << endl;
                break;

            default:
                cout << "Pilihan nya gada!" << endl;
        }

    } while (pilihan != 4);

    return 0;
}