#include <iostream>
#include <thread>
#include <exception>
#include <chrono>

/*Each thread shall loop 10 times,and each time it will
print out its identity followed by a 1 second pause
The main program shall create both threads and monitor
for them both to join
*/
using namespace std;

std::chrono::milliseconds;
void marco()
{

    cout << "Marco" << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); //pause after 1 second


}

void polo()
{
    cout << "Polo \n" << endl;
    std::this_thread::sleep_for(std::chrono::milliseconds(100)); //to pause after 1 second
}

int main()
{
  std::thread first (marco);
  for (int i=0; i<9;i++) //loop throught 10 times
  {
    marco();
  }

  std::thread second (polo);
  for (int j=0; j<9;j++)
  {
    polo();
  }

  try
  {
    first.join(); //join
    second.join();
  }
  catch(exception& e) //catch an error
  {
    cout << e.what() << '\n';
  }
  cout << "That's all folks \n" << endl;



  return 0;
}


  //marco.join(); //pauses until first finishes
//  polo.join();
