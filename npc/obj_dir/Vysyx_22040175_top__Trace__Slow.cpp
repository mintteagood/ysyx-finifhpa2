// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040175_top__Syms.h"


void Vysyx_22040175_top___024root__traceInitSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040175_top___024root__traceInitTop(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040175_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vysyx_22040175_top___024root__traceInitSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+552,"clk", false,-1);
        tracep->declBit(c+553,"rst", false,-1);
        tracep->declBus(c+554,"inst", false,-1, 31,0);
        tracep->declBus(c+555,"pc", false,-1, 31,0);
        tracep->declQuad(c+556,"unknown_code", false,-1, 63,0);
        tracep->declBit(c+558,"time_set", false,-1);
        tracep->declBus(c+559,"diff_pc", false,-1, 31,0);
        tracep->declBus(c+560,"diff_delay_pc", false,-1, 31,0);
        tracep->declBit(c+552,"ysyx_22040175_top clk", false,-1);
        tracep->declBit(c+553,"ysyx_22040175_top rst", false,-1);
        tracep->declBus(c+554,"ysyx_22040175_top inst", false,-1, 31,0);
        tracep->declBus(c+555,"ysyx_22040175_top pc", false,-1, 31,0);
        tracep->declQuad(c+556,"ysyx_22040175_top unknown_code", false,-1, 63,0);
        tracep->declBit(c+558,"ysyx_22040175_top time_set", false,-1);
        tracep->declBus(c+559,"ysyx_22040175_top diff_pc", false,-1, 31,0);
        tracep->declBus(c+560,"ysyx_22040175_top diff_delay_pc", false,-1, 31,0);
        tracep->declBit(c+210,"ysyx_22040175_top rst_n", false,-1);
        tracep->declQuad(c+211,"ysyx_22040175_top id_next_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040175_top if_ena", false,-1);
        tracep->declBus(c+2,"ysyx_22040175_top if_inst", false,-1, 31,0);
        tracep->declQuad(c+3,"ysyx_22040175_top if_pc", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top rest_id_mem", false,-1);
        tracep->declBus(c+6,"ysyx_22040175_top id_inst", false,-1, 31,0);
        tracep->declQuad(c+7,"ysyx_22040175_top id_pc", false,-1, 63,0);
        tracep->declBit(c+9,"ysyx_22040175_top id_ena", false,-1);
        tracep->declBit(c+10,"ysyx_22040175_top id_time_set", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top delay_sig_jalr", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+563+i*2,"ysyx_22040175_top to_id_reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+627,"ysyx_22040175_top id_branch", false,-1);
        tracep->declBit(c+628,"ysyx_22040175_top id_jump", false,-1);
        tracep->declBit(c+12,"ysyx_22040175_top id_reg_wen", false,-1);
        tracep->declBus(c+13,"ysyx_22040175_top id_reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+213,"ysyx_22040175_top id_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_22040175_top id_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22040175_top id_imm", false,-1, 63,0);
        tracep->declBus(c+16,"ysyx_22040175_top id_alu_op", false,-1, 4,0);
        tracep->declBus(c+17,"ysyx_22040175_top id_alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+18,"ysyx_22040175_top id_unknown_code", false,-1, 63,0);
        tracep->declBit(c+20,"ysyx_22040175_top id_jalr", false,-1);
        tracep->declBit(c+21,"ysyx_22040175_top id_ebreak_flag", false,-1);
        tracep->declBus(c+22,"ysyx_22040175_top id_wmask", false,-1, 7,0);
        tracep->declBit(c+23,"ysyx_22040175_top id_s_flag", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top id_s_imm", false,-1, 31,0);
        tracep->declBus(c+25,"ysyx_22040175_top id_expand_signed", false,-1, 3,0);
        tracep->declBus(c+26,"ysyx_22040175_top id_rd_flag", false,-1, 2,0);
        tracep->declBus(c+27,"ysyx_22040175_top id_rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+28,"ysyx_22040175_top rest_from_id", false,-1);
        tracep->declBit(c+29,"ysyx_22040175_top id_control_rest", false,-1);
        tracep->declQuad(c+561,"ysyx_22040175_top id_end_write_addr", false,-1, 63,0);
        tracep->declBit(c+30,"ysyx_22040175_top rest_wb_hazard", false,-1);
        tracep->declBit(c+217,"ysyx_22040175_top sig_jalr", false,-1);
        tracep->declQuad(c+31,"ysyx_22040175_top ex_pc", false,-1, 63,0);
        tracep->declBit(c+629,"ysyx_22040175_top ex_branch", false,-1);
        tracep->declBit(c+630,"ysyx_22040175_top ex_jump", false,-1);
        tracep->declBit(c+33,"ysyx_22040175_top ex_reg_wen", false,-1);
        tracep->declBus(c+34,"ysyx_22040175_top ex_reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+631,"ysyx_22040175_top ex_imm", false,-1, 63,0);
        tracep->declBus(c+35,"ysyx_22040175_top ex_alu_op", false,-1, 4,0);
        tracep->declBus(c+633,"ysyx_22040175_top ex_alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+36,"ysyx_22040175_top ex_unknown_code", false,-1, 63,0);
        tracep->declBit(c+634,"ysyx_22040175_top ex_jalr", false,-1);
        tracep->declBit(c+38,"ysyx_22040175_top ex_ebreak_flag", false,-1);
        tracep->declBus(c+39,"ysyx_22040175_top ex_wmask", false,-1, 7,0);
        tracep->declBit(c+40,"ysyx_22040175_top ex_s_flag", false,-1);
        tracep->declBus(c+41,"ysyx_22040175_top ex_s_imm", false,-1, 31,0);
        tracep->declBus(c+42,"ysyx_22040175_top ex_expand_signed", false,-1, 3,0);
        tracep->declBus(c+43,"ysyx_22040175_top ex_rd_flag", false,-1, 2,0);
        tracep->declBus(c+44,"ysyx_22040175_top ex_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+635,"ysyx_22040175_top ex_reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+637,"ysyx_22040175_top ex_reg2_rdata", false,-1, 63,0);
        tracep->declBit(c+45,"ysyx_22040175_top ex_ena", false,-1);
        tracep->declBit(c+639,"ysyx_22040175_top ex_time_set", false,-1);
        tracep->declBit(c+640,"ysyx_22040175_top id_rest_no_use", false,-1);
        tracep->declBit(c+46,"ysyx_22040175_top ex_rest_id_mem", false,-1);
        tracep->declBus(c+47,"ysyx_22040175_top ex_inst", false,-1, 31,0);
        tracep->declQuad(c+48,"ysyx_22040175_top ex_end_write_addr", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22040175_top from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+52,"ysyx_22040175_top ex_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040175_top ex_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+641,"ysyx_22040175_top ex_next_pc", false,-1, 63,0);
        tracep->declBit(c+643,"ysyx_22040175_top write_ready", false,-1);
        tracep->declBit(c+644,"ysyx_22040175_top ex_pc_ready", false,-1);
        tracep->declBit(c+56,"ysyx_22040175_top mem_reg_wen", false,-1);
        tracep->declBus(c+57,"ysyx_22040175_top mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+58,"ysyx_22040175_top mem_ebreak_flag", false,-1);
        tracep->declBus(c+59,"ysyx_22040175_top mem_wmask", false,-1, 7,0);
        tracep->declBit(c+60,"ysyx_22040175_top mem_s_flag", false,-1);
        tracep->declBit(c+61,"ysyx_22040175_top mem_time_set", false,-1);
        tracep->declBus(c+62,"ysyx_22040175_top mem_s_imm", false,-1, 31,0);
        tracep->declBus(c+63,"ysyx_22040175_top mem_expand_signed", false,-1, 3,0);
        tracep->declBus(c+64,"ysyx_22040175_top mem_rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+65,"ysyx_22040175_top mem_alu_op", false,-1, 4,0);
        tracep->declQuad(c+66,"ysyx_22040175_top mem_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22040175_top mem_alu_src2", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22040175_top mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBit(c+645,"ysyx_22040175_top mem_pc_ready", false,-1);
        tracep->declQuad(c+72,"ysyx_22040175_top mem_pc", false,-1, 63,0);
        tracep->declBit(c+646,"ysyx_22040175_top fr_ex_no_use", false,-1);
        tracep->declQuad(c+74,"ysyx_22040175_top mem_end_write_addr", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22040175_top from_mem_alu_res", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22040175_top wb_hazard_result", false,-1, 63,0);
        tracep->declBit(c+80,"ysyx_22040175_top wb_reg_wen", false,-1);
        tracep->declBus(c+81,"ysyx_22040175_top wb_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+82,"ysyx_22040175_top wb_wmask", false,-1, 7,0);
        tracep->declBit(c+83,"ysyx_22040175_top wb_s_flag", false,-1);
        tracep->declBit(c+84,"ysyx_22040175_top wb_time_set", false,-1);
        tracep->declBus(c+85,"ysyx_22040175_top wb_s_imm", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040175_top wb_expand_signed", false,-1, 3,0);
        tracep->declBit(c+87,"ysyx_22040175_top wb_ebreak_flag", false,-1);
        tracep->declBus(c+88,"ysyx_22040175_top wb_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+89,"ysyx_22040175_top wb_from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_22040175_top wb_from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+647,"ysyx_22040175_top wb_pc_ready", false,-1);
        tracep->declQuad(c+93,"ysyx_22040175_top wb_pc", false,-1, 63,0);
        tracep->declBit(c+95,"ysyx_22040175_top mem_rest_id_mem", false,-1);
        tracep->declQuad(c+96,"ysyx_22040175_top wb_end_write_addr", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+218+i*2,"ysyx_22040175_top from_wb_reg_f", true,(i+0), 63,0);}}
        tracep->declQuad(c+98,"ysyx_22040175_top wb_delay_pc", false,-1, 63,0);
        tracep->declBit(c+552,"ysyx_22040175_top u_if_stage clk", false,-1);
        tracep->declBit(c+210,"ysyx_22040175_top u_if_stage rst_n", false,-1);
        tracep->declQuad(c+211,"ysyx_22040175_top u_if_stage id_next_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_if_stage ena", false,-1);
        tracep->declBus(c+2,"ysyx_22040175_top u_if_stage inst", false,-1, 31,0);
        tracep->declQuad(c+3,"ysyx_22040175_top u_if_stage curr_pc", false,-1, 63,0);
        tracep->declBit(c+29,"ysyx_22040175_top u_if_stage control_rest", false,-1);
        tracep->declBit(c+648,"ysyx_22040175_top u_if_stage ex_pc_ready", false,-1);
        tracep->declBit(c+649,"ysyx_22040175_top u_if_stage pc_no_use", false,-1);
        tracep->declBit(c+5,"ysyx_22040175_top u_if_stage rest_id_mem", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_if_stage id_pc", false,-1, 63,0);
        tracep->declBit(c+217,"ysyx_22040175_top u_if_stage sig_jalr", false,-1);
        tracep->declQuad(c+100,"ysyx_22040175_top u_if_stage rdata", false,-1, 63,0);
        tracep->declBit(c+552,"ysyx_22040175_top u_if_stage u_pc_predict clk", false,-1);
        tracep->declBit(c+210,"ysyx_22040175_top u_if_stage u_pc_predict rst_n", false,-1);
        tracep->declBit(c+29,"ysyx_22040175_top u_if_stage u_pc_predict control_rest", false,-1);
        tracep->declQuad(c+211,"ysyx_22040175_top u_if_stage u_pc_predict id_next_pc", false,-1, 63,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_if_stage u_pc_predict ena", false,-1);
        tracep->declQuad(c+3,"ysyx_22040175_top u_if_stage u_pc_predict curr_pc", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_if_stage u_pc_predict rest_id_mem", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_if_stage u_pc_predict id_curr_pc", false,-1, 63,0);
        tracep->declBit(c+217,"ysyx_22040175_top u_if_stage u_pc_predict sig_jalr", false,-1);
        tracep->declBit(c+102,"ysyx_22040175_top u_if_stage u_pc_predict delay_sig_jalr", false,-1);
        tracep->declBit(c+552,"ysyx_22040175_top u_if_id_regs clk", false,-1);
        tracep->declBit(c+210,"ysyx_22040175_top u_if_id_regs rst_n", false,-1);
        tracep->declQuad(c+3,"ysyx_22040175_top u_if_id_regs pc_if_id_i", false,-1, 63,0);
        tracep->declBus(c+2,"ysyx_22040175_top u_if_id_regs instr_if_id_i", false,-1, 31,0);
        tracep->declBit(c+1,"ysyx_22040175_top u_if_id_regs ena_if_id_i", false,-1);
        tracep->declBit(c+558,"ysyx_22040175_top u_if_id_regs time_set_if_id_i", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_if_id_regs pc_if_id_o", false,-1, 63,0);
        tracep->declBus(c+6,"ysyx_22040175_top u_if_id_regs instr_if_id_o", false,-1, 31,0);
        tracep->declBit(c+9,"ysyx_22040175_top u_if_id_regs ena_if_id_o", false,-1);
        tracep->declBit(c+10,"ysyx_22040175_top u_if_id_regs time_set_if_id_o", false,-1);
        tracep->declBit(c+29,"ysyx_22040175_top u_if_id_regs control_rest", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_if_id_regs id_pc", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_if_id_regs rest_id_mem", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top u_if_id_regs delay_sig_jalr", false,-1);
        tracep->declBit(c+552,"ysyx_22040175_top u_id_stage clk", false,-1);
        tracep->declBit(c+210,"ysyx_22040175_top u_id_stage rst_n", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_stage id_pc", false,-1, 63,0);
        tracep->declQuad(c+211,"ysyx_22040175_top u_id_stage next_pc", false,-1, 63,0);
        tracep->declQuad(c+103,"ysyx_22040175_top u_id_stage inst", false,-1, 63,0);
        tracep->declBus(c+47,"ysyx_22040175_top u_id_stage ex_inst", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+282+i*2,"ysyx_22040175_top u_id_stage reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+34,"ysyx_22040175_top u_id_stage ex_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage rest_from_id", false,-1);
        tracep->declBit(c+105,"ysyx_22040175_top u_id_stage branch", false,-1);
        tracep->declBit(c+106,"ysyx_22040175_top u_id_stage jump", false,-1);
        tracep->declBit(c+12,"ysyx_22040175_top u_id_stage reg_wen", false,-1);
        tracep->declBus(c+13,"ysyx_22040175_top u_id_stage reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+346,"ysyx_22040175_top u_id_stage reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+348,"ysyx_22040175_top u_id_stage reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22040175_top u_id_stage imm", false,-1, 63,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_id_stage alu_op", false,-1, 4,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_id_stage alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+18,"ysyx_22040175_top u_id_stage unknown_code", false,-1, 63,0);
        tracep->declBit(c+20,"ysyx_22040175_top u_id_stage jalr", false,-1);
        tracep->declBit(c+21,"ysyx_22040175_top u_id_stage ebreak_flag", false,-1);
        tracep->declBus(c+22,"ysyx_22040175_top u_id_stage wmask", false,-1, 7,0);
        tracep->declBit(c+23,"ysyx_22040175_top u_id_stage s_flag", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top u_id_stage s_imm", false,-1, 31,0);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_stage rd_flag", false,-1, 2,0);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage control_rest", false,-1);
        tracep->declQuad(c+50,"ysyx_22040175_top u_id_stage from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22040175_top u_id_stage from_mem_alu_res", false,-1, 63,0);
        tracep->declBus(c+44,"ysyx_22040175_top u_id_stage ex_rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+213,"ysyx_22040175_top u_id_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_22040175_top u_id_stage alu_src2", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_stage rest_id_mem", false,-1);
        tracep->declQuad(c+561,"ysyx_22040175_top u_id_stage end_write_addr", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22040175_top u_id_stage wb_hazard_result", false,-1, 63,0);
        tracep->declBus(c+57,"ysyx_22040175_top u_id_stage mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+40,"ysyx_22040175_top u_id_stage ex_s_flag", false,-1);
        tracep->declBit(c+60,"ysyx_22040175_top u_id_stage mem_s_flag", false,-1);
        tracep->declBit(c+30,"ysyx_22040175_top u_id_stage rest_wb_hazard", false,-1);
        tracep->declBit(c+217,"ysyx_22040175_top u_id_stage sig_jalr", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top u_id_stage delay_sig_jalr", false,-1);
        tracep->declBus(c+41,"ysyx_22040175_top u_id_stage ex_s_imm", false,-1, 31,0);
        tracep->declBus(c+107,"ysyx_22040175_top u_id_stage imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+108,"ysyx_22040175_top u_id_stage reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+109,"ysyx_22040175_top u_id_stage reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+350,"ysyx_22040175_top u_id_stage data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+110,"ysyx_22040175_top u_id_stage delay_reg1_rdata", false,-1, 63,0);
        tracep->declBit(c+650,"ysyx_22040175_top u_id_stage write_ready", false,-1);
        tracep->declBit(c+651,"ysyx_22040175_top u_id_stage no_use", false,-1);
        tracep->declBit(c+652,"ysyx_22040175_top u_id_stage ena", false,-1);
        tracep->declQuad(c+103,"ysyx_22040175_top u_id_stage u_ctrl inst", false,-1, 63,0);
        tracep->declBit(c+105,"ysyx_22040175_top u_id_stage u_ctrl branch", false,-1);
        tracep->declBit(c+106,"ysyx_22040175_top u_id_stage u_ctrl jump", false,-1);
        tracep->declBit(c+12,"ysyx_22040175_top u_id_stage u_ctrl reg_wen", false,-1);
        tracep->declBus(c+13,"ysyx_22040175_top u_id_stage u_ctrl reg_waddr", false,-1, 4,0);
        tracep->declBus(c+108,"ysyx_22040175_top u_id_stage u_ctrl reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+109,"ysyx_22040175_top u_id_stage u_ctrl reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+107,"ysyx_22040175_top u_id_stage u_ctrl imm_gen_op", false,-1, 2,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_id_stage u_ctrl alu_op", false,-1, 4,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_id_stage u_ctrl alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+18,"ysyx_22040175_top u_id_stage u_ctrl unknown_code", false,-1, 63,0);
        tracep->declBit(c+20,"ysyx_22040175_top u_id_stage u_ctrl jalr", false,-1);
        tracep->declBit(c+21,"ysyx_22040175_top u_id_stage u_ctrl ebreak_flag", false,-1);
        tracep->declBus(c+22,"ysyx_22040175_top u_id_stage u_ctrl wmask", false,-1, 7,0);
        tracep->declBit(c+23,"ysyx_22040175_top u_id_stage u_ctrl s_flag", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top u_id_stage u_ctrl s_imm", false,-1, 31,0);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_stage u_ctrl expand_signed", false,-1, 3,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_stage u_ctrl rd_flag", false,-1, 2,0);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_stage u_ctrl rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+112,"ysyx_22040175_top u_id_stage u_ctrl opcode", false,-1, 6,0);
        tracep->declBus(c+113,"ysyx_22040175_top u_id_stage u_ctrl funct3", false,-1, 2,0);
        tracep->declBus(c+114,"ysyx_22040175_top u_id_stage u_ctrl funct7", false,-1, 6,0);
        tracep->declBus(c+115,"ysyx_22040175_top u_id_stage u_ctrl rd", false,-1, 4,0);
        tracep->declBus(c+116,"ysyx_22040175_top u_id_stage u_ctrl rs1", false,-1, 4,0);
        tracep->declBus(c+117,"ysyx_22040175_top u_id_stage u_ctrl rs2", false,-1, 4,0);
        tracep->declQuad(c+103,"ysyx_22040175_top u_id_stage u_imm_gen inst", false,-1, 63,0);
        tracep->declBus(c+107,"ysyx_22040175_top u_id_stage u_imm_gen imm_gen_op", false,-1, 2,0);
        tracep->declQuad(c+14,"ysyx_22040175_top u_id_stage u_imm_gen imm", false,-1, 63,0);
        tracep->declBit(c+552,"ysyx_22040175_top u_id_stage u_id_rest clk", false,-1);
        tracep->declBit(c+210,"ysyx_22040175_top u_id_stage u_id_rest rst_n", false,-1);
        tracep->declArray(c+118,"ysyx_22040175_top u_id_stage u_id_rest id_pc", false,-1, 64,0);
        tracep->declBus(c+108,"ysyx_22040175_top u_id_stage u_id_rest reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+109,"ysyx_22040175_top u_id_stage u_id_rest reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+34,"ysyx_22040175_top u_id_stage u_id_rest reg_waddr", false,-1, 4,0);
        tracep->declBit(c+650,"ysyx_22040175_top u_id_stage u_id_rest write_ready", false,-1);
        tracep->declBus(c+44,"ysyx_22040175_top u_id_stage u_id_rest rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage u_id_rest rest_from_id", false,-1);
        tracep->declBus(c+47,"ysyx_22040175_top u_id_stage u_id_rest ex_inst", false,-1, 31,0);
        tracep->declQuad(c+653,"ysyx_22040175_top u_id_stage u_id_rest from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+655,"ysyx_22040175_top u_id_stage u_id_rest from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_stage u_id_rest rest_id_mem", false,-1);
        tracep->declBus(c+57,"ysyx_22040175_top u_id_stage u_id_rest wb_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+30,"ysyx_22040175_top u_id_stage u_id_rest rest_wb_hazard", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top u_id_stage u_id_rest s_imm", false,-1, 31,0);
        tracep->declBit(c+40,"ysyx_22040175_top u_id_stage u_id_rest ex_s_flag", false,-1);
        tracep->declBit(c+60,"ysyx_22040175_top u_id_stage u_id_rest mem_s_flag", false,-1);
        tracep->declBus(c+41,"ysyx_22040175_top u_id_stage u_id_rest ex_s_imm", false,-1, 31,0);
        tracep->declBit(c+121,"ysyx_22040175_top u_id_stage u_id_rest cunqu_hazard", false,-1);
        tracep->declBit(c+122,"ysyx_22040175_top u_id_stage u_id_rest delay_rest_id_mem", false,-1);
        tracep->declBit(c+552,"ysyx_22040175_top u_id_stage u_id_control_rest clk", false,-1);
        tracep->declBit(c+210,"ysyx_22040175_top u_id_stage u_id_control_rest rst_n", false,-1);
        tracep->declBit(c+105,"ysyx_22040175_top u_id_stage u_id_control_rest branch", false,-1);
        tracep->declBit(c+106,"ysyx_22040175_top u_id_stage u_id_control_rest jump", false,-1);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage u_id_control_rest control_rest", false,-1);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage u_id_control_rest rest_from_id", false,-1);
        tracep->declBit(c+552,"ysyx_22040175_top u_id_stage u_mux_dt_pipe clk", false,-1);
        tracep->declBit(c+210,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rst_n", false,-1);
        tracep->declBus(c+108,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg1_raddr", false,-1, 4,0);
        tracep->declBus(c+109,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg2_raddr", false,-1, 4,0);
        tracep->declBus(c+34,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg_waddr", false,-1, 4,0);
        tracep->declBus(c+44,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rd_buf_flag", false,-1, 2,0);
        tracep->declQuad(c+346,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+348,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+50,"ysyx_22040175_top u_id_stage u_mux_dt_pipe from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22040175_top u_id_stage u_mux_dt_pipe from_mem_alu_res", false,-1, 63,0);
        tracep->declBit(c+29,"ysyx_22040175_top u_id_stage u_mux_dt_pipe control_rest", false,-1);
        tracep->declBit(c+28,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_from_id", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+351+i*2,"ysyx_22040175_top u_id_stage u_mux_dt_pipe reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+23,"ysyx_22040175_top u_id_stage u_mux_dt_pipe s_flag", false,-1);
        tracep->declQuad(c+561,"ysyx_22040175_top u_id_stage u_mux_dt_pipe end_write_addr", false,-1, 63,0);
        tracep->declQuad(c+78,"ysyx_22040175_top u_id_stage u_mux_dt_pipe wb_hazard_result", false,-1, 63,0);
        tracep->declBus(c+57,"ysyx_22040175_top u_id_stage u_mux_dt_pipe mem_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_id_mem", false,-1);
        tracep->declBit(c+30,"ysyx_22040175_top u_id_stage u_mux_dt_pipe rest_wb_hazard", false,-1);
        tracep->declBus(c+350,"ysyx_22040175_top u_id_stage u_mux_dt_pipe data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+110,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_reg1_rdata", false,-1, 63,0);
        tracep->declBit(c+657,"ysyx_22040175_top u_id_stage u_mux_dt_pipe ex_s_flag", false,-1);
        tracep->declBus(c+658,"ysyx_22040175_top u_id_stage u_mux_dt_pipe test", false,-1, 2,0);
        tracep->declBit(c+123,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_rest_id_mem", false,-1);
        tracep->declBit(c+124,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_control_rest", false,-1);
        tracep->declBus(c+125,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+126,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+127,"ysyx_22040175_top u_id_stage u_mux_dt_pipe delay_reg2_rdata", false,-1, 63,0);
        tracep->declBus(c+17,"ysyx_22040175_top u_id_stage u_mux_alu alu_src_sel", false,-1, 1,0);
        tracep->declQuad(c+346,"ysyx_22040175_top u_id_stage u_mux_alu reg1_rdata", false,-1, 63,0);
        tracep->declQuad(c+348,"ysyx_22040175_top u_id_stage u_mux_alu reg2_rdata", false,-1, 63,0);
        tracep->declQuad(c+14,"ysyx_22040175_top u_id_stage u_mux_alu imm", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_stage u_mux_alu curr_pc", false,-1, 63,0);
        tracep->declBit(c+651,"ysyx_22040175_top u_id_stage u_mux_alu no_use", false,-1);
        tracep->declQuad(c+213,"ysyx_22040175_top u_id_stage u_mux_alu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_22040175_top u_id_stage u_mux_alu alu_src2", false,-1, 63,0);
        tracep->declBit(c+552,"ysyx_22040175_top u_id_stage u_mux_pc clk", false,-1);
        tracep->declBit(c+210,"ysyx_22040175_top u_id_stage u_mux_pc rst_n", false,-1);
        tracep->declBit(c+652,"ysyx_22040175_top u_id_stage u_mux_pc ena", false,-1);
        tracep->declBit(c+105,"ysyx_22040175_top u_id_stage u_mux_pc branch", false,-1);
        tracep->declBit(c+106,"ysyx_22040175_top u_id_stage u_mux_pc jump", false,-1);
        tracep->declBit(c+20,"ysyx_22040175_top u_id_stage u_mux_pc jalr", false,-1);
        tracep->declQuad(c+14,"ysyx_22040175_top u_id_stage u_mux_pc imm", false,-1, 63,0);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_stage u_mux_pc curr_pc", false,-1, 63,0);
        tracep->declQuad(c+211,"ysyx_22040175_top u_id_stage u_mux_pc next_pc", false,-1, 63,0);
        tracep->declBit(c+21,"ysyx_22040175_top u_id_stage u_mux_pc ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+415+i*2,"ysyx_22040175_top u_id_stage u_mux_pc reg_f", true,(i+0), 63,0);}}
        tracep->declBus(c+24,"ysyx_22040175_top u_id_stage u_mux_pc s_imm", false,-1, 31,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_id_stage u_mux_pc alu_op", false,-1, 4,0);
        tracep->declQuad(c+213,"ysyx_22040175_top u_id_stage u_mux_pc alu_src1", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_22040175_top u_id_stage u_mux_pc alu_src2", false,-1, 63,0);
        tracep->declBus(c+350,"ysyx_22040175_top u_id_stage u_mux_pc data_rest_cond", false,-1, 2,0);
        tracep->declQuad(c+110,"ysyx_22040175_top u_id_stage u_mux_pc reg1_rdata", false,-1, 63,0);
        tracep->declBit(c+217,"ysyx_22040175_top u_id_stage u_mux_pc sig_jalr", false,-1);
        tracep->declBit(c+11,"ysyx_22040175_top u_id_stage u_mux_pc delay_sig_jalr", false,-1);
        tracep->declBit(c+479,"ysyx_22040175_top u_id_stage u_mux_pc zero", false,-1);
        tracep->declQuad(c+480,"ysyx_22040175_top u_id_stage u_mux_pc signed_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+482,"ysyx_22040175_top u_id_stage u_mux_pc signed_alu_src2", false,-1, 63,0);
        tracep->declBus(c+484,"ysyx_22040175_top u_id_stage u_mux_pc test", false,-1, 2,0);
        tracep->declBit(c+552,"ysyx_22040175_top u_id_ex_regs clk", false,-1);
        tracep->declBit(c+210,"ysyx_22040175_top u_id_ex_regs rst_n", false,-1);
        tracep->declQuad(c+7,"ysyx_22040175_top u_id_ex_regs pc_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+31,"ysyx_22040175_top u_id_ex_regs pc_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+12,"ysyx_22040175_top u_id_ex_regs reg_wen_id_ex_i", false,-1);
        tracep->declBus(c+13,"ysyx_22040175_top u_id_ex_regs reg_waddr_id_ex_i", false,-1, 4,0);
        tracep->declBus(c+16,"ysyx_22040175_top u_id_ex_regs alu_op_id_ex_i", false,-1, 4,0);
        tracep->declQuad(c+18,"ysyx_22040175_top u_id_ex_regs unknown_code_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+21,"ysyx_22040175_top u_id_ex_regs ebreak_flag_id_ex_i", false,-1);
        tracep->declBus(c+22,"ysyx_22040175_top u_id_ex_regs wmask_id_ex_i", false,-1, 7,0);
        tracep->declBit(c+23,"ysyx_22040175_top u_id_ex_regs s_flag_id_ex_i", false,-1);
        tracep->declBus(c+24,"ysyx_22040175_top u_id_ex_regs s_imm_id_ex_i", false,-1, 31,0);
        tracep->declBus(c+25,"ysyx_22040175_top u_id_ex_regs expand_signed_id_ex_i", false,-1, 3,0);
        tracep->declBus(c+26,"ysyx_22040175_top u_id_ex_regs rd_flag_id_ex_i", false,-1, 2,0);
        tracep->declBus(c+27,"ysyx_22040175_top u_id_ex_regs rd_buf_flag_id_ex_i", false,-1, 2,0);
        tracep->declBit(c+33,"ysyx_22040175_top u_id_ex_regs reg_wen_id_ex_o", false,-1);
        tracep->declBus(c+34,"ysyx_22040175_top u_id_ex_regs reg_waddr_id_ex_o", false,-1, 4,0);
        tracep->declBus(c+35,"ysyx_22040175_top u_id_ex_regs alu_op_id_ex_o", false,-1, 4,0);
        tracep->declQuad(c+36,"ysyx_22040175_top u_id_ex_regs unknown_code_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+38,"ysyx_22040175_top u_id_ex_regs ebreak_flag_id_ex_o", false,-1);
        tracep->declBus(c+39,"ysyx_22040175_top u_id_ex_regs wmask_id_ex_o", false,-1, 7,0);
        tracep->declBit(c+40,"ysyx_22040175_top u_id_ex_regs s_flag_id_ex_o", false,-1);
        tracep->declBus(c+41,"ysyx_22040175_top u_id_ex_regs s_imm_id_ex_o", false,-1, 31,0);
        tracep->declBus(c+42,"ysyx_22040175_top u_id_ex_regs expand_signed_id_ex_o", false,-1, 3,0);
        tracep->declBus(c+43,"ysyx_22040175_top u_id_ex_regs rd_flag_id_ex_o", false,-1, 2,0);
        tracep->declBus(c+44,"ysyx_22040175_top u_id_ex_regs rd_buf_flag_id_ex_o", false,-1, 2,0);
        tracep->declQuad(c+659,"ysyx_22040175_top u_id_ex_regs reg_wdata_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+10,"ysyx_22040175_top u_id_ex_regs time_set_id_ex_i", false,-1);
        tracep->declQuad(c+661,"ysyx_22040175_top u_id_ex_regs reg_wdata_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+639,"ysyx_22040175_top u_id_ex_regs time_set_id_ex_o", false,-1);
        tracep->declBit(c+9,"ysyx_22040175_top u_id_ex_regs ena_id_ex_i", false,-1);
        tracep->declBit(c+45,"ysyx_22040175_top u_id_ex_regs ena_id_ex_o", false,-1);
        tracep->declQuad(c+213,"ysyx_22040175_top u_id_ex_regs alu_src1_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+215,"ysyx_22040175_top u_id_ex_regs alu_src2_id_ex_i", false,-1, 63,0);
        tracep->declBit(c+5,"ysyx_22040175_top u_id_ex_regs rest_id_mem_id_ex_i", false,-1);
        tracep->declQuad(c+52,"ysyx_22040175_top u_id_ex_regs alu_src1_id_ex_o", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040175_top u_id_ex_regs alu_src2_id_ex_o", false,-1, 63,0);
        tracep->declBit(c+46,"ysyx_22040175_top u_id_ex_regs rest_id_mem_id_ex_o", false,-1);
        tracep->declQuad(c+103,"ysyx_22040175_top u_id_ex_regs id_inst", false,-1, 63,0);
        tracep->declQuad(c+129,"ysyx_22040175_top u_id_ex_regs ex_inst", false,-1, 63,0);
        tracep->declQuad(c+561,"ysyx_22040175_top u_id_ex_regs end_write_addr_id_ex_i", false,-1, 63,0);
        tracep->declQuad(c+48,"ysyx_22040175_top u_id_ex_regs end_write_addr_id_ex_o", false,-1, 63,0);
        tracep->declBus(c+35,"ysyx_22040175_top u_ex_stage alu_op", false,-1, 4,0);
        tracep->declQuad(c+52,"ysyx_22040175_top u_ex_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040175_top u_ex_stage alu_src2", false,-1, 63,0);
        tracep->declBit(c+131,"ysyx_22040175_top u_ex_stage zero", false,-1);
        tracep->declQuad(c+50,"ysyx_22040175_top u_ex_stage alu_res", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22040175_top u_ex_stage rd_flag", false,-1, 2,0);
        tracep->declBus(c+42,"ysyx_22040175_top u_ex_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+35,"ysyx_22040175_top u_ex_stage u_alu alu_op", false,-1, 4,0);
        tracep->declQuad(c+52,"ysyx_22040175_top u_ex_stage u_alu alu_src1", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040175_top u_ex_stage u_alu alu_src2", false,-1, 63,0);
        tracep->declBit(c+131,"ysyx_22040175_top u_ex_stage u_alu zero", false,-1);
        tracep->declQuad(c+50,"ysyx_22040175_top u_ex_stage u_alu alu_res_ex_sign", false,-1, 63,0);
        tracep->declBus(c+43,"ysyx_22040175_top u_ex_stage u_alu rd_flag", false,-1, 2,0);
        tracep->declBus(c+42,"ysyx_22040175_top u_ex_stage u_alu expand_signed", false,-1, 3,0);
        tracep->declBus(c+132,"ysyx_22040175_top u_ex_stage u_alu test", false,-1, 2,0);
        tracep->declQuad(c+133,"ysyx_22040175_top u_ex_stage u_alu alu_res", false,-1, 63,0);
        tracep->declQuad(c+135,"ysyx_22040175_top u_ex_stage u_alu signed_alu_src1", false,-1, 63,0);
        tracep->declQuad(c+137,"ysyx_22040175_top u_ex_stage u_alu signed_alu_src2", false,-1, 63,0);
        tracep->declBit(c+552,"ysyx_22040175_top u_ex_mem_regs clk", false,-1);
        tracep->declBit(c+210,"ysyx_22040175_top u_ex_mem_regs rst_n", false,-1);
        tracep->declBit(c+33,"ysyx_22040175_top u_ex_mem_regs reg_wen_ex_mem_i", false,-1);
        tracep->declBus(c+34,"ysyx_22040175_top u_ex_mem_regs reg_waddr_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+50,"ysyx_22040175_top u_ex_mem_regs from_ex_alu_res_ex_mem_i", false,-1, 63,0);
        tracep->declBus(c+39,"ysyx_22040175_top u_ex_mem_regs wmask_ex_mem_i", false,-1, 7,0);
        tracep->declBit(c+40,"ysyx_22040175_top u_ex_mem_regs s_flag_ex_mem_i", false,-1);
        tracep->declBit(c+639,"ysyx_22040175_top u_ex_mem_regs time_set_ex_mem_i", false,-1);
        tracep->declBus(c+41,"ysyx_22040175_top u_ex_mem_regs s_imm_ex_mem_i", false,-1, 31,0);
        tracep->declBus(c+42,"ysyx_22040175_top u_ex_mem_regs expand_signed_ex_mem_i", false,-1, 3,0);
        tracep->declBit(c+38,"ysyx_22040175_top u_ex_mem_regs ebreak_flag_ex_mem_i", false,-1);
        tracep->declBus(c+44,"ysyx_22040175_top u_ex_mem_regs rd_buf_flag_ex_mem_i", false,-1, 2,0);
        tracep->declBus(c+35,"ysyx_22040175_top u_ex_mem_regs alu_op_ex_mem_i", false,-1, 4,0);
        tracep->declQuad(c+52,"ysyx_22040175_top u_ex_mem_regs alu_src1_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+54,"ysyx_22040175_top u_ex_mem_regs alu_src2_ex_mem_i", false,-1, 63,0);
        tracep->declBit(c+56,"ysyx_22040175_top u_ex_mem_regs reg_wen_ex_mem_o", false,-1);
        tracep->declBus(c+57,"ysyx_22040175_top u_ex_mem_regs reg_waddr_ex_mem_o", false,-1, 4,0);
        tracep->declBit(c+58,"ysyx_22040175_top u_ex_mem_regs ebreak_flag_ex_mem_o", false,-1);
        tracep->declBus(c+59,"ysyx_22040175_top u_ex_mem_regs wmask_ex_mem_o", false,-1, 7,0);
        tracep->declBit(c+60,"ysyx_22040175_top u_ex_mem_regs s_flag_ex_mem_o", false,-1);
        tracep->declBit(c+61,"ysyx_22040175_top u_ex_mem_regs time_set_ex_mem_o", false,-1);
        tracep->declBus(c+62,"ysyx_22040175_top u_ex_mem_regs s_imm_ex_mem_o", false,-1, 31,0);
        tracep->declBus(c+63,"ysyx_22040175_top u_ex_mem_regs expand_signed_ex_mem_o", false,-1, 3,0);
        tracep->declBus(c+64,"ysyx_22040175_top u_ex_mem_regs rd_buf_flag_ex_mem_o", false,-1, 2,0);
        tracep->declBus(c+65,"ysyx_22040175_top u_ex_mem_regs alu_op_ex_mem_o", false,-1, 4,0);
        tracep->declQuad(c+66,"ysyx_22040175_top u_ex_mem_regs alu_src1_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22040175_top u_ex_mem_regs alu_src2_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22040175_top u_ex_mem_regs from_ex_alu_res_ex_mem_o", false,-1, 63,0);
        tracep->declQuad(c+31,"ysyx_22040175_top u_ex_mem_regs pc_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+72,"ysyx_22040175_top u_ex_mem_regs pc_ex_mem_o", false,-1, 63,0);
        tracep->declBit(c+46,"ysyx_22040175_top u_ex_mem_regs rest_id_mem_ex_mem_i", false,-1);
        tracep->declBit(c+95,"ysyx_22040175_top u_ex_mem_regs rest_id_mem_ex_mem_o", false,-1);
        tracep->declQuad(c+48,"ysyx_22040175_top u_ex_mem_regs end_write_addr_ex_mem_i", false,-1, 63,0);
        tracep->declQuad(c+74,"ysyx_22040175_top u_ex_mem_regs end_write_addr_ex_mem_o", false,-1, 63,0);
        tracep->declBus(c+64,"ysyx_22040175_top u_mem_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBus(c+65,"ysyx_22040175_top u_mem_stage alu_op", false,-1, 4,0);
        tracep->declQuad(c+66,"ysyx_22040175_top u_mem_stage alu_src1", false,-1, 63,0);
        tracep->declQuad(c+68,"ysyx_22040175_top u_mem_stage alu_src2", false,-1, 63,0);
        tracep->declBit(c+663,"ysyx_22040175_top u_mem_stage no_use", false,-1);
        tracep->declQuad(c+76,"ysyx_22040175_top u_mem_stage sign_alu_res", false,-1, 63,0);
        tracep->declQuad(c+70,"ysyx_22040175_top u_mem_stage mem_from_ex_alu_res", false,-1, 63,0);
        tracep->declBus(c+63,"ysyx_22040175_top u_mem_stage mem_expand_signed", false,-1, 3,0);
        tracep->declQuad(c+78,"ysyx_22040175_top u_mem_stage wb_hazard_result", false,-1, 63,0);
        tracep->declQuad(c+139,"ysyx_22040175_top u_mem_stage rd_buf_lw", false,-1, 63,0);
        tracep->declQuad(c+141,"ysyx_22040175_top u_mem_stage alu_res", false,-1, 63,0);
        tracep->declBit(c+552,"ysyx_22040175_top u_mem_wb_regs clk", false,-1);
        tracep->declBit(c+210,"ysyx_22040175_top u_mem_wb_regs rst_n", false,-1);
        tracep->declBit(c+56,"ysyx_22040175_top u_mem_wb_regs reg_wen_mem_wb_i", false,-1);
        tracep->declBus(c+57,"ysyx_22040175_top u_mem_wb_regs reg_waddr_mem_wb_i", false,-1, 4,0);
        tracep->declQuad(c+70,"ysyx_22040175_top u_mem_wb_regs from_ex_alu_res_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+76,"ysyx_22040175_top u_mem_wb_regs from_mem_alu_res_mem_wb_i", false,-1, 63,0);
        tracep->declBus(c+59,"ysyx_22040175_top u_mem_wb_regs wmask_mem_wb_i", false,-1, 7,0);
        tracep->declBit(c+60,"ysyx_22040175_top u_mem_wb_regs s_flag_mem_wb_i", false,-1);
        tracep->declBit(c+61,"ysyx_22040175_top u_mem_wb_regs time_set_mem_wb_i", false,-1);
        tracep->declBus(c+62,"ysyx_22040175_top u_mem_wb_regs s_imm_mem_wb_i", false,-1, 31,0);
        tracep->declBus(c+63,"ysyx_22040175_top u_mem_wb_regs expand_signed_mem_wb_i", false,-1, 3,0);
        tracep->declBit(c+58,"ysyx_22040175_top u_mem_wb_regs ebreak_flag_mem_wb_i", false,-1);
        tracep->declBus(c+64,"ysyx_22040175_top u_mem_wb_regs rd_buf_flag_mem_wb_i", false,-1, 2,0);
        tracep->declBit(c+80,"ysyx_22040175_top u_mem_wb_regs reg_wen_mem_wb_o", false,-1);
        tracep->declBus(c+81,"ysyx_22040175_top u_mem_wb_regs reg_waddr_mem_wb_o", false,-1, 4,0);
        tracep->declQuad(c+664,"ysyx_22040175_top u_mem_wb_regs reg_wdata_mem_wb_o", false,-1, 63,0);
        tracep->declBus(c+82,"ysyx_22040175_top u_mem_wb_regs wmask_mem_wb_o", false,-1, 7,0);
        tracep->declBit(c+83,"ysyx_22040175_top u_mem_wb_regs s_flag_mem_wb_o", false,-1);
        tracep->declBit(c+84,"ysyx_22040175_top u_mem_wb_regs time_set_mem_wb_o", false,-1);
        tracep->declBus(c+85,"ysyx_22040175_top u_mem_wb_regs s_imm_mem_wb_o", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040175_top u_mem_wb_regs expand_signed_mem_wb_o", false,-1, 3,0);
        tracep->declBit(c+87,"ysyx_22040175_top u_mem_wb_regs ebreak_flag_mem_wb_o", false,-1);
        tracep->declBus(c+88,"ysyx_22040175_top u_mem_wb_regs rd_buf_flag_mem_wb_o", false,-1, 2,0);
        tracep->declQuad(c+89,"ysyx_22040175_top u_mem_wb_regs from_ex_alu_res_mem_wb_o", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_22040175_top u_mem_wb_regs from_mem_alu_res_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+666,"ysyx_22040175_top u_mem_wb_regs ex_pc_ready_mem_wb_i", false,-1);
        tracep->declBit(c+143,"ysyx_22040175_top u_mem_wb_regs ex_pc_ready_mem_wb_o", false,-1);
        tracep->declQuad(c+72,"ysyx_22040175_top u_mem_wb_regs pc_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+93,"ysyx_22040175_top u_mem_wb_regs pc_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+95,"ysyx_22040175_top u_mem_wb_regs rest_id_mem_ex_mem_o", false,-1);
        tracep->declQuad(c+74,"ysyx_22040175_top u_mem_wb_regs end_write_add_mem_wb_i", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_22040175_top u_mem_wb_regs end_write_add_mem_wb_o", false,-1, 63,0);
        tracep->declBit(c+552,"ysyx_22040175_top u_wb_stage clk", false,-1);
        tracep->declBit(c+210,"ysyx_22040175_top u_wb_stage rst_n", false,-1);
        tracep->declBit(c+80,"ysyx_22040175_top u_wb_stage reg_wen", false,-1);
        tracep->declBus(c+81,"ysyx_22040175_top u_wb_stage reg_waddr", false,-1, 4,0);
        tracep->declQuad(c+89,"ysyx_22040175_top u_wb_stage from_ex_alu_res", false,-1, 63,0);
        tracep->declQuad(c+91,"ysyx_22040175_top u_wb_stage from_mem_alu_res", false,-1, 63,0);
        tracep->declBus(c+82,"ysyx_22040175_top u_wb_stage wmask", false,-1, 7,0);
        tracep->declBit(c+83,"ysyx_22040175_top u_wb_stage s_flag", false,-1);
        tracep->declBit(c+558,"ysyx_22040175_top u_wb_stage time_set", false,-1);
        tracep->declBus(c+85,"ysyx_22040175_top u_wb_stage s_imm", false,-1, 31,0);
        tracep->declBus(c+86,"ysyx_22040175_top u_wb_stage expand_signed", false,-1, 3,0);
        tracep->declBus(c+88,"ysyx_22040175_top u_wb_stage rd_buf_flag", false,-1, 2,0);
        tracep->declBit(c+87,"ysyx_22040175_top u_wb_stage ebreak_flag", false,-1);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+485+i*2,"ysyx_22040175_top u_wb_stage reg_f", true,(i+0), 63,0);}}
        tracep->declBit(c+549,"ysyx_22040175_top u_wb_stage write_ready", false,-1);
        tracep->declBit(c+667,"ysyx_22040175_top u_wb_stage wb_no_use", false,-1);
        tracep->declQuad(c+93,"ysyx_22040175_top u_wb_stage wb_pc", false,-1, 63,0);
        tracep->declQuad(c+98,"ysyx_22040175_top u_wb_stage wb_delay_pc", false,-1, 63,0);
        tracep->declQuad(c+96,"ysyx_22040175_top u_wb_stage end_write_addr", false,-1, 63,0);
        tracep->declBit(c+668,"ysyx_22040175_top u_wb_stage cunqu_hazard", false,-1);
        tracep->declQuad(c+144,"ysyx_22040175_top u_wb_stage reg_wdata", false,-1, 63,0);
        tracep->declQuad(c+550,"ysyx_22040175_top u_wb_stage end_wb_waddr", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+146+i*2,"ysyx_22040175_top u_wb_stage wb_delay_reg_f", true,(i+0), 63,0);}}
    }
}

void Vysyx_22040175_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vysyx_22040175_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vysyx_22040175_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vysyx_22040175_top___024root__traceRegister(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vysyx_22040175_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vysyx_22040175_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vysyx_22040175_top___024root__traceCleanup, vlSelf);
    }
}

void Vysyx_22040175_top___024root__traceFullSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vysyx_22040175_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040175_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040175_top___024root*>(voidSelf);
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vysyx_22040175_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040175_top___024root__traceFullSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp21;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(vlSelf->ysyx_22040175_top__DOT__if_ena));
        tracep->fullIData(oldp+2,((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)),32);
        tracep->fullQData(oldp+3,(vlSelf->ysyx_22040175_top__DOT__if_pc),64);
        tracep->fullBit(oldp+5,(vlSelf->ysyx_22040175_top__DOT__rest_id_mem));
        tracep->fullIData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__id_inst),32);
        tracep->fullQData(oldp+7,(vlSelf->ysyx_22040175_top__DOT__id_pc),64);
        tracep->fullBit(oldp+9,(vlSelf->ysyx_22040175_top__DOT__id_ena));
        tracep->fullBit(oldp+10,(vlSelf->ysyx_22040175_top__DOT__id_time_set));
        tracep->fullBit(oldp+11,(vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr));
        tracep->fullBit(oldp+12,(vlSelf->ysyx_22040175_top__DOT__id_reg_wen));
        tracep->fullCData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr),5);
        tracep->fullQData(oldp+14,(vlSelf->ysyx_22040175_top__DOT__id_imm),64);
        tracep->fullCData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__id_alu_op),5);
        tracep->fullCData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel),2);
        tracep->fullQData(oldp+18,(vlSelf->ysyx_22040175_top__DOT__id_unknown_code),64);
        tracep->fullBit(oldp+20,(vlSelf->ysyx_22040175_top__DOT__id_jalr));
        tracep->fullBit(oldp+21,(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag));
        tracep->fullCData(oldp+22,(vlSelf->ysyx_22040175_top__DOT__id_wmask),8);
        tracep->fullBit(oldp+23,(vlSelf->ysyx_22040175_top__DOT__id_s_flag));
        tracep->fullIData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__id_s_imm),32);
        tracep->fullCData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__id_expand_signed),4);
        tracep->fullCData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__id_rd_flag),3);
        tracep->fullCData(oldp+27,(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag),3);
        tracep->fullBit(oldp+28,(vlSelf->ysyx_22040175_top__DOT__rest_from_id));
        tracep->fullBit(oldp+29,(vlSelf->ysyx_22040175_top__DOT__id_control_rest));
        tracep->fullBit(oldp+30,(vlSelf->ysyx_22040175_top__DOT__rest_wb_hazard));
        tracep->fullQData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__ex_pc),64);
        tracep->fullBit(oldp+33,(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen));
        tracep->fullCData(oldp+34,(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr),5);
        tracep->fullCData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__ex_alu_op),5);
        tracep->fullQData(oldp+36,(vlSelf->ysyx_22040175_top__DOT__ex_unknown_code),64);
        tracep->fullBit(oldp+38,(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag));
        tracep->fullCData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__ex_wmask),8);
        tracep->fullBit(oldp+40,(vlSelf->ysyx_22040175_top__DOT__ex_s_flag));
        tracep->fullIData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__ex_s_imm),32);
        tracep->fullCData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed),4);
        tracep->fullCData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag),3);
        tracep->fullCData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag),3);
        tracep->fullBit(oldp+45,(vlSelf->ysyx_22040175_top__DOT__ex_ena));
        tracep->fullBit(oldp+46,(vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem));
        tracep->fullIData(oldp+47,((IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst)),32);
        tracep->fullQData(oldp+48,(vlSelf->ysyx_22040175_top__DOT__ex_end_write_addr),64);
        tracep->fullQData(oldp+50,(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res),64);
        tracep->fullQData(oldp+52,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1),64);
        tracep->fullQData(oldp+54,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2),64);
        tracep->fullBit(oldp+56,(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen));
        tracep->fullCData(oldp+57,(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr),5);
        tracep->fullBit(oldp+58,(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag));
        tracep->fullCData(oldp+59,(vlSelf->ysyx_22040175_top__DOT__mem_wmask),8);
        tracep->fullBit(oldp+60,(vlSelf->ysyx_22040175_top__DOT__mem_s_flag));
        tracep->fullBit(oldp+61,(vlSelf->ysyx_22040175_top__DOT__mem_time_set));
        tracep->fullIData(oldp+62,(vlSelf->ysyx_22040175_top__DOT__mem_s_imm),32);
        tracep->fullCData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed),4);
        tracep->fullCData(oldp+64,(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag),3);
        tracep->fullCData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__mem_alu_op),5);
        tracep->fullQData(oldp+66,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src1),64);
        tracep->fullQData(oldp+68,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src2),64);
        tracep->fullQData(oldp+70,(vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res),64);
        tracep->fullQData(oldp+72,(vlSelf->ysyx_22040175_top__DOT__mem_pc),64);
        tracep->fullQData(oldp+74,(vlSelf->ysyx_22040175_top__DOT__mem_end_write_addr),64);
        tracep->fullQData(oldp+76,(vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res),64);
        tracep->fullQData(oldp+78,(vlSelf->ysyx_22040175_top__DOT__wb_hazard_result),64);
        tracep->fullBit(oldp+80,(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen));
        tracep->fullCData(oldp+81,(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr),5);
        tracep->fullCData(oldp+82,(vlSelf->ysyx_22040175_top__DOT__wb_wmask),8);
        tracep->fullBit(oldp+83,(vlSelf->ysyx_22040175_top__DOT__wb_s_flag));
        tracep->fullBit(oldp+84,(vlSelf->ysyx_22040175_top__DOT__wb_time_set));
        tracep->fullIData(oldp+85,(vlSelf->ysyx_22040175_top__DOT__wb_s_imm),32);
        tracep->fullCData(oldp+86,(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed),4);
        tracep->fullBit(oldp+87,(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag));
        tracep->fullCData(oldp+88,(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag),3);
        tracep->fullQData(oldp+89,(vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res),64);
        tracep->fullQData(oldp+91,(vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res),64);
        tracep->fullQData(oldp+93,(vlSelf->ysyx_22040175_top__DOT__wb_pc),64);
        tracep->fullBit(oldp+95,(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem));
        tracep->fullQData(oldp+96,(vlSelf->ysyx_22040175_top__DOT__wb_end_write_addr),64);
        tracep->fullQData(oldp+98,(vlSelf->ysyx_22040175_top__DOT__wb_delay_pc),64);
        tracep->fullQData(oldp+100,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata),64);
        tracep->fullBit(oldp+102,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__delay_sig_jalr));
        tracep->fullQData(oldp+103,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))),64);
        tracep->fullBit(oldp+105,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch));
        tracep->fullBit(oldp+106,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump));
        tracep->fullCData(oldp+107,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op),3);
        tracep->fullCData(oldp+108,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr),5);
        tracep->fullCData(oldp+109,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr),5);
        tracep->fullQData(oldp+110,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__delay_reg1_rdata),64);
        tracep->fullCData(oldp+112,((0x7fU & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))),7);
        tracep->fullCData(oldp+113,((7U & (IData)(((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                   >> 0xcU)))),3);
        tracep->fullCData(oldp+114,((0x7fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x19U)))),7);
        tracep->fullCData(oldp+115,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 7U)))),5);
        tracep->fullCData(oldp+116,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xfU)))),5);
        tracep->fullCData(oldp+117,((0x1fU & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0x14U)))),5);
        VL_EXTEND_WQ(65,64, __Vtemp21, vlSelf->ysyx_22040175_top__DOT__id_pc);
        tracep->fullWData(oldp+118,(__Vtemp21),65);
        tracep->fullBit(oldp+121,((((((0ULL != vlSelf->ysyx_22040175_top__DOT__id_pc) 
                                      & (0x80000000ULL 
                                         != vlSelf->ysyx_22040175_top__DOT__id_pc)) 
                                     & (0U != (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                                    & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem))) 
                                   & ((~ ((((1U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)) 
                                            | (2U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                                           | (4U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag))) 
                                          | (6U == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag)))) 
                                      & ((~ (((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                                                == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                                               & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                                                  == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                                              | (((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                                                  == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                                                 & ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                                                    == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)))) 
                                             & (0U 
                                                != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)))) 
                                         & ((~ ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                                                  == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr)) 
                                                 | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                                                    == (IData)(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr))) 
                                                & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)))) 
                                            & ((~ (
                                                   ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                                                      == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr)) 
                                                     | ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr) 
                                                        == (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                                                    & (0U 
                                                       != (IData)(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr))) 
                                                   & (~ (IData)(vlSelf->ysyx_22040175_top__DOT__mem_s_flag)))) 
                                               & ((((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                                                    + vlSelf->ysyx_22040175_top__DOT__id_s_imm) 
                                                   == 
                                                   ((IData)(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr) 
                                                    + vlSelf->ysyx_22040175_top__DOT__ex_s_imm)) 
                                                  & (IData)(vlSelf->ysyx_22040175_top__DOT__ex_s_flag)))))))));
        tracep->fullBit(oldp+122,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem));
        tracep->fullBit(oldp+123,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem));
        tracep->fullBit(oldp+124,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_control_rest));
        tracep->fullCData(oldp+125,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr),5);
        tracep->fullCData(oldp+126,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond),3);
        tracep->fullQData(oldp+127,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg2_rdata),64);
        tracep->fullQData(oldp+129,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst),64);
        tracep->fullBit(oldp+131,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__zero));
        tracep->fullCData(oldp+132,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__test),3);
        tracep->fullQData(oldp+133,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res),64);
        tracep->fullQData(oldp+135,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1),64);
        tracep->fullQData(oldp+137,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2),64);
        tracep->fullQData(oldp+139,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw),64);
        tracep->fullQData(oldp+141,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res),64);
        tracep->fullBit(oldp+143,(vlSelf->ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__ex_pc_ready_mem_wb_o));
        tracep->fullQData(oldp+144,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata),64);
        tracep->fullQData(oldp+146,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0]),64);
        tracep->fullQData(oldp+148,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[1]),64);
        tracep->fullQData(oldp+150,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[2]),64);
        tracep->fullQData(oldp+152,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[3]),64);
        tracep->fullQData(oldp+154,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[4]),64);
        tracep->fullQData(oldp+156,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[5]),64);
        tracep->fullQData(oldp+158,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[6]),64);
        tracep->fullQData(oldp+160,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[7]),64);
        tracep->fullQData(oldp+162,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[8]),64);
        tracep->fullQData(oldp+164,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[9]),64);
        tracep->fullQData(oldp+166,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[10]),64);
        tracep->fullQData(oldp+168,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[11]),64);
        tracep->fullQData(oldp+170,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[12]),64);
        tracep->fullQData(oldp+172,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[13]),64);
        tracep->fullQData(oldp+174,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[14]),64);
        tracep->fullQData(oldp+176,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[15]),64);
        tracep->fullQData(oldp+178,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[16]),64);
        tracep->fullQData(oldp+180,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[17]),64);
        tracep->fullQData(oldp+182,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[18]),64);
        tracep->fullQData(oldp+184,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[19]),64);
        tracep->fullQData(oldp+186,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[20]),64);
        tracep->fullQData(oldp+188,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[21]),64);
        tracep->fullQData(oldp+190,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[22]),64);
        tracep->fullQData(oldp+192,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[23]),64);
        tracep->fullQData(oldp+194,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[24]),64);
        tracep->fullQData(oldp+196,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[25]),64);
        tracep->fullQData(oldp+198,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[26]),64);
        tracep->fullQData(oldp+200,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[27]),64);
        tracep->fullQData(oldp+202,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[28]),64);
        tracep->fullQData(oldp+204,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[29]),64);
        tracep->fullQData(oldp+206,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[30]),64);
        tracep->fullQData(oldp+208,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[31]),64);
        tracep->fullBit(oldp+210,(vlSelf->ysyx_22040175_top__DOT__rst_n));
        tracep->fullQData(oldp+211,(vlSelf->ysyx_22040175_top__DOT__id_next_pc),64);
        tracep->fullQData(oldp+213,(vlSelf->ysyx_22040175_top__DOT__id_alu_src1),64);
        tracep->fullQData(oldp+215,(vlSelf->ysyx_22040175_top__DOT__id_alu_src2),64);
        tracep->fullBit(oldp+217,(vlSelf->ysyx_22040175_top__DOT__sig_jalr));
        tracep->fullQData(oldp+218,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0]),64);
        tracep->fullQData(oldp+220,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1]),64);
        tracep->fullQData(oldp+222,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2]),64);
        tracep->fullQData(oldp+224,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3]),64);
        tracep->fullQData(oldp+226,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4]),64);
        tracep->fullQData(oldp+228,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5]),64);
        tracep->fullQData(oldp+230,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6]),64);
        tracep->fullQData(oldp+232,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7]),64);
        tracep->fullQData(oldp+234,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8]),64);
        tracep->fullQData(oldp+236,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9]),64);
        tracep->fullQData(oldp+238,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[10]),64);
        tracep->fullQData(oldp+240,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[11]),64);
        tracep->fullQData(oldp+242,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[12]),64);
        tracep->fullQData(oldp+244,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[13]),64);
        tracep->fullQData(oldp+246,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[14]),64);
        tracep->fullQData(oldp+248,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[15]),64);
        tracep->fullQData(oldp+250,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[16]),64);
        tracep->fullQData(oldp+252,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[17]),64);
        tracep->fullQData(oldp+254,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[18]),64);
        tracep->fullQData(oldp+256,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[19]),64);
        tracep->fullQData(oldp+258,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[20]),64);
        tracep->fullQData(oldp+260,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[21]),64);
        tracep->fullQData(oldp+262,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[22]),64);
        tracep->fullQData(oldp+264,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[23]),64);
        tracep->fullQData(oldp+266,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[24]),64);
        tracep->fullQData(oldp+268,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[25]),64);
        tracep->fullQData(oldp+270,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[26]),64);
        tracep->fullQData(oldp+272,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[27]),64);
        tracep->fullQData(oldp+274,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[28]),64);
        tracep->fullQData(oldp+276,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[29]),64);
        tracep->fullQData(oldp+278,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[30]),64);
        tracep->fullQData(oldp+280,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[31]),64);
        tracep->fullQData(oldp+282,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0]),64);
        tracep->fullQData(oldp+284,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1]),64);
        tracep->fullQData(oldp+286,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2]),64);
        tracep->fullQData(oldp+288,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3]),64);
        tracep->fullQData(oldp+290,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4]),64);
        tracep->fullQData(oldp+292,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5]),64);
        tracep->fullQData(oldp+294,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6]),64);
        tracep->fullQData(oldp+296,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7]),64);
        tracep->fullQData(oldp+298,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8]),64);
        tracep->fullQData(oldp+300,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9]),64);
        tracep->fullQData(oldp+302,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[10]),64);
        tracep->fullQData(oldp+304,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[11]),64);
        tracep->fullQData(oldp+306,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[12]),64);
        tracep->fullQData(oldp+308,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[13]),64);
        tracep->fullQData(oldp+310,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[14]),64);
        tracep->fullQData(oldp+312,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[15]),64);
        tracep->fullQData(oldp+314,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[16]),64);
        tracep->fullQData(oldp+316,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[17]),64);
        tracep->fullQData(oldp+318,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[18]),64);
        tracep->fullQData(oldp+320,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[19]),64);
        tracep->fullQData(oldp+322,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[20]),64);
        tracep->fullQData(oldp+324,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[21]),64);
        tracep->fullQData(oldp+326,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[22]),64);
        tracep->fullQData(oldp+328,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[23]),64);
        tracep->fullQData(oldp+330,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[24]),64);
        tracep->fullQData(oldp+332,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[25]),64);
        tracep->fullQData(oldp+334,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[26]),64);
        tracep->fullQData(oldp+336,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[27]),64);
        tracep->fullQData(oldp+338,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[28]),64);
        tracep->fullQData(oldp+340,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[29]),64);
        tracep->fullQData(oldp+342,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[30]),64);
        tracep->fullQData(oldp+344,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[31]),64);
        tracep->fullQData(oldp+346,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata),64);
        tracep->fullQData(oldp+348,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata),64);
        tracep->fullCData(oldp+350,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond),3);
        tracep->fullQData(oldp+351,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0]),64);
        tracep->fullQData(oldp+353,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1]),64);
        tracep->fullQData(oldp+355,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2]),64);
        tracep->fullQData(oldp+357,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3]),64);
        tracep->fullQData(oldp+359,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4]),64);
        tracep->fullQData(oldp+361,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5]),64);
        tracep->fullQData(oldp+363,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6]),64);
        tracep->fullQData(oldp+365,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7]),64);
        tracep->fullQData(oldp+367,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8]),64);
        tracep->fullQData(oldp+369,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9]),64);
        tracep->fullQData(oldp+371,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[10]),64);
        tracep->fullQData(oldp+373,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[11]),64);
        tracep->fullQData(oldp+375,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[12]),64);
        tracep->fullQData(oldp+377,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[13]),64);
        tracep->fullQData(oldp+379,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[14]),64);
        tracep->fullQData(oldp+381,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[15]),64);
        tracep->fullQData(oldp+383,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[16]),64);
        tracep->fullQData(oldp+385,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[17]),64);
        tracep->fullQData(oldp+387,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[18]),64);
        tracep->fullQData(oldp+389,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[19]),64);
        tracep->fullQData(oldp+391,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[20]),64);
        tracep->fullQData(oldp+393,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[21]),64);
        tracep->fullQData(oldp+395,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[22]),64);
        tracep->fullQData(oldp+397,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[23]),64);
        tracep->fullQData(oldp+399,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[24]),64);
        tracep->fullQData(oldp+401,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[25]),64);
        tracep->fullQData(oldp+403,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[26]),64);
        tracep->fullQData(oldp+405,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[27]),64);
        tracep->fullQData(oldp+407,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[28]),64);
        tracep->fullQData(oldp+409,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[29]),64);
        tracep->fullQData(oldp+411,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[30]),64);
        tracep->fullQData(oldp+413,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[31]),64);
        tracep->fullQData(oldp+415,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0]),64);
        tracep->fullQData(oldp+417,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1]),64);
        tracep->fullQData(oldp+419,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2]),64);
        tracep->fullQData(oldp+421,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3]),64);
        tracep->fullQData(oldp+423,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4]),64);
        tracep->fullQData(oldp+425,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5]),64);
        tracep->fullQData(oldp+427,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6]),64);
        tracep->fullQData(oldp+429,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7]),64);
        tracep->fullQData(oldp+431,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8]),64);
        tracep->fullQData(oldp+433,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9]),64);
        tracep->fullQData(oldp+435,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[10]),64);
        tracep->fullQData(oldp+437,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[11]),64);
        tracep->fullQData(oldp+439,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[12]),64);
        tracep->fullQData(oldp+441,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[13]),64);
        tracep->fullQData(oldp+443,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[14]),64);
        tracep->fullQData(oldp+445,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[15]),64);
        tracep->fullQData(oldp+447,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[16]),64);
        tracep->fullQData(oldp+449,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[17]),64);
        tracep->fullQData(oldp+451,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[18]),64);
        tracep->fullQData(oldp+453,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[19]),64);
        tracep->fullQData(oldp+455,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[20]),64);
        tracep->fullQData(oldp+457,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[21]),64);
        tracep->fullQData(oldp+459,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[22]),64);
        tracep->fullQData(oldp+461,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[23]),64);
        tracep->fullQData(oldp+463,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[24]),64);
        tracep->fullQData(oldp+465,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[25]),64);
        tracep->fullQData(oldp+467,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[26]),64);
        tracep->fullQData(oldp+469,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[27]),64);
        tracep->fullQData(oldp+471,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[28]),64);
        tracep->fullQData(oldp+473,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[29]),64);
        tracep->fullQData(oldp+475,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[30]),64);
        tracep->fullQData(oldp+477,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[31]),64);
        tracep->fullBit(oldp+479,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero));
        tracep->fullQData(oldp+480,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1),64);
        tracep->fullQData(oldp+482,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2),64);
        tracep->fullCData(oldp+484,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__test),3);
        tracep->fullQData(oldp+485,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[0]),64);
        tracep->fullQData(oldp+487,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[1]),64);
        tracep->fullQData(oldp+489,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[2]),64);
        tracep->fullQData(oldp+491,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[3]),64);
        tracep->fullQData(oldp+493,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[4]),64);
        tracep->fullQData(oldp+495,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[5]),64);
        tracep->fullQData(oldp+497,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[6]),64);
        tracep->fullQData(oldp+499,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[7]),64);
        tracep->fullQData(oldp+501,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[8]),64);
        tracep->fullQData(oldp+503,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[9]),64);
        tracep->fullQData(oldp+505,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[10]),64);
        tracep->fullQData(oldp+507,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[11]),64);
        tracep->fullQData(oldp+509,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[12]),64);
        tracep->fullQData(oldp+511,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[13]),64);
        tracep->fullQData(oldp+513,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[14]),64);
        tracep->fullQData(oldp+515,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[15]),64);
        tracep->fullQData(oldp+517,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[16]),64);
        tracep->fullQData(oldp+519,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[17]),64);
        tracep->fullQData(oldp+521,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[18]),64);
        tracep->fullQData(oldp+523,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[19]),64);
        tracep->fullQData(oldp+525,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[20]),64);
        tracep->fullQData(oldp+527,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[21]),64);
        tracep->fullQData(oldp+529,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[22]),64);
        tracep->fullQData(oldp+531,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[23]),64);
        tracep->fullQData(oldp+533,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[24]),64);
        tracep->fullQData(oldp+535,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[25]),64);
        tracep->fullQData(oldp+537,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[26]),64);
        tracep->fullQData(oldp+539,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[27]),64);
        tracep->fullQData(oldp+541,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[28]),64);
        tracep->fullQData(oldp+543,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[29]),64);
        tracep->fullQData(oldp+545,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[30]),64);
        tracep->fullQData(oldp+547,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[31]),64);
        tracep->fullBit(oldp+549,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__write_ready));
        tracep->fullQData(oldp+550,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__end_wb_waddr),64);
        tracep->fullBit(oldp+552,(vlSelf->clk));
        tracep->fullBit(oldp+553,(vlSelf->rst));
        tracep->fullIData(oldp+554,(vlSelf->inst),32);
        tracep->fullIData(oldp+555,(vlSelf->pc),32);
        tracep->fullQData(oldp+556,(vlSelf->unknown_code),64);
        tracep->fullBit(oldp+558,(vlSelf->time_set));
        tracep->fullIData(oldp+559,(vlSelf->diff_pc),32);
        tracep->fullIData(oldp+560,(vlSelf->diff_delay_pc),32);
        tracep->fullQData(oldp+561,(((IData)(vlSelf->ysyx_22040175_top__DOT__id_s_flag)
                                      ? vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f
                                     [vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr]
                                      : 0ULL)),64);
        tracep->fullQData(oldp+563,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[0]),64);
        tracep->fullQData(oldp+565,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[1]),64);
        tracep->fullQData(oldp+567,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[2]),64);
        tracep->fullQData(oldp+569,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[3]),64);
        tracep->fullQData(oldp+571,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[4]),64);
        tracep->fullQData(oldp+573,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[5]),64);
        tracep->fullQData(oldp+575,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[6]),64);
        tracep->fullQData(oldp+577,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[7]),64);
        tracep->fullQData(oldp+579,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[8]),64);
        tracep->fullQData(oldp+581,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[9]),64);
        tracep->fullQData(oldp+583,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[10]),64);
        tracep->fullQData(oldp+585,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[11]),64);
        tracep->fullQData(oldp+587,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[12]),64);
        tracep->fullQData(oldp+589,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[13]),64);
        tracep->fullQData(oldp+591,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[14]),64);
        tracep->fullQData(oldp+593,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[15]),64);
        tracep->fullQData(oldp+595,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[16]),64);
        tracep->fullQData(oldp+597,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[17]),64);
        tracep->fullQData(oldp+599,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[18]),64);
        tracep->fullQData(oldp+601,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[19]),64);
        tracep->fullQData(oldp+603,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[20]),64);
        tracep->fullQData(oldp+605,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[21]),64);
        tracep->fullQData(oldp+607,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[22]),64);
        tracep->fullQData(oldp+609,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[23]),64);
        tracep->fullQData(oldp+611,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[24]),64);
        tracep->fullQData(oldp+613,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[25]),64);
        tracep->fullQData(oldp+615,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[26]),64);
        tracep->fullQData(oldp+617,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[27]),64);
        tracep->fullQData(oldp+619,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[28]),64);
        tracep->fullQData(oldp+621,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[29]),64);
        tracep->fullQData(oldp+623,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[30]),64);
        tracep->fullQData(oldp+625,(vlSelf->ysyx_22040175_top__DOT__to_id_reg_f[31]),64);
        tracep->fullBit(oldp+627,(vlSelf->ysyx_22040175_top__DOT__id_branch));
        tracep->fullBit(oldp+628,(vlSelf->ysyx_22040175_top__DOT__id_jump));
        tracep->fullBit(oldp+629,(vlSelf->ysyx_22040175_top__DOT__ex_branch));
        tracep->fullBit(oldp+630,(vlSelf->ysyx_22040175_top__DOT__ex_jump));
        tracep->fullQData(oldp+631,(vlSelf->ysyx_22040175_top__DOT__ex_imm),64);
        tracep->fullCData(oldp+633,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src_sel),2);
        tracep->fullBit(oldp+634,(vlSelf->ysyx_22040175_top__DOT__ex_jalr));
        tracep->fullQData(oldp+635,(vlSelf->ysyx_22040175_top__DOT__ex_reg1_rdata),64);
        tracep->fullQData(oldp+637,(vlSelf->ysyx_22040175_top__DOT__ex_reg2_rdata),64);
        tracep->fullBit(oldp+639,(vlSelf->ysyx_22040175_top__DOT__ex_time_set));
        tracep->fullBit(oldp+640,(vlSelf->ysyx_22040175_top__DOT__id_rest_no_use));
        tracep->fullQData(oldp+641,(vlSelf->ysyx_22040175_top__DOT__ex_next_pc),64);
        tracep->fullBit(oldp+643,(vlSelf->ysyx_22040175_top__DOT__write_ready));
        tracep->fullBit(oldp+644,(vlSelf->ysyx_22040175_top__DOT__ex_pc_ready));
        tracep->fullBit(oldp+645,(vlSelf->ysyx_22040175_top__DOT__mem_pc_ready));
        tracep->fullBit(oldp+646,(vlSelf->ysyx_22040175_top__DOT__fr_ex_no_use));
        tracep->fullBit(oldp+647,(vlSelf->ysyx_22040175_top__DOT__wb_pc_ready));
        tracep->fullBit(oldp+648,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__ex_pc_ready));
        tracep->fullBit(oldp+649,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__pc_no_use));
        tracep->fullBit(oldp+650,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__write_ready));
        tracep->fullBit(oldp+651,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__no_use));
        tracep->fullBit(oldp+652,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__ena));
        tracep->fullQData(oldp+653,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__from_ex_alu_res),64);
        tracep->fullQData(oldp+655,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__from_mem_alu_res),64);
        tracep->fullBit(oldp+657,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__ex_s_flag));
        tracep->fullCData(oldp+658,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__test),3);
        tracep->fullQData(oldp+659,(vlSelf->ysyx_22040175_top__DOT__u_id_ex_regs__DOT__reg_wdata_id_ex_i),64);
        tracep->fullQData(oldp+661,(vlSelf->ysyx_22040175_top__DOT__u_id_ex_regs__DOT__reg_wdata_id_ex_o),64);
        tracep->fullBit(oldp+663,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__no_use));
        tracep->fullQData(oldp+664,(vlSelf->ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__reg_wdata_mem_wb_o),64);
        tracep->fullBit(oldp+666,(vlSelf->ysyx_22040175_top__DOT__u_mem_wb_regs__DOT__ex_pc_ready_mem_wb_i));
        tracep->fullBit(oldp+667,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_no_use));
        tracep->fullBit(oldp+668,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__cunqu_hazard));
    }
}
