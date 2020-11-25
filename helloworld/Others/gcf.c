#include <iostream>
#include <string.h>

using namespace std;

int main() {

    string group;                                   // üũ�� ���ڿ�
    int answer = 0;                                 // �׷� ���ڿ��� ����
    int T;                                          // �ݺ� Ƚ��

    scanf("%d", &T);

    for(int i = 0;i < T;i++){
        cin >> group;

        bool wrong = false;                         // ������ �ƴ� ��� true
        bool alpha[26];                             // �ش� ���ĺ��� �̹� �ݺ��Ǿ� �������� üũ
        memset(alpha, false, sizeof(alpha));        // alpha�迭 false�� �ʱ�ȭ

        for(int j = 0;j < group.size();j++){
            if(alpha[group[j] - 'a']){
                wrong = true;
                break;
            }                                       // �̹� �ݺ��� �����ε� �ٽ� ���� ��� wrong
            else{
                alpha[group[j] - 'a'] = true;       // �ݺ����� üũ
                char key = group[j];                // �ش� ���� �ӽ� ����
                while(true){
                    if(group[j] == key)
                        j++;
                    else
                        break;
                }                                   // �ݺ��� ���������� Ž��
                j--;                                // Ž�� ���������� �ݺ��� ������ 1�� �� ������ �ֱ⶧���� 1����
            }
        }                                           // ���� ������ ���� ������ ���
        if(wrong)
            ;
        else
            answer++;                               // Ʋ���� �ʾ��� ��츸 �� 1����
    }
    
    printf("%d", answer);

    return 0;
}