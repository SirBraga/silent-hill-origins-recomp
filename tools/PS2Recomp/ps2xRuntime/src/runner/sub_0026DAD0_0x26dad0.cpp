#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026DAD0
// Address: 0x26dad0 - 0x26e7f8
void sub_0026DAD0_0x26dad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026DAD0_0x26dad0");
#endif

    switch (ctx->pc) {
        case 0x26db90u: goto label_26db90;
        case 0x26dc4cu: goto label_26dc4c;
        case 0x26dc88u: goto label_26dc88;
        case 0x26dcb0u: goto label_26dcb0;
        case 0x26dce4u: goto label_26dce4;
        case 0x26dcf4u: goto label_26dcf4;
        case 0x26dd30u: goto label_26dd30;
        case 0x26dd60u: goto label_26dd60;
        case 0x26dd6cu: goto label_26dd6c;
        case 0x26dd8cu: goto label_26dd8c;
        case 0x26ddbcu: goto label_26ddbc;
        case 0x26ddc8u: goto label_26ddc8;
        case 0x26de08u: goto label_26de08;
        case 0x26de6cu: goto label_26de6c;
        case 0x26de7cu: goto label_26de7c;
        case 0x26de90u: goto label_26de90;
        case 0x26dea0u: goto label_26dea0;
        case 0x26deacu: goto label_26deac;
        case 0x26debcu: goto label_26debc;
        case 0x26dec8u: goto label_26dec8;
        case 0x26dedcu: goto label_26dedc;
        case 0x26def0u: goto label_26def0;
        case 0x26df04u: goto label_26df04;
        case 0x26df10u: goto label_26df10;
        case 0x26df20u: goto label_26df20;
        case 0x26df38u: goto label_26df38;
        case 0x26df6cu: goto label_26df6c;
        case 0x26e014u: goto label_26e014;
        case 0x26e024u: goto label_26e024;
        case 0x26e034u: goto label_26e034;
        case 0x26e044u: goto label_26e044;
        case 0x26e08cu: goto label_26e08c;
        case 0x26e098u: goto label_26e098;
        case 0x26e0a8u: goto label_26e0a8;
        case 0x26e0b4u: goto label_26e0b4;
        case 0x26e0c4u: goto label_26e0c4;
        case 0x26e0d0u: goto label_26e0d0;
        case 0x26e0dcu: goto label_26e0dc;
        case 0x26e0ecu: goto label_26e0ec;
        case 0x26e0fcu: goto label_26e0fc;
        case 0x26e110u: goto label_26e110;
        case 0x26e120u: goto label_26e120;
        case 0x26e12cu: goto label_26e12c;
        case 0x26e13cu: goto label_26e13c;
        case 0x26e148u: goto label_26e148;
        case 0x26e158u: goto label_26e158;
        case 0x26e164u: goto label_26e164;
        case 0x26e174u: goto label_26e174;
        case 0x26e180u: goto label_26e180;
        case 0x26e190u: goto label_26e190;
        case 0x26e19cu: goto label_26e19c;
        case 0x26e1acu: goto label_26e1ac;
        case 0x26e1b8u: goto label_26e1b8;
        case 0x26e1c4u: goto label_26e1c4;
        case 0x26e1d4u: goto label_26e1d4;
        case 0x26e1e4u: goto label_26e1e4;
        case 0x26e1f0u: goto label_26e1f0;
        case 0x26e200u: goto label_26e200;
        case 0x26e20cu: goto label_26e20c;
        case 0x26e218u: goto label_26e218;
        case 0x26e228u: goto label_26e228;
        case 0x26e238u: goto label_26e238;
        case 0x26e248u: goto label_26e248;
        case 0x26e254u: goto label_26e254;
        case 0x26e264u: goto label_26e264;
        case 0x26e274u: goto label_26e274;
        case 0x26e280u: goto label_26e280;
        case 0x26e294u: goto label_26e294;
        case 0x26e2a8u: goto label_26e2a8;
        case 0x26e2bcu: goto label_26e2bc;
        case 0x26e2c8u: goto label_26e2c8;
        case 0x26e2e0u: goto label_26e2e0;
        case 0x26e2ecu: goto label_26e2ec;
        case 0x26e2fcu: goto label_26e2fc;
        case 0x26e318u: goto label_26e318;
        case 0x26e324u: goto label_26e324;
        case 0x26e334u: goto label_26e334;
        case 0x26e340u: goto label_26e340;
        case 0x26e34cu: goto label_26e34c;
        case 0x26e358u: goto label_26e358;
        case 0x26e3a8u: goto label_26e3a8;
        case 0x26e3b4u: goto label_26e3b4;
        case 0x26e3c4u: goto label_26e3c4;
        case 0x26e3d0u: goto label_26e3d0;
        case 0x26e3e0u: goto label_26e3e0;
        case 0x26e3f0u: goto label_26e3f0;
        case 0x26e434u: goto label_26e434;
        case 0x26e450u: goto label_26e450;
        case 0x26e460u: goto label_26e460;
        case 0x26e46cu: goto label_26e46c;
        case 0x26e484u: goto label_26e484;
        case 0x26e4d4u: goto label_26e4d4;
        case 0x26e4ecu: goto label_26e4ec;
        case 0x26e4f8u: goto label_26e4f8;
        case 0x26e514u: goto label_26e514;
        case 0x26e5b4u: goto label_26e5b4;
        case 0x26e5c4u: goto label_26e5c4;
        case 0x26e5e0u: goto label_26e5e0;
        case 0x26e5f0u: goto label_26e5f0;
        case 0x26e5fcu: goto label_26e5fc;
        case 0x26e60cu: goto label_26e60c;
        case 0x26e620u: goto label_26e620;
        case 0x26e62cu: goto label_26e62c;
        case 0x26e63cu: goto label_26e63c;
        case 0x26e64cu: goto label_26e64c;
        case 0x26e658u: goto label_26e658;
        case 0x26e668u: goto label_26e668;
        case 0x26e67cu: goto label_26e67c;
        case 0x26e68cu: goto label_26e68c;
        case 0x26e698u: goto label_26e698;
        case 0x26e6a8u: goto label_26e6a8;
        case 0x26e6b4u: goto label_26e6b4;
        case 0x26e6c4u: goto label_26e6c4;
        case 0x26e6d0u: goto label_26e6d0;
        case 0x26e6e0u: goto label_26e6e0;
        case 0x26e6ecu: goto label_26e6ec;
        case 0x26e6f8u: goto label_26e6f8;
        case 0x26e708u: goto label_26e708;
        case 0x26e71cu: goto label_26e71c;
        case 0x26e728u: goto label_26e728;
        case 0x26e738u: goto label_26e738;
        case 0x26e744u: goto label_26e744;
        case 0x26e750u: goto label_26e750;
        case 0x26e75cu: goto label_26e75c;
        case 0x26e76cu: goto label_26e76c;
        case 0x26e798u: goto label_26e798;
        case 0x26e7c8u: goto label_26e7c8;
        default: break;
    }

    ctx->pc = 0x26dad0u;

    // 0x26dad0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x26dad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x26dad4: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x26dad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x26dad8: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x26dad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x26dadc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26dadcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dae0: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x26dae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x26dae4: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x26dae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
    // 0x26dae8: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x26dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
    // 0x26daec: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x26daecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x26daf0: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x26daf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
    // 0x26daf4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x26daf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x26daf8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x26daf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x26dafc: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x26dafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x26db00: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x26db00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x26db04: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x26db04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26db08: 0x2b03f  dsra32      $s6, $v0, 0
    ctx->pc = 0x26db08u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26db0c: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x26db0cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26db10: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x26db10u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
    // 0x26db14: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x26db14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26db18: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x26db18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26db1c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x26db1cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x26db20: 0x3a03f  dsra32      $s4, $v1, 0
    ctx->pc = 0x26db20u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x26db24: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x26db24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x26db28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26db28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26db2c: 0x2828024  and         $s0, $s4, $v0
    ctx->pc = 0x26db2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x26db30: 0x2041825  or          $v1, $s0, $a0
    ctx->pc = 0x26db30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x26db34: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x26DB34u;
    {
        const bool branch_taken_0x26db34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB34u;
        // 0x26db38: 0x2c2a824  and         $s5, $s6, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db34) {
            ctx->pc = 0x26DB50u;
            goto label_26db50;
        }
    }
    ctx->pc = 0x26DB3Cu;
    // 0x26db3c: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x26db3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x26db40: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x26db40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x26db44: 0x10000321  b           . + 4 + (0x321 << 2)
    ctx->pc = 0x26DB44u;
    {
        const bool branch_taken_0x26db44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB44u;
        // 0x26db48: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db44) {
            ctx->pc = 0x26E7CCu;
            goto label_26e7cc;
        }
    }
    ctx->pc = 0x26DB4Cu;
    // 0x26db4c: 0x0  nop
    ctx->pc = 0x26db4cu;
    // NOP
label_26db50:
    // 0x26db50: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x26db50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x26db54: 0x75102a  slt         $v0, $v1, $s5
    ctx->pc = 0x26db54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x26db58: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26DB58u;
    {
        const bool branch_taken_0x26db58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB58u;
        // 0x26db5c: 0xdfa50000  ld          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db58) {
            ctx->pc = 0x26DB88u;
            goto label_26db88;
        }
    }
    ctx->pc = 0x26DB60u;
    // 0x26db60: 0x16a30003  bne         $s5, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DB60u;
    {
        const bool branch_taken_0x26db60 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 3));
        ctx->pc = 0x26DB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB60u;
        // 0x26db64: 0x70102a  slt         $v0, $v1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db60) {
            ctx->pc = 0x26DB70u;
            goto label_26db70;
        }
    }
    ctx->pc = 0x26DB68u;
    // 0x26db68: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DB68u;
    {
        const bool branch_taken_0x26db68 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        if (branch_taken_0x26db68) {
            ctx->pc = 0x26DB88u;
            goto label_26db88;
        }
    }
    ctx->pc = 0x26DB70u;
label_26db70:
    // 0x26db70: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DB70u;
    {
        const bool branch_taken_0x26db70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26db70) {
            ctx->pc = 0x26DB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DB70u;
            // 0x26db74: 0xdfa50000  ld          $a1, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DB88u;
            goto label_26db88;
        }
    }
    ctx->pc = 0x26DB78u;
    // 0x26db78: 0x16030007  bne         $s0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DB78u;
    {
        const bool branch_taken_0x26db78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x26db78) {
            ctx->pc = 0x26DB98u;
            goto label_26db98;
        }
    }
    ctx->pc = 0x26DB80u;
    // 0x26db80: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DB80u;
    {
        const bool branch_taken_0x26db80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB80u;
        // 0x26db84: 0xdfa50000  ld          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db80) {
            ctx->pc = 0x26DB98u;
            goto label_26db98;
        }
    }
    ctx->pc = 0x26DB88u;
label_26db88:
    // 0x26db88: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26DB88u;
    SET_GPR_U32(ctx, 31, 0x26DB90u);
    ctx->pc = 0x26DB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DB88u;
    // 0x26db8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26DB88u, 0x26DB90u)) {
        return;
    }
    ctx->pc = 0x26DB90u;
label_26db90:
    // 0x26db90: 0x1000030e  b           . + 4 + (0x30E << 2)
    ctx->pc = 0x26DB90u;
    {
        const bool branch_taken_0x26db90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB90u;
        // 0x26db94: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db90) {
            ctx->pc = 0x26E7CCu;
            goto label_26e7cc;
        }
    }
    ctx->pc = 0x26DB98u;
