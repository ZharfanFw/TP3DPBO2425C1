public class Main {
    public static void main(String[] args) {
        // ====== DATA BENGKEL & PEMILIK ======
        Bengkel bengkel = new Bengkel("Bengkel Jaya Motor", "Jl. Merdeka No. 123");
        Pemilik pemilik = new Pemilik("Budi Santoso", "Bandung", bengkel);

        // ====== DATA MEKANIK ======
        Mekanik mekanik1 = new Mekanik("Andi", "Cimahi", "Mesin Mobil", 5);
        Mekanik mekanik2 = new Mekanik("Rudi", "Cibiru", "Motor", 3);

        // ====== DATA KENDARAAN ======
        Mobil mobil1 = new Mobil("D1234AB", "Toyota", 2020, "Avanza", 1500, "MPV", 5);
        Motor motor1 = new Motor("Z9876XY", "Honda", 2019, "CBR150R", 150, "Sport");

        // ====== DATA SERVIS ======
        Servis servis1 = new Servis("Ganti Oli Mobil", 350000, mekanik1, mobil1);
        Servis servis2 = new Servis("Servis Mesin Motor", 250000, mekanik2, motor1);

        // Masukkan servis ke dalam bengkel
        bengkel.addServis(servis1);
        bengkel.addServis(servis2);

        // ====== CETAK DATA ======
        System.out.println("=== DATA PEMILIK BENGKEL ===");
        System.out.println("Nama Pemilik : " + pemilik.getNama());
        System.out.println("Alamat       : " + pemilik.getAlamat());
        System.out.println("Bengkel      : " + pemilik.getBengkel().getNamaBengkel());
        System.out.println();

        System.out.println("=== DATA BENGKEL ===");
        System.out.println("Nama Bengkel : " + bengkel.getNamaBengkel());
        System.out.println("Alamat       : " + bengkel.getAlamatBengkel());
        System.out.println();

        System.out.println("=== DAFTAR SERVIS DI BENGKEL ===");
        for (Servis s : bengkel.getDaftarServis()) {
            System.out.println("Jenis Servis : " + s.getJenisServis());
            System.out.println("Biaya        : Rp " + s.getBiaya());
            System.out.println("Mekanik      : " + s.getMekanik().getNama() + " (Spesialisasi: " + s.getMekanik().getSpesialisasi() + ")");
            System.out.println("Kendaraan    : " + s.getKendaraan().getMerk() + " " + s.getKendaraan().getModel() +
                               " (" + s.getKendaraan().getPlatNomor() + ")");
            System.out.println("---------------------------------");
        }
    }
}
