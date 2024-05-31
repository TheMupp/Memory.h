int Memory(const string_view procName){
	PROCESSENTRY32 entry{ };
	entry.dwSize = sizeof(entry);
	procSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	do
}
