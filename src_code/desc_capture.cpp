
bool Service::process( const desc::Descriptors &descriptors ) {
	bool changed = false;
	
	// ...
	// Se excluye la captura de otros descriptores

	{
		desc::ElementariesRelocationDescriptor d;
		if(DESC_PARSE( descriptors, elementaries_relocation, d)){
			isRelocated = true;
			multicastPort = d.port;
			multicastGroup = d.ipMulticast;
		}
	}
	//	Save descriptors
	_descriptors += descriptors;

	return changed;
}