label_26db98:
    // 0x26db98: 0x6c10020  bgez        $s6, . + 4 + (0x20 << 2)
    ctx->pc = 0x26DB98u;
    {
        const bool branch_taken_0x26db98 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x26DB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DB98u;
        // 0x26db9c: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26db98) {
            ctx->pc = 0x26DC1Cu;
            goto label_26dc1c;
        }
    }
    ctx->pc = 0x26DBA0u;
    // 0x26dba0: 0x3c02433f  lui         $v0, 0x433F
    ctx->pc = 0x26dba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17215 << 16));
    // 0x26dba4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26dba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26dba8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26dba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26dbac: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26DBACu;
    {
        const bool branch_taken_0x26dbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBACu;
        // 0x26dbb0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbac) {
            ctx->pc = 0x26DC18u;
            goto label_26dc18;
        }
    }
    ctx->pc = 0x26DBB4u;
    // 0x26dbb4: 0x3c023fef  lui         $v0, 0x3FEF
    ctx->pc = 0x26dbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
    // 0x26dbb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26dbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26dbbc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26dbbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26dbc0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26DBC0u;
    {
        const bool branch_taken_0x26dbc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBC0u;
        // 0x26dbc4: 0x101503  sra         $v0, $s0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbc0) {
            ctx->pc = 0x26DC1Cu;
            goto label_26dc1c;
        }
    }
    ctx->pc = 0x26DBC8u;
    // 0x26dbc8: 0x2453fc01  addiu       $s3, $v0, -0x3FF
    ctx->pc = 0x26dbc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
    // 0x26dbcc: 0x2a630015  slti        $v1, $s3, 0x15
    ctx->pc = 0x26dbccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x26dbd0: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26DBD0u;
    {
        const bool branch_taken_0x26dbd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBD0u;
        // 0x26dbd4: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbd0) {
            ctx->pc = 0x26DBF4u;
            goto label_26dbf4;
        }
    }
    ctx->pc = 0x26DBD8u;
    // 0x26dbd8: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x26dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26dbdc: 0x448806  srlv        $s1, $a0, $v0
    ctx->pc = 0x26dbdcu;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 2) & 0x1F));
    // 0x26dbe0: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x26dbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x26dbe4: 0x1444000d  bne         $v0, $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x26DBE4u;
    {
        const bool branch_taken_0x26dbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x26DBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBE4u;
        // 0x26dbe8: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbe4) {
            ctx->pc = 0x26DC1Cu;
            goto label_26dc1c;
        }
    }
    ctx->pc = 0x26DBECu;
    // 0x26dbec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26DBECu;
    {
        const bool branch_taken_0x26dbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBECu;
        // 0x26dbf0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbec) {
            ctx->pc = 0x26DC14u;
            goto label_26dc14;
        }
    }
    ctx->pc = 0x26DBF4u;
label_26dbf4:
    // 0x26dbf4: 0x1480003d  bnez        $a0, . + 4 + (0x3D << 2)
    ctx->pc = 0x26DBF4u;
    {
        const bool branch_taken_0x26dbf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DBF4u;
        // 0x26dbf8: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dbf4) {
            ctx->pc = 0x26DCECu;
            goto label_26dcec;
        }
    }
    ctx->pc = 0x26DBFCu;
    // 0x26dbfc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x26dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26dc00: 0x508807  srav        $s1, $s0, $v0
    ctx->pc = 0x26dc00u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 16), GPR_U32(ctx, 2) & 0x1F));
    // 0x26dc04: 0x511004  sllv        $v0, $s1, $v0
    ctx->pc = 0x26dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), GPR_U32(ctx, 2) & 0x1F));
    // 0x26dc08: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DC08u;
    {
        const bool branch_taken_0x26dc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x26DC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC08u;
        // 0x26dc0c: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc08) {
            ctx->pc = 0x26DC1Cu;
            goto label_26dc1c;
        }
    }
    ctx->pc = 0x26DC10u;
    // 0x26dc10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26dc14:
    // 0x26dc14: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x26dc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26dc18:
    // 0x26dc18: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x26dc18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_26dc1c:
    // 0x26dc1c: 0x14800033  bnez        $a0, . + 4 + (0x33 << 2)
    ctx->pc = 0x26DC1Cu;
    {
        const bool branch_taken_0x26dc1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC1Cu;
        // 0x26dc20: 0x3c027ff0  lui         $v0, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc1c) {
            ctx->pc = 0x26DCECu;
            goto label_26dcec;
        }
    }
    ctx->pc = 0x26DC24u;
    // 0x26dc24: 0x1602001a  bne         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26DC24u;
    {
        const bool branch_taken_0x26dc24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC24u;
        // 0x26dc28: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc24) {
            ctx->pc = 0x26DC90u;
            goto label_26dc90;
        }
    }
    ctx->pc = 0x26DC2Cu;
    // 0x26dc2c: 0x3c02c010  lui         $v0, 0xC010
    ctx->pc = 0x26dc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49168 << 16));
    // 0x26dc30: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x26dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x26dc34: 0x571025  or          $v0, $v0, $s7
    ctx->pc = 0x26dc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 23));
    // 0x26dc38: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26DC38u;
    {
        const bool branch_taken_0x26dc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC38u;
        // 0x26dc3c: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc38) {
            ctx->pc = 0x26DC54u;
            goto label_26dc54;
        }
    }
    ctx->pc = 0x26DC40u;
    // 0x26dc40: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x26dc40u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26dc44: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DC44u;
    SET_GPR_U32(ctx, 31, 0x26DC4Cu);
    ctx->pc = 0x26DC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC44u;
    // 0x26dc48: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DC44u, 0x26DC4Cu)) {
        return;
    }
    ctx->pc = 0x26DC4Cu;
label_26dc4c:
    // 0x26dc4c: 0x100002df  b           . + 4 + (0x2DF << 2)
    ctx->pc = 0x26DC4Cu;
    {
        const bool branch_taken_0x26dc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC4Cu;
        // 0x26dc50: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc4c) {
            ctx->pc = 0x26E7CCu;
            goto label_26e7cc;
        }
    }
    ctx->pc = 0x26DC54u;
label_26dc54:
    // 0x26dc54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26dc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26dc58: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x26dc58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x26dc5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DC5Cu;
    {
        const bool branch_taken_0x26dc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dc5c) {
            ctx->pc = 0x26DC74u;
            goto label_26dc74;
        }
    }
    ctx->pc = 0x26DC64u;
    // 0x26dc64: 0x68002d8  bltz        $s4, . + 4 + (0x2D8 << 2)
    ctx->pc = 0x26DC64u;
    {
        const bool branch_taken_0x26dc64 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x26DC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC64u;
        // 0x26dc68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc64) {
            ctx->pc = 0x26E7C8u;
            goto label_26e7c8;
        }
    }
    ctx->pc = 0x26DC6Cu;
    // 0x26dc6c: 0x100002d6  b           . + 4 + (0x2D6 << 2)
    ctx->pc = 0x26DC6Cu;
    {
        const bool branch_taken_0x26dc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC6Cu;
        // 0x26dc70: 0xdfa20000  ld          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc6c) {
            ctx->pc = 0x26E7C8u;
            goto label_26e7c8;
        }
    }
    ctx->pc = 0x26DC74u;
label_26dc74:
    // 0x26dc74: 0x68102d4  bgez        $s4, . + 4 + (0x2D4 << 2)
    ctx->pc = 0x26DC74u;
    {
        const bool branch_taken_0x26dc74 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x26DC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC74u;
        // 0x26dc78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc74) {
            ctx->pc = 0x26E7C8u;
            goto label_26e7c8;
        }
    }
    ctx->pc = 0x26DC7Cu;
    // 0x26dc7c: 0xdfa50000  ld          $a1, 0x0($sp)
    ctx->pc = 0x26dc7cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26dc80: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DC80u;
    SET_GPR_U32(ctx, 31, 0x26DC88u);
    ctx->pc = 0x26DC84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DC80u;
    // 0x26dc84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DC80u, 0x26DC88u)) {
        return;
    }
    ctx->pc = 0x26DC88u;
label_26dc88:
    // 0x26dc88: 0x100002d0  b           . + 4 + (0x2D0 << 2)
    ctx->pc = 0x26DC88u;
    {
        const bool branch_taken_0x26dc88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC88u;
        // 0x26dc8c: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc88) {
            ctx->pc = 0x26E7CCu;
            goto label_26e7cc;
        }
    }
    ctx->pc = 0x26DC90u;
label_26dc90:
    // 0x26dc90: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DC90u;
    {
        const bool branch_taken_0x26dc90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26DC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC90u;
        // 0x26dc94: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc90) {
            ctx->pc = 0x26DCB8u;
            goto label_26dcb8;
        }
    }
    ctx->pc = 0x26DC98u;
    // 0x26dc98: 0x68102cb  bgez        $s4, . + 4 + (0x2CB << 2)
    ctx->pc = 0x26DC98u;
    {
        const bool branch_taken_0x26dc98 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x26DC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DC98u;
        // 0x26dc9c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dc98) {
            ctx->pc = 0x26E7C8u;
            goto label_26e7c8;
        }
    }
    ctx->pc = 0x26DCA0u;
    // 0x26dca0: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x26dca0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x26dca4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x26dca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x26dca8: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x26DCA8u;
    SET_GPR_U32(ctx, 31, 0x26DCB0u);
    ctx->pc = 0x26DCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DCA8u;
    // 0x26dcac: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x26DCA8u, 0x26DCB0u)) {
        return;
    }
    ctx->pc = 0x26DCB0u;
label_26dcb0:
    // 0x26dcb0: 0x100002c6  b           . + 4 + (0x2C6 << 2)
    ctx->pc = 0x26DCB0u;
    {
        const bool branch_taken_0x26dcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCB0u;
        // 0x26dcb4: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcb0) {
            ctx->pc = 0x26E7CCu;
            goto label_26e7cc;
        }
    }
    ctx->pc = 0x26DCB8u;
label_26dcb8:
    // 0x26dcb8: 0x16820004  bne         $s4, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DCB8u;
    {
        const bool branch_taken_0x26dcb8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x26DCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCB8u;
        // 0x26dcbc: 0x3c023fe0  lui         $v0, 0x3FE0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcb8) {
            ctx->pc = 0x26DCCCu;
            goto label_26dccc;
        }
    }
    ctx->pc = 0x26DCC0u;
    // 0x26dcc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26dcc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dcc4: 0x100002be  b           . + 4 + (0x2BE << 2)
    ctx->pc = 0x26DCC4u;
    {
        const bool branch_taken_0x26dcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCC4u;
        // 0x26dcc8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcc4) {
            ctx->pc = 0x26E7C0u;
            goto label_26e7c0;
        }
    }
    ctx->pc = 0x26DCCCu;
label_26dccc:
    // 0x26dccc: 0x16820007  bne         $s4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DCCCu;
    {
        const bool branch_taken_0x26dccc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x26dccc) {
            ctx->pc = 0x26DCECu;
            goto label_26dcec;
        }
    }
    ctx->pc = 0x26DCD4u;
    // 0x26dcd4: 0x6c00005  bltz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DCD4u;
    {
        const bool branch_taken_0x26dcd4 = (GPR_S64(ctx, 22) < 0);
        if (branch_taken_0x26dcd4) {
            ctx->pc = 0x26DCECu;
            goto label_26dcec;
        }
    }
    ctx->pc = 0x26DCDCu;
    // 0x26dcdc: 0xc09bb46  jal         func_26ED18
    ctx->pc = 0x26DCDCu;
    SET_GPR_U32(ctx, 31, 0x26DCE4u);
    ctx->pc = 0x26DCE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DCDCu;
    // 0x26dce0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26ED18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26ED18u, 0x26DCDCu, 0x26DCE4u)) {
        return;
    }
    ctx->pc = 0x26DCE4u;
label_26dce4:
    // 0x26dce4: 0x100002b9  b           . + 4 + (0x2B9 << 2)
    ctx->pc = 0x26DCE4u;
    {
        const bool branch_taken_0x26dce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCE4u;
        // 0x26dce8: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dce4) {
            ctx->pc = 0x26E7CCu;
            goto label_26e7cc;
        }
    }
    ctx->pc = 0x26DCECu;
