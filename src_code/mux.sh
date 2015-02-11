packet_replacer.out -s frec_527.ts -o frec_527_with_pat.ts -p pat.ts 
packet_replacer.out -s frec_527_with_pat.ts -o frec_527_with_pat_and_sdt.ts -p sdt.ts 
packet_inserter.out -s frec_527_with_pat_and_sdt.ts -o frec_527_with_pat_sdt_and_uni_pmt.ts -p pmt_universidad.ts -i 190
packet_inserter.out -s frec_527_with_pat_sdt_and_uni_pmt.ts -o frec_527_final.ts -p pmt_la_plata.ts -i 190