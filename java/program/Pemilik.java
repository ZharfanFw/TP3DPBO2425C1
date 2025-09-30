public class Pemilik extends Manusia {
    private Bengkel bengkel;

    public Pemilik(String nama, String alamat, Bengkel bengkel) {
        super(nama, alamat);
        this.bengkel = bengkel;
    }

    public Bengkel getBengkel() {
        return bengkel;
    }

    public void setBengkel(Bengkel bengkel) {
        this.bengkel = bengkel;
    }
}
