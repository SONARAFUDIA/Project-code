#include <iostream>

using namespace std;

float mol (){
    float n, g, mr;

    cout << "masukkan berat zat: ";
    cin >> g;
    cout << "masukkan berat molekul: ";
    cin >> mr;

    n = g / mr;

    return n;
}

float molalitas (){
    float m, g, mr, p;

    cout << "masukkan massa zat terlarut: ";
    cin >> g;
    cout << "masukkan massa molekul reaktif: ";
    cin >> mr;
    cout << "masukkan massa zat pelarut: ";
    cin >> p;

    m = (g * mr) / (1000 * mr);

    return m;
}

float molaritas (){
    float m, n, v;

    cout << "masukkan mol zat terlarut: ";
    cin >> n;
    cout << "masukkan volume larutan: ";
    cin >> v;

    m = n / v;

    return n;
}

int main (){
    int choice;

    cout << "Aplikasi operasi Mol, Molalitas dan Molaritas" << endl;
    cout << "Pilih operasi:\n1. Mol\n2. Molaritas\n3. Molalitas\n";
    
    cin >> choice;

    /* switch (choice) {
        case '1':
            cout << "Anda memilih operasi Mol" << endl;
            cout << "Mol: " << mol();
        case '2':
            cout << "Anda memilih operasi Molalitas" << endl;
            cout << "Molalitas: " << molalitas();
        case '3':
            cout << "Anda memilih operasi Molaritas" << endl;
            cout << "Mololaritas: " << molaritas();
        default:
            cout << "Bukan pilihan";
    } */
    if (choice == 1){
        cout << "Anda memilih operasi Mol" << endl;
        cout << "Mol: " << mol() << " mol";
    }
    else if (choice == 2){
        cout << "Anda memilih operasi Molalitas" << endl;
        cout << "Molalitas: " << molalitas() << " mol/kg";
    }
    else if (choice == 3){
        cout << "Anda memilih operasi Molaritas" << endl;
        cout << "Mololaritas: " << molaritas() << " mol/L";
    }
    else {
        cout << "Bukan pilihan" ;
    }
    
}