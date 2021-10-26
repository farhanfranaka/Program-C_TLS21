#include <iostream>
#include <string>
using namespace std;
const auto Phi = 3.14;

struct bangunRuang
{
	float jariJari;
	float panjang;
	float lebar;
	float tinggi, tinggi2;
	float rusuk, rusuk2, rusuk3;
	float volume;
	float alas, alas2;
};

int main() 
{
	bangunRuang kubus, balok, prisma, limas, tabung, kerucut, bola;
	string pilihanBR;
	string inputUser;
	string mulai;
	string ulang;
	// Memulai program
	cout << "Mulai? (Y/N) : ";
	cin >> mulai;
	cout << "===================================" << endl;
	// Program dimulai
	if (mulai == "Y")
	{
		while (mulai == "Y")
		{
			cout << "Program mencari volume bangun ruang" << endl;
			cout << "===================================" << endl;
			cout << "===================================" << endl;
			cout << endl;
			cout << "Pilih bangun ruang" << endl;
			cout << "(ketik sesuai dengan nama bangun ruang)" << endl;
			cout << "a. Kubus" << endl;
			cout << "b. Balok" << endl;
			cout << "c. Tabung" << endl;
			cout << "d. Kerucut" << endl;
			cout << "e. Bola" << endl;
			cout << "f. Limas3 (limas segitiga)" << endl;
			cout << "g. Limas4 (limas segiempat)" << endl;
			cout << "h. Prisma (prisma segitiga)" << endl;
			// Memilih bangun ruang
			cout << "Pilihan Anda: ";
			cin >> pilihanBR;
			// Kondisi sesuai bangun raung yang dipilih
			if (pilihanBR == "Kubus")
			{
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "Apa yang ingin anda cari? Volume atau Rusuk" << endl;
				cout << "Jawaban Anda: ";
				cin >> inputUser;
				if (inputUser == "Volume")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input rusuk
					cout << "Panjang rusuk: ";
					cin >> kubus.rusuk;
					// Inisialisasi rumus volume
					kubus.volume = pow(kubus.rusuk, 3);
					cout << "Volume kubus dengan panjang rusuk " << kubus.rusuk << "m adalah: " << kubus.volume << "m3" << endl;
				}
				else if (inputUser == "Rusuk")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input volume
					cout << "Besar volume: ";
					cin >> kubus.volume;
					// Inisialisasi rumus panjang rusuk
					kubus.rusuk = cbrt(kubus.volume);
					cout << "Panjang rusuk kubus dengan besar volume " << kubus.volume << "m3 adalah: " << kubus.rusuk << "m" << endl;
				}
				else
					cout << "Input  Anda salah. Mungkin anda memilih selain volume dan rusuk. Dan Anda juga harus benar dalam penulisan kapital" << endl;
			}
			else if (pilihanBR == "Balok")
			{
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "Apa yang ingin anda cari? Volume atau Rusuk" << endl;
				cout << "Jawaban Anda: ";
				cin >> inputUser;
				if (inputUser == "Volume")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input rusuk
					cout << "Panjang rusuk pertama: ";
					cin >> kubus.rusuk;
					cout << "Panjang rusuk kedua: ";
					cin >> kubus.rusuk2;
					cout << "Panjang rusuk ketiga: ";
					cin >> kubus.rusuk3;
					// Inisialisasi rumus volume
					kubus.volume = (kubus.rusuk) * (kubus.rusuk2) * (kubus.rusuk3);
					cout << "Volume kubus dengan panjang rusuk tersebut adalah: " << kubus.volume << "m3" << endl;
				}
				else if (inputUser == "Rusuk")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input volume
					cout << "Besar volume: ";
					cin >> kubus.volume;
					cout << "Panjang rusuk pertama: ";
					cin >> kubus.rusuk;
					cout << "Panjang rusuk kedua: ";
					cin >> kubus.rusuk2;
					// Inisialisasi rumus panjang rusuk
					kubus.rusuk3 = (kubus.volume) / ((kubus.rusuk) * (kubus.rusuk2));
					cout << "Panjang rusuk kubus dengan besar volume " << kubus.volume << "m3  dan rusuk tersebut adalah: " << kubus.rusuk << "m" << endl;
				}
				else
					cout << "Input  Anda salah. Mungkin anda memilih selain volume dan rusuk. Dan Anda juga harus benar dalam penulisan kapital" << endl;
			}
			else if (pilihanBR == "Tabung")
			{
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "Apa yang ingin anda cari? Volume , Jari-jari, atau Tinggi?" << endl;
				cout << "Jawaban Anda: ";
				cin >> inputUser;
				if (inputUser == "Volume")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input jari-jari
					cout << "Panjang jari-jari: ";
					cin >> tabung.jariJari;
					cout << "Tinggi dari tabung: ";
					cin >> tabung.tinggi;
					// Inisialisasi rumus volume
					tabung.volume = Phi * (tabung.jariJari) * (tabung.jariJari) * (tabung.tinggi);
					cout << "Volume tabung dengan jari-jari " << tabung.jariJari << "m dan tinggi " << tabung.tinggi << "m adalah: " << tabung.volume << "m3" << endl;
				}
				else if (inputUser == "Jari-jari")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input volume
					cout << "Besar volume: ";
					cin >> tabung.volume;
					cout << "Tinggi dari tabung: ";
					cin >> tabung.tinggi;
					// Inisialisasi rumus mencari jari-jari
					float radius2;
					radius2 = (tabung.volume) / (Phi * (tabung.tinggi));
					tabung.jariJari = sqrt(radius2);
					cout << "Jari-jari dari tabung dengan volume " << tabung.volume << "m3 dan tinggi " << tabung.tinggi << "m adalah " << tabung.jariJari << "m" << endl;
				}
				else if (inputUser == "Tinggi")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input volume
					cout << "Besar volume: ";
					cin >> tabung.volume;
					cout << "Panjang jari-jari: ";
					cin >> tabung.jariJari;
					// Inisialisasi rumus mencari tinggi
					tabung.tinggi = (tabung.volume) / (Phi * (tabung.jariJari) * (tabung.jariJari));
					cout << "Tinggi dari tabung dengan volume " << tabung.volume << "m3 dan jari-jari " << tabung.jariJari << "m adalah " << tabung.tinggi << "m" << endl;
				}
				else
					cout << "Input  Anda salah. Mungkin anda memilih selain volume , jari-jari, dan tinggi. Dan Anda juga harus benar dalam penulisan kapital" << endl;
			}
			else if (pilihanBR == "Kerucut")
			{
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "Apa yang ingin anda cari? Volume , Jari-jari, atau Tinggi?" << endl;
				cout << "Jawaban Anda: ";
				cin >> inputUser;
				if (inputUser == "Volume")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input jari-jari
					cout << "Panjang jari-jari: ";
					cin >> kerucut.jariJari;
					cout << "Tinggi dari kerucut: ";
					cin >> kerucut.tinggi;
					// Inisialisasi rumus volume
					kerucut.volume = Phi * (kerucut.jariJari) * (kerucut.jariJari) * (kerucut.tinggi) / 3;
					cout << "Volume kerucut dengan jari-jari " << kerucut.jariJari << "m dan tinggi " << kerucut.tinggi << "m adalah: " << kerucut.volume << "m3" << endl;
				}
				else if (inputUser == "Jari-jari")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input volume
					cout << "Besar volume: ";
					cin >> kerucut.volume;
					cout << "Tinggi dari kerucut: ";
					cin >> kerucut.tinggi;
					// Inisialisasi rumus mencari jari-jari
					float radius2;
					radius2 = ((kerucut.volume) * 3) / (Phi * (kerucut.tinggi));
					kerucut.jariJari = sqrt(radius2);
					cout << "Jari-jari dari kerucut dengan volume " << kerucut.volume << "m3 dan tinggi " << kerucut.tinggi << "m adalah " << kerucut.jariJari << "m" << endl;
				}
				else if (inputUser == "Tinggi")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input volume
					cout << "Besar volume: ";
					cin >> kerucut.volume;
					cout << "Panjang jari-jari: ";
					cin >> kerucut.jariJari;
					// Inisialisasi rumus mencari tinggi
					kerucut.tinggi = (3 * (kerucut.volume)) / (Phi * (kerucut.jariJari) * (kerucut.jariJari));
					cout << "Tinggi dari kerucut dengan volume " << kerucut.volume << "m3 dan jari-jari " << kerucut.jariJari << "m adalah " << kerucut.tinggi << "m" << endl;
				}
				else
					cout << "Input  Anda salah. Mungkin anda memilih selain volume, jari-jari dan tinggi. Anda juga harus benar dalam penulisan kapital" << endl;
			}
			else if (pilihanBR == "Bola")
			{
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "Apa yang ingin anda cari? Volume atau Jari-jari?" << endl;
				cout << "Jawaban Anda: ";
				cin >> inputUser;
				if (inputUser == "Volume")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input jari-jari
					cout << "Panjang jari-jari: ";
					cin >> bola.jariJari;
					// Inisialisasi rumus volume
					bola.volume = 4 * Phi * (bola.jariJari) * (bola.jariJari) * (bola.jariJari) / 3;
					cout << "Volume bola dengan jari-jari " << bola.jariJari << "m adalah: " << bola.volume << "m3" << endl;
				}
				else if (inputUser == "Jari-jari")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input volume
					cout << "Besar volume: ";
					cin >> bola.volume;
					// Inisialisasi rumus mencari jari-jari
					float radius3;
					radius3 = ((bola.volume) * 3) / (Phi * 4);
					bola.jariJari = cbrt(radius3);
					cout << "Jari-jari dari bola dengan volume " << bola.volume << "m3 adalah " << bola.jariJari << "m" << endl;
				}
				else
					cout << "Input  Anda salah. Mungkin anda memilih selain volume dan jari-jari. Anda juga harus benar dalam penulisan kapital" << endl;
			}
			else if (pilihanBR == "Limas4")
			{
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "Apa yang ingin anda cari? Volume, Alas, atau Tinggi?" << endl;
				cout << "Jawaban Anda: ";
				cin >> inputUser;
				if (inputUser == "Volume")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input alas
					cout << "Panjang alas pertama: ";
					cin >> limas.alas;
					cout << "Panjang alas kedua: ";
					cin >> limas.alas2;
					cout << "Tinggi dari limas";
					cin >> limas.tinggi;
					// Inisialisasi rumus volume
					limas.volume = (limas.alas) * (limas.alas2) * (limas.tinggi) / 3;
					cout << "Volume limas dengan panjang alas " << limas.alas << "m dan " << limas.alas2 << "m adalah: " << limas.volume << "m3" << endl;
				}
				else if (inputUser == "Alas")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input alas
					cout << "Besar volume: ";
					cin >> limas.volume;
					cout << "Panjang alas lainnya, jika sama panjang isikan 0: ";
					cin >> limas.alas2;
					cout << "Tinggi dari limas: ";
					cin >> limas.tinggi;
					// Inisialisasi rumus volume
					if (limas.alas2 == 0)
					{
						float alasKuadrat;
						alasKuadrat = (3 * (limas.volume)) / (limas.tinggi);
						limas.alas = sqrt(alasKuadrat);
						cout << "Alas limas dengan volume " << limas.volume << "m3 dan tinggi " << limas.tinggi << "m adalah: " << limas.alas << "m3" << endl;
					}
					else
					{
						limas.alas = (3 * (limas.volume)) / ((limas.volume) * (limas.alas2));
						cout << "Alas limas lainnya dengan volume " << limas.volume << "m3, tinggi " << limas.tinggi << "m dan alas " << limas.alas2 << "m adalah: " << limas.alas << "m3" << endl;
					}
				}
				else if (inputUser == "Tinggi")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input alas
					cout << "Besar volume: ";
					cin >> limas.volume;
					cout << "Panjang alas pertama: ";
					cin >> limas.alas;
					cout << "Panjang alas kedua: ";
					cin >> limas.alas2;
					// Inisialisasi rumus volume
					limas.tinggi = (3 * (limas.volume)) / ((limas.alas) * (limas.alas2));
					cout << "Tinggi dari limas dengan volume " << limas.volume << "m3 dan alas " << limas.alas << "m dan " << limas.alas2 << "m adalah " << limas.tinggi << "m" << endl;
				}
				else
					cout << "Input  Anda salah. Mungkin anda memilih selain volume, alas, dan tinggi. Anda juga harus benar dalam penulisan kapital" << endl;
			}
			else if (pilihanBR == "Limas3")
			{
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "Apa yang ingin anda cari? Volume, Alas, atau Tinggi segitiga(Tinggi3), TinggiLimas?" << endl;
				cout << "Jawaban Anda: ";
				cin >> inputUser;
				if (inputUser == "Volume")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input alas
					cout << "Panjang alas segitiga: ";
					cin >> limas.alas;
					cout << "Panjang tinggi segitiga: ";
					cin >> limas.alas2;
					cout << "Tinggi dari limas: ";
					cin >> limas.tinggi;
					// Inisialisasi rumus volume
					limas.volume = ((limas.alas) * (limas.alas2)) * (limas.tinggi) / 6;
					cout << "Volume limas dengan panjang alas " << limas.alas << "m, tinggi alas" << limas.alas2 << "m dan tinggi limas "<< limas.tinggi << "m adalah: " << limas.volume << "m3" << endl;
				}
				else if (inputUser == "Alas")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input alas
					cout << "Besar volume: ";
					cin >> limas.volume;
					cout << "Panjang tinggi segitiga: ";
					cin >> limas.alas2;
					cout << "Tinggi dari limas: ";
					cin >> limas.tinggi;
					// Inisialisasi rumus volume
					limas.alas = (6 * (limas.volume)) / ((limas.alas2) * (limas.tinggi));
					cout << "Alas dari limas dengan volume " << limas.volume << "m3, tinggi alas " << limas.alas2 << "m dan tinggi limas " << limas.tinggi << "m adalah " << limas.alas << "m" << endl;
				}
				else if (inputUser == "TinggiLimas")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input alas
					cout << "Besar volume: ";
					cin >> limas.volume;
					cout << "Panjang alas pertama: ";
					cin >> limas.alas;
					cout << "Tinggi alas: ";
					cin >> limas.alas2;
					// Inisialisasi rumus volume
					limas.tinggi = (6 * (limas.volume)) / ((limas.alas) * (limas.alas2));
					cout << "Tinggi dari limas dengan volume " << limas.volume << "m3, panjang alas " << limas.alas << "m dan tinggi alas " << limas.alas2 << "m adalah " << limas.tinggi << "m" << endl;
				}
				else if (inputUser == "Tinggi3")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input alas
					cout << "Besar volume: ";
					cin >> limas.volume;
					cout << "Panjang alas: ";
					cin >> limas.alas;
					cout << "Tinggi limas: ";
					cin >> limas.tinggi;
					// Inisialisasi rumus volume
					limas.alas2 = (6 * (limas.volume)) / ((limas.alas) * (limas.alas2));
					cout << "Tinggi alas dari limas dengan volume " << limas.volume << "m3, panjang alas " << limas.alas << "m dan tinggi " << limas.tinggi << "m adalah " << limas.alas2 << "m" << endl;
				}
				else
				cout << "Input  Anda salah. Mungkin anda memilih selain volume, alas, dan tinggi. Anda juga harus benar dalam penulisan kapital" << endl;
			}
			else if (pilihanBR == "Prisma")
			{
				cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
				cout << "Apa yang ingin anda cari? Volume, Alas, atau Tinggi segitiga(Tinggi3), TinggiPrisma?" << endl;
				cout << "Jawaban Anda: ";
				cin >> inputUser;
				if (inputUser == "Volume")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input alas
					cout << "Panjang alas segitiga: ";
					cin >> prisma.alas;
					cout << "Panjang tinggi segitiga: ";
					cin >> prisma.alas2;
					cout << "Tinggi dari prisma: ";
					cin >> prisma.tinggi;
					// Inisialisasi rumus volume
					prisma.volume = ((prisma.alas) * (prisma.alas2)) * (prisma.tinggi) / 2;
					cout << "Volume prisma dengan panjang alas " << prisma.alas << "m, tinggi alas" << prisma.alas2 << "m dan tinggi prisma " << prisma.tinggi << "m adalah: " << prisma.volume << "m3" << endl;
				}
				else if (inputUser == "Alas")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input alas
					cout << "Besar volume: ";
					cin >> prisma.volume;
					cout << "Panjang tinggi segitiga: ";
					cin >> prisma.alas2;
					cout << "Tinggi dari prisma: ";
					cin >> prisma.tinggi;
					// Inisialisasi rumus volume
					prisma.alas = (2 * (prisma.volume)) / ((prisma.alas2) * (prisma.tinggi));
					cout << "Alas dari prisma dengan volume " << prisma.volume << "m3, tinggi alas " << prisma.alas2 << "m dan tinggi prisma " << prisma.tinggi << "m adalah " << prisma.alas << "m" << endl;
				}
				else if (inputUser == "TinggiPrisma")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input alas
					cout << "Besar volume: ";
					cin >> prisma.volume;
					cout << "Panjang alas pertama: ";
					cin >> prisma.alas;
					cout << "Tinggi alas: ";
					cin >> prisma.alas2;
					// Inisialisasi rumus volume
					prisma.tinggi = (2 * (prisma.volume)) / ((prisma.alas) * (prisma.alas2));
					cout << "Tinggi dari prisma dengan volume " << prisma.volume << "m3, panjang alas " << prisma.alas << "m dan tinggi alas " << prisma.alas2 << "m adalah " << prisma.tinggi << "m" << endl;
				}
				else if (inputUser == "Tinggi3")
				{
					cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
					cout << "Input dalam meter" << endl;
					// Input alas
					cout << "Besar volume: ";
					cin >> prisma.volume;
					cout << "Panjang alas: ";
					cin >> prisma.alas;
					cout << "Tinggi limas: ";
					cin >> prisma.tinggi;
					// Inisialisasi rumus volume
					prisma.alas2 = (2 * (prisma.volume)) / ((prisma.alas) * (prisma.alas2));
					cout << "Tinggi alas dari prisma dengan volume " << prisma.volume << "m3, panjang alas " << prisma.alas << "m dan tinggi " << prisma.tinggi << "m adalah " << prisma.alas2 << "m" << endl;
				}
				else
					cout << "Input  Anda salah. Mungkin anda memilih selain volume, alas, dan tinggi. Anda juga harus benar dalam penulisan kapital" << endl;
			}
			else
			{
				cout << "Input  Anda salah. Mungkin anda memilih selain yang ada di list. Dan Anda juga harus benar dalam penulisan kapital" << endl;
				// Melanjutkan program
			}

			cout << "-----------------------------------" << endl;
			cout << "Ulang? (Y/N) : ";
			cin >> ulang;
			mulai = ulang;
			cout << "===================================" << endl;
			cout << "===================================" << endl;
		}
		cout << "Program dihentikan" << endl;
		cout << "Programmed by Farhan Franaka " << endl;
		cout << endl;
		cout << endl;
		cout << endl;
	}
	else
		cout << "Terima Kasih ^_^";
	cout << endl;
	cout << endl;
	cout << endl;


	return 0;
	};
