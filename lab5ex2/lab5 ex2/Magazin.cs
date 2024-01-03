using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.ComponentModel.DataAnnotations;
using System.Data.Entity;

namespace lab5_ex2
{
    internal class Magazin
    {

    }
    internal class Produs
    {
        public int Id { get; set;}
        [MaxLength(30,ErrorMessage="Max 30 caractere")]

        public string Denumire { get; set;}

        [MaxLength(200, ErrorMessage = "Max 200 caractere")]

        public string DescriereProdus { get; set;}

        public DateTime DataIntrare { get; set;}    

        public DateTime DataValabilitate { get; set;}

        public int Cantitate { get; set;}
    }

    class MagazinDBContext : DbContext
    {
        public DbSet<Produs> Produse { get; set; }
    }
}

