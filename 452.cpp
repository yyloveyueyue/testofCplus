/*
课堂练习：编写一个电视机类，有开关机的状态，有音量，有频道，只能逐一调整频道。
         增加遥控器类，除了拥有电视机所有的功能，增加根据输入调台的功能。
 */


#include<iostream>
using namespace std;


//创建电视机类
class Television
{
public:
    enum{On,Off};       //电视状态
    enum
    {
        minVol = 0,
        maxVol = 100
    };
    enum
    {
        minChannel = 1,
        maxChannel = 255
    };

    //构造函数
    Television(){
        mState = Off;
        mVolume = minVol;
        mChannel = minChannel;
    }

    //打开电视机
    void OnofOff(){
        this->mState = (this->mState == On ? Off : On);
    }

    //调高音量按钮
    void VolumeUp(){
        if (this->mVolume >= maxVol)
        {
            return;
        }
        this->mVolume++;
    }

    //调低音量按钮
    void Volumedown(){
        if (this->mVolume <= minVol)
        {
            return;
        }
        this->mVolume--;
    }

    //跟换电视频道
    void ChannelUp(){
        if (this->mChannel >= maxChannel){
            return;
        }
        this->mChannel++;
    }
    void Channeldown(){
        if (this->mChannel <= minChannel){
            return;
        }
        this->mChannel--;
    }

    //显示当前电视状态信息
    void ShowTeleState(){
        cout << "TV state is: " << (mState == On ? "is on" : "is off") << endl;
        if (mState == On)
        {
            cout << "Volume is: " << mVolume << endl;
            cout << "Channel is: " << mChannel << endl;
        }
        
    }

private:
    int mState;         //电视机状态（开机，关机）
    int mVolume;        //电视机音量
    int mChannel;       //电视机频道
};


//电视机按钮测试
void test01(){
    Television television;
    television.ShowTeleState();
    television.OnofOff();
    television.VolumeUp();
    television.VolumeUp();
    television.VolumeUp();
    television.ChannelUp();
    television.ChannelUp();
    television.ChannelUp();
    television.Volumedown();
    television.Channeldown();
    television.ShowTeleState();
    television.OnofOff();
}



int main()
{
    test01();
    system("pause");
    return EXIT_SUCCESS;
}