bool fnc_elementary_streams_relocation(ElementaryStreamsRelocationDescriptor &desc,
	                                   BYTE *descPayload){
	DTV_ASSERT(DESC_TAG(descPayload)
		       == ident::elementary_streams_relocation );
	std::string ip;
	using boost::lexical_cast;
	using std::string;
	ip += lexical_cast<string>(static_cast<int>(descPayload[2]));
	ip += ".";
	ip += lexical_cast<string>(static_cast<int>(descPayload[3]));
	ip += ".";
	ip += lexical_cast<string>(static_cast<int>(descPayload[4]));
	ip += ".";
	ip += lexical_cast<string>(static_cast<int>(descPayload[5]));
	desc.ipMulticast = ip;
	desc.port = (descPayload[6] << 8) + descPayload[7];
	LTRACE("desc",
		   "Elementary Streams Relocation Descriptor found. IP = %s PORT = %d",
		   ip.c_str(), desc.port);
	return true;
}