label_26dcec:
    // 0x26dcec: 0xc09c998  jal         func_272660
    ctx->pc = 0x26DCECu;
    SET_GPR_U32(ctx, 31, 0x26DCF4u);
    ctx->pc = 0x26DCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DCECu;
    // 0x26dcf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272660u, 0x26DCECu, 0x26DCF4u)) {
        return;
    }
    ctx->pc = 0x26DCF4u;
label_26dcf4:
    // 0x26dcf4: 0x16e00028  bnez        $s7, . + 4 + (0x28 << 2)
    ctx->pc = 0x26DCF4u;
    {
        const bool branch_taken_0x26dcf4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DCF4u;
        // 0x26dcf8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dcf4) {
            ctx->pc = 0x26DD98u;
            goto label_26dd98;
        }
    }
    ctx->pc = 0x26DCFCu;
    // 0x26dcfc: 0x3c027ff0  lui         $v0, 0x7FF0
    ctx->pc = 0x26dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32752 << 16));
    // 0x26dd00: 0x12a20005  beq         $s5, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DD00u;
    {
        const bool branch_taken_0x26dd00 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        if (branch_taken_0x26dd00) {
            ctx->pc = 0x26DD18u;
            goto label_26dd18;
        }
    }
    ctx->pc = 0x26DD08u;
    // 0x26dd08: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DD08u;
    {
        const bool branch_taken_0x26dd08 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD08u;
        // 0x26dd0c: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd08) {
            ctx->pc = 0x26DD18u;
            goto label_26dd18;
        }
    }
    ctx->pc = 0x26DD10u;
    // 0x26dd10: 0x56a20022  bnel        $s5, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26DD10u;
    {
        const bool branch_taken_0x26dd10 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x26dd10) {
            ctx->pc = 0x26DD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DD10u;
            // 0x26dd14: 0x16b7c2  srl         $s6, $s6, 31 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DD9Cu;
            goto label_26dd9c;
        }
    }
    ctx->pc = 0x26DD18u;
label_26dd18:
    // 0x26dd18: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x26DD18u;
    {
        const bool branch_taken_0x26dd18 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x26DD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD18u;
        // 0x26dd1c: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd18) {
            ctx->pc = 0x26DD34u;
            goto label_26dd34;
        }
    }
    ctx->pc = 0x26DD20u;
    // 0x26dd20: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x26dd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x26dd24: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x26dd24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x26dd28: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x26DD28u;
    SET_GPR_U32(ctx, 31, 0x26DD30u);
    ctx->pc = 0x26DD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD28u;
    // 0x26dd2c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x26DD28u, 0x26DD30u)) {
        return;
    }
    ctx->pc = 0x26DD30u;
label_26dd30:
    // 0x26dd30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26dd30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26dd34:
    // 0x26dd34: 0x6c102a4  bgez        $s6, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x26DD34u;
    {
        const bool branch_taken_0x26dd34 = (GPR_S64(ctx, 22) >= 0);
        ctx->pc = 0x26DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD34u;
        // 0x26dd38: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd34) {
            ctx->pc = 0x26E7C8u;
            goto label_26e7c8;
        }
    }
    ctx->pc = 0x26DD3Cu;
    // 0x26dd3c: 0x3c02c010  lui         $v0, 0xC010
    ctx->pc = 0x26dd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49168 << 16));
    // 0x26dd40: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x26dd40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26dd44: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x26dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x26dd48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26dd48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26dd4c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DD4Cu;
    {
        const bool branch_taken_0x26dd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD4Cu;
        // 0x26dd50: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd4c) {
            ctx->pc = 0x26DD74u;
            goto label_26dd74;
        }
    }
    ctx->pc = 0x26DD54u;
    // 0x26dd54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26dd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd58: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DD58u;
    SET_GPR_U32(ctx, 31, 0x26DD60u);
    ctx->pc = 0x26DD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD58u;
    // 0x26dd5c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DD58u, 0x26DD60u)) {
        return;
    }
    ctx->pc = 0x26DD60u;
label_26dd60:
    // 0x26dd60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26dd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd64: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x26DD64u;
    SET_GPR_U32(ctx, 31, 0x26DD6Cu);
    ctx->pc = 0x26DD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD64u;
    // 0x26dd68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x26DD64u, 0x26DD6Cu)) {
        return;
    }
    ctx->pc = 0x26DD6Cu;
label_26dd6c:
    // 0x26dd6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26DD6Cu;
    {
        const bool branch_taken_0x26dd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD6Cu;
        // 0x26dd70: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd6c) {
            ctx->pc = 0x26DD90u;
            goto label_26dd90;
        }
    }
    ctx->pc = 0x26DD74u;
label_26dd74:
    // 0x26dd74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26dd78: 0x54820293  bnel        $a0, $v0, . + 4 + (0x293 << 2)
    ctx->pc = 0x26DD78u;
    {
        const bool branch_taken_0x26dd78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x26dd78) {
            ctx->pc = 0x26DD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DD78u;
            // 0x26dd7c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E7C8u;
            goto label_26e7c8;
        }
    }
    ctx->pc = 0x26DD80u;
    // 0x26dd80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26dd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd84: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DD84u;
    SET_GPR_U32(ctx, 31, 0x26DD8Cu);
    ctx->pc = 0x26DD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DD84u;
    // 0x26dd88: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DD84u, 0x26DD8Cu)) {
        return;
    }
    ctx->pc = 0x26DD8Cu;
label_26dd8c:
    // 0x26dd8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26dd8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26dd90:
    // 0x26dd90: 0x1000028d  b           . + 4 + (0x28D << 2)
    ctx->pc = 0x26DD90u;
    {
        const bool branch_taken_0x26dd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DD90u;
        // 0x26dd94: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd90) {
            ctx->pc = 0x26E7C8u;
            goto label_26e7c8;
        }
    }
    ctx->pc = 0x26DD98u;
label_26dd98:
    // 0x26dd98: 0x16b7c2  srl         $s6, $s6, 31
    ctx->pc = 0x26dd98u;
    SET_GPR_S32(ctx, 22, (int32_t)SRL32(GPR_U32(ctx, 22), 31));
label_26dd9c:
    // 0x26dd9c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x26dd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26dda0: 0x26c2ffff  addiu       $v0, $s6, -0x1
    ctx->pc = 0x26dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x26dda4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x26dda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x26dda8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DDA8u;
    {
        const bool branch_taken_0x26dda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDA8u;
        // 0x26ddac: 0xafb60020  sw          $s6, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dda8) {
            ctx->pc = 0x26DDD0u;
            goto label_26ddd0;
        }
    }
    ctx->pc = 0x26DDB0u;
    // 0x26ddb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26ddb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ddb4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DDB4u;
    SET_GPR_U32(ctx, 31, 0x26DDBCu);
    ctx->pc = 0x26DDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DDB4u;
    // 0x26ddb8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DDB4u, 0x26DDBCu)) {
        return;
    }
    ctx->pc = 0x26DDBCu;
label_26ddbc:
    // 0x26ddbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26ddbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ddc0: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x26DDC0u;
    SET_GPR_U32(ctx, 31, 0x26DDC8u);
    ctx->pc = 0x26DDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DDC0u;
    // 0x26ddc4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x26DDC0u, 0x26DDC8u)) {
        return;
    }
    ctx->pc = 0x26DDC8u;
label_26ddc8:
    // 0x26ddc8: 0x10000280  b           . + 4 + (0x280 << 2)
    ctx->pc = 0x26DDC8u;
    {
        const bool branch_taken_0x26ddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDC8u;
        // 0x26ddcc: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddc8) {
            ctx->pc = 0x26E7CCu;
            goto label_26e7cc;
        }
    }
    ctx->pc = 0x26DDD0u;
label_26ddd0:
    // 0x26ddd0: 0x3c0241e0  lui         $v0, 0x41E0
    ctx->pc = 0x26ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16864 << 16));
    // 0x26ddd4: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26ddd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26ddd8: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x26DDD8u;
    {
        const bool branch_taken_0x26ddd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDD8u;
        // 0x26dddc: 0x3c0243f0  lui         $v0, 0x43F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17392 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddd8) {
            ctx->pc = 0x26DF40u;
            goto label_26df40;
        }
    }
    ctx->pc = 0x26DDE0u;
    // 0x26dde0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x26dde0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x26dde4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x26DDE4u;
    {
        const bool branch_taken_0x26dde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DDE4u;
        // 0x26dde8: 0x3c023fef  lui         $v0, 0x3FEF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16367 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dde4) {
            ctx->pc = 0x26DE20u;
            goto label_26de20;
        }
    }
    ctx->pc = 0x26DDECu;
    // 0x26ddec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26ddecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26ddf0: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x26ddf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x26ddf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26DDF4u;
    {
        const bool branch_taken_0x26ddf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ddf4) {
            ctx->pc = 0x26DE10u;
            goto label_26de10;
        }
    }
    ctx->pc = 0x26DDFCu;
    // 0x26ddfc: 0x6830272  bgezl       $s4, . + 4 + (0x272 << 2)
    ctx->pc = 0x26DDFCu;
    {
        const bool branch_taken_0x26ddfc = (GPR_S64(ctx, 20) >= 0);
        if (branch_taken_0x26ddfc) {
            ctx->pc = 0x26DE00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DDFCu;
            // 0x26de00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26E7C8u;
            goto label_26e7c8;
        }
    }
    ctx->pc = 0x26DE04u;
    // 0x26de04: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26de04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_26de08:
    // 0x26de08: 0x1000026f  b           . + 4 + (0x26F << 2)
    ctx->pc = 0x26DE08u;
    {
        const bool branch_taken_0x26de08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE08u;
        // 0x26de0c: 0xdc42c120  ld          $v0, -0x3EE0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294951200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de08) {
            ctx->pc = 0x26E7C8u;
            goto label_26e7c8;
        }
    }
    ctx->pc = 0x26DE10u;
label_26de10:
    // 0x26de10: 0x1e80fffd  bgtz        $s4, . + 4 + (-0x3 << 2)
    ctx->pc = 0x26DE10u;
    {
        const bool branch_taken_0x26de10 = (GPR_S64(ctx, 20) > 0);
        ctx->pc = 0x26DE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE10u;
        // 0x26de14: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de10) {
            ctx->pc = 0x26DE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26de08;
        }
    }
    ctx->pc = 0x26DE18u;
    // 0x26de18: 0x1000026b  b           . + 4 + (0x26B << 2)
    ctx->pc = 0x26DE18u;
    {
        const bool branch_taken_0x26de18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE18u;
        // 0x26de1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de18) {
            ctx->pc = 0x26E7C8u;
            goto label_26e7c8;
        }
    }
    ctx->pc = 0x26DE20u;
label_26de20:
    // 0x26de20: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x26de20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x26de24: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x26de24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x26de28: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DE28u;
    {
        const bool branch_taken_0x26de28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26de28) {
            ctx->pc = 0x26DE2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26DE28u;
            // 0x26de2c: 0x3c023ff0  lui         $v0, 0x3FF0 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16368 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DE40u;
            goto label_26de40;
        }
    }
    ctx->pc = 0x26DE30u;
    // 0x26de30: 0x680fff5  bltz        $s4, . + 4 + (-0xB << 2)
    ctx->pc = 0x26DE30u;
    {
        const bool branch_taken_0x26de30 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x26DE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE30u;
        // 0x26de34: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de30) {
            ctx->pc = 0x26DE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26de08;
        }
    }
    ctx->pc = 0x26DE38u;
    // 0x26de38: 0x10000263  b           . + 4 + (0x263 << 2)
    ctx->pc = 0x26DE38u;
    {
        const bool branch_taken_0x26de38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE38u;
        // 0x26de3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de38) {
            ctx->pc = 0x26E7C8u;
            goto label_26e7c8;
        }
    }
    ctx->pc = 0x26DE40u;
