## ----table1, tidy=FALSE, echo=FALSE-------------------------------------------
df <- data.frame(Modelling_Setting = c("(A) $blm = 0, blm_k = 0$", "(B) $blm = 0.8, blm_k = 0$", "(C) $blm = 0, blm_k = 0.8$"),
                 Variables = c(43180, 61428, 89150),
                 Constraints = c(37371, 92115, 175281),
                 Nonzeros = c(136566, 264302, 458356))
knitr::kable(
  df, booktabs = TRUE,
  caption = 'Model size (Variables, Constraints, Nonzeros elements in the constraint matrix) for different modelling scenarios.'
)

