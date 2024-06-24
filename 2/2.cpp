#include <iostream>
using namespace std;

class MataKuliah {
private:
    float presensi;
    float activity;
    float exercise;
    float tugas_akhir;

public:
    MataKuliah() {
        presensi = 0.0;
        activity = 0.0;
        exercise = 0.0;
        tugas_akhir = 0.0;
    }

    virtual void namaMataKuliah() {
        // You can add more functionality here
        return;
    }

    void setPresensi(float nilai) {
        presensi = nilai;
    }

    float getPresensi() {
        return presensi;
    }

    void inputNilai() {
        cout << "Masukkan nilai presensi: ";
        cin >> presensi;
        cout << "Masukkan nilai activity: ";
        cin >> activity;
        cout << "Masukkan nilai exercise: ";
        cin >> exercise;
        cout << "Masukkan nilai tugas akhir: ";
        cin >> tugas_akhir;
    }

    virtual float hitungNilaiAkhir() {
        // You can implement the calculation based on your requirements
        return 0.0;
    }

    virtual void cekKelulusan() {
        // You can implement the pass/fail check based on the calculated final grade
    }
};

class Pemrograman : public MataKuliah {
public:
    float hitungNilaiAkhir() override {
        // Implement the calculation for Pemrograman
        return presensi * 0.2 + activity * 0.3 + exercise * 0.3 + tugas_akhir * 0.2;
    }

    void cekKelulusan() override {
        float nilai_akhir = hitungNilaiAkhir();
        if (nilai_akhir >= 75) {
            cout << "Anda lulus dengan nilai akhir: " << nilai_akhir << endl;
        }
        else {
            cout << "Anda tidak lulus dengan nilai akhir: " << nilai_akhir << endl;
        }
    }
};

class Jaringan : public MataKuliah {
public:
    float hitungNilaiAkhir() override {
        // Implement the calculation for Jaringan
        return activity * 0.4 + exercise * 0.6;
    }

    void cekKelulusan() override {
        float nilai_akhir = hitungNilaiAkhir();
        if (nilai_akhir >= 75) {
            cout << "Anda lulus dengan nilai akhir: " << nilai_akhir << endl;
        }
        else {
            cout << "Anda tidak lulus dengan nilai akhir: " << nilai_akhir << endl;
        }
    }
};

int main() {
    while (true) {
        cout << "Menu:" << endl;
        cout << "1. Hitung nilai Pemrograman" << endl;
        cout << "2. Hitung nilai Jaringan" << endl;
        cout << "3. Keluar" << endl;
        int choice;
        cout << "Pilih menu (1/2/3): ";
        cin >> choice;

        if (choice == 1) {
            Pemrograman pemrograman;
            pemrograman.inputNilai();
            pemrograman.cekKel