label_26de40:
    // 0x26de40: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x26de40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x26de44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26DE44u;
    {
        const bool branch_taken_0x26de44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26de44) {
            ctx->pc = 0x26DE5Cu;
            goto label_26de5c;
        }
    }
    ctx->pc = 0x26DE4Cu;
    // 0x26de4c: 0x1e80ffee  bgtz        $s4, . + 4 + (-0x12 << 2)
    ctx->pc = 0x26DE4Cu;
    {
        const bool branch_taken_0x26de4c = (GPR_S64(ctx, 20) > 0);
        ctx->pc = 0x26DE50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE4Cu;
        // 0x26de50: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de4c) {
            ctx->pc = 0x26DE08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26de08;
        }
    }
    ctx->pc = 0x26DE54u;
    // 0x26de54: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x26DE54u;
    {
        const bool branch_taken_0x26de54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DE54u;
        // 0x26de58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de54) {
            ctx->pc = 0x26E7C8u;
            goto label_26e7c8;
        }
    }
    ctx->pc = 0x26DE5Cu;
label_26de5c:
    // 0x26de5c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x26de5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x26de60: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x26de60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x26de64: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DE64u;
    SET_GPR_U32(ctx, 31, 0x26DE6Cu);
    ctx->pc = 0x26DE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE64u;
    // 0x26de68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DE64u, 0x26DE6Cu)) {
        return;
    }
    ctx->pc = 0x26DE6Cu;
label_26de6c:
    // 0x26de6c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26de6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26de70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de74: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26DE74u;
    SET_GPR_U32(ctx, 31, 0x26DE7Cu);
    ctx->pc = 0x26DE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE74u;
    // 0x26de78: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26DE74u, 0x26DE7Cu)) {
        return;
    }
    ctx->pc = 0x26DE7Cu;
label_26de7c:
    // 0x26de7c: 0x3405ff40  ori         $a1, $zero, 0xFF40
    ctx->pc = 0x26de7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65344);
    // 0x26de80: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x26de80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x26de84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26de84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de88: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26DE88u;
    SET_GPR_U32(ctx, 31, 0x26DE90u);
    ctx->pc = 0x26DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE88u;
    // 0x26de8c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26DE88u, 0x26DE90u)) {
        return;
    }
    ctx->pc = 0x26DE90u;
label_26de90:
    // 0x26de90: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26de90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26de94: 0xdc24c138  ld          $a0, -0x3EC8($at)
    ctx->pc = 0x26de94u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x6AC138u));
    // 0x26de98: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DE98u;
    SET_GPR_U32(ctx, 31, 0x26DEA0u);
    ctx->pc = 0x26DE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DE98u;
    // 0x26de9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DE98u, 0x26DEA0u)) {
        return;
    }
    ctx->pc = 0x26DEA0u;
label_26dea0:
    // 0x26dea0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26dea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dea4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26DEA4u;
    SET_GPR_U32(ctx, 31, 0x26DEACu);
    ctx->pc = 0x26DEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DEA4u;
    // 0x26dea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26DEA4u, 0x26DEACu)) {
        return;
    }
    ctx->pc = 0x26DEACu;
label_26deac:
    // 0x26deac: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x26deacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x26deb0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x26deb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x26deb4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DEB4u;
    SET_GPR_U32(ctx, 31, 0x26DEBCu);
    ctx->pc = 0x26DEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DEB4u;
    // 0x26deb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DEB4u, 0x26DEBCu)) {
        return;
    }
    ctx->pc = 0x26DEBCu;
label_26debc:
    // 0x26debc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26debcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dec0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26DEC0u;
    SET_GPR_U32(ctx, 31, 0x26DEC8u);
    ctx->pc = 0x26DEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DEC0u;
    // 0x26dec4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26DEC0u, 0x26DEC8u)) {
        return;
    }
    ctx->pc = 0x26DEC8u;
label_26dec8:
    // 0x26dec8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26dec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26decc: 0xdc25c140  ld          $a1, -0x3EC0($at)
    ctx->pc = 0x26deccu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC140u));
    // 0x26ded0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26ded0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ded4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26DED4u;
    SET_GPR_U32(ctx, 31, 0x26DEDCu);
    ctx->pc = 0x26DED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DED4u;
    // 0x26ded8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26DED4u, 0x26DEDCu)) {
        return;
    }
    ctx->pc = 0x26DEDCu;
label_26dedc:
    // 0x26dedc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26dedcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26dee0: 0xdc25c148  ld          $a1, -0x3EB8($at)
    ctx->pc = 0x26dee0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC148u));
    // 0x26dee4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26dee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dee8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26DEE8u;
    SET_GPR_U32(ctx, 31, 0x26DEF0u);
    ctx->pc = 0x26DEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DEE8u;
    // 0x26deec: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26DEE8u, 0x26DEF0u)) {
        return;
    }
    ctx->pc = 0x26DEF0u;
label_26def0:
    // 0x26def0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26def0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26def4: 0xdc25c150  ld          $a1, -0x3EB0($at)
    ctx->pc = 0x26def4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC150u));
    // 0x26def8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26def8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26defc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26DEFCu;
    SET_GPR_U32(ctx, 31, 0x26DF04u);
    ctx->pc = 0x26DF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DEFCu;
    // 0x26df00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26DEFCu, 0x26DF04u)) {
        return;
    }
    ctx->pc = 0x26DF04u;
label_26df04:
    // 0x26df04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26df04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df08: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DF08u;
    SET_GPR_U32(ctx, 31, 0x26DF10u);
    ctx->pc = 0x26DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DF08u;
    // 0x26df0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DF08u, 0x26DF10u)) {
        return;
    }
    ctx->pc = 0x26DF10u;
label_26df10:
    // 0x26df10: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26df10u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df14: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x26df14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26df18: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26DF18u;
    SET_GPR_U32(ctx, 31, 0x26DF20u);
    ctx->pc = 0x26DF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DF18u;
    // 0x26df1c: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26DF18u, 0x26DF20u)) {
        return;
    }
    ctx->pc = 0x26DF20u;
label_26df20:
    // 0x26df20: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26df20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26df24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26df24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26df28: 0x43a024  and         $s4, $v0, $v1
    ctx->pc = 0x26df28u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26df2c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26df2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df30: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26DF30u;
    SET_GPR_U32(ctx, 31, 0x26DF38u);
    ctx->pc = 0x26DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DF30u;
    // 0x26df34: 0xdfa50010  ld          $a1, 0x10($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26DF30u, 0x26DF38u)) {
        return;
    }
    ctx->pc = 0x26DF38u;
label_26df38:
    // 0x26df38: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x26DF38u;
    {
        const bool branch_taken_0x26df38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF38u;
        // 0x26df3c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df38) {
            ctx->pc = 0x26E350u;
            goto label_26e350;
        }
    }
    ctx->pc = 0x26DF40u;
label_26df40:
    // 0x26df40: 0x3c10000f  lui         $s0, 0xF
    ctx->pc = 0x26df40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)15 << 16));
    // 0x26df44: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x26df44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x26df48: 0x215102a  slt         $v0, $s0, $s5
    ctx->pc = 0x26df48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x26df4c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26DF4Cu;
    {
        const bool branch_taken_0x26df4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DF4Cu;
        // 0x26df50: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df4c) {
            ctx->pc = 0x26DF78u;
            goto label_26df78;
        }
    }
    ctx->pc = 0x26DF54u;
    // 0x26df54: 0x2402ffcb  addiu       $v0, $zero, -0x35
    ctx->pc = 0x26df54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967243));
    // 0x26df58: 0x34058680  ori         $a1, $zero, 0x8680
    ctx->pc = 0x26df58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34432);
    // 0x26df5c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x26df5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x26df60: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26df60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df64: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26DF64u;
    SET_GPR_U32(ctx, 31, 0x26DF6Cu);
    ctx->pc = 0x26DF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DF64u;
    // 0x26df68: 0xafa2001c  sw          $v0, 0x1C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26DF64u, 0x26DF6Cu)) {
        return;
    }
    ctx->pc = 0x26DF6Cu;
label_26df6c:
    // 0x26df6c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x26df6cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26df70: 0x2a83f  dsra32      $s5, $v0, 0
    ctx->pc = 0x26df70u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26df74: 0x0  nop
    ctx->pc = 0x26df74u;
    // NOP
label_26df78:
    // 0x26df78: 0x8fa3001c  lw          $v1, 0x1C($sp)
    ctx->pc = 0x26df78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x26df7c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x26df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x26df80: 0x2b08824  and         $s1, $s5, $s0
    ctx->pc = 0x26df80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) & GPR_U64(ctx, 16));
    // 0x26df84: 0x3c043ff0  lui         $a0, 0x3FF0
    ctx->pc = 0x26df84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16368 << 16));
    // 0x26df88: 0x2465fc01  addiu       $a1, $v1, -0x3FF
    ctx->pc = 0x26df88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x26df8c: 0x3442988e  ori         $v0, $v0, 0x988E
    ctx->pc = 0x26df8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39054);
    // 0x26df90: 0x151d03  sra         $v1, $s5, 20
    ctx->pc = 0x26df90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 21), 20));
    // 0x26df94: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x26df94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26df98: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x26df98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26df9c: 0x224a825  or          $s5, $s1, $a0
    ctx->pc = 0x26df9cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x26dfa0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DFA0u;
    {
        const bool branch_taken_0x26dfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFA0u;
        // 0x26dfa4: 0xafa5001c  sw          $a1, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfa0) {
            ctx->pc = 0x26DFB0u;
            goto label_26dfb0;
        }
    }
    ctx->pc = 0x26DFA8u;
    // 0x26dfa8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26DFA8u;
    {
        const bool branch_taken_0x26dfa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFA8u;
        // 0x26dfac: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfa8) {
            ctx->pc = 0x26DFDCu;
            goto label_26dfdc;
        }
    }
    ctx->pc = 0x26DFB0u;
label_26dfb0:
    // 0x26dfb0: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x26dfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
    // 0x26dfb4: 0x3442b679  ori         $v0, $v0, 0xB679
    ctx->pc = 0x26dfb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46713);
    // 0x26dfb8: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x26dfb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26dfbc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DFBCu;
    {
        const bool branch_taken_0x26dfbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DFBCu;
        // 0x26dfc0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfbc) {
            ctx->pc = 0x26DFDCu;
            goto label_26dfdc;
        }
    }
    ctx->pc = 0x26DFC4u;
    // 0x26dfc4: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x26dfc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x26dfc8: 0x3c02fff0  lui         $v0, 0xFFF0
    ctx->pc = 0x26dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65520 << 16));
    // 0x26dfcc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x26dfccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dfd0: 0x2a2a821  addu        $s5, $s5, $v0
    ctx->pc = 0x26dfd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x26dfd4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x26dfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x26dfd8: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x26dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
label_26dfdc:
    // 0x26dfdc: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26dfdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dfe0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26dfe4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x26dfe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x26dfe8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x26dfe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26dfec: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x26dfecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x26dff0: 0x83f025  or          $fp, $a0, $v1
    ctx->pc = 0x26dff0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26dff4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26dff8: 0x2442c018  addiu       $v0, $v0, -0x3FE8
    ctx->pc = 0x26dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950936));
    // 0x26dffc: 0x13a0c0  sll         $s4, $s3, 3
    ctx->pc = 0x26dffcu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x26e000: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x26e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x26e004: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26e004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e008: 0xdc500000  ld          $s0, 0x0($v0)
    ctx->pc = 0x26e008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e00c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E00Cu;
    SET_GPR_U32(ctx, 31, 0x26E014u);
    ctx->pc = 0x26E010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E00Cu;
    // 0x26e010: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E00Cu, 0x26E014u)) {
        return;
    }
    ctx->pc = 0x26E014u;
label_26e014:
    // 0x26e014: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x26e014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x26e018: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26e018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e01c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E01Cu;
    SET_GPR_U32(ctx, 31, 0x26E024u);
    ctx->pc = 0x26E020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E01Cu;
    // 0x26e020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E01Cu, 0x26E024u)) {
        return;
    }
    ctx->pc = 0x26E024u;
