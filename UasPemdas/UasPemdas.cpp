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
        return presensi * 0.2 + activity * 0.3 + exercise * 0.3 + tugas_akhir * 0.2;
        
    }

    virtual void cekKelulusan() {
        float nilai_akhir = hitungNilaiAkhir();
        if (nilai_akhir >= 75) {
            cout << "Anda lulus dengan nilai akhir: " << nilai_akhir << endl;
        }
        else {
            cout << "Anda tidak lulus dengan nilai akhir: " << nilai_akhir << endl;
        }
    }
};

class Pemrograman : public MataKuliah
{
public:
    float presensi() {
        return (0);
    }
    float activity() {
        return (0);
    }
    float exercise() {
        return (0);
    }
    float TugasAkhir() {
        return (0);
    }

    void inputNilai() {
        int x;
        int y;
        cout << "Masukkan nilai presensi: ";
        cin >> x;
        cout << "Masukkan nilai activity: ";
        cin >> x;
        cout << "Masukkan nilai exercise: ";
        cin >> x;
        cout << "Masukkan nilai tugas akhir: ";
        cin >> y;
        setX(x);
        setY(y);
        cout << "jumlah nilai akhir = " << hitungNilaiAkhir() << endl;
        cout << "cek kelulusan = " << cekKelulusan() << endl;
        cekKelulusan();
};

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


class Jaringan : public MataKuliah
{
public:
    float presensi() {
        return (0);
    }
    float activity() {
        return (0);
    }
    float exercise() {
        return (0);
    }
    float TugasAkhir() {
        return (0);
    }

    void inputNilai() {
        int x;
        int y;
        cout << "Masukkan nilai presensi: ";
        cin >> x;
        cout << "Masukkan nilai activity: ";
        cin >> x;
        cout << "Masukkan nilai exercise: ";
        cin >> x;
        cout << "Masukkan nilai tugas akhir: ";
        cin >> y;
        setX(x);
        setY(y);
        cout << "jumlah nilai akhir = " << hitungNilaiAkhir() << endl;
        cout << "cek kelulusan = " << cekKelulusan() << endl;
        cekKelulusan();
    // isi disini untuk mengisi kelas jaringan 
};

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
        cout << "Menu:" << endl;
        cout << "1. Hitung nilai Pemrograman" << endl;
        cout << "2. Hitung nilai Jaringan" << endl;
        cout << "3. Keluar" << endl;
        int choice;
        cout << "Pilih menu (1/2/3): ";
        cin >> choice;

        Pemrograman pemrograman;
        pemrograman.inputNilai();
        pemrograman.cekKelulusan();
}