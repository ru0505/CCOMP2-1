using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

using Xamarin.Forms;
using Xamarin.Forms.Xaml;

namespace Formulario_1
{
    [XamlCompilation(XamlCompilationOptions.Compile)]
    public partial class curriculum : ContentPage
    {
        public curriculum(string nombre, string apellido, string estudios, string años, string area, string numero, string correo)
        {
            InitializeComponent();

            n.Text = n.Text+nombre;
            a.Text = a.Text+apellido;
            es.Text = es.Text+estudios;
            ar.Text = ar.Text+area;
            xp.Text = "Tengo " + años + " años de experiencia laboral";
            tel.Text = tel.Text+numero;
            co.Text = co.Text+correo;
        }
    }
}