label_26e024:
    // 0x26e024: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x26e024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x26e028: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x26e028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x26e02c: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x26E02Cu;
    SET_GPR_U32(ctx, 31, 0x26E034u);
    ctx->pc = 0x26E030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E02Cu;
    // 0x26e030: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x26E02Cu, 0x26E034u)) {
        return;
    }
    ctx->pc = 0x26E034u;
label_26e034:
    // 0x26e034: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26e034u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e038: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x26e038u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e03c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E03Cu;
    SET_GPR_U32(ctx, 31, 0x26E044u);
    ctx->pc = 0x26E040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E03Cu;
    // 0x26e040: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E03Cu, 0x26E044u)) {
        return;
    }
    ctx->pc = 0x26E044u;
label_26e044:
    // 0x26e044: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26e044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x26e048: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26e048u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e04c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x26e04cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26e050: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x26e050u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x26e054: 0x728824  and         $s1, $v1, $s2
    ctx->pc = 0x26e054u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x26e058: 0x151043  sra         $v0, $s5, 1
    ctx->pc = 0x26e058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 21), 1));
    // 0x26e05c: 0x131c80  sll         $v1, $s3, 18
    ctx->pc = 0x26e05cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 18));
    // 0x26e060: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x26e060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x26e064: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x26e064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
    // 0x26e068: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x26e068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26e06c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26e06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26e070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26e070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26e074: 0x2b03c  dsll32      $s6, $v0, 0
    ctx->pc = 0x26e074u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26e078: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26e078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e07c: 0x34158010  ori         $s5, $zero, 0x8010
    ctx->pc = 0x26e07cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
    // 0x26e080: 0x15abfc  dsll32      $s5, $s5, 15
    ctx->pc = 0x26e080u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 15));
    // 0x26e084: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E084u;
    SET_GPR_U32(ctx, 31, 0x26E08Cu);
    ctx->pc = 0x26E088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E084u;
    // 0x26e088: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E084u, 0x26E08Cu)) {
        return;
    }
    ctx->pc = 0x26E08Cu;
label_26e08c:
    // 0x26e08c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26e08cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e090: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E090u;
    SET_GPR_U32(ctx, 31, 0x26E098u);
    ctx->pc = 0x26E094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E090u;
    // 0x26e094: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E090u, 0x26E098u)) {
        return;
    }
    ctx->pc = 0x26E098u;
label_26e098:
    // 0x26e098: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x26e098u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e09c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26e09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0a0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E0A0u;
    SET_GPR_U32(ctx, 31, 0x26E0A8u);
    ctx->pc = 0x26E0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E0A0u;
    // 0x26e0a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E0A0u, 0x26E0A8u)) {
        return;
    }
    ctx->pc = 0x26E0A8u;
label_26e0a8:
    // 0x26e0a8: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x26e0a8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e0ac: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E0ACu;
    SET_GPR_U32(ctx, 31, 0x26E0B4u);
    ctx->pc = 0x26E0B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E0ACu;
    // 0x26e0b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E0ACu, 0x26E0B4u)) {
        return;
    }
    ctx->pc = 0x26E0B4u;
label_26e0b4:
    // 0x26e0b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e0b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0b8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x26e0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0bc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E0BCu;
    SET_GPR_U32(ctx, 31, 0x26E0C4u);
    ctx->pc = 0x26E0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E0BCu;
    // 0x26e0c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E0BCu, 0x26E0C4u)) {
        return;
    }
    ctx->pc = 0x26E0C4u;
label_26e0c4:
    // 0x26e0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0c8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E0C8u;
    SET_GPR_U32(ctx, 31, 0x26E0D0u);
    ctx->pc = 0x26E0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E0C8u;
    // 0x26e0cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E0C8u, 0x26E0D0u)) {
        return;
    }
    ctx->pc = 0x26E0D0u;
label_26e0d0:
    // 0x26e0d0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26e0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0d4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E0D4u;
    SET_GPR_U32(ctx, 31, 0x26E0DCu);
    ctx->pc = 0x26E0D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E0D4u;
    // 0x26e0d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E0D4u, 0x26E0DCu)) {
        return;
    }
    ctx->pc = 0x26E0DCu;
label_26e0dc:
    // 0x26e0dc: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x26e0dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26e0e0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26e0e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0e4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E0E4u;
    SET_GPR_U32(ctx, 31, 0x26E0ECu);
    ctx->pc = 0x26E0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E0E4u;
    // 0x26e0e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E0E4u, 0x26E0ECu)) {
        return;
    }
    ctx->pc = 0x26E0ECu;
label_26e0ec:
    // 0x26e0ec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26e0ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26e0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e0f4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E0F4u;
    SET_GPR_U32(ctx, 31, 0x26E0FCu);
    ctx->pc = 0x26E0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E0F4u;
    // 0x26e0f8: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E0F4u, 0x26E0FCu)) {
        return;
    }
    ctx->pc = 0x26E0FCu;
label_26e0fc:
    // 0x26e0fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e100: 0xdc25c158  ld          $a1, -0x3EA8($at)
    ctx->pc = 0x26e100u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC158u));
    // 0x26e104: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e108: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E108u;
    SET_GPR_U32(ctx, 31, 0x26E110u);
    ctx->pc = 0x26E10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E108u;
    // 0x26e10c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E108u, 0x26E110u)) {
        return;
    }
    ctx->pc = 0x26E110u;
label_26e110:
    // 0x26e110: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e114: 0xdc25c160  ld          $a1, -0x3EA0($at)
    ctx->pc = 0x26e114u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC160u));
    // 0x26e118: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E118u;
    SET_GPR_U32(ctx, 31, 0x26E120u);
    ctx->pc = 0x26E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E118u;
    // 0x26e11c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E118u, 0x26E120u)) {
        return;
    }
    ctx->pc = 0x26E120u;
label_26e120:
    // 0x26e120: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26e120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e124: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E124u;
    SET_GPR_U32(ctx, 31, 0x26E12Cu);
    ctx->pc = 0x26E128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E124u;
    // 0x26e128: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E124u, 0x26E12Cu)) {
        return;
    }
    ctx->pc = 0x26E12Cu;
label_26e12c:
    // 0x26e12c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e12cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e130: 0xdc25c168  ld          $a1, -0x3E98($at)
    ctx->pc = 0x26e130u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC168u));
    // 0x26e134: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E134u;
    SET_GPR_U32(ctx, 31, 0x26E13Cu);
    ctx->pc = 0x26E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E134u;
    // 0x26e138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E134u, 0x26E13Cu)) {
        return;
    }
    ctx->pc = 0x26E13Cu;
label_26e13c:
    // 0x26e13c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26e13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e140: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E140u;
    SET_GPR_U32(ctx, 31, 0x26E148u);
    ctx->pc = 0x26E144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E140u;
    // 0x26e144: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E140u, 0x26E148u)) {
        return;
    }
    ctx->pc = 0x26E148u;
label_26e148:
    // 0x26e148: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e14c: 0xdc25c170  ld          $a1, -0x3E90($at)
    ctx->pc = 0x26e14cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC170u));
    // 0x26e150: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E150u;
    SET_GPR_U32(ctx, 31, 0x26E158u);
    ctx->pc = 0x26E154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E150u;
    // 0x26e154: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E150u, 0x26E158u)) {
        return;
    }
    ctx->pc = 0x26E158u;
label_26e158:
    // 0x26e158: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26e158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e15c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E15Cu;
    SET_GPR_U32(ctx, 31, 0x26E164u);
    ctx->pc = 0x26E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E15Cu;
    // 0x26e160: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E15Cu, 0x26E164u)) {
        return;
    }
    ctx->pc = 0x26E164u;
label_26e164:
    // 0x26e164: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e168: 0xdc25c178  ld          $a1, -0x3E88($at)
    ctx->pc = 0x26e168u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC178u));
    // 0x26e16c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E16Cu;
    SET_GPR_U32(ctx, 31, 0x26E174u);
    ctx->pc = 0x26E170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E16Cu;
    // 0x26e170: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E16Cu, 0x26E174u)) {
        return;
    }
    ctx->pc = 0x26E174u;
label_26e174:
    // 0x26e174: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26e174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e178: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E178u;
    SET_GPR_U32(ctx, 31, 0x26E180u);
    ctx->pc = 0x26E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E178u;
    // 0x26e17c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E178u, 0x26E180u)) {
        return;
    }
    ctx->pc = 0x26E180u;
label_26e180:
    // 0x26e180: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e184: 0xdc25c180  ld          $a1, -0x3E80($at)
    ctx->pc = 0x26e184u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC180u));
    // 0x26e188: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E188u;
    SET_GPR_U32(ctx, 31, 0x26E190u);
    ctx->pc = 0x26E18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E188u;
    // 0x26e18c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E188u, 0x26E190u)) {
        return;
    }
    ctx->pc = 0x26E190u;
label_26e190:
    // 0x26e190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e194: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E194u;
    SET_GPR_U32(ctx, 31, 0x26E19Cu);
    ctx->pc = 0x26E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E194u;
    // 0x26e198: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E194u, 0x26E19Cu)) {
        return;
    }
    ctx->pc = 0x26E19Cu;
label_26e19c:
    // 0x26e19c: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x26e19cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26e1a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1a4: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E1A4u;
    SET_GPR_U32(ctx, 31, 0x26E1ACu);
    ctx->pc = 0x26E1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E1A4u;
    // 0x26e1a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E1A4u, 0x26E1ACu)) {
        return;
    }
    ctx->pc = 0x26E1ACu;
label_26e1ac:
    // 0x26e1ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26e1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1b0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E1B0u;
    SET_GPR_U32(ctx, 31, 0x26E1B8u);
    ctx->pc = 0x26E1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E1B0u;
    // 0x26e1b4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E1B0u, 0x26E1B8u)) {
        return;
    }
    ctx->pc = 0x26E1B8u;
label_26e1b8:
    // 0x26e1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1bc: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E1BCu;
    SET_GPR_U32(ctx, 31, 0x26E1C4u);
    ctx->pc = 0x26E1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E1BCu;
    // 0x26e1c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E1BCu, 0x26E1C4u)) {
        return;
    }
    ctx->pc = 0x26E1C4u;
label_26e1c4:
    // 0x26e1c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e1c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1cc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E1CCu;
    SET_GPR_U32(ctx, 31, 0x26E1D4u);
    ctx->pc = 0x26E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E1CCu;
    // 0x26e1d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E1CCu, 0x26E1D4u)) {
        return;
    }
    ctx->pc = 0x26E1D4u;
label_26e1d4:
    // 0x26e1d4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26e1d4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1d8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26e1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1dc: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E1DCu;
    SET_GPR_U32(ctx, 31, 0x26E1E4u);
    ctx->pc = 0x26E1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E1DCu;
    // 0x26e1e0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E1DCu, 0x26E1E4u)) {
        return;
    }
    ctx->pc = 0x26E1E4u;
label_26e1e4:
    // 0x26e1e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26e1e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1e8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E1E8u;
    SET_GPR_U32(ctx, 31, 0x26E1F0u);
    ctx->pc = 0x26E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E1E8u;
    // 0x26e1ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E1E8u, 0x26E1F0u)) {
        return;
    }
    ctx->pc = 0x26E1F0u;
label_26e1f0:
    // 0x26e1f0: 0x52b024  and         $s6, $v0, $s2
    ctx->pc = 0x26e1f0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x26e1f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26e1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e1f8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E1F8u;
    SET_GPR_U32(ctx, 31, 0x26E200u);
    ctx->pc = 0x26E1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E1F8u;
    // 0x26e1fc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E1F8u, 0x26E200u)) {
        return;
    }
    ctx->pc = 0x26E200u;
label_26e200:
    // 0x26e200: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x26e200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e204: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E204u;
    SET_GPR_U32(ctx, 31, 0x26E20Cu);
    ctx->pc = 0x26E208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E204u;
    // 0x26e208: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E204u, 0x26E20Cu)) {
        return;
    }
    ctx->pc = 0x26E20Cu;
