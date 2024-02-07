import style from './AdminQuestionsView.module.css'
import { useNavigate } from "react-router-dom"

const AdminQuestionsView = () => {
  const navigate = useNavigate();

  return (
      <div className={style.bodyStyle}>
        <div className={style.hText}>Life Safety</div>
        Questions viewer
        <div className={style.text}>
          <div>
            <label className={style.sText}>
              Subsection challenge number ONE
            </label>
            <ul>
              <li>
                <label className={style.sText}>
                  Annotation.
                </label> It is the activity of annotating something. She retained a number of copies for further annotation
              </li>
              <li>
                <label className={style.sText}>
                  Count of questions:
                </label> 25
              </li>
              <li>
                <label className={style.sText}>
                Time to pass:
                </label> 45 min
              </li>
            </ul>
          </div>
            <label className={style.sText}>
              Subsection challenge number TWO
            </label>
            <ul>
              <li>
                <label className={style.sText}>
                  Annotation.
                </label> Ivanovo Power Engineering Institute was founded on the basis of Ivanovo-Voznesensk Polytechnic Institute in 1930
              </li>
              <li>
                <label className={style.sText}>
                  Count of questions:
                </label> 35
              </li>
              <li>
                <label className={style.sText}>
                Time to pass:
                </label> 60 min
              </li>
            </ul>
        </div>
        <div className={style.placeButton}>
          <button className={style.flatButton} onClick={ ()=>navigate(-1)} >Back</button>
          <button className={style.flatButton} onClick={ ()=>navigate("/admin-sessions-view")} >Next</button>
        </div>
      </div>
  );
}

export default AdminQuestionsView;