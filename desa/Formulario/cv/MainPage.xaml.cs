using System.Collections.Generic;
using Xamarin.Forms;

namespace MiCVApp
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();

           
            List<string> habilidadesBlandas = new List<string>
            {
                "Comunicación efectiva",
                "Trabajo en equipo",
                "Adaptabilidad",
                "Resolución de problemas",
                "Liderazgo"
            };

            
            HabilidadesBlandasList.ItemsSource = habilidadesBlandas;
        }
    }
}