label_26e20c:
    // 0x26e20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e210: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E210u;
    SET_GPR_U32(ctx, 31, 0x26E218u);
    ctx->pc = 0x26E214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E210u;
    // 0x26e214: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E210u, 0x26E218u)) {
        return;
    }
    ctx->pc = 0x26E218u;
label_26e218:
    // 0x26e218: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x26e218u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e21c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e220: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E220u;
    SET_GPR_U32(ctx, 31, 0x26E228u);
    ctx->pc = 0x26E224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E220u;
    // 0x26e224: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E220u, 0x26E228u)) {
        return;
    }
    ctx->pc = 0x26E228u;
label_26e228:
    // 0x26e228: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x26e228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x26e22c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26e22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e230: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E230u;
    SET_GPR_U32(ctx, 31, 0x26E238u);
    ctx->pc = 0x26E234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E230u;
    // 0x26e234: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E230u, 0x26E238u)) {
        return;
    }
    ctx->pc = 0x26E238u;
label_26e238:
    // 0x26e238: 0xdfa50008  ld          $a1, 0x8($sp)
    ctx->pc = 0x26e238u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26e23c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e23cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e240: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E240u;
    SET_GPR_U32(ctx, 31, 0x26E248u);
    ctx->pc = 0x26E244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E240u;
    // 0x26e244: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E240u, 0x26E248u)) {
        return;
    }
    ctx->pc = 0x26E248u;
label_26e248:
    // 0x26e248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e24c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E24Cu;
    SET_GPR_U32(ctx, 31, 0x26E254u);
    ctx->pc = 0x26E250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E24Cu;
    // 0x26e250: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E24Cu, 0x26E254u)) {
        return;
    }
    ctx->pc = 0x26E254u;
label_26e254:
    // 0x26e254: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26e254u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e258: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x26e258u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e25c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E25Cu;
    SET_GPR_U32(ctx, 31, 0x26E264u);
    ctx->pc = 0x26E260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E25Cu;
    // 0x26e260: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E25Cu, 0x26E264u)) {
        return;
    }
    ctx->pc = 0x26E264u;
label_26e264:
    // 0x26e264: 0x52b024  and         $s6, $v0, $s2
    ctx->pc = 0x26e264u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x26e268: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26e268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e26c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E26Cu;
    SET_GPR_U32(ctx, 31, 0x26E274u);
    ctx->pc = 0x26E270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E26Cu;
    // 0x26e270: 0xdfa50010  ld          $a1, 0x10($sp) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E26Cu, 0x26E274u)) {
        return;
    }
    ctx->pc = 0x26E274u;
label_26e274:
    // 0x26e274: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26e274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e278: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E278u;
    SET_GPR_U32(ctx, 31, 0x26E280u);
    ctx->pc = 0x26E27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E278u;
    // 0x26e27c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E278u, 0x26E280u)) {
        return;
    }
    ctx->pc = 0x26E280u;
label_26e280:
    // 0x26e280: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e280u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e284: 0xdc25c188  ld          $a1, -0x3E78($at)
    ctx->pc = 0x26e284u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC188u));
    // 0x26e288: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26e288u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e28c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E28Cu;
    SET_GPR_U32(ctx, 31, 0x26E294u);
    ctx->pc = 0x26E290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E28Cu;
    // 0x26e290: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E28Cu, 0x26E294u)) {
        return;
    }
    ctx->pc = 0x26E294u;
label_26e294:
    // 0x26e294: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e298: 0xdc25c190  ld          $a1, -0x3E70($at)
    ctx->pc = 0x26e298u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC190u));
    // 0x26e29c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26e29cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2a0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E2A0u;
    SET_GPR_U32(ctx, 31, 0x26E2A8u);
    ctx->pc = 0x26E2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2A0u;
    // 0x26e2a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E2A0u, 0x26E2A8u)) {
        return;
    }
    ctx->pc = 0x26E2A8u;
label_26e2a8:
    // 0x26e2a8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e2a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e2ac: 0xdc25c198  ld          $a1, -0x3E68($at)
    ctx->pc = 0x26e2acu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC198u));
    // 0x26e2b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e2b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2b4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E2B4u;
    SET_GPR_U32(ctx, 31, 0x26E2BCu);
    ctx->pc = 0x26E2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2B4u;
    // 0x26e2b8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E2B4u, 0x26E2BCu)) {
        return;
    }
    ctx->pc = 0x26E2BCu;
label_26e2bc:
    // 0x26e2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2c0: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E2C0u;
    SET_GPR_U32(ctx, 31, 0x26E2C8u);
    ctx->pc = 0x26E2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2C0u;
    // 0x26e2c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E2C0u, 0x26E2C8u)) {
        return;
    }
    ctx->pc = 0x26E2C8u;
label_26e2c8:
    // 0x26e2c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26e2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26e2cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2d0: 0x2463c038  addiu       $v1, $v1, -0x3FC8
    ctx->pc = 0x26e2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950968));
    // 0x26e2d4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x26e2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x26e2d8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E2D8u;
    SET_GPR_U32(ctx, 31, 0x26E2E0u);
    ctx->pc = 0x26E2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2D8u;
    // 0x26e2dc: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E2D8u, 0x26E2E0u)) {
        return;
    }
    ctx->pc = 0x26E2E0u;
label_26e2e0:
    // 0x26e2e0: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x26e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x26e2e4: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x26E2E4u;
    SET_GPR_U32(ctx, 31, 0x26E2ECu);
    ctx->pc = 0x26E2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2E4u;
    // 0x26e2e8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x26E2E4u, 0x26E2ECu)) {
        return;
    }
    ctx->pc = 0x26E2ECu;
label_26e2ec:
    // 0x26e2ec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26e2ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x26e2f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e2f4: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E2F4u;
    SET_GPR_U32(ctx, 31, 0x26E2FCu);
    ctx->pc = 0x26E2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E2F4u;
    // 0x26e2f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E2F4u, 0x26E2FCu)) {
        return;
    }
    ctx->pc = 0x26E2FCu;
label_26e2fc:
    // 0x26e2fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x26e2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x26e300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e304: 0x2463c028  addiu       $v1, $v1, -0x3FD8
    ctx->pc = 0x26e304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950952));
    // 0x26e308: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x26e308u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x26e30c: 0xde900000  ld          $s0, 0x0($s4)
    ctx->pc = 0x26e30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x26e310: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E310u;
    SET_GPR_U32(ctx, 31, 0x26E318u);
    ctx->pc = 0x26E314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E310u;
    // 0x26e314: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E310u, 0x26E318u)) {
        return;
    }
    ctx->pc = 0x26E318u;
label_26e318:
    // 0x26e318: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26e318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e31c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E31Cu;
    SET_GPR_U32(ctx, 31, 0x26E324u);
    ctx->pc = 0x26E320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E31Cu;
    // 0x26e320: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E31Cu, 0x26E324u)) {
        return;
    }
    ctx->pc = 0x26E324u;
label_26e324:
    // 0x26e324: 0x52a024  and         $s4, $v0, $s2
    ctx->pc = 0x26e324u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x26e328: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26e328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e32c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E32Cu;
    SET_GPR_U32(ctx, 31, 0x26E334u);
    ctx->pc = 0x26E330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E32Cu;
    // 0x26e330: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E32Cu, 0x26E334u)) {
        return;
    }
    ctx->pc = 0x26E334u;
label_26e334:
    // 0x26e334: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e338: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E338u;
    SET_GPR_U32(ctx, 31, 0x26E340u);
    ctx->pc = 0x26E33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E338u;
    // 0x26e33c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E338u, 0x26E340u)) {
        return;
    }
    ctx->pc = 0x26E340u;
label_26e340:
    // 0x26e340: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e344: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E344u;
    SET_GPR_U32(ctx, 31, 0x26E34Cu);
    ctx->pc = 0x26E348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E344u;
    // 0x26e348: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E344u, 0x26E34Cu)) {
        return;
    }
    ctx->pc = 0x26E34Cu;
label_26e34c:
    // 0x26e34c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26e350:
    // 0x26e350: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E350u;
    SET_GPR_U32(ctx, 31, 0x26E358u);
    ctx->pc = 0x26E354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E350u;
    // 0x26e354: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E350u, 0x26E358u)) {
        return;
    }
    ctx->pc = 0x26E358u;
label_26e358:
    // 0x26e358: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26e358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e35c: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x26e35cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26e360: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x26e360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26e364: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x26e364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x26e368: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x26e368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x26e36c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x26e36cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x26e370: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x26e370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26e374: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e378: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26E378u;
    {
        const bool branch_taken_0x26e378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E378u;
        // 0x26e37c: 0xffa50008  sd          $a1, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e378) {
            ctx->pc = 0x26E38Cu;
            goto label_26e38c;
        }
    }
    ctx->pc = 0x26E380u;
    // 0x26e380: 0x3402bff0  ori         $v0, $zero, 0xBFF0
    ctx->pc = 0x26e380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x26e384: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26e384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26e388: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x26e388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
label_26e38c:
    // 0x26e38c: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x26e38cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e390: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26e390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26e394: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26e394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26e398: 0x628024  and         $s0, $v1, $v0
    ctx->pc = 0x26e398u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26e39c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x26e39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3a0: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E3A0u;
    SET_GPR_U32(ctx, 31, 0x26E3A8u);
    ctx->pc = 0x26E3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E3A0u;
    // 0x26e3a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E3A0u, 0x26E3A8u)) {
        return;
    }
    ctx->pc = 0x26E3A8u;
label_26e3a8:
    // 0x26e3a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26e3a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3ac: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E3ACu;
    SET_GPR_U32(ctx, 31, 0x26E3B4u);
    ctx->pc = 0x26E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E3ACu;
    // 0x26e3b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E3ACu, 0x26E3B4u)) {
        return;
    }
    ctx->pc = 0x26E3B4u;
label_26e3b4:
    // 0x26e3b4: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x26e3b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e3b8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26e3b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3bc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E3BCu;
    SET_GPR_U32(ctx, 31, 0x26E3C4u);
    ctx->pc = 0x26E3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E3BCu;
    // 0x26e3c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E3BCu, 0x26E3C4u)) {
        return;
    }
    ctx->pc = 0x26E3C4u;
label_26e3c4:
    // 0x26e3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3c8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E3C8u;
    SET_GPR_U32(ctx, 31, 0x26E3D0u);
    ctx->pc = 0x26E3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E3C8u;
    // 0x26e3cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E3C8u, 0x26E3D0u)) {
        return;
    }
    ctx->pc = 0x26E3D0u;
label_26e3d0:
    // 0x26e3d0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26e3d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3d8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E3D8u;
    SET_GPR_U32(ctx, 31, 0x26E3E0u);
    ctx->pc = 0x26E3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E3D8u;
    // 0x26e3dc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E3D8u, 0x26E3E0u)) {
        return;
    }
    ctx->pc = 0x26E3E0u;
label_26e3e0:
    // 0x26e3e0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26e3e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3e4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26e3e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e3e8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E3E8u;
    SET_GPR_U32(ctx, 31, 0x26E3F0u);
    ctx->pc = 0x26E3ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E3E8u;
    // 0x26e3ec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E3E8u, 0x26E3F0u)) {
        return;
    }
    ctx->pc = 0x26E3F0u;
label_26e3f0:
    // 0x26e3f0: 0x2883f  dsra32      $s1, $v0, 0
    ctx->pc = 0x26e3f0u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26e3f4: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x26e3f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26e3f8: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x26e3f8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x26e3fc: 0x3c03408f  lui         $v1, 0x408F
    ctx->pc = 0x26e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16527 << 16));
    // 0x26e400: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26e400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26e404: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x26e404u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26e408: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x26E408u;
    {
        const bool branch_taken_0x26e408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E408u;
        // 0x26e40c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e408) {
            ctx->pc = 0x26E490u;
            goto label_26e490;
        }
    }
    ctx->pc = 0x26E410u;
    // 0x26e410: 0x3c02bf70  lui         $v0, 0xBF70
    ctx->pc = 0x26e410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49008 << 16));
    // 0x26e414: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26e414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26e418: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x26e418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26e41c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E41Cu;
    {
        const bool branch_taken_0x26e41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E41Cu;
        // 0x26e420: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e41c) {
            ctx->pc = 0x26E440u;
            goto label_26e440;
        }
    }
    ctx->pc = 0x26E424u;
    // 0x26e424: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x26e424u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26e428: 0xdc50c128  ld          $s0, -0x3ED8($v0)
    ctx->pc = 0x26e428u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294951208)));
    // 0x26e42c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E42Cu;
    SET_GPR_U32(ctx, 31, 0x26E434u);
    ctx->pc = 0x26E430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E42Cu;
    // 0x26e430: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E42Cu, 0x26E434u)) {
        return;
    }
    ctx->pc = 0x26E434u;
