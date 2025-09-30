public class Mekanik extends Manusia {
    private String spesialisasi;
    private int pengalamanTahun;

    public Mekanik(String nama, String alamat, String spesialisasi, int pengalamanTahun) {
        super(nama, alamat);
        this.spesialisasi = spesialisasi;
        this.pengalamanTahun = pengalamanTahun;
    }

    public String getSpesialisasi() {
        return spesialisasi;
    }

    public void setSpesialisasi(String spesialisasi) {
        this.spesialisasi = spesialisasi;
    }

    public int getPengalamanTahun() {
        return pengalamanTahun;
    }

    public void setPengalamanTahun(int pengalamanTahun) {
        this.pengalamanTahun = pengalamanTahun;
    }
}
