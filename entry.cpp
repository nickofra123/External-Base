#include "sdk/includes.h"
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
        DWORD Local = mem.read<DWORD>(client_dll.dw_base + dwLocalPlayer);
        int Health = mem.read<int>(dwLocalPlayer + m_iHealth);
        int Team = mem.read<int>(dwLocalPlayer + m_iTeamNum);
        
        printf(crypt("team:\n"), Team);
        printf(crypt("health:\n"), Health);
        printf(crypt("Local:\n"), dwLocalPlayer);
        system("pause > nul");
        std::this_thread::sleep_for(std::chrono::milliseconds(15));
    }
}

