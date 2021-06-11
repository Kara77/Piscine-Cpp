//
// EPITECH PROJECT, 2019
// Rush3
// File description:
// system.cpp
//

#include "../include/system.hpp"

computer::computer() {}

computer::~computer() {}

std::string loadFile(const std::string &fileName)
{
	std::ifstream stream(fileName, std::fstream::in);
	char car;
	std::string file;

	if (!stream)
		return nullptr;
	while (!stream.eof()) {
		car = (char) stream.get();
		if (car != -1)
			file += car;
	}
	return file;
}

std::string computer::getCpuLoad()
{
       static long long prev_total = 0;
       static long long prev_idle = 0;

       std::string file = loadFile("/proc/stat");
       std::string line = file.substr(file.find(" ") + 2, file.find("\n"));
       long long total = std::stol(line.substr(0, line.find(" ") + 1), nullptr, 10);
       line = line.substr(line.find(" ") + 1);
       line = line.substr(line.find(" ") + 1);
       //line = line.substr(line.find(" ") + 1);
       long long idle = std::stol(line.substr(0, line.find(" ") + 1), nullptr, 10);
       long long diff_idle = idle - prev_idle;
       long long diff_total = total - prev_total;
       float diff_usage = (1000*(diff_total-diff_idle)/diff_total+5)/10;
       prev_total = total;
       prev_idle = idle;
       std::string result = std::to_string(diff_usage);
       result.erase(result.begin()+ 2, result.end()+ 0);
       return result + " %";
}

std::string computer::getCpu()
{
    std::string FileCont = loadFile("/proc/cpuinfo");
    std::string model = FileCont.substr(FileCont.rfind("model name"));
    return model.substr(model.find(":") + 2, model.find("\n") - (model.find(":") + 2));
}

std::string computer::getNbrCpu()
{
    std::string FileCont = loadFile("/proc/cpuinfo");
    std::string lastcpu = FileCont.substr(FileCont.rfind("processor"));
    std::string nbr = lastcpu.substr(lastcpu.find(":") + 2, lastcpu.find("\n") - (lastcpu.find(":") + 2));
	nbr[0] += 1;
    return nbr;
}

std::string computer::getCache()
{
    std::string FileCont = loadFile("/proc/cpuinfo");
    std::string lastcpu = FileCont.substr(FileCont.rfind("cache size"));
    return lastcpu.substr(lastcpu.find(":") + 2, lastcpu.find("\n") - (lastcpu.find(":") + 2));
}

std::string computer::getOs()
{
    struct utsname buff;
    uname(&buff);
    return buff.sysname;
}

std::string computer::getKernel()
{
    struct utsname buff;
    uname(&buff);
    return buff.release;
}

std::string computer::getHostname()
{
    return getenv("HOSTNAME");
}

std::string computer::getUsername()
{
    return getenv("USER");
}

std::string computer::getRamMax()
{
    const long megabyte = 1024 *1024;
    struct sysinfo si;
    sysinfo (&si);
    return std::to_string(si.totalram / megabyte) + " MB";
}

std::string computer::getRamFree()
{
    const long megabyte = 1024 *1024;
    struct sysinfo si;
    sysinfo (&si);
    return std::to_string(si.freeram / megabyte) + " MB";
}

std::string computer::getTime()
{    
    time_t     now = time(0);
    struct tm  tstruct;
    char       buf[80];
    tstruct = *localtime(&now);
    strftime(buf, sizeof(buf), "%Y-%m-%d                                    %X", &tstruct);
    return buf;
}

std::string computer::getUptime()
{
 
    struct sysinfo si;
    sysinfo (&si);
    int time = si.uptime;

    int d = time / 86400;
    int h = (time / 3600) - (d * 24);
    int m = (time / 60) - (d * 1440) - (h * 60);
    int s = time % 60; 

    std::string uptime = std::to_string(d) + " : " + std::to_string(h) + " : " + std::to_string(m) + " : " + std::to_string(s);


    return uptime;
}

std::string computer::getRamUsed()
{
    int ramMax = std::stoi(getRamMax());
    int ramFree = std::stoi(getRamFree());
    return std::to_string(ramMax - ramFree) + " MB";
}

std::string computer::getRamPercent()
{
    float ramMax = std::stof(getRamMax());
    float ramUsed = std::stof(getRamUsed());
    float ramPercent = (ramUsed/ramMax) * 100;
    std::string result = std::to_string(ramPercent);
    result.erase (result.begin()+ 5, result.end());
    return result + " %";
}

std::string computer::getNetwork_received()
{
    std::string transmited = loadFile("/sys/class/net/wlp58s0/statistics/tx_bytes");
    transmited.pop_back();
    return transmited;
}

std::string computer::getNetwork_transmited()
{
    std::string received = loadFile("/sys/class/net/wlp58s0/statistics/rx_bytes");
    received.pop_back();
    return received;
}
