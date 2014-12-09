pat = program_association_section(
	transport_stream_id = TS_ID_ORIG,
	program_loop = [
		program_loop_item(
			# Programa especial para la tabla NIT
			program_number = 0,
			PID = 16,
		),
		program_loop_item(
			program_number = SERVICE_1_ID,
			PID = SERVICE_1_PMT_PID,
		),
		program_loop_item(
			program_number = SERVICE_2_ID,
			PID = SERVICE_2_PMT_PID,
		),
		program_loop_item(
			program_number = SERVICE_3_ID,
			PID = SERVICE_3_PMT_PID,
		),
		program_loop_item(
			program_number = SERVICE_UNIVERSIDAD_ID,
			PID = SERVICE_UNIVERSIDAD_PMT_PID,
		),
		program_loop_item(
			program_number = SERVICE_LA_PLATA_ID,
			PID = SERVICE_LA_PLATA_PMT_PID,
		),
	],
	version_number = 3,
	section_number = 0,
	last_section_number = 0,
)
