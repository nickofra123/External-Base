#include "includes.h"
int main()
{
    SetWindowText(GetForegroundWindow(), random_string(15).c_str());
    printf(crypt("Waiting For CS:GO! \n"));
    while (!mem.attach(crypt("csgo.exe"),PROCESS_ALL_ACCESS)) {}
     std::this_thread::sleep_for(std::chrono::seconds(2));

     client_dll = mem.get_module(crypt("client.dll"));

     printf(crypt("Attacherd Succesfully! \nClient.dll Base Addr: 0x%X \nClient.dll Size: %d\n\n"), client_dll.dw_base, client_dll.dw_size);
     printf(crypt("Initializing... \n\n"));

     std::this_thread::sleep_for(std::chrono::seconds(3));
 //---------------------------cycle---------------------------------
    while (1)
    {
        DWORD local = mem.read<DWORD>(client_dll.dw_base + dwLocalPlayer);
        int health = mem.read<int>(local + m_iHealth);
        int team = mem.read<int>(local + m_iTeamNum);
        printf(crypt("local:\n"), local);
        printf(crypt("team:\n"), team);
        printf(crypt("health:\n"), health);
        system("pause > nul");
        std::this_thread::sleep_for(std::chrono::milliseconds(15));
    }
}

