//Var-1


bool ques(string data[],string que[],string getData[])
{
    cout << que[0] << "\n";
    for(int i=0; i<3; i++){
        cout << i+1 << ". " << data[i] << "\n";
    }
    char num;
    bool set = true;
    while(set)
    {
      cout << "\n\nВведите номер ответа: ";cin >> num;
      if(num == '1')
      {
          getData[0];
          break;
          return num;
      }
      
      else 
          cout << "\nВариант неправильный!";
          cout << "\n____________________________";
          cout << "\nПопробуите еще раз!";
    }
    return true;
}

int main()
{
    string que[] = {"\n                         ТЕСТ \n\nС помощью какого оператора подпограмма может возвратить значения\n \nКакой вариант правильный ?\n"};
    string data[] = {"return","cin","cout\n"};
    string getData[] = {"return"};
    int get = ques(data,que,getData);
    if(data[0] == getData[0]){
        if(get)cout << "\n\nВариант правильный!";
        cout << "\n____________________________";
    }
}

//Var-2
int ques(string data[],string que[],string getData[])
{
    cout << que[0] << "\n";
    for(int i=0; i<3; i++){
        cout << i+1 << ". " << data[i] << "\n";
    }
    char num;
    bool set = true;
    while(set)
    {
      cout << "\n\nВведите номер ответа: ";cin >> num;
      if(num == '1')
      {
          getData[0];
          break;
          return num;
      }
      
      else 
          cout << "\nВариант неправильный!";
          cout << "\n____________________________";
          cout << "\nПопробуите еще раз!";
    }
    return 1;
}

int main()
{
    string que[] = {"\n                         ТЕСТ \n\nС помощью какого оператора подпограмма может возвратить значения\n \nКакой вариант правильный ?\n"};
    string data[] = {"return","cin","cout\n"};
    string getData[] = {"return"};
    int get = ques(data,que,getData);
    if(data[0] == getData[0]){
        if(get)cout << "\n\nВариант правильный!";
        cout << "\n____________________________";
    }
}
