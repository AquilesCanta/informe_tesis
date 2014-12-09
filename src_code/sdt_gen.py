
TS_ID_ORIG = 1850

SERVICE_UNIVERSIDAD_ID = 60000
SERVICE_UNIVERSIDAD_PMT_PID = 1000 
SERVICE_LA_PLATA_ID = 60001
SERVICE_LA_PLATA_PMT_PID = 1001

sdt = service_description_section(
	transport_stream_id = TS_ID_ORIG,
	original_network_id = TS_ID_ORIG,
	service_loop = [

		# ...
		# Se omiten los servicios que ya contenía el flujo de transporte

		service_loop_item(
			service_ID = SERVICE_UNIVERSIDAD_ID,
			EIT_schedule_flag = 0,
			EIT_present_following_flag = 0,
			running_status = 0,
			free_CA_mode = 0,
			service_descriptor_loop = [
				service_descriptor(
					service_type = 1,
					service_provider_name = "",
					service_name = "TV Universidad",
				),
			],
		),

		service_loop_item(
			service_ID = SERVICE_LA_PLATA_ID,
			EIT_schedule_flag = 0,
			EIT_present_following_flag = 0,
			running_status = 0,
			free_CA_mode = 0,
			service_descriptor_loop = [
				service_descriptor(
					service_type = 1,
					service_provider_name = "",
					service_name = "TV La Plata",
				),
			],
		),
	],
	version_number = 2,
	section_number = 0,
	last_section_number = 0,
)