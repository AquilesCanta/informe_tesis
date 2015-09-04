pmt_universidad = program_map_section(
	program_number = SERVICE_UNIVERSIDAD_ID,
	PCR_PID = 8191,
	program_info_descriptor_loop = [
		elementary_streams_relocation_descriptor(target_multicast_group="239.1.1.1",
		                                         target_multicast_port=1000)
	],
	stream_loop = [],
	version_number = 0,
	section_number = 0,
	last_section_number = 0,
)

pmt_la_plata = program_map_section(
	program_number = SERVICE_LA_PLATA_ID,
	PCR_PID = 8191,
	program_info_descriptor_loop = [
		elementary_streams_relocation_descriptor(target_multicast_group="239.1.1.2",
		                                         target_multicast_port=1000)
	],
	stream_loop = [],
	version_number = 0,
	section_number = 0,
	last_section_number = 0,
)
