using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace directory_finder
{
    class Program
    {
        static void Main(string[] args)
        {
            string[] directories = Directory.GetDirectories(@"F:\Animated");
            string[] filenames = Directory.GetFiles(@"F:\Animated");
            int i=1;
            foreach(string name in directories)
            {
                Console.Write(i + ": ");
                Console.WriteLine(Path.GetFileName(name));
                i++;
            }
            foreach(string name in filenames)
            {
                Console.Write(i + ": ");
                Console.WriteLine(Path.GetFileName(name));
                i++;
            }
            Console.ReadKey();

        }
    }
}
