#pragma once
#include<windows.h>

TCHAR IniFile[MAX_PATH] = { 0 };
/*
//win.ini
BOOL WriteProfileString��LPCTSTR lpAppName, // section name
	   LPCTSTR lpKeyName, // key name
	   LPCTSTR lpString // string to write
);
//ini�ļ�д��
BOOL WritePrivateProfileString(
	LPCTSTR lpAppName,  // INI�ļ��е�һ���ֶ���[����]�����кܶ������
	LPCTSTR lpKeyName,  // lpAppName �µ�һ��������Ҳ�����������ı�����
	LPCTSTR lpString,   // ��ֵ,Ҳ��������
	LPCTSTR lpFileName  // INI�ļ���·��
);

//��ȡ
//������-string
DWORD GetPrivateProfileString(
	LPCTSTR lpAppName,        // INI�ļ��е�һ���ֶ���[����]�����кܶ������
	LPCTSTR lpKeyName,        // lpAppName �µ�һ��������Ҳ�����������ı�����
	LPCTSTR lpDefault,        // ���lpReturnedStringΪ��,��Ѹ���������lpReturnedString
	LPTSTR lpReturnedString,  // ��ż�ֵ��ָ�����,���ڽ���INI�ļ��м�ֵ(����)�Ľ��ջ�����
	DWORD nSize,            // lpReturnedString�Ļ�������С
	LPCTSTR lpFileName        // INI�ļ���·��
);

//������-int
UINT GetPrivateProfileInt(
	LPCTSTR lpAppName,  // INI�ļ��е�һ���ֶ���[����]�����кܶ������
	LPCTSTR lpKeyName,  // lpAppName �µ�һ��������Ҳ�����������ı�����
	INT nDefault,       // ���û���ҵ�ָ�������ݷ���,��Ѹ�����ֵ��������ֵ
	LPCTSTR lpFileName  // INI�ļ���·��
);
*/