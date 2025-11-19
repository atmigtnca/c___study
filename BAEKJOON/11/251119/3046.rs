use std::io::{stdout, Write, BufWriter};

fn main() {
	let stdout = stdout();
	let mut writer = BufWriter::new(stdout);

	for i in 0..100_000 {
		writeln!(writer, "{i}").unwrap();
	}
}