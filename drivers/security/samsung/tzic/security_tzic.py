
config = {
    "header": {
        "uuid": "a53563a2-8cf2-464e-bd15-330120d1a494",
        "type": "SECURITY",
        "vendor": "SAMSUNG",
        "product": "tzic",
        "variant": "tzic",
        "name": "tzic"
    },
    "build": {
        "path": "security/tzic",  # path for reach this file
        "file": "security_tzic.py",  # file name
        "location": [
            {
                "src": "*",
                "dst": "drivers/security/samsung/tzic/"
            },
       ]
    },
    "features": [
        {
            "label": "General",
            "type": "boolean",
            "configs": {
                "True": ["CONFIG_TZIC=y"],
                "False": []
            },
            "value": True
        },
    ]
}


def load():
    return config

if __name__ == '__main__':
  print(load())
