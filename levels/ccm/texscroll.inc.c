void scroll_sts_mat_ccm_dl_ScrapMetalDrip_layer6() {
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_ScrapMetalDrip_layer6);
	shift_t(mat, 21, PACK_TILESIZE(0, 1));
};

void scroll_ccm() {
	scroll_sts_mat_ccm_dl_ScrapMetalDrip_layer6();
}