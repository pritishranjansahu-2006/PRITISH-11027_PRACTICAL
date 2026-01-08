//  Install MinGW (C/C++ Compiler) 
//     Follow these steps carefully 
// 1. Open Google and search MinGW compiler 
// 2. Go to SourceForge MinGW 
// 3. Click on the big Green Download Button 
// 4. Open the downloaded .exe file 
// 5. Click Install 
// 6. Click Continue 
// 7. Wait till setup is done 
// 8. Again, click Continue 
// Now select these 4 packages (Right-hand side Mark for Installation) 
// ● Developer Toolkit 
// ● Base 
// ● gcc-g++ 
// ● objc 
// 9. On the top-left, click Installation 
// 10. Select Apply Changes 
// 11. Again, click Apply 
// 12. Wait till all packages download 
// 13. Click Close 
// Next, set Environment Variables 
// 14. Go to Search → type environment variables 
// 15. Click Edit the system environment variables 
// 16. Click Environment Variables 
// 17. Under System Variables, click Path 
// 18. Click New 
// 19. Paste this: C:\MinGW\bin 
// 20. Press OK → OK → OK 
// Done! Now test it: 
// 21. Open CMD → type: 
// g++ --version 
//       If version shows up, Congrats! MinGW is installed 
//       Install VS Code (Editor) 
// 1. Google search: VS Code 
// 2. Go to code.visualstudio.com 
// 3. Click Download for Windows 
// 4. Open the downloaded file 
// 5. Accept the agreement → click Next 
// 6. Keep clicking Next → Next 
// 7. Tick all checkboxes → click Next 
// 8. Click Install 
// 9. Wait for installation 
//      10. Click Finish 
//        After Opening VS Code: 
//        Install 2 Extensions 
//              ● C/C++ (Microso ) 
//              ● Code Runner 


#include <stdio.h>
int main(){
    printf("Hello! Everyone Myself Pritish Ranjan Sahu.");
    return 0;
}