bool fnc_elementaries_relocation( ElementariesRelocationDescriptor &desc, BYTE *descPayload){
	DTV_ASSERT( DESC_TAG(descPayload) == ident::elementaries_relocation );
	std::string ip;
	ip += boost::lexical_cast<std::string>(static_cast<int>(descPayload[2]));
	ip += ".";
	ip += boost::lexical_cast<std::string>(static_cast<int>(descPayload[3]));
	ip += ".";
	ip += boost::lexical_cast<std::string>(static_cast<int>(descPayload[4]));
	ip += ".";
	ip += boost::lexical_cast<std::string>(static_cast<int>(descPayload[5]));
	desc.ipMulticast = ip;
	desc.port = (descPayload[6] << 8) + descPayload[7];
	LTRACE("desc", "Elementaries Relocation descriptor found. IP = %s PORT = %d", ip.c_str(), desc.port);
	return true;
}