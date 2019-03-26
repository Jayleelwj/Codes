#include <iostream>
#include <Samples.hpp>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
    cout<<"K-means Test - See Samples Tool. "<<endl<<endl;

    if(argc!=2)
    {
        cout<<"Usage: "<<argv[0]<<" file_path"<<endl;
        return 0;
    }

    cout<<"Opening file "<<argv[1]<<endl;
    Samples sample;
    vector<SampleType> res=sample.getSamples(string(argv[1]));
    if(res.size())
    {
        sample.seeSamples();
    }
    else
    {
        cout<<"Data load fail. Check the file "<<argv[1]<<endl;
    }

    
    return 0;
}