label_26e434:
    // 0x26e434: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e438: 0x100000e1  b           . + 4 + (0xE1 << 2)
    ctx->pc = 0x26E438u;
    {
        const bool branch_taken_0x26e438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E438u;
        // 0x26e43c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e438) {
            ctx->pc = 0x26E7C0u;
            goto label_26e7c0;
        }
    }
    ctx->pc = 0x26E440u;
label_26e440:
    // 0x26e440: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e444: 0xdc25c1a0  ld          $a1, -0x3E60($at)
    ctx->pc = 0x26e444u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC1A0u));
    // 0x26e448: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E448u;
    SET_GPR_U32(ctx, 31, 0x26E450u);
    ctx->pc = 0x26E44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E448u;
    // 0x26e44c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E448u, 0x26E450u)) {
        return;
    }
    ctx->pc = 0x26E450u;
label_26e450:
    // 0x26e450: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e454: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26e454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e458: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E458u;
    SET_GPR_U32(ctx, 31, 0x26E460u);
    ctx->pc = 0x26E45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E458u;
    // 0x26e45c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E458u, 0x26E460u)) {
        return;
    }
    ctx->pc = 0x26E460u;
label_26e460:
    // 0x26e460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e464: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26E464u;
    SET_GPR_U32(ctx, 31, 0x26E46Cu);
    ctx->pc = 0x26E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E464u;
    // 0x26e468: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26E464u, 0x26E46Cu)) {
        return;
    }
    ctx->pc = 0x26E46Cu;
label_26e46c:
    // 0x26e46c: 0x1840002c  blez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x26E46Cu;
    {
        const bool branch_taken_0x26e46c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x26E470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E46Cu;
        // 0x26e470: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e46c) {
            ctx->pc = 0x26E520u;
            goto label_26e520;
        }
    }
    ctx->pc = 0x26E474u;
    // 0x26e474: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x26e474u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26e478: 0xdc50c128  ld          $s0, -0x3ED8($v0)
    ctx->pc = 0x26e478u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294951208)));
    // 0x26e47c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E47Cu;
    SET_GPR_U32(ctx, 31, 0x26E484u);
    ctx->pc = 0x26E480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E47Cu;
    // 0x26e480: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E47Cu, 0x26E484u)) {
        return;
    }
    ctx->pc = 0x26E484u;
label_26e484:
    // 0x26e484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e488: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x26E488u;
    {
        const bool branch_taken_0x26e488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E488u;
        // 0x26e48c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e488) {
            ctx->pc = 0x26E7C0u;
            goto label_26e7c0;
        }
    }
    ctx->pc = 0x26E490u;
label_26e490:
    // 0x26e490: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x26e490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x26e494: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x26e494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
    // 0x26e498: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26e498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26e49c: 0x3463cbff  ori         $v1, $v1, 0xCBFF
    ctx->pc = 0x26e49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52223);
    // 0x26e4a0: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x26e4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x26e4a4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x26e4a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26e4a8: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x26E4A8u;
    {
        const bool branch_taken_0x26e4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E4A8u;
        // 0x26e4ac: 0x3c023f6f  lui         $v0, 0x3F6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16239 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4a8) {
            ctx->pc = 0x26E520u;
            goto label_26e520;
        }
    }
    ctx->pc = 0x26E4B0u;
    // 0x26e4b0: 0x34423400  ori         $v0, $v0, 0x3400
    ctx->pc = 0x26e4b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13312);
    // 0x26e4b4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x26e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x26e4b8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x26e4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26e4bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26E4BCu;
    {
        const bool branch_taken_0x26e4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E4BCu;
        // 0x26e4c0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4bc) {
            ctx->pc = 0x26E4E0u;
            goto label_26e4e0;
        }
    }
    ctx->pc = 0x26E4C4u;
    // 0x26e4c4: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x26e4c4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26e4c8: 0xdc50c130  ld          $s0, -0x3ED0($v0)
    ctx->pc = 0x26e4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 2), 4294951216)));
    // 0x26e4cc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E4CCu;
    SET_GPR_U32(ctx, 31, 0x26E4D4u);
    ctx->pc = 0x26E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E4CCu;
    // 0x26e4d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E4CCu, 0x26E4D4u)) {
        return;
    }
    ctx->pc = 0x26E4D4u;
label_26e4d4:
    // 0x26e4d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4d8: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x26E4D8u;
    {
        const bool branch_taken_0x26e4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E4D8u;
        // 0x26e4dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4d8) {
            ctx->pc = 0x26E7C0u;
            goto label_26e7c0;
        }
    }
    ctx->pc = 0x26E4E0u;
label_26e4e0:
    // 0x26e4e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26e4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4e4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E4E4u;
    SET_GPR_U32(ctx, 31, 0x26E4ECu);
    ctx->pc = 0x26E4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E4E4u;
    // 0x26e4e8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E4E4u, 0x26E4ECu)) {
        return;
    }
    ctx->pc = 0x26E4ECu;
label_26e4ec:
    // 0x26e4ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26e4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4f0: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x26E4F0u;
    SET_GPR_U32(ctx, 31, 0x26E4F8u);
    ctx->pc = 0x26E4F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E4F0u;
    // 0x26e4f4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x26E4F0u, 0x26E4F8u)) {
        return;
    }
    ctx->pc = 0x26E4F8u;
label_26e4f8:
    // 0x26e4f8: 0x1c40000a  bgtz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x26E4F8u;
    {
        const bool branch_taken_0x26e4f8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x26E4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E4F8u;
        // 0x26e4fc: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e4f8) {
            ctx->pc = 0x26E524u;
            goto label_26e524;
        }
    }
    ctx->pc = 0x26E500u;
    // 0x26e500: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x26e500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x26e504: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x26e504u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26e508: 0xdc50c130  ld          $s0, -0x3ED0($v0)
    ctx->pc = 0x26e508u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x6AC130u));
    // 0x26e50c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E50Cu;
    SET_GPR_U32(ctx, 31, 0x26E514u);
    ctx->pc = 0x26E510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E50Cu;
    // 0x26e510: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E50Cu, 0x26E514u)) {
        return;
    }
    ctx->pc = 0x26E514u;
label_26e514:
    // 0x26e514: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26e514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e518: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x26E518u;
    {
        const bool branch_taken_0x26e518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E518u;
        // 0x26e51c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e518) {
            ctx->pc = 0x26E7C0u;
            goto label_26e7c0;
        }
    }
    ctx->pc = 0x26E520u;
label_26e520:
    // 0x26e520: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x26e520u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_26e524:
    // 0x26e524: 0x3c023fe0  lui         $v0, 0x3FE0
    ctx->pc = 0x26e524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16352 << 16));
    // 0x26e528: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x26e528u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x26e52c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x26e52cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x26e530: 0x2262024  and         $a0, $s1, $a2
    ctx->pc = 0x26e530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & GPR_U64(ctx, 6));
    // 0x26e534: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26e534u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26e538: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x26E538u;
    {
        const bool branch_taken_0x26e538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E538u;
        // 0x26e53c: 0x41d03  sra         $v1, $a0, 20 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e538) {
            ctx->pc = 0x26E5B8u;
            goto label_26e5b8;
        }
    }
    ctx->pc = 0x26E540u;
    // 0x26e540: 0x2463fc02  addiu       $v1, $v1, -0x3FE
    ctx->pc = 0x26e540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966274));
    // 0x26e544: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x26e544u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x26e548: 0x641807  srav        $v1, $a0, $v1
    ctx->pc = 0x26e548u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
    // 0x26e54c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x26e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x26e550: 0x661024  and         $v0, $v1, $a2
    ctx->pc = 0x26e550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x26e554: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x26e554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x26e558: 0x21503  sra         $v0, $v0, 20
    ctx->pc = 0x26e558u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 20));
    // 0x26e55c: 0x2453fc01  addiu       $s3, $v0, -0x3FF
    ctx->pc = 0x26e55cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966273));
    // 0x26e560: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x26e560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x26e564: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26e564u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26e568: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x26e568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x26e56c: 0x2631007  srav        $v0, $v1, $s3
    ctx->pc = 0x26e56cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
    // 0x26e570: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x26e570u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x26e574: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x26e574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x26e578: 0x2a83c  dsll32      $s5, $v0, 0
    ctx->pc = 0x26e578u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26e57c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x26e57cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26e580: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x26e580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26e584: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26e584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26e588: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x26e588u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x26e58c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x26e58cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26e590: 0x431807  srav        $v1, $v1, $v0
    ctx->pc = 0x26e590u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x26e594: 0xb1282a  slt         $a1, $a1, $s1
    ctx->pc = 0x26e594u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26e598: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x26e598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x26e59c: 0x31023  negu        $v0, $v1
    ctx->pc = 0x26e59cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x26e5a0: 0x45180a  movz        $v1, $v0, $a1
    ctx->pc = 0x26e5a0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x26e5a4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x26e5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e5a8: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x26e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
    // 0x26e5ac: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E5ACu;
    SET_GPR_U32(ctx, 31, 0x26E5B4u);
    ctx->pc = 0x26E5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E5ACu;
    // 0x26e5b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E5ACu, 0x26E5B4u)) {
        return;
    }
    ctx->pc = 0x26E5B4u;
label_26e5b4:
    // 0x26e5b4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26e5b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26e5b8:
    // 0x26e5b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26e5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e5bc: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E5BCu;
    SET_GPR_U32(ctx, 31, 0x26E5C4u);
    ctx->pc = 0x26E5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E5BCu;
    // 0x26e5c0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E5BCu, 0x26E5C4u)) {
        return;
    }
    ctx->pc = 0x26E5C4u;
label_26e5c4:
    // 0x26e5c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26e5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26e5c8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26e5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26e5cc: 0x43a824  and         $s5, $v0, $v1
    ctx->pc = 0x26e5ccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26e5d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e5d4: 0xdc25c1a8  ld          $a1, -0x3E58($at)
    ctx->pc = 0x26e5d4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC1A8u));
    // 0x26e5d8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E5D8u;
    SET_GPR_U32(ctx, 31, 0x26E5E0u);
    ctx->pc = 0x26E5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E5D8u;
    // 0x26e5dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E5D8u, 0x26E5E0u)) {
        return;
    }
    ctx->pc = 0x26E5E0u;
label_26e5e0:
    // 0x26e5e0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x26e5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x26e5e4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x26e5e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e5e8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E5E8u;
    SET_GPR_U32(ctx, 31, 0x26E5F0u);
    ctx->pc = 0x26E5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E5E8u;
    // 0x26e5ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E5E8u, 0x26E5F0u)) {
        return;
    }
    ctx->pc = 0x26E5F0u;
label_26e5f0:
    // 0x26e5f0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26e5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e5f4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E5F4u;
    SET_GPR_U32(ctx, 31, 0x26E5FCu);
    ctx->pc = 0x26E5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E5F4u;
    // 0x26e5f8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E5F4u, 0x26E5FCu)) {
        return;
    }
    ctx->pc = 0x26E5FCu;
label_26e5fc:
    // 0x26e5fc: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e600: 0xdc25c1b0  ld          $a1, -0x3E50($at)
    ctx->pc = 0x26e600u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC1B0u));
    // 0x26e604: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E604u;
    SET_GPR_U32(ctx, 31, 0x26E60Cu);
    ctx->pc = 0x26E608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E604u;
    // 0x26e608: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E604u, 0x26E60Cu)) {
        return;
    }
    ctx->pc = 0x26E60Cu;
