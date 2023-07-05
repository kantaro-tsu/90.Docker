class Bench {
    int n0;

    Bench() {
        n0 = 0;
    }

    int calc(int n) {
        int n1 = n0 + (1 - 2 * (n % 2));
        n0 = n;
        return n1;
    }
}

class BenchJava {
    public static void main(String[] args) {
        // Declaration
        int  n = 1;
        long t1, t2;

        // Instantiation
        Bench objBench = new Bench();

        // Main process
        t1 = System.currentTimeMillis();
        for(int i = 0; i < Integer.MAX_VALUE; i++) {
            n = objBench.calc(n);
        }
        t2 = System.currentTimeMillis();
        System.out.printf("Java\t-> %8.4f secs.\n", (float)(t2 - t1)/1000);
    }
}