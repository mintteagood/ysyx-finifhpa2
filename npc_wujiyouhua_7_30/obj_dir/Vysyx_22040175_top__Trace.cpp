// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_22040175_top__Syms.h"


void Vysyx_22040175_top___024root__traceChgSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep);

void Vysyx_22040175_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vysyx_22040175_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040175_top___024root*>(voidSelf);
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vysyx_22040175_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vysyx_22040175_top___024root__traceChgSub0(Vysyx_22040175_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(vlSelf->ysyx_22040175_top__DOT__if_ena));
            tracep->chgIData(oldp+1,((IData)(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata)),32);
            tracep->chgQData(oldp+2,(vlSelf->ysyx_22040175_top__DOT__if_pc),64);
            tracep->chgBit(oldp+4,(vlSelf->ysyx_22040175_top__DOT__rest_id_mem));
            tracep->chgIData(oldp+5,(vlSelf->ysyx_22040175_top__DOT__id_inst),32);
            tracep->chgQData(oldp+6,(vlSelf->ysyx_22040175_top__DOT__id_pc),64);
            tracep->chgBit(oldp+8,(vlSelf->ysyx_22040175_top__DOT__id_ena));
            tracep->chgBit(oldp+9,(vlSelf->ysyx_22040175_top__DOT__id_time_set));
            tracep->chgBit(oldp+10,(vlSelf->ysyx_22040175_top__DOT__delay_sig_jalr));
            tracep->chgBit(oldp+11,(vlSelf->ysyx_22040175_top__DOT__id_reg_wen));
            tracep->chgCData(oldp+12,(vlSelf->ysyx_22040175_top__DOT__id_reg_waddr),5);
            tracep->chgQData(oldp+13,(vlSelf->ysyx_22040175_top__DOT__id_imm),64);
            tracep->chgCData(oldp+15,(vlSelf->ysyx_22040175_top__DOT__id_alu_op),5);
            tracep->chgCData(oldp+16,(vlSelf->ysyx_22040175_top__DOT__id_alu_src_sel),2);
            tracep->chgQData(oldp+17,(vlSelf->ysyx_22040175_top__DOT__id_unknown_code),64);
            tracep->chgBit(oldp+19,(vlSelf->ysyx_22040175_top__DOT__id_jalr));
            tracep->chgBit(oldp+20,(vlSelf->ysyx_22040175_top__DOT__id_ebreak_flag));
            tracep->chgCData(oldp+21,(vlSelf->ysyx_22040175_top__DOT__id_wmask),8);
            tracep->chgBit(oldp+22,(vlSelf->ysyx_22040175_top__DOT__id_s_flag));
            tracep->chgIData(oldp+23,(vlSelf->ysyx_22040175_top__DOT__id_s_imm),32);
            tracep->chgCData(oldp+24,(vlSelf->ysyx_22040175_top__DOT__id_expand_signed),4);
            tracep->chgCData(oldp+25,(vlSelf->ysyx_22040175_top__DOT__id_rd_flag),3);
            tracep->chgCData(oldp+26,(vlSelf->ysyx_22040175_top__DOT__id_rd_buf_flag),3);
            tracep->chgBit(oldp+27,(vlSelf->ysyx_22040175_top__DOT__rest_from_id));
            tracep->chgBit(oldp+28,(vlSelf->ysyx_22040175_top__DOT__id_control_rest));
            tracep->chgBit(oldp+29,(vlSelf->ysyx_22040175_top__DOT__rest_wb_hazard));
            tracep->chgBit(oldp+30,(vlSelf->ysyx_22040175_top__DOT__id_cunqu_hazard));
            tracep->chgQData(oldp+31,(vlSelf->ysyx_22040175_top__DOT__ex_pc),64);
            tracep->chgBit(oldp+33,(vlSelf->ysyx_22040175_top__DOT__ex_reg_wen));
            tracep->chgCData(oldp+34,(vlSelf->ysyx_22040175_top__DOT__ex_reg_waddr),5);
            tracep->chgCData(oldp+35,(vlSelf->ysyx_22040175_top__DOT__ex_alu_op),5);
            tracep->chgQData(oldp+36,(vlSelf->ysyx_22040175_top__DOT__ex_unknown_code),64);
            tracep->chgBit(oldp+38,(vlSelf->ysyx_22040175_top__DOT__ex_ebreak_flag));
            tracep->chgCData(oldp+39,(vlSelf->ysyx_22040175_top__DOT__ex_wmask),8);
            tracep->chgBit(oldp+40,(vlSelf->ysyx_22040175_top__DOT__ex_s_flag));
            tracep->chgIData(oldp+41,(vlSelf->ysyx_22040175_top__DOT__ex_s_imm),32);
            tracep->chgCData(oldp+42,(vlSelf->ysyx_22040175_top__DOT__ex_expand_signed),4);
            tracep->chgCData(oldp+43,(vlSelf->ysyx_22040175_top__DOT__ex_rd_flag),3);
            tracep->chgCData(oldp+44,(vlSelf->ysyx_22040175_top__DOT__ex_rd_buf_flag),3);
            tracep->chgBit(oldp+45,(vlSelf->ysyx_22040175_top__DOT__ex_ena));
            tracep->chgBit(oldp+46,(vlSelf->ysyx_22040175_top__DOT__ex_rest_id_mem));
            tracep->chgIData(oldp+47,((IData)(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst)),32);
            tracep->chgBit(oldp+48,(vlSelf->ysyx_22040175_top__DOT__ex_cunqu_hazard));
            tracep->chgQData(oldp+49,(vlSelf->ysyx_22040175_top__DOT__from_ex_alu_res),64);
            tracep->chgQData(oldp+51,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src1),64);
            tracep->chgQData(oldp+53,(vlSelf->ysyx_22040175_top__DOT__ex_alu_src2),64);
            tracep->chgBit(oldp+55,(vlSelf->ysyx_22040175_top__DOT__mem_reg_wen));
            tracep->chgCData(oldp+56,(vlSelf->ysyx_22040175_top__DOT__mem_reg_waddr),5);
            tracep->chgBit(oldp+57,(vlSelf->ysyx_22040175_top__DOT__mem_ebreak_flag));
            tracep->chgCData(oldp+58,(vlSelf->ysyx_22040175_top__DOT__mem_wmask),8);
            tracep->chgBit(oldp+59,(vlSelf->ysyx_22040175_top__DOT__mem_s_flag));
            tracep->chgBit(oldp+60,(vlSelf->ysyx_22040175_top__DOT__mem_time_set));
            tracep->chgIData(oldp+61,(vlSelf->ysyx_22040175_top__DOT__mem_s_imm),32);
            tracep->chgCData(oldp+62,(vlSelf->ysyx_22040175_top__DOT__mem_expand_signed),4);
            tracep->chgCData(oldp+63,(vlSelf->ysyx_22040175_top__DOT__mem_rd_buf_flag),3);
            tracep->chgCData(oldp+64,(vlSelf->ysyx_22040175_top__DOT__mem_alu_op),5);
            tracep->chgQData(oldp+65,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src1),64);
            tracep->chgQData(oldp+67,(vlSelf->ysyx_22040175_top__DOT__mem_alu_src2),64);
            tracep->chgQData(oldp+69,(vlSelf->ysyx_22040175_top__DOT__mem_from_ex_alu_res),64);
            tracep->chgQData(oldp+71,(vlSelf->ysyx_22040175_top__DOT__mem_pc),64);
            tracep->chgBit(oldp+73,(vlSelf->ysyx_22040175_top__DOT__mem_cunqu_hazard));
            tracep->chgQData(oldp+74,(vlSelf->ysyx_22040175_top__DOT__from_mem_alu_res),64);
            tracep->chgQData(oldp+76,(vlSelf->ysyx_22040175_top__DOT__wb_hazard_result),64);
            tracep->chgBit(oldp+78,(vlSelf->ysyx_22040175_top__DOT__wb_reg_wen));
            tracep->chgCData(oldp+79,(vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr),5);
            tracep->chgCData(oldp+80,(vlSelf->ysyx_22040175_top__DOT__wb_wmask),8);
            tracep->chgBit(oldp+81,(vlSelf->ysyx_22040175_top__DOT__wb_s_flag));
            tracep->chgBit(oldp+82,(vlSelf->ysyx_22040175_top__DOT__wb_time_set));
            tracep->chgIData(oldp+83,(vlSelf->ysyx_22040175_top__DOT__wb_s_imm),32);
            tracep->chgCData(oldp+84,(vlSelf->ysyx_22040175_top__DOT__wb_expand_signed),4);
            tracep->chgBit(oldp+85,(vlSelf->ysyx_22040175_top__DOT__wb_ebreak_flag));
            tracep->chgCData(oldp+86,(vlSelf->ysyx_22040175_top__DOT__wb_rd_buf_flag),3);
            tracep->chgQData(oldp+87,(vlSelf->ysyx_22040175_top__DOT__wb_from_ex_alu_res),64);
            tracep->chgQData(oldp+89,(vlSelf->ysyx_22040175_top__DOT__wb_from_mem_alu_res),64);
            tracep->chgQData(oldp+91,(vlSelf->ysyx_22040175_top__DOT__wb_pc),64);
            tracep->chgBit(oldp+93,(vlSelf->ysyx_22040175_top__DOT__mem_rest_id_mem));
            tracep->chgBit(oldp+94,(vlSelf->ysyx_22040175_top__DOT__wb_cunqu_hazard));
            tracep->chgQData(oldp+95,(vlSelf->ysyx_22040175_top__DOT__wb_delay_pc),64);
            tracep->chgQData(oldp+97,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__rdata),64);
            tracep->chgBit(oldp+99,(vlSelf->ysyx_22040175_top__DOT__u_if_stage__DOT__u_pc_predict__DOT__delay_sig_jalr));
            tracep->chgQData(oldp+100,((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))),64);
            tracep->chgBit(oldp+102,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__branch));
            tracep->chgBit(oldp+103,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__jump));
            tracep->chgCData(oldp+104,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__imm_gen_op),3);
            tracep->chgCData(oldp+105,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_raddr),5);
            tracep->chgCData(oldp+106,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_raddr),5);
            tracep->chgQData(oldp+107,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__delay_reg1_rdata),64);
            tracep->chgCData(oldp+109,((0x7fU & (IData)((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst))))),7);
            tracep->chgCData(oldp+110,((7U & (IData)(
                                                     ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                      >> 0xcU)))),3);
            tracep->chgCData(oldp+111,((0x7fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x19U)))),7);
            tracep->chgCData(oldp+112,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 7U)))),5);
            tracep->chgCData(oldp+113,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0xfU)))),5);
            tracep->chgCData(oldp+114,((0x1fU & (IData)(
                                                        ((QData)((IData)(vlSelf->ysyx_22040175_top__DOT__id_inst)) 
                                                         >> 0x14U)))),5);
            tracep->chgBit(oldp+115,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_id_rest__DOT__delay_rest_id_mem));
            tracep->chgBit(oldp+116,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_rest_id_mem));
            tracep->chgBit(oldp+117,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_control_rest));
            tracep->chgCData(oldp+118,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg_waddr),5);
            tracep->chgCData(oldp+119,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_data_rest_cond),3);
            tracep->chgQData(oldp+120,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_dt_pipe__DOT__delay_reg2_rdata),64);
            tracep->chgQData(oldp+122,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_id_ex_regs__ex_inst),64);
            tracep->chgBit(oldp+124,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__zero));
            tracep->chgQData(oldp+125,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__alu_res),64);
            tracep->chgQData(oldp+127,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src1),64);
            tracep->chgQData(oldp+129,(vlSelf->ysyx_22040175_top__DOT__u_ex_stage__DOT__u_alu__DOT__signed_alu_src2),64);
            tracep->chgQData(oldp+131,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__rd_buf_lw),64);
            tracep->chgQData(oldp+133,(vlSelf->ysyx_22040175_top__DOT__u_mem_stage__DOT__alu_res),64);
            tracep->chgQData(oldp+135,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__reg_wdata),64);
            tracep->chgQData(oldp+137,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[0]),64);
            tracep->chgQData(oldp+139,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[1]),64);
            tracep->chgQData(oldp+141,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[2]),64);
            tracep->chgQData(oldp+143,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[3]),64);
            tracep->chgQData(oldp+145,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[4]),64);
            tracep->chgQData(oldp+147,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[5]),64);
            tracep->chgQData(oldp+149,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[6]),64);
            tracep->chgQData(oldp+151,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[7]),64);
            tracep->chgQData(oldp+153,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[8]),64);
            tracep->chgQData(oldp+155,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[9]),64);
            tracep->chgQData(oldp+157,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[10]),64);
            tracep->chgQData(oldp+159,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[11]),64);
            tracep->chgQData(oldp+161,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[12]),64);
            tracep->chgQData(oldp+163,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[13]),64);
            tracep->chgQData(oldp+165,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[14]),64);
            tracep->chgQData(oldp+167,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[15]),64);
            tracep->chgQData(oldp+169,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[16]),64);
            tracep->chgQData(oldp+171,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[17]),64);
            tracep->chgQData(oldp+173,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[18]),64);
            tracep->chgQData(oldp+175,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[19]),64);
            tracep->chgQData(oldp+177,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[20]),64);
            tracep->chgQData(oldp+179,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[21]),64);
            tracep->chgQData(oldp+181,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[22]),64);
            tracep->chgQData(oldp+183,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[23]),64);
            tracep->chgQData(oldp+185,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[24]),64);
            tracep->chgQData(oldp+187,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[25]),64);
            tracep->chgQData(oldp+189,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[26]),64);
            tracep->chgQData(oldp+191,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[27]),64);
            tracep->chgQData(oldp+193,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[28]),64);
            tracep->chgQData(oldp+195,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[29]),64);
            tracep->chgQData(oldp+197,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[30]),64);
            tracep->chgQData(oldp+199,(vlSelf->ysyx_22040175_top__DOT__u_wb_stage__DOT__wb_delay_reg_f[31]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+201,(vlSelf->ysyx_22040175_top__DOT__rst_n));
            tracep->chgQData(oldp+202,(vlSelf->ysyx_22040175_top__DOT__id_next_pc),64);
            tracep->chgQData(oldp+204,(vlSelf->ysyx_22040175_top__DOT__id_alu_src1),64);
            tracep->chgQData(oldp+206,(vlSelf->ysyx_22040175_top__DOT__id_alu_src2),64);
            tracep->chgBit(oldp+208,(vlSelf->ysyx_22040175_top__DOT__sig_jalr));
            tracep->chgQData(oldp+209,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[0]),64);
            tracep->chgQData(oldp+211,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[1]),64);
            tracep->chgQData(oldp+213,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[2]),64);
            tracep->chgQData(oldp+215,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[3]),64);
            tracep->chgQData(oldp+217,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[4]),64);
            tracep->chgQData(oldp+219,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[5]),64);
            tracep->chgQData(oldp+221,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[6]),64);
            tracep->chgQData(oldp+223,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[7]),64);
            tracep->chgQData(oldp+225,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[8]),64);
            tracep->chgQData(oldp+227,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[9]),64);
            tracep->chgQData(oldp+229,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[10]),64);
            tracep->chgQData(oldp+231,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[11]),64);
            tracep->chgQData(oldp+233,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[12]),64);
            tracep->chgQData(oldp+235,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[13]),64);
            tracep->chgQData(oldp+237,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[14]),64);
            tracep->chgQData(oldp+239,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[15]),64);
            tracep->chgQData(oldp+241,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[16]),64);
            tracep->chgQData(oldp+243,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[17]),64);
            tracep->chgQData(oldp+245,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[18]),64);
            tracep->chgQData(oldp+247,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[19]),64);
            tracep->chgQData(oldp+249,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[20]),64);
            tracep->chgQData(oldp+251,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[21]),64);
            tracep->chgQData(oldp+253,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[22]),64);
            tracep->chgQData(oldp+255,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[23]),64);
            tracep->chgQData(oldp+257,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[24]),64);
            tracep->chgQData(oldp+259,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[25]),64);
            tracep->chgQData(oldp+261,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[26]),64);
            tracep->chgQData(oldp+263,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[27]),64);
            tracep->chgQData(oldp+265,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[28]),64);
            tracep->chgQData(oldp+267,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[29]),64);
            tracep->chgQData(oldp+269,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[30]),64);
            tracep->chgQData(oldp+271,(vlSelf->ysyx_22040175_top__DOT__from_wb_reg_f[31]),64);
            tracep->chgQData(oldp+273,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[0]),64);
            tracep->chgQData(oldp+275,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[1]),64);
            tracep->chgQData(oldp+277,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[2]),64);
            tracep->chgQData(oldp+279,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[3]),64);
            tracep->chgQData(oldp+281,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[4]),64);
            tracep->chgQData(oldp+283,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[5]),64);
            tracep->chgQData(oldp+285,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[6]),64);
            tracep->chgQData(oldp+287,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[7]),64);
            tracep->chgQData(oldp+289,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[8]),64);
            tracep->chgQData(oldp+291,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[9]),64);
            tracep->chgQData(oldp+293,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[10]),64);
            tracep->chgQData(oldp+295,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[11]),64);
            tracep->chgQData(oldp+297,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[12]),64);
            tracep->chgQData(oldp+299,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[13]),64);
            tracep->chgQData(oldp+301,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[14]),64);
            tracep->chgQData(oldp+303,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[15]),64);
            tracep->chgQData(oldp+305,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[16]),64);
            tracep->chgQData(oldp+307,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[17]),64);
            tracep->chgQData(oldp+309,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[18]),64);
            tracep->chgQData(oldp+311,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[19]),64);
            tracep->chgQData(oldp+313,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[20]),64);
            tracep->chgQData(oldp+315,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[21]),64);
            tracep->chgQData(oldp+317,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[22]),64);
            tracep->chgQData(oldp+319,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[23]),64);
            tracep->chgQData(oldp+321,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[24]),64);
            tracep->chgQData(oldp+323,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[25]),64);
            tracep->chgQData(oldp+325,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[26]),64);
            tracep->chgQData(oldp+327,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[27]),64);
            tracep->chgQData(oldp+329,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[28]),64);
            tracep->chgQData(oldp+331,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[29]),64);
            tracep->chgQData(oldp+333,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[30]),64);
            tracep->chgQData(oldp+335,(vlSelf->ysyx_22040175_top__DOT____Vcellinp__u_id_stage__reg_f[31]),64);
            tracep->chgQData(oldp+337,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg1_rdata),64);
            tracep->chgQData(oldp+339,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__reg2_rdata),64);
            tracep->chgCData(oldp+341,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__data_rest_cond),3);
            tracep->chgQData(oldp+342,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[0]),64);
            tracep->chgQData(oldp+344,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[1]),64);
            tracep->chgQData(oldp+346,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[2]),64);
            tracep->chgQData(oldp+348,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[3]),64);
            tracep->chgQData(oldp+350,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[4]),64);
            tracep->chgQData(oldp+352,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[5]),64);
            tracep->chgQData(oldp+354,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[6]),64);
            tracep->chgQData(oldp+356,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[7]),64);
            tracep->chgQData(oldp+358,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[8]),64);
            tracep->chgQData(oldp+360,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[9]),64);
            tracep->chgQData(oldp+362,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[10]),64);
            tracep->chgQData(oldp+364,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[11]),64);
            tracep->chgQData(oldp+366,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[12]),64);
            tracep->chgQData(oldp+368,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[13]),64);
            tracep->chgQData(oldp+370,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[14]),64);
            tracep->chgQData(oldp+372,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[15]),64);
            tracep->chgQData(oldp+374,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[16]),64);
            tracep->chgQData(oldp+376,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[17]),64);
            tracep->chgQData(oldp+378,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[18]),64);
            tracep->chgQData(oldp+380,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[19]),64);
            tracep->chgQData(oldp+382,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[20]),64);
            tracep->chgQData(oldp+384,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[21]),64);
            tracep->chgQData(oldp+386,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[22]),64);
            tracep->chgQData(oldp+388,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[23]),64);
            tracep->chgQData(oldp+390,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[24]),64);
            tracep->chgQData(oldp+392,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[25]),64);
            tracep->chgQData(oldp+394,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[26]),64);
            tracep->chgQData(oldp+396,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[27]),64);
            tracep->chgQData(oldp+398,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[28]),64);
            tracep->chgQData(oldp+400,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[29]),64);
            tracep->chgQData(oldp+402,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[30]),64);
            tracep->chgQData(oldp+404,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_dt_pipe__reg_f[31]),64);
            tracep->chgQData(oldp+406,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[0]),64);
            tracep->chgQData(oldp+408,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[1]),64);
            tracep->chgQData(oldp+410,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[2]),64);
            tracep->chgQData(oldp+412,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[3]),64);
            tracep->chgQData(oldp+414,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[4]),64);
            tracep->chgQData(oldp+416,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[5]),64);
            tracep->chgQData(oldp+418,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[6]),64);
            tracep->chgQData(oldp+420,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[7]),64);
            tracep->chgQData(oldp+422,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[8]),64);
            tracep->chgQData(oldp+424,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[9]),64);
            tracep->chgQData(oldp+426,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[10]),64);
            tracep->chgQData(oldp+428,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[11]),64);
            tracep->chgQData(oldp+430,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[12]),64);
            tracep->chgQData(oldp+432,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[13]),64);
            tracep->chgQData(oldp+434,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[14]),64);
            tracep->chgQData(oldp+436,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[15]),64);
            tracep->chgQData(oldp+438,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[16]),64);
            tracep->chgQData(oldp+440,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[17]),64);
            tracep->chgQData(oldp+442,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[18]),64);
            tracep->chgQData(oldp+444,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[19]),64);
            tracep->chgQData(oldp+446,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[20]),64);
            tracep->chgQData(oldp+448,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[21]),64);
            tracep->chgQData(oldp+450,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[22]),64);
            tracep->chgQData(oldp+452,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[23]),64);
            tracep->chgQData(oldp+454,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[24]),64);
            tracep->chgQData(oldp+456,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[25]),64);
            tracep->chgQData(oldp+458,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[26]),64);
            tracep->chgQData(oldp+460,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[27]),64);
            tracep->chgQData(oldp+462,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[28]),64);
            tracep->chgQData(oldp+464,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[29]),64);
            tracep->chgQData(oldp+466,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[30]),64);
            tracep->chgQData(oldp+468,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT____Vcellinp__u_mux_pc__reg_f[31]),64);
            tracep->chgBit(oldp+470,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__zero));
            tracep->chgQData(oldp+471,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src1),64);
            tracep->chgQData(oldp+473,(vlSelf->ysyx_22040175_top__DOT__u_id_stage__DOT__u_mux_pc__DOT__signed_alu_src2),64);
            tracep->chgQData(oldp+475,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[0]),64);
            tracep->chgQData(oldp+477,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[1]),64);
            tracep->chgQData(oldp+479,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[2]),64);
            tracep->chgQData(oldp+481,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[3]),64);
            tracep->chgQData(oldp+483,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[4]),64);
            tracep->chgQData(oldp+485,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[5]),64);
            tracep->chgQData(oldp+487,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[6]),64);
            tracep->chgQData(oldp+489,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[7]),64);
            tracep->chgQData(oldp+491,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[8]),64);
            tracep->chgQData(oldp+493,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[9]),64);
            tracep->chgQData(oldp+495,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[10]),64);
            tracep->chgQData(oldp+497,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[11]),64);
            tracep->chgQData(oldp+499,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[12]),64);
            tracep->chgQData(oldp+501,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[13]),64);
            tracep->chgQData(oldp+503,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[14]),64);
            tracep->chgQData(oldp+505,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[15]),64);
            tracep->chgQData(oldp+507,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[16]),64);
            tracep->chgQData(oldp+509,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[17]),64);
            tracep->chgQData(oldp+511,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[18]),64);
            tracep->chgQData(oldp+513,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[19]),64);
            tracep->chgQData(oldp+515,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[20]),64);
            tracep->chgQData(oldp+517,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[21]),64);
            tracep->chgQData(oldp+519,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[22]),64);
            tracep->chgQData(oldp+521,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[23]),64);
            tracep->chgQData(oldp+523,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[24]),64);
            tracep->chgQData(oldp+525,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[25]),64);
            tracep->chgQData(oldp+527,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[26]),64);
            tracep->chgQData(oldp+529,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[27]),64);
            tracep->chgQData(oldp+531,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[28]),64);
            tracep->chgQData(oldp+533,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[29]),64);
            tracep->chgQData(oldp+535,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[30]),64);
            tracep->chgQData(oldp+537,(vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f[31]),64);
        }
        tracep->chgBit(oldp+539,(vlSelf->clk));
        tracep->chgBit(oldp+540,(vlSelf->rst));
        tracep->chgIData(oldp+541,(vlSelf->inst),32);
        tracep->chgIData(oldp+542,(vlSelf->pc),32);
        tracep->chgQData(oldp+543,(vlSelf->unknown_code),64);
        tracep->chgBit(oldp+545,(vlSelf->time_set));
        tracep->chgIData(oldp+546,(vlSelf->diff_pc),32);
        tracep->chgIData(oldp+547,(vlSelf->diff_delay_pc),32);
        tracep->chgBit(oldp+548,(vlSelf->out_mem_rd_buf_flag));
        tracep->chgQData(oldp+549,((vlSelf->ysyx_22040175_top__DOT____Vcellout__u_wb_stage__reg_f
                                    [vlSelf->ysyx_22040175_top__DOT__wb_reg_waddr] 
                                    + (QData)((IData)(vlSelf->ysyx_22040175_top__DOT__wb_s_imm)))),64);
    }
}

void Vysyx_22040175_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vysyx_22040175_top___024root* const __restrict vlSelf = static_cast<Vysyx_22040175_top___024root*>(voidSelf);
    Vysyx_22040175_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}