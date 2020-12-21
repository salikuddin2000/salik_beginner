#include <iostream>
#include <iomanip>
using namespace std;
class Operation{
    private:
        float result;
        float num1,num2;
        char c;
        float addition(float a, float b){
        result= a+b;
        return result;
    }
        float subtraction(float a, float b){
        result= a-b;
        return result;
    }
        float multiplication(float a, float b){
        result= a*b;
        return result;
    }
        float division(float a, float b){
            result= a/b;
            return result;
        }
    public:
        Operation(float a, float b, char o){
            num1=a;
            num2=b;
            c=o;
            float res = Operation_identifier(c);
            cout<<"Result:"<<res<<endl;
        }
        
        float Operation_identifier(char c){
            switch (c){
                case '+':{return addition(num1,num2);
                break;
                }
                case '-':{return subtraction(num1,num2);
                break;
                }
                case '/':{return multiplication(num1,num2);
                break;
                }
                case '*': case 'x' :case 'X' :{return division(num1,num2);
                break;
                }
            }
            return 0;
        }


};


/*class Calculator{
    private:
    float a=0.0,b=0.0;
    char c=' ';
    
    public:
    Calculator (){ 
        cin>>a>>c>>b;  
        float result = operation ();
        cout << result;
    }
    float operation(){
        switch (c){
            case '+':{return a+b;
            break;
            }
            case '-':{return a-b;
            break;
            }
            case '/':{return (a/b);
            break;
            }
            case '*': case 'x' :case 'X' :{return a*b;
            break;
            }
        }
        return 0;
    }

};*/
int main()
{
    // Calculator p;
    float a,b=0;
    char o = ' ';
    cin >> a >> o >> b;
    Operation p(a,b,o);
    cout<<"-----------\n";
    
}
