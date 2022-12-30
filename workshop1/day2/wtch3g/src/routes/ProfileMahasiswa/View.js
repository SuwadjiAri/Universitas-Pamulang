// import { useEffect, useState } from "react";
import { useParams } from "react-router-dom";
// import ProfilePicture from "../../components/ProfilePicture";
import "./View.css";

// const MAHASISWA_ENDPOINT = "https://637c622172f3ce38eaa0c862.mockapi.io/api/v1/mahasiswa/";

function ProfileMahasiswa() {
  const { id } = useParams();

  const Mahasiswa = () => {
    return (
      <div>
        <h2>Profile Mahasiswa #{id} AD</h2>
      </div>
    );
  };

  return (
    <div className="container">
      <Mahasiswa />
    </div>
  );
}

export default ProfileMahasiswa;