label_26e60c:
    // 0x26e60c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e610: 0xdc25c1b8  ld          $a1, -0x3E48($at)
    ctx->pc = 0x26e610u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC1B8u));
    // 0x26e614: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e614u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e618: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E618u;
    SET_GPR_U32(ctx, 31, 0x26E620u);
    ctx->pc = 0x26E61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E618u;
    // 0x26e61c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E618u, 0x26E620u)) {
        return;
    }
    ctx->pc = 0x26E620u;
label_26e620:
    // 0x26e620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e624: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E624u;
    SET_GPR_U32(ctx, 31, 0x26E62Cu);
    ctx->pc = 0x26E628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E624u;
    // 0x26e628: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E624u, 0x26E62Cu)) {
        return;
    }
    ctx->pc = 0x26E62Cu;
label_26e62c:
    // 0x26e62c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26e62cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e630: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x26e630u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e634: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E634u;
    SET_GPR_U32(ctx, 31, 0x26E63Cu);
    ctx->pc = 0x26E638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E634u;
    // 0x26e638: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E634u, 0x26E63Cu)) {
        return;
    }
    ctx->pc = 0x26E63Cu;
label_26e63c:
    // 0x26e63c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26e63cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e640: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x26e640u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e644: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E644u;
    SET_GPR_U32(ctx, 31, 0x26E64Cu);
    ctx->pc = 0x26E648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E644u;
    // 0x26e648: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E644u, 0x26E64Cu)) {
        return;
    }
    ctx->pc = 0x26E64Cu;
label_26e64c:
    // 0x26e64c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x26e64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e650: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E650u;
    SET_GPR_U32(ctx, 31, 0x26E658u);
    ctx->pc = 0x26E654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E650u;
    // 0x26e654: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E650u, 0x26E658u)) {
        return;
    }
    ctx->pc = 0x26E658u;
label_26e658:
    // 0x26e658: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x26e658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e65c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26e65cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e660: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E660u;
    SET_GPR_U32(ctx, 31, 0x26E668u);
    ctx->pc = 0x26E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E660u;
    // 0x26e664: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E660u, 0x26E668u)) {
        return;
    }
    ctx->pc = 0x26E668u;
label_26e668:
    // 0x26e668: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26e668u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e66c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e670: 0xdc25c1c0  ld          $a1, -0x3E40($at)
    ctx->pc = 0x26e670u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC1C0u));
    // 0x26e674: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E674u;
    SET_GPR_U32(ctx, 31, 0x26E67Cu);
    ctx->pc = 0x26E678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E674u;
    // 0x26e678: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E674u, 0x26E67Cu)) {
        return;
    }
    ctx->pc = 0x26E67Cu;
label_26e67c:
    // 0x26e67c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e680: 0xdc25c1c8  ld          $a1, -0x3E38($at)
    ctx->pc = 0x26e680u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC1C8u));
    // 0x26e684: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E684u;
    SET_GPR_U32(ctx, 31, 0x26E68Cu);
    ctx->pc = 0x26E688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E684u;
    // 0x26e688: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E684u, 0x26E68Cu)) {
        return;
    }
    ctx->pc = 0x26E68Cu;
label_26e68c:
    // 0x26e68c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26e68cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e690: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E690u;
    SET_GPR_U32(ctx, 31, 0x26E698u);
    ctx->pc = 0x26E694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E690u;
    // 0x26e694: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E690u, 0x26E698u)) {
        return;
    }
    ctx->pc = 0x26E698u;
label_26e698:
    // 0x26e698: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e69c: 0xdc25c1d0  ld          $a1, -0x3E30($at)
    ctx->pc = 0x26e69cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC1D0u));
    // 0x26e6a0: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E6A0u;
    SET_GPR_U32(ctx, 31, 0x26E6A8u);
    ctx->pc = 0x26E6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6A0u;
    // 0x26e6a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E6A0u, 0x26E6A8u)) {
        return;
    }
    ctx->pc = 0x26E6A8u;
label_26e6a8:
    // 0x26e6a8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26e6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6ac: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E6ACu;
    SET_GPR_U32(ctx, 31, 0x26E6B4u);
    ctx->pc = 0x26E6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6ACu;
    // 0x26e6b0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E6ACu, 0x26E6B4u)) {
        return;
    }
    ctx->pc = 0x26E6B4u;
label_26e6b4:
    // 0x26e6b4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e6b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e6b8: 0xdc25c1d8  ld          $a1, -0x3E28($at)
    ctx->pc = 0x26e6b8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC1D8u));
    // 0x26e6bc: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E6BCu;
    SET_GPR_U32(ctx, 31, 0x26E6C4u);
    ctx->pc = 0x26E6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6BCu;
    // 0x26e6c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E6BCu, 0x26E6C4u)) {
        return;
    }
    ctx->pc = 0x26E6C4u;
label_26e6c4:
    // 0x26e6c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26e6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6c8: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E6C8u;
    SET_GPR_U32(ctx, 31, 0x26E6D0u);
    ctx->pc = 0x26E6CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6C8u;
    // 0x26e6cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E6C8u, 0x26E6D0u)) {
        return;
    }
    ctx->pc = 0x26E6D0u;
label_26e6d0:
    // 0x26e6d0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x26e6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x26e6d4: 0xdc25c1e0  ld          $a1, -0x3E20($at)
    ctx->pc = 0x26e6d4u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x6AC1E0u));
    // 0x26e6d8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E6D8u;
    SET_GPR_U32(ctx, 31, 0x26E6E0u);
    ctx->pc = 0x26E6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6D8u;
    // 0x26e6dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E6D8u, 0x26E6E0u)) {
        return;
    }
    ctx->pc = 0x26E6E0u;
label_26e6e0:
    // 0x26e6e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26e6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6e4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E6E4u;
    SET_GPR_U32(ctx, 31, 0x26E6ECu);
    ctx->pc = 0x26E6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6E4u;
    // 0x26e6e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E6E4u, 0x26E6ECu)) {
        return;
    }
    ctx->pc = 0x26E6ECu;
label_26e6ec:
    // 0x26e6ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26e6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6f0: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E6F0u;
    SET_GPR_U32(ctx, 31, 0x26E6F8u);
    ctx->pc = 0x26E6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E6F0u;
    // 0x26e6f4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E6F0u, 0x26E6F8u)) {
        return;
    }
    ctx->pc = 0x26E6F8u;
label_26e6f8:
    // 0x26e6f8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26e6f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26e6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e700: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E700u;
    SET_GPR_U32(ctx, 31, 0x26E708u);
    ctx->pc = 0x26E704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E700u;
    // 0x26e704: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E700u, 0x26E708u)) {
        return;
    }
    ctx->pc = 0x26E708u;
label_26e708:
    // 0x26e708: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x26e708u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26e70c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x26e70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x26e710: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e714: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E714u;
    SET_GPR_U32(ctx, 31, 0x26E71Cu);
    ctx->pc = 0x26E718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E714u;
    // 0x26e718: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E714u, 0x26E71Cu)) {
        return;
    }
    ctx->pc = 0x26E71Cu;
label_26e71c:
    // 0x26e71c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e71cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e720: 0xc07de5c  jal         func_1F7970
    ctx->pc = 0x26E720u;
    SET_GPR_U32(ctx, 31, 0x26E728u);
    ctx->pc = 0x26E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E720u;
    // 0x26e724: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7970u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7970u, 0x26E720u, 0x26E728u)) {
        return;
    }
    ctx->pc = 0x26E728u;
label_26e728:
    // 0x26e728: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26e728u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e72c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26e72cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e730: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E730u;
    SET_GPR_U32(ctx, 31, 0x26E738u);
    ctx->pc = 0x26E734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E730u;
    // 0x26e734: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E730u, 0x26E738u)) {
        return;
    }
    ctx->pc = 0x26E738u;
label_26e738:
    // 0x26e738: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x26e738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e73c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x26E73Cu;
    SET_GPR_U32(ctx, 31, 0x26E744u);
    ctx->pc = 0x26E740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E73Cu;
    // 0x26e740: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x26E73Cu, 0x26E744u)) {
        return;
    }
    ctx->pc = 0x26E744u;
label_26e744:
    // 0x26e744: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26e744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e748: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E748u;
    SET_GPR_U32(ctx, 31, 0x26E750u);
    ctx->pc = 0x26E74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E748u;
    // 0x26e74c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E748u, 0x26E750u)) {
        return;
    }
    ctx->pc = 0x26E750u;
label_26e750:
    // 0x26e750: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26e750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e754: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E754u;
    SET_GPR_U32(ctx, 31, 0x26E75Cu);
    ctx->pc = 0x26E758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E754u;
    // 0x26e758: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E754u, 0x26E75Cu)) {
        return;
    }
    ctx->pc = 0x26E75Cu;
label_26e75c:
    // 0x26e75c: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x26e75cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x26e760: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x26e760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x26e764: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x26E764u;
    SET_GPR_U32(ctx, 31, 0x26E76Cu);
    ctx->pc = 0x26E768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E764u;
    // 0x26e768: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x26E764u, 0x26E76Cu)) {
        return;
    }
    ctx->pc = 0x26E76Cu;
label_26e76c:
    // 0x26e76c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26e76cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e770: 0x2883f  dsra32      $s1, $v0, 0
    ctx->pc = 0x26e770u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x26e774: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x26e774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x26e778: 0x21d00  sll         $v1, $v0, 20
    ctx->pc = 0x26e778u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x26e77c: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x26e77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x26e780: 0x111503  sra         $v0, $s1, 20
    ctx->pc = 0x26e780u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 17), 20));
    // 0x26e784: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26E784u;
    {
        const bool branch_taken_0x26e784 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x26E788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E784u;
        // 0x26e788: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e784) {
            ctx->pc = 0x26E7A0u;
            goto label_26e7a0;
        }
    }
    ctx->pc = 0x26E78Cu;
    // 0x26e78c: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x26e78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x26e790: 0xc09cabc  jal         func_272AF0
    ctx->pc = 0x26E790u;
    SET_GPR_U32(ctx, 31, 0x26E798u);
    ctx->pc = 0x26E794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26E790u;
    // 0x26e794: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272AF0u, 0x26E790u, 0x26E798u)) {
        return;
    }
    ctx->pc = 0x26E798u;
label_26e798:
    // 0x26e798: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26E798u;
    {
        const bool branch_taken_0x26e798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E798u;
        // 0x26e79c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e798) {
            ctx->pc = 0x26E7B8u;
            goto label_26e7b8;
        }
    }
    ctx->pc = 0x26E7A0u;
label_26e7a0:
    // 0x26e7a0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x26e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x26e7a4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x26e7a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x26e7a8: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x26e7a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x26e7ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26e7acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26e7b0: 0x449025  or          $s2, $v0, $a0
    ctx->pc = 0x26e7b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26e7b4: 0x0  nop
    ctx->pc = 0x26e7b4u;
    // NOP
label_26e7b8:
    // 0x26e7b8: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x26e7b8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26e7bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26e7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26e7c0:
    // 0x26e7c0: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x26E7C0u;
    SET_GPR_U32(ctx, 31, 0x26E7C8u);
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x26E7C0u, 0x26E7C8u)) {
        return;
    }
    ctx->pc = 0x26E7C8u;
label_26e7c8:
    // 0x26e7c8: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x26e7c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_26e7cc:
    // 0x26e7cc: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x26e7ccu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x26e7d0: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x26e7d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x26e7d4: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x26e7d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x26e7d8: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x26e7d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26e7dc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x26e7dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26e7e0: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x26e7e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26e7e4: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x26e7e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26e7e8: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x26e7e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26e7ec: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x26e7ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26e7f0: 0x3e00008  jr          $ra
    ctx->pc = 0x26E7F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26E7F0u;
        // 0x26e7f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26E7F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26E7F8u;
}
