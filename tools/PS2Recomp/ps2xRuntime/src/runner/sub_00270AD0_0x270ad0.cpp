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

// Function: sub_00270AD0
// Address: 0x270ad0 - 0x271638
void sub_00270AD0_0x270ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270AD0_0x270ad0");
#endif

    switch (ctx->pc) {
        case 0x270ba0u: goto label_270ba0;
        case 0x270bc0u: goto label_270bc0;
        case 0x270c20u: goto label_270c20;
        case 0x270c38u: goto label_270c38;
        case 0x270c60u: goto label_270c60;
        case 0x270c6cu: goto label_270c6c;
        case 0x270cb0u: goto label_270cb0;
        case 0x270cd8u: goto label_270cd8;
        case 0x270cecu: goto label_270cec;
        case 0x270cf8u: goto label_270cf8;
        case 0x270d00u: goto label_270d00;
        case 0x270d14u: goto label_270d14;
        case 0x270d20u: goto label_270d20;
        case 0x270d28u: goto label_270d28;
        case 0x270d3cu: goto label_270d3c;
        case 0x270d54u: goto label_270d54;
        case 0x270d68u: goto label_270d68;
        case 0x270d70u: goto label_270d70;
        case 0x270d80u: goto label_270d80;
        case 0x270d8cu: goto label_270d8c;
        case 0x270d98u: goto label_270d98;
        case 0x270da4u: goto label_270da4;
        case 0x270db0u: goto label_270db0;
        case 0x270e3cu: goto label_270e3c;
        case 0x270e78u: goto label_270e78;
        case 0x270f18u: goto label_270f18;
        case 0x270f2cu: goto label_270f2c;
        case 0x270f38u: goto label_270f38;
        case 0x270f48u: goto label_270f48;
        case 0x270f70u: goto label_270f70;
        case 0x270fc0u: goto label_270fc0;
        case 0x271008u: goto label_271008;
        case 0x271034u: goto label_271034;
        case 0x271048u: goto label_271048;
        case 0x271070u: goto label_271070;
        case 0x27107cu: goto label_27107c;
        case 0x2710ccu: goto label_2710cc;
        case 0x271100u: goto label_271100;
        case 0x27113cu: goto label_27113c;
        case 0x27114cu: goto label_27114c;
        case 0x271174u: goto label_271174;
        case 0x27117cu: goto label_27117c;
        case 0x271184u: goto label_271184;
        case 0x2711a0u: goto label_2711a0;
        case 0x2711acu: goto label_2711ac;
        case 0x2711b4u: goto label_2711b4;
        case 0x2711e4u: goto label_2711e4;
        case 0x271204u: goto label_271204;
        case 0x271220u: goto label_271220;
        case 0x271230u: goto label_271230;
        case 0x27123cu: goto label_27123c;
        case 0x271250u: goto label_271250;
        case 0x271270u: goto label_271270;
        case 0x271298u: goto label_271298;
        case 0x2712c4u: goto label_2712c4;
        case 0x2712d0u: goto label_2712d0;
        case 0x271358u: goto label_271358;
        case 0x271370u: goto label_271370;
        case 0x271398u: goto label_271398;
        case 0x2713b8u: goto label_2713b8;
        case 0x2713d0u: goto label_2713d0;
        case 0x271404u: goto label_271404;
        case 0x271418u: goto label_271418;
        case 0x271430u: goto label_271430;
        case 0x271444u: goto label_271444;
        case 0x271474u: goto label_271474;
        case 0x271490u: goto label_271490;
        case 0x2714bcu: goto label_2714bc;
        case 0x2714ccu: goto label_2714cc;
        case 0x2714d8u: goto label_2714d8;
        case 0x2714f8u: goto label_2714f8;
        case 0x271524u: goto label_271524;
        case 0x271534u: goto label_271534;
        case 0x271540u: goto label_271540;
        case 0x271570u: goto label_271570;
        case 0x271588u: goto label_271588;
        case 0x2715d4u: goto label_2715d4;
        case 0x2715e8u: goto label_2715e8;
        case 0x2715fcu: goto label_2715fc;
        default: break;
    }

    ctx->pc = 0x270ad0u;

    // 0x270ad0: 0x240a0018  addiu       $t2, $zero, 0x18
    ctx->pc = 0x270ad0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x270ad4: 0x24cbfffd  addiu       $t3, $a2, -0x3
    ctx->pc = 0x270ad4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
    // 0x270ad8: 0x16a001a  div         $zero, $t3, $t2
    ctx->pc = 0x270ad8u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x270adc: 0x27bdfcf0  addiu       $sp, $sp, -0x310
    ctx->pc = 0x270adcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966512));
    // 0x270ae0: 0xafa80238  sw          $t0, 0x238($sp)
    ctx->pc = 0x270ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 8));
    // 0x270ae4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x270ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x270ae8: 0xffbe02f0  sd          $fp, 0x2F0($sp)
    ctx->pc = 0x270ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 752), GPR_U64(ctx, 30));
    // 0x270aec: 0x2442c918  addiu       $v0, $v0, -0x36E8
    ctx->pc = 0x270aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953240));
    // 0x270af0: 0xffb402b0  sd          $s4, 0x2B0($sp)
    ctx->pc = 0x270af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 20));
    // 0x270af4: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x270af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x270af8: 0xffb20290  sd          $s2, 0x290($sp)
    ctx->pc = 0x270af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 18));
    // 0x270afc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x270afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x270b00: 0xffb10280  sd          $s1, 0x280($sp)
    ctx->pc = 0x270b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 17));
    // 0x270b04: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x270b04u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x270b08: 0xffbf0300  sd          $ra, 0x300($sp)
    ctx->pc = 0x270b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 768), GPR_U64(ctx, 31));
    // 0x270b0c: 0x24feffff  addiu       $fp, $a3, -0x1
    ctx->pc = 0x270b0cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x270b10: 0xffb702e0  sd          $s7, 0x2E0($sp)
    ctx->pc = 0x270b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 736), GPR_U64(ctx, 23));
    // 0x270b14: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x270b14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270b18: 0xffb602d0  sd          $s6, 0x2D0($sp)
    ctx->pc = 0x270b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 720), GPR_U64(ctx, 22));
    // 0x270b1c: 0xffb502c0  sd          $s5, 0x2C0($sp)
    ctx->pc = 0x270b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 21));
    // 0x270b20: 0xffb302a0  sd          $s3, 0x2A0($sp)
    ctx->pc = 0x270b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 19));
    // 0x270b24: 0xffb00270  sd          $s0, 0x270($sp)
    ctx->pc = 0x270b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 16));
    // 0x270b28: 0xafa40230  sw          $a0, 0x230($sp)
    ctx->pc = 0x270b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 4));
    // 0x270b2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x270b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270b30: 0xafa50234  sw          $a1, 0x234($sp)
    ctx->pc = 0x270b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 5));
    // 0x270b34: 0xafa30244  sw          $v1, 0x244($sp)
    ctx->pc = 0x270b34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 3));
    // 0x270b38: 0x3c39021  addu        $s2, $fp, $v1
    ctx->pc = 0x270b38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
    // 0x270b3c: 0xafa9023c  sw          $t1, 0x23C($sp)
    ctx->pc = 0x270b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 9));
    // 0x270b40: 0x51400001  beql        $t2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x270B40u;
    {
        const bool branch_taken_0x270b40 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x270b40) {
            ctx->pc = 0x270B44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270B40u;
            // 0x270b44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x270B48u;
            goto label_270b48;
        }
    }
    ctx->pc = 0x270B48u;
label_270b48:
    // 0x270b48: 0x5812  mflo        $t3
    ctx->pc = 0x270b48u;
    SET_GPR_U64(ctx, 11, ctx->lo);
    // 0x270b4c: 0xafab0240  sw          $t3, 0x240($sp)
    ctx->pc = 0x270b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 11));
    // 0x270b50: 0x160102d  daddu       $v0, $t3, $zero
    ctx->pc = 0x270b50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270b54: 0x18b602a  slt         $t4, $t4, $t3
    ctx->pc = 0x270b54u;
    SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x270b58: 0xc100a  movz        $v0, $zero, $t4
    ctx->pc = 0x270b58u;
    if (GPR_U64(ctx, 12) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x270b5c: 0xafa20240  sw          $v0, 0x240($sp)
    ctx->pc = 0x270b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 576), GPR_U32(ctx, 2));
    // 0x270b60: 0x4a1018  mult        $v0, $v0, $t2
    ctx->pc = 0x270b60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x270b64: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x270b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x270b68: 0x7e8823  subu        $s1, $v1, $fp
    ctx->pc = 0x270b68u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x270b6c: 0x4a5021  addu        $t2, $v0, $t2
    ctx->pc = 0x270b6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x270b70: 0xca3023  subu        $a2, $a2, $t2
    ctx->pc = 0x270b70u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x270b74: 0x640001c  bltz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x270B74u;
    {
        const bool branch_taken_0x270b74 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x270B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270B74u;
        // 0x270b78: 0xafa60248  sw          $a2, 0x248($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b74) {
            ctx->pc = 0x270BE8u;
            goto label_270be8;
        }
    }
    ctx->pc = 0x270B7Cu;
    // 0x270b7c: 0x8fa40244  lw          $a0, 0x244($sp)
    ctx->pc = 0x270b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x270b80: 0x27a50190  addiu       $a1, $sp, 0x190
    ctx->pc = 0x270b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x270b84: 0x29060003  slti        $a2, $t0, 0x3
    ctx->pc = 0x270b84u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x270b88: 0xafa50254  sw          $a1, 0x254($sp)
    ctx->pc = 0x270b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 5));
    // 0x270b8c: 0x28840000  slti        $a0, $a0, 0x0
    ctx->pc = 0x270b8cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x270b90: 0xafa6025c  sw          $a2, 0x25C($sp)
    ctx->pc = 0x270b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 6));
    // 0x270b94: 0xafa40260  sw          $a0, 0x260($sp)
    ctx->pc = 0x270b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 4));
    // 0x270b98: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x270b98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x270b9c: 0x0  nop
    ctx->pc = 0x270b9cu;
    // NOP
label_270ba0:
    // 0x270ba0: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x270ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x270ba4: 0x6200008  bltz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x270BA4u;
    {
        const bool branch_taken_0x270ba4 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x270BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BA4u;
        // 0x270ba8: 0x2628021  addu        $s0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ba4) {
            ctx->pc = 0x270BC8u;
            goto label_270bc8;
        }
    }
    ctx->pc = 0x270BACu;
    // 0x270bac: 0x8fa8023c  lw          $t0, 0x23C($sp)
    ctx->pc = 0x270bacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x270bb0: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x270bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x270bb4: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x270bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x270bb8: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x270BB8u;
    SET_GPR_U32(ctx, 31, 0x270BC0u);
    ctx->pc = 0x270BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270BB8u;
    // 0x270bbc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x270BB8u, 0x270BC0u)) {
        return;
    }
    ctx->pc = 0x270BC0u;
label_270bc0:
    // 0x270bc0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270BC0u;
    {
        const bool branch_taken_0x270bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BC0u;
        // 0x270bc4: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bc0) {
            ctx->pc = 0x270BD0u;
            goto label_270bd0;
        }
    }
    ctx->pc = 0x270BC8u;
label_270bc8:
    // 0x270bc8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x270bc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270bcc: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x270bccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
label_270bd0:
    // 0x270bd0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x270bd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x270bd4: 0x254102a  slt         $v0, $s2, $s4
    ctx->pc = 0x270bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x270bd8: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x270BD8u;
    {
        const bool branch_taken_0x270bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BD8u;
        // 0x270bdc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bd8) {
            ctx->pc = 0x270BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270ba0;
        }
    }
    ctx->pc = 0x270BE0u;
    // 0x270be0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x270BE0u;
    {
        const bool branch_taken_0x270be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270BE0u;
        // 0x270be4: 0x8fa60260  lw          $a2, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270be0) {
            ctx->pc = 0x270C0Cu;
            goto label_270c0c;
        }
    }
    ctx->pc = 0x270BE8u;
label_270be8:
    // 0x270be8: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x270be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x270bec: 0x27a40190  addiu       $a0, $sp, 0x190
    ctx->pc = 0x270becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    // 0x270bf0: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x270bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x270bf4: 0x28630000  slti        $v1, $v1, 0x0
    ctx->pc = 0x270bf4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x270bf8: 0xafa40254  sw          $a0, 0x254($sp)
    ctx->pc = 0x270bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 596), GPR_U32(ctx, 4));
    // 0x270bfc: 0x28a50003  slti        $a1, $a1, 0x3
    ctx->pc = 0x270bfcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x270c00: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x270c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
    // 0x270c04: 0xafa5025c  sw          $a1, 0x25C($sp)
    ctx->pc = 0x270c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 5));
    // 0x270c08: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x270c08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_270c0c:
    // 0x270c0c: 0x14c00027  bnez        $a2, . + 4 + (0x27 << 2)
    ctx->pc = 0x270C0Cu;
    {
        const bool branch_taken_0x270c0c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x270C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C0Cu;
        // 0x270c10: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c0c) {
            ctx->pc = 0x270CACu;
            goto label_270cac;
        }
    }
    ctx->pc = 0x270C14u;
    // 0x270c14: 0x2bd70000  slti        $s7, $fp, 0x0
    ctx->pc = 0x270c14u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x270c18: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x270c18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c1c: 0x0  nop
    ctx->pc = 0x270c1cu;
    // NOP
label_270c20:
    // 0x270c20: 0x16e00018  bnez        $s7, . + 4 + (0x18 << 2)
    ctx->pc = 0x270C20u;
    {
        const bool branch_taken_0x270c20 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x270C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C20u;
        // 0x270c24: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c20) {
            ctx->pc = 0x270C84u;
            goto label_270c84;
        }
    }
    ctx->pc = 0x270C28u;
    // 0x270c28: 0x3d4a821  addu        $s5, $fp, $s4
    ctx->pc = 0x270c28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x270c2c: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x270c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x270c30: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x270c30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x270c34: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x270c34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_270c38:
    // 0x270c38: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x270c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x270c3c: 0x8fa80230  lw          $t0, 0x230($sp)
    ctx->pc = 0x270c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x270c40: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x270c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x270c44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x270c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x270c48: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x270c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x270c4c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x270c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x270c50: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x270c50u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270c54: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x270c54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x270c58: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270C58u;
    SET_GPR_U32(ctx, 31, 0x270C60u);
    ctx->pc = 0x270C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270C58u;
    // 0x270c5c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270C58u, 0x270C60u)) {
        return;
    }
    ctx->pc = 0x270C60u;
label_270c60:
    // 0x270c60: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x270c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c64: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x270C64u;
    SET_GPR_U32(ctx, 31, 0x270C6Cu);
    ctx->pc = 0x270C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270C64u;
    // 0x270c68: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x270C64u, 0x270C6Cu)) {
        return;
    }
    ctx->pc = 0x270C6Cu;
label_270c6c:
    // 0x270c6c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x270c6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c70: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x270c70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x270c74: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x270C74u;
    {
        const bool branch_taken_0x270c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C74u;
        // 0x270c78: 0x8fa20254  lw          $v0, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c74) {
            ctx->pc = 0x270C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270c38;
        }
    }
    ctx->pc = 0x270C7Cu;
    // 0x270c7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x270C7Cu;
    {
        const bool branch_taken_0x270c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270C7Cu;
        // 0x270c80: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c7c) {
            ctx->pc = 0x270C94u;
            goto label_270c94;
        }
    }
    ctx->pc = 0x270C84u;
label_270c84:
    // 0x270c84: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x270c84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x270c88: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x270c88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x270c8c: 0x8fa20254  lw          $v0, 0x254($sp)
    ctx->pc = 0x270c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x270c90: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x270c90u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270c94:
    // 0x270c94: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x270c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x270c98: 0xfc760000  sd          $s6, 0x0($v1)
    ctx->pc = 0x270c98u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 22));
    // 0x270c9c: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x270c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x270ca0: 0x74102a  slt         $v0, $v1, $s4
    ctx->pc = 0x270ca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x270ca4: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x270CA4u;
    {
        const bool branch_taken_0x270ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CA4u;
        // 0x270ca8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ca4) {
            ctx->pc = 0x270C20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270c20;
        }
    }
    ctx->pc = 0x270CACu;
label_270cac:
    // 0x270cac: 0x8fb70244  lw          $s7, 0x244($sp)
    ctx->pc = 0x270cacu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_270cb0:
    // 0x270cb0: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x270cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x270cb4: 0x1718c0  sll         $v1, $s7, 3
    ctx->pc = 0x270cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 3));
    // 0x270cb8: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x270cb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270cbc: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x270cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x270cc0: 0x1ae00021  blez        $s7, . + 4 + (0x21 << 2)
    ctx->pc = 0x270CC0u;
    {
        const bool branch_taken_0x270cc0 = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x270CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CC0u;
        // 0x270cc4: 0xdc520000  ld          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270cc0) {
            ctx->pc = 0x270D48u;
            goto label_270d48;
        }
    }
    ctx->pc = 0x270CC8u;
    // 0x270cc8: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x270cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x270ccc: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x270cccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270cd0: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x270cd0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x270cd4: 0x0  nop
    ctx->pc = 0x270cd4u;
    // NOP
label_270cd8:
    // 0x270cd8: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x270cd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x270cdc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x270cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x270ce0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270ce4: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270CE4u;
    SET_GPR_U32(ctx, 31, 0x270CECu);
    ctx->pc = 0x270CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270CE4u;
    // 0x270ce8: 0x2630ffff  addiu       $s0, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270CE4u, 0x270CECu)) {
        return;
    }
    ctx->pc = 0x270CECu;
label_270cec:
    // 0x270cec: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x270cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270cf0: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x270CF0u;
    SET_GPR_U32(ctx, 31, 0x270CF8u);
    ctx->pc = 0x270CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270CF0u;
    // 0x270cf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x270CF0u, 0x270CF8u)) {
        return;
    }
    ctx->pc = 0x270CF8u;
label_270cf8:
    // 0x270cf8: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x270CF8u;
    SET_GPR_U32(ctx, 31, 0x270D00u);
    ctx->pc = 0x270CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270CF8u;
    // 0x270cfc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x270CF8u, 0x270D00u)) {
        return;
    }
    ctx->pc = 0x270D00u;
label_270d00:
    // 0x270d00: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x270d00u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d04: 0x340582e0  ori         $a1, $zero, 0x82E0
    ctx->pc = 0x270d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x270d08: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x270d08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x270d0c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270D0Cu;
    SET_GPR_U32(ctx, 31, 0x270D14u);
    ctx->pc = 0x270D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D0Cu;
    // 0x270d10: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270D0Cu, 0x270D14u)) {
        return;
    }
    ctx->pc = 0x270D14u;
label_270d14:
    // 0x270d14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d18: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x270D18u;
    SET_GPR_U32(ctx, 31, 0x270D20u);
    ctx->pc = 0x270D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D18u;
    // 0x270d1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x270D18u, 0x270D20u)) {
        return;
    }
    ctx->pc = 0x270D20u;
label_270d20:
    // 0x270d20: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x270D20u;
    SET_GPR_U32(ctx, 31, 0x270D28u);
    ctx->pc = 0x270D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D20u;
    // 0x270d24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x270D20u, 0x270D28u)) {
        return;
    }
    ctx->pc = 0x270D28u;
label_270d28:
    // 0x270d28: 0xde640000  ld          $a0, 0x0($s3)
    ctx->pc = 0x270d28u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x270d2c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x270d2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d30: 0xae820000  sw          $v0, 0x0($s4)
    ctx->pc = 0x270d30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 2));
    // 0x270d34: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x270D34u;
    SET_GPR_U32(ctx, 31, 0x270D3Cu);
    ctx->pc = 0x270D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D34u;
    // 0x270d38: 0x2673fff8  addiu       $s3, $s3, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x270D34u, 0x270D3Cu)) {
        return;
    }
    ctx->pc = 0x270D3Cu;
label_270d3c:
    // 0x270d3c: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x270d3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x270d40: 0x1e20ffe5  bgtz        $s1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x270D40u;
    {
        const bool branch_taken_0x270d40 = (GPR_S64(ctx, 17) > 0);
        ctx->pc = 0x270D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270D40u;
        // 0x270d44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270d40) {
            ctx->pc = 0x270CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270cd8;
        }
    }
    ctx->pc = 0x270D48u;
label_270d48:
    // 0x270d48: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x270d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x270d4c: 0xc09cabc  jal         func_272AF0
    ctx->pc = 0x270D4Cu;
    SET_GPR_U32(ctx, 31, 0x270D54u);
    ctx->pc = 0x270D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D4Cu;
    // 0x270d50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272AF0u, 0x270D4Cu, 0x270D54u)) {
        return;
    }
    ctx->pc = 0x270D54u;
label_270d54:
    // 0x270d54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x270d54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d58: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x270d58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x270d5c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x270d5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x270d60: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270D60u;
    SET_GPR_U32(ctx, 31, 0x270D68u);
    ctx->pc = 0x270D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D60u;
    // 0x270d64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270D60u, 0x270D68u)) {
        return;
    }
    ctx->pc = 0x270D68u;
label_270d68:
    // 0x270d68: 0xc09c9ae  jal         func_2726B8
    ctx->pc = 0x270D68u;
    SET_GPR_U32(ctx, 31, 0x270D70u);
    ctx->pc = 0x270D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D68u;
    // 0x270d6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2726B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2726B8u, 0x270D68u, 0x270D70u)) {
        return;
    }
    ctx->pc = 0x270D70u;
label_270d70:
    // 0x270d70: 0x34058040  ori         $a1, $zero, 0x8040
    ctx->pc = 0x270d70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
    // 0x270d74: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x270d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x270d78: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x270D78u;
    SET_GPR_U32(ctx, 31, 0x270D80u);
    ctx->pc = 0x270D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D78u;
    // 0x270d7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x270D78u, 0x270D80u)) {
        return;
    }
    ctx->pc = 0x270D80u;
label_270d80:
    // 0x270d80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d84: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x270D84u;
    SET_GPR_U32(ctx, 31, 0x270D8Cu);
    ctx->pc = 0x270D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D84u;
    // 0x270d88: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x270D84u, 0x270D8Cu)) {
        return;
    }
    ctx->pc = 0x270D8Cu;
label_270d8c:
    // 0x270d8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x270d8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d90: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x270D90u;
    SET_GPR_U32(ctx, 31, 0x270D98u);
    ctx->pc = 0x270D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D90u;
    // 0x270d94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x270D90u, 0x270D98u)) {
        return;
    }
    ctx->pc = 0x270D98u;
label_270d98:
    // 0x270d98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x270d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270d9c: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x270D9Cu;
    SET_GPR_U32(ctx, 31, 0x270DA4u);
    ctx->pc = 0x270DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270D9Cu;
    // 0x270da0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x270D9Cu, 0x270DA4u)) {
        return;
    }
    ctx->pc = 0x270DA4u;
label_270da4:
    // 0x270da4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270da8: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x270DA8u;
    SET_GPR_U32(ctx, 31, 0x270DB0u);
    ctx->pc = 0x270DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270DA8u;
    // 0x270dac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x270DA8u, 0x270DB0u)) {
        return;
    }
    ctx->pc = 0x270DB0u;
label_270db0:
    // 0x270db0: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x270db0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x270db4: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x270DB4u;
    {
        const bool branch_taken_0x270db4 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x270DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DB4u;
        // 0x270db8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270db4) {
            ctx->pc = 0x270E00u;
            goto label_270e00;
        }
    }
    ctx->pc = 0x270DBCu;
    // 0x270dbc: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x270dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x270dc0: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x270dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x270dc4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x270dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x270dc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x270dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x270dcc: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x270dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x270dd0: 0x8fa60248  lw          $a2, 0x248($sp)
    ctx->pc = 0x270dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x270dd4: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x270dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x270dd8: 0x24040017  addiu       $a0, $zero, 0x17
    ctx->pc = 0x270dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x270ddc: 0x862023  subu        $a0, $a0, $a2
    ctx->pc = 0x270ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x270de0: 0x62a007  srav        $s4, $v0, $v1
    ctx->pc = 0x270de0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x270de4: 0x741804  sllv        $v1, $s4, $v1
    ctx->pc = 0x270de4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 3) & 0x1F));
    // 0x270de8: 0x2749821  addu        $s3, $s3, $s4
    ctx->pc = 0x270de8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x270dec: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x270decu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x270df0: 0x822007  srav        $a0, $v0, $a0
    ctx->pc = 0x270df0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x270df4: 0xafa4024c  sw          $a0, 0x24C($sp)
    ctx->pc = 0x270df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
    // 0x270df8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x270DF8u;
    {
        const bool branch_taken_0x270df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270DF8u;
        // 0x270dfc: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270df8) {
            ctx->pc = 0x270E4Cu;
            goto label_270e4c;
        }
    }
    ctx->pc = 0x270E00u;
label_270e00:
    // 0x270e00: 0x8fa80248  lw          $t0, 0x248($sp)
    ctx->pc = 0x270e00u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x270e04: 0x15000008  bnez        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x270E04u;
    {
        const bool branch_taken_0x270e04 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x270E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E04u;
        // 0x270e08: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e04) {
            ctx->pc = 0x270E28u;
            goto label_270e28;
        }
    }
    ctx->pc = 0x270E0Cu;
    // 0x270e0c: 0x26e2ffff  addiu       $v0, $s7, -0x1
    ctx->pc = 0x270e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x270e10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x270e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x270e14: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x270e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x270e18: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x270e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270e1c: 0x425c3  sra         $a0, $a0, 23
    ctx->pc = 0x270e1cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 23));
    // 0x270e20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x270E20u;
    {
        const bool branch_taken_0x270e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E20u;
        // 0x270e24: 0xafa4024c  sw          $a0, 0x24C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e20) {
            ctx->pc = 0x270E4Cu;
            goto label_270e4c;
        }
    }
    ctx->pc = 0x270E28u;
label_270e28:
    // 0x270e28: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x270e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x270e2c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x270e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x270e30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e34: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x270E34u;
    SET_GPR_U32(ctx, 31, 0x270E3Cu);
    ctx->pc = 0x270E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270E34u;
    // 0x270e38: 0xafa2024c  sw          $v0, 0x24C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x270E34u, 0x270E3Cu)) {
        return;
    }
    ctx->pc = 0x270E3Cu;
label_270e3c:
    // 0x270e3c: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x270e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x270e40: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x270e40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x270e44: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x270e44u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
    // 0x270e48: 0xafa3024c  sw          $v1, 0x24C($sp)
    ctx->pc = 0x270e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 588), GPR_U32(ctx, 3));
label_270e4c:
    // 0x270e4c: 0x8fa4024c  lw          $a0, 0x24C($sp)
    ctx->pc = 0x270e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x270e50: 0x1880003b  blez        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x270E50u;
    {
        const bool branch_taken_0x270e50 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x270E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E50u;
        // 0x270e54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e50) {
            ctx->pc = 0x270F40u;
            goto label_270f40;
        }
    }
    ctx->pc = 0x270E58u;
    // 0x270e58: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x270e58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x270e5c: 0x1ae00011  blez        $s7, . + 4 + (0x11 << 2)
    ctx->pc = 0x270E5Cu;
    {
        const bool branch_taken_0x270e5c = (GPR_S64(ctx, 23) <= 0);
        ctx->pc = 0x270E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E5Cu;
        // 0x270e60: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e5c) {
            ctx->pc = 0x270EA4u;
            goto label_270ea4;
        }
    }
    ctx->pc = 0x270E64u;
    // 0x270e64: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x270e64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x270e68: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x270e68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x270e6c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x270e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x270e70: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x270e70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270e74: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x270e74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_270e78:
    // 0x270e78: 0x16a00005  bnez        $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x270E78u;
    {
        const bool branch_taken_0x270e78 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x270E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E78u;
        // 0x270e7c: 0x8c710000  lw          $s1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e78) {
            ctx->pc = 0x270E90u;
            goto label_270e90;
        }
    }
    ctx->pc = 0x270E80u;
    // 0x270e80: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x270E80u;
    {
        const bool branch_taken_0x270e80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E80u;
        // 0x270e84: 0xb11023  subu        $v0, $a1, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e80) {
            ctx->pc = 0x270E98u;
            goto label_270e98;
        }
    }
    ctx->pc = 0x270E88u;
    // 0x270e88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x270E88u;
    {
        const bool branch_taken_0x270e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E88u;
        // 0x270e8c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e88) {
            ctx->pc = 0x270E94u;
            goto label_270e94;
        }
    }
    ctx->pc = 0x270E90u;
label_270e90:
    // 0x270e90: 0x911023  subu        $v0, $a0, $s1
    ctx->pc = 0x270e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_270e94:
    // 0x270e94: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x270e94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_270e98:
    // 0x270e98: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x270e98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x270e9c: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x270E9Cu;
    {
        const bool branch_taken_0x270e9c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x270EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270E9Cu;
        // 0x270ea0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270e9c) {
            ctx->pc = 0x270E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270e78;
        }
    }
    ctx->pc = 0x270EA4u;
label_270ea4:
    // 0x270ea4: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x270ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x270ea8: 0x18a00012  blez        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x270EA8u;
    {
        const bool branch_taken_0x270ea8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x270EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EA8u;
        // 0x270eac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ea8) {
            ctx->pc = 0x270EF4u;
            goto label_270ef4;
        }
    }
    ctx->pc = 0x270EB0u;
    // 0x270eb0: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270EB0u;
    {
        const bool branch_taken_0x270eb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x270EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EB0u;
        // 0x270eb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270eb0) {
            ctx->pc = 0x270EC8u;
            goto label_270ec8;
        }
    }
    ctx->pc = 0x270EB8u;
    // 0x270eb8: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x270EB8u;
    {
        const bool branch_taken_0x270eb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x270EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EB8u;
        // 0x270ebc: 0x8fa6024c  lw          $a2, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270eb8) {
            ctx->pc = 0x270ED4u;
            goto label_270ed4;
        }
    }
    ctx->pc = 0x270EC0u;
    // 0x270ec0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x270EC0u;
    {
        const bool branch_taken_0x270ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x270ec0) {
            ctx->pc = 0x270EFCu;
            goto label_270efc;
        }
    }
    ctx->pc = 0x270EC8u;
label_270ec8:
    // 0x270ec8: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x270ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x270ecc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270ECCu;
    {
        const bool branch_taken_0x270ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270ECCu;
        // 0x270ed0: 0x3c04007f  lui         $a0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ecc) {
            ctx->pc = 0x270EDCu;
            goto label_270edc;
        }
    }
    ctx->pc = 0x270ED4u;
label_270ed4:
    // 0x270ed4: 0x26e3ffff  addiu       $v1, $s7, -0x1
    ctx->pc = 0x270ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x270ed8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x270ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_270edc:
    // 0x270edc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x270edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x270ee0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x270ee0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x270ee4: 0x3a32821  addu        $a1, $sp, $v1
    ctx->pc = 0x270ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x270ee8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x270ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x270eec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x270eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x270ef0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x270ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_270ef4:
    // 0x270ef4: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x270ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x270ef8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x270ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_270efc:
    // 0x270efc: 0x14c20010  bne         $a2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x270EFCu;
    {
        const bool branch_taken_0x270efc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x270F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270EFCu;
        // 0x270f00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270efc) {
            ctx->pc = 0x270F40u;
            goto label_270f40;
        }
    }
    ctx->pc = 0x270F04u;
    // 0x270f04: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x270f04u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x270f08: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x270f08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x270f0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x270f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f10: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x270F10u;
    SET_GPR_U32(ctx, 31, 0x270F18u);
    ctx->pc = 0x270F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F10u;
    // 0x270f14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x270F10u, 0x270F18u)) {
        return;
    }
    ctx->pc = 0x270F18u;
label_270f18:
    // 0x270f18: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x270F18u;
    {
        const bool branch_taken_0x270f18 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x270F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F18u;
        // 0x270f1c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f18) {
            ctx->pc = 0x270F3Cu;
            goto label_270f3c;
        }
    }
    ctx->pc = 0x270F20u;
    // 0x270f20: 0x8fa50248  lw          $a1, 0x248($sp)
    ctx->pc = 0x270f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x270f24: 0xc09cabc  jal         func_272AF0
    ctx->pc = 0x270F24u;
    SET_GPR_U32(ctx, 31, 0x270F2Cu);
    ctx->pc = 0x270F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F24u;
    // 0x270f28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272AF0u, 0x270F24u, 0x270F2Cu)) {
        return;
    }
    ctx->pc = 0x270F2Cu;
label_270f2c:
    // 0x270f2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270f30: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x270F30u;
    SET_GPR_U32(ctx, 31, 0x270F38u);
    ctx->pc = 0x270F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F30u;
    // 0x270f34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x270F30u, 0x270F38u)) {
        return;
    }
    ctx->pc = 0x270F38u;
label_270f38:
    // 0x270f38: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x270f38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270f3c:
    // 0x270f3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270f40:
    // 0x270f40: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x270F40u;
    SET_GPR_U32(ctx, 31, 0x270F48u);
    ctx->pc = 0x270F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270F40u;
    // 0x270f44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x270F40u, 0x270F48u)) {
        return;
    }
    ctx->pc = 0x270F48u;
label_270f48:
    // 0x270f48: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x270F48u;
    {
        const bool branch_taken_0x270f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F48u;
        // 0x270f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f48) {
            ctx->pc = 0x2710C4u;
            goto label_2710c4;
        }
    }
    ctx->pc = 0x270F50u;
    // 0x270f50: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x270f50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x270f54: 0x26f4ffff  addiu       $s4, $s7, -0x1
    ctx->pc = 0x270f54u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x270f58: 0x288102a  slt         $v0, $s4, $t0
    ctx->pc = 0x270f58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x270f5c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x270F5Cu;
    {
        const bool branch_taken_0x270f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F5Cu;
        // 0x270f60: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f5c) {
            ctx->pc = 0x270F90u;
            goto label_270f90;
        }
    }
    ctx->pc = 0x270F64u;
    // 0x270f64: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x270f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x270f68: 0x5d2021  addu        $a0, $v0, $sp
    ctx->pc = 0x270f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x270f6c: 0x0  nop
    ctx->pc = 0x270f6cu;
    // NOP
label_270f70:
    // 0x270f70: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x270f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x270f74: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x270f74u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x270f78: 0x8fa50244  lw          $a1, 0x244($sp)
    ctx->pc = 0x270f78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x270f7c: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x270f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x270f80: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x270f80u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x270f84: 0x285102a  slt         $v0, $s4, $a1
    ctx->pc = 0x270f84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x270f88: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x270F88u;
    {
        const bool branch_taken_0x270f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270f88) {
            ctx->pc = 0x270F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270f70;
        }
    }
    ctx->pc = 0x270F90u;
label_270f90:
    // 0x270f90: 0x1620004c  bnez        $s1, . + 4 + (0x4C << 2)
    ctx->pc = 0x270F90u;
    {
        const bool branch_taken_0x270f90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x270F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270F90u;
        // 0x270f94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270f90) {
            ctx->pc = 0x2710C4u;
            goto label_2710c4;
        }
    }
    ctx->pc = 0x270F98u;
    // 0x270f98: 0x8fa60244  lw          $a2, 0x244($sp)
    ctx->pc = 0x270f98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x270f9c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x270f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x270fa0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x270fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x270fa4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x270fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x270fa8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x270fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270fac: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x270FACu;
    {
        const bool branch_taken_0x270fac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x270FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FACu;
        // 0x270fb0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fac) {
            ctx->pc = 0x270FE4u;
            goto label_270fe4;
        }
    }
    ctx->pc = 0x270FB4u;
    // 0x270fb4: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x270fb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x270fb8: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x270fb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x270fbc: 0x0  nop
    ctx->pc = 0x270fbcu;
    // NOP
label_270fc0:
    // 0x270fc0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x270fc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x270fc4: 0x1101023  subu        $v0, $t0, $s0
    ctx->pc = 0x270fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 16)));
    // 0x270fc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x270fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x270fcc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x270fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x270fd0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x270fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x270fd4: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x270FD4u;
    {
        const bool branch_taken_0x270fd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x270fd4) {
            ctx->pc = 0x270FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270fc0;
        }
    }
    ctx->pc = 0x270FDCu;
    // 0x270fdc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270FDCu;
    {
        const bool branch_taken_0x270fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FDCu;
        // 0x270fe0: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270fdc) {
            ctx->pc = 0x270FECu;
            goto label_270fec;
        }
    }
    ctx->pc = 0x270FE4u;
label_270fe4:
    // 0x270fe4: 0x26f10001  addiu       $s1, $s7, 0x1
    ctx->pc = 0x270fe4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x270fe8: 0x2f0b821  addu        $s7, $s7, $s0
    ctx->pc = 0x270fe8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_270fec:
    // 0x270fec: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x270fecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270ff0: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x270ff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x270ff4: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x270FF4u;
    {
        const bool branch_taken_0x270ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270FF4u;
        // 0x270ff8: 0xafb70250  sw          $s7, 0x250($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ff4) {
            ctx->pc = 0x2710BCu;
            goto label_2710bc;
        }
    }
    ctx->pc = 0x270FFCu;
    // 0x270ffc: 0x27b30050  addiu       $s3, $sp, 0x50
    ctx->pc = 0x270ffcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x271000: 0x2bd70000  slti        $s7, $fp, 0x0
    ctx->pc = 0x271000u;
    SET_GPR_U64(ctx, 23, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x271004: 0x8fa30240  lw          $v1, 0x240($sp)
    ctx->pc = 0x271004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
label_271008:
    // 0x271008: 0x3d4a821  addu        $s5, $fp, $s4
    ctx->pc = 0x271008u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x27100c: 0x8fa4023c  lw          $a0, 0x23C($sp)
    ctx->pc = 0x27100cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
    // 0x271010: 0x1580c0  sll         $s0, $s5, 3
    ctx->pc = 0x271010u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x271014: 0x741021  addu        $v0, $v1, $s4
    ctx->pc = 0x271014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x271018: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x271018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x27101c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x27101cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x271020: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x271020u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271024: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x271024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x271028: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x271028u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27102c: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x27102Cu;
    SET_GPR_U32(ctx, 31, 0x271034u);
    ctx->pc = 0x271030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27102Cu;
    // 0x271030: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x27102Cu, 0x271034u)) {
        return;
    }
    ctx->pc = 0x271034u;
label_271034:
    // 0x271034: 0x16e00017  bnez        $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x271034u;
    {
        const bool branch_taken_0x271034 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x271038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271034u;
        // 0x271038: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271034) {
            ctx->pc = 0x271094u;
            goto label_271094;
        }
    }
    ctx->pc = 0x27103Cu;
    // 0x27103c: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x27103cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x271040: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x271040u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x271044: 0x0  nop
    ctx->pc = 0x271044u;
    // NOP
label_271048:
    // 0x271048: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x271048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x27104c: 0x2b11023  subu        $v0, $s5, $s1
    ctx->pc = 0x27104cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x271050: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x271050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x271054: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x271054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x271058: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x271058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27105c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x27105cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x271060: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x271060u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271064: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x271064u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x271068: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x271068u;
    SET_GPR_U32(ctx, 31, 0x271070u);
    ctx->pc = 0x27106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271068u;
    // 0x27106c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x271068u, 0x271070u)) {
        return;
    }
    ctx->pc = 0x271070u;
label_271070:
    // 0x271070: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x271070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271074: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x271074u;
    SET_GPR_U32(ctx, 31, 0x27107Cu);
    ctx->pc = 0x271078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271074u;
    // 0x271078: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x271074u, 0x27107Cu)) {
        return;
    }
    ctx->pc = 0x27107Cu;
label_27107c:
    // 0x27107c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x27107cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271080: 0x3d1102a  slt         $v0, $fp, $s1
    ctx->pc = 0x271080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x271084: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x271084u;
    {
        const bool branch_taken_0x271084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271084u;
        // 0x271088: 0x8fa60254  lw          $a2, 0x254($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271084) {
            ctx->pc = 0x271048u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271048;
        }
    }
    ctx->pc = 0x27108Cu;
    // 0x27108c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27108Cu;
    {
        const bool branch_taken_0x27108c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27108Cu;
        // 0x271090: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27108c) {
            ctx->pc = 0x2710A4u;
            goto label_2710a4;
        }
    }
    ctx->pc = 0x271094u;
label_271094:
    // 0x271094: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x271094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x271098: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x271098u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x27109c: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x27109cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x2710a0: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2710a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2710a4:
    // 0x2710a4: 0xd01821  addu        $v1, $a2, $s0
    ctx->pc = 0x2710a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2710a8: 0xfc760000  sd          $s6, 0x0($v1)
    ctx->pc = 0x2710a8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 22));
    // 0x2710ac: 0x8fa80250  lw          $t0, 0x250($sp)
    ctx->pc = 0x2710acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x2710b0: 0x114102a  slt         $v0, $t0, $s4
    ctx->pc = 0x2710b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2710b4: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x2710B4u;
    {
        const bool branch_taken_0x2710b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2710B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710B4u;
        // 0x2710b8: 0x8fa30240  lw          $v1, 0x240($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 576)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710b4) {
            ctx->pc = 0x271008u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271008;
        }
    }
    ctx->pc = 0x2710BCu;
label_2710bc:
    // 0x2710bc: 0x1000fefc  b           . + 4 + (-0x104 << 2)
    ctx->pc = 0x2710BCu;
    {
        const bool branch_taken_0x2710bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2710C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710BCu;
        // 0x2710c0: 0x8fb70250  lw          $s7, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710bc) {
            ctx->pc = 0x270CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_270cb0;
        }
    }
    ctx->pc = 0x2710C4u;
label_2710c4:
    // 0x2710c4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2710C4u;
    SET_GPR_U32(ctx, 31, 0x2710CCu);
    ctx->pc = 0x2710C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2710C4u;
    // 0x2710c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2710C4u, 0x2710CCu)) {
        return;
    }
    ctx->pc = 0x2710CCu;
label_2710cc:
    // 0x2710cc: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2710CCu;
    {
        const bool branch_taken_0x2710cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2710D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710CCu;
        // 0x2710d0: 0x8fa60248  lw          $a2, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710cc) {
            ctx->pc = 0x271128u;
            goto label_271128;
        }
    }
    ctx->pc = 0x2710D4u;
    // 0x2710d4: 0x8fa20248  lw          $v0, 0x248($sp)
    ctx->pc = 0x2710d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    // 0x2710d8: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x2710d8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x2710dc: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x2710dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x2710e0: 0xafa20248  sw          $v0, 0x248($sp)
    ctx->pc = 0x2710e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 2));
    // 0x2710e4: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x2710e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2710e8: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x2710e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2710ec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2710ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2710f0: 0x1480003e  bnez        $a0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2710F0u;
    {
        const bool branch_taken_0x2710f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2710F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2710F0u;
        // 0x2710f4: 0x32730007  andi        $s3, $s3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2710f0) {
            ctx->pc = 0x2711ECu;
            goto label_2711ec;
        }
    }
    ctx->pc = 0x2710F8u;
    // 0x2710f8: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x2710f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
    // 0x2710fc: 0x8fa30248  lw          $v1, 0x248($sp)
    ctx->pc = 0x2710fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
label_271100:
    // 0x271100: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x271100u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
    // 0x271104: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x271104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x271108: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x271108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x27110c: 0xafa30248  sw          $v1, 0x248($sp)
    ctx->pc = 0x27110cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 3));
    // 0x271110: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x271110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x271114: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x271114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271118: 0x1080fff9  beqz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x271118u;
    {
        const bool branch_taken_0x271118 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27111Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271118u;
        // 0x27111c: 0x8fa30248  lw          $v1, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271118) {
            ctx->pc = 0x271100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271100;
        }
    }
    ctx->pc = 0x271120u;
    // 0x271120: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x271120u;
    {
        const bool branch_taken_0x271120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271120) {
            ctx->pc = 0x2711F0u;
            goto label_2711f0;
        }
    }
    ctx->pc = 0x271128u;
label_271128:
    // 0x271128: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27112c: 0x341082e0  ori         $s0, $zero, 0x82E0
    ctx->pc = 0x27112cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33504);
    // 0x271130: 0x1083fc  dsll32      $s0, $s0, 15
    ctx->pc = 0x271130u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 15));
    // 0x271134: 0xc09cabc  jal         func_272AF0
    ctx->pc = 0x271134u;
    SET_GPR_U32(ctx, 31, 0x27113Cu);
    ctx->pc = 0x271138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271134u;
    // 0x271138: 0x62823  negu        $a1, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272AF0u, 0x271134u, 0x27113Cu)) {
        return;
    }
    ctx->pc = 0x27113Cu;
label_27113c:
    // 0x27113c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27113cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271140: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x271140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271144: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x271144u;
    SET_GPR_U32(ctx, 31, 0x27114Cu);
    ctx->pc = 0x271148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271144u;
    // 0x271148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x271144u, 0x27114Cu)) {
        return;
    }
    ctx->pc = 0x27114Cu;
label_27114c:
    // 0x27114c: 0x440001e  bltz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x27114Cu;
    {
        const bool branch_taken_0x27114c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x271150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27114Cu;
        // 0x271150: 0x8fa80248  lw          $t0, 0x248($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27114c) {
            ctx->pc = 0x2711C8u;
            goto label_2711c8;
        }
    }
    ctx->pc = 0x271154u;
    // 0x271154: 0x32730007  andi        $s3, $s3, 0x7
    ctx->pc = 0x271154u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x271158: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x271158u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x27115c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x27115cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x271160: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271164: 0x25080018  addiu       $t0, $t0, 0x18
    ctx->pc = 0x271164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24));
    // 0x271168: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x271168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
    // 0x27116c: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x27116Cu;
    SET_GPR_U32(ctx, 31, 0x271174u);
    ctx->pc = 0x271170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27116Cu;
    // 0x271170: 0xafa80248  sw          $t0, 0x248($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 584), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x27116Cu, 0x271174u)) {
        return;
    }
    ctx->pc = 0x271174u;
label_271174:
    // 0x271174: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x271174u;
    SET_GPR_U32(ctx, 31, 0x27117Cu);
    ctx->pc = 0x271178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271174u;
    // 0x271178: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x271174u, 0x27117Cu)) {
        return;
    }
    ctx->pc = 0x27117Cu;
label_27117c:
    // 0x27117c: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x27117Cu;
    SET_GPR_U32(ctx, 31, 0x271184u);
    ctx->pc = 0x271180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27117Cu;
    // 0x271180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x27117Cu, 0x271184u)) {
        return;
    }
    ctx->pc = 0x271184u;
label_271184:
    // 0x271184: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x271184u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271188: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x271188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27118c: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x27118cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x271190: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x271190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271194: 0x3a28821  addu        $s1, $sp, $v0
    ctx->pc = 0x271194u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x271198: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x271198u;
    SET_GPR_U32(ctx, 31, 0x2711A0u);
    ctx->pc = 0x27119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271198u;
    // 0x27119c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x271198u, 0x2711A0u)) {
        return;
    }
    ctx->pc = 0x2711A0u;
label_2711a0:
    // 0x2711a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2711a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711a4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2711A4u;
    SET_GPR_U32(ctx, 31, 0x2711ACu);
    ctx->pc = 0x2711A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2711A4u;
    // 0x2711a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2711A4u, 0x2711ACu)) {
        return;
    }
    ctx->pc = 0x2711ACu;
label_2711ac:
    // 0x2711ac: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x2711ACu;
    SET_GPR_U32(ctx, 31, 0x2711B4u);
    ctx->pc = 0x2711B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2711ACu;
    // 0x2711b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x2711ACu, 0x2711B4u)) {
        return;
    }
    ctx->pc = 0x2711B4u;
label_2711b4:
    // 0x2711b4: 0x171880  sll         $v1, $s7, 2
    ctx->pc = 0x2711b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2711b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2711b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2711bc: 0x3a38021  addu        $s0, $sp, $v1
    ctx->pc = 0x2711bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2711c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2711C0u;
    {
        const bool branch_taken_0x2711c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2711C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711C0u;
        // 0x2711c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711c0) {
            ctx->pc = 0x2711DCu;
            goto label_2711dc;
        }
    }
    ctx->pc = 0x2711C8u;
label_2711c8:
    // 0x2711c8: 0x171080  sll         $v0, $s7, 2
    ctx->pc = 0x2711c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
    // 0x2711cc: 0x32730007  andi        $s3, $s3, 0x7
    ctx->pc = 0x2711ccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x2711d0: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x2711d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2711d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2711d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711d8: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x2711d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
label_2711dc:
    // 0x2711dc: 0xc07df3e  jal         func_1F7CF8
    ctx->pc = 0x2711DCu;
    SET_GPR_U32(ctx, 31, 0x2711E4u);
    ctx->pc = 0x1F7CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7CF8u, 0x2711DCu, 0x2711E4u)) {
        return;
    }
    ctx->pc = 0x2711E4u;
label_2711e4:
    // 0x2711e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2711E4u;
    {
        const bool branch_taken_0x2711e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2711E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2711E4u;
        // 0x2711e8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2711e4) {
            ctx->pc = 0x2711F0u;
            goto label_2711f0;
        }
    }
    ctx->pc = 0x2711ECu;
label_2711ec:
    // 0x2711ec: 0xafb30258  sw          $s3, 0x258($sp)
    ctx->pc = 0x2711ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 600), GPR_U32(ctx, 19));
label_2711f0:
    // 0x2711f0: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x2711f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x2711f4: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x2711f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x2711f8: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x2711f8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2711fc: 0xc09cabc  jal         func_272AF0
    ctx->pc = 0x2711FCu;
    SET_GPR_U32(ctx, 31, 0x271204u);
    ctx->pc = 0x271200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2711FCu;
    // 0x271200: 0x8fa50248  lw          $a1, 0x248($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x272AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x272AF0u, 0x2711FCu, 0x271204u)) {
        return;
    }
    ctx->pc = 0x271204u;
label_271204:
    // 0x271204: 0x6800015  bltz        $s4, . + 4 + (0x15 << 2)
    ctx->pc = 0x271204u;
    {
        const bool branch_taken_0x271204 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x271208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271204u;
        // 0x271208: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271204) {
            ctx->pc = 0x27125Cu;
            goto label_27125c;
        }
    }
    ctx->pc = 0x27120Cu;
    // 0x27120c: 0x8fa40254  lw          $a0, 0x254($sp)
    ctx->pc = 0x27120cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x271210: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x271210u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x271214: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x271214u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x271218: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x271218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27121c: 0x7d8021  addu        $s0, $v1, $sp
    ctx->pc = 0x27121cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_271220:
    // 0x271220: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x271220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x271224: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x271224u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x271228: 0xc07df10  jal         func_1F7C40
    ctx->pc = 0x271228u;
    SET_GPR_U32(ctx, 31, 0x271230u);
    ctx->pc = 0x27122Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271228u;
    // 0x27122c: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7C40u, 0x271228u, 0x271230u)) {
        return;
    }
    ctx->pc = 0x271230u;
label_271230:
    // 0x271230: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x271230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271234: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x271234u;
    SET_GPR_U32(ctx, 31, 0x27123Cu);
    ctx->pc = 0x271238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271234u;
    // 0x271238: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x271234u, 0x27123Cu)) {
        return;
    }
    ctx->pc = 0x27123Cu;
label_27123c:
    // 0x27123c: 0x3405f9c0  ori         $a1, $zero, 0xF9C0
    ctx->pc = 0x27123cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63936);
    // 0x271240: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x271240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x271244: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x271244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271248: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x271248u;
    SET_GPR_U32(ctx, 31, 0x271250u);
    ctx->pc = 0x27124Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271248u;
    // 0x27124c: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x271248u, 0x271250u)) {
        return;
    }
    ctx->pc = 0x271250u;
label_271250:
    // 0x271250: 0x2631fff8  addiu       $s1, $s1, -0x8
    ctx->pc = 0x271250u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967288));
    // 0x271254: 0x681fff2  bgez        $s4, . + 4 + (-0xE << 2)
    ctx->pc = 0x271254u;
    {
        const bool branch_taken_0x271254 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x271258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271254u;
        // 0x271258: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271254) {
            ctx->pc = 0x271220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271220;
        }
    }
    ctx->pc = 0x27125Cu;
label_27125c:
    // 0x27125c: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x27125cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271260: 0x682002c  bltzl       $s4, . + 4 + (0x2C << 2)
    ctx->pc = 0x271260u;
    {
        const bool branch_taken_0x271260 = (GPR_S64(ctx, 20) < 0);
        if (branch_taken_0x271260) {
            ctx->pc = 0x271264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271260u;
            // 0x271264: 0x8fa2025c  lw          $v0, 0x25C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271314u;
            goto label_271314;
        }
    }
    ctx->pc = 0x271268u;
    // 0x271268: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x271268u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x27126c: 0x0  nop
    ctx->pc = 0x27126cu;
    // NOP
label_271270:
    // 0x271270: 0x8fa50260  lw          $a1, 0x260($sp)
    ctx->pc = 0x271270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x271274: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x271274u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271278: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x271278u;
    {
        const bool branch_taken_0x271278 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x27127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271278u;
        // 0x27127c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271278) {
            ctx->pc = 0x2712F4u;
            goto label_2712f4;
        }
    }
    ctx->pc = 0x271280u;
    // 0x271280: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x271280u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x271284: 0x640001c  bltz        $s2, . + 4 + (0x1C << 2)
    ctx->pc = 0x271284u;
    {
        const bool branch_taken_0x271284 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x271288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271284u;
        // 0x271288: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271284) {
            ctx->pc = 0x2712F8u;
            goto label_2712f8;
        }
    }
    ctx->pc = 0x27128Cu;
    // 0x27128c: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x27128cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x271290: 0x3c1e006b  lui         $fp, 0x6B
    ctx->pc = 0x271290u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)107 << 16));
    // 0x271294: 0x0  nop
    ctx->pc = 0x271294u;
    // NOP
label_271298:
    // 0x271298: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x271298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x27129c: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x27129cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2712a0: 0x27c2c928  addiu       $v0, $fp, -0x36D8
    ctx->pc = 0x2712a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294953256));
    // 0x2712a4: 0x8fa60254  lw          $a2, 0x254($sp)
    ctx->pc = 0x2712a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 596)));
    // 0x2712a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2712a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2712ac: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2712acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2712b0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2712b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2712b4: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x2712b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2712b8: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x2712b8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2712bc: 0xc07ddb2  jal         func_1F76C8
    ctx->pc = 0x2712BCu;
    SET_GPR_U32(ctx, 31, 0x2712C4u);
    ctx->pc = 0x2712C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2712BCu;
    // 0x2712c0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F76C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F76C8u, 0x2712BCu, 0x2712C4u)) {
        return;
    }
    ctx->pc = 0x2712C4u;
label_2712c4:
    // 0x2712c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2712c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2712c8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2712C8u;
    SET_GPR_U32(ctx, 31, 0x2712D0u);
    ctx->pc = 0x2712CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2712C8u;
    // 0x2712cc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2712C8u, 0x2712D0u)) {
        return;
    }
    ctx->pc = 0x2712D0u;
label_2712d0:
    // 0x2712d0: 0x8fa80244  lw          $t0, 0x244($sp)
    ctx->pc = 0x2712d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
    // 0x2712d4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2712d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2712d8: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x2712d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2712dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2712DCu;
    {
        const bool branch_taken_0x2712dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2712E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712DCu;
        // 0x2712e0: 0x270102a  slt         $v0, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712dc) {
            ctx->pc = 0x2712FCu;
            goto label_2712fc;
        }
    }
    ctx->pc = 0x2712E4u;
    // 0x2712e4: 0x1040ffec  beqz        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2712E4u;
    {
        const bool branch_taken_0x2712e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2712E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712E4u;
        // 0x2712e8: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712e4) {
            ctx->pc = 0x271298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271298;
        }
    }
    ctx->pc = 0x2712ECu;
    // 0x2712ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2712ECu;
    {
        const bool branch_taken_0x2712ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2712F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712ECu;
        // 0x2712f0: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712ec) {
            ctx->pc = 0x271304u;
            goto label_271304;
        }
    }
    ctx->pc = 0x2712F4u;
label_2712f4:
    // 0x2712f4: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x2712f4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
label_2712f8:
    // 0x2712f8: 0x2691ffff  addiu       $s1, $s4, -0x1
    ctx->pc = 0x2712f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_2712fc:
    // 0x2712fc: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x2712fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x271300: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x271300u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271304:
    // 0x271304: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x271304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x271308: 0x681ffd9  bgez        $s4, . + 4 + (-0x27 << 2)
    ctx->pc = 0x271308u;
    {
        const bool branch_taken_0x271308 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x27130Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271308u;
        // 0x27130c: 0xfc560000  sd          $s6, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271308) {
            ctx->pc = 0x271270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271270;
        }
    }
    ctx->pc = 0x271310u;
    // 0x271310: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x271310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_271314:
    // 0x271314: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x271314u;
    {
        const bool branch_taken_0x271314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271314u;
        // 0x271318: 0x8fa30238  lw          $v1, 0x238($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271314) {
            ctx->pc = 0x271334u;
            goto label_271334;
        }
    }
    ctx->pc = 0x27131Cu;
    // 0x27131c: 0x1c600021  bgtz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x27131Cu;
    {
        const bool branch_taken_0x27131c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x271320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27131Cu;
        // 0x271320: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27131c) {
            ctx->pc = 0x2713A4u;
            goto label_2713a4;
        }
    }
    ctx->pc = 0x271324u;
    // 0x271324: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x271324u;
    {
        const bool branch_taken_0x271324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x271328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271324u;
        // 0x271328: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271324) {
            ctx->pc = 0x27134Cu;
            goto label_27134c;
        }
    }
    ctx->pc = 0x27132Cu;
    // 0x27132c: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x27132Cu;
    {
        const bool branch_taken_0x27132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27132Cu;
        // 0x271330: 0xdfbf0300  ld          $ra, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27132c) {
            ctx->pc = 0x27160Cu;
            goto label_27160c;
        }
    }
    ctx->pc = 0x271334u;
label_271334:
    // 0x271334: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x271334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x271338: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x271338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27133c: 0x10820050  beq         $a0, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x27133Cu;
    {
        const bool branch_taken_0x27133c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x271340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27133Cu;
        // 0x271340: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27133c) {
            ctx->pc = 0x271480u;
            goto label_271480;
        }
    }
    ctx->pc = 0x271344u;
    // 0x271344: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x271344u;
    {
        const bool branch_taken_0x271344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271344u;
        // 0x271348: 0xdfbf0300  ld          $ra, 0x300($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271344) {
            ctx->pc = 0x27160Cu;
            goto label_27160c;
        }
    }
    ctx->pc = 0x27134Cu;
label_27134c:
    // 0x27134c: 0x680000a  bltz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x27134Cu;
    {
        const bool branch_taken_0x27134c = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x271350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27134Cu;
        // 0x271350: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27134c) {
            ctx->pc = 0x271378u;
            goto label_271378;
        }
    }
    ctx->pc = 0x271354u;
    // 0x271354: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x271354u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_271358:
    // 0x271358: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x271358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x27135c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27135cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271360: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x271360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x271364: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x271364u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x271368: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x271368u;
    SET_GPR_U32(ctx, 31, 0x271370u);
    ctx->pc = 0x27136Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271368u;
    // 0x27136c: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x271368u, 0x271370u)) {
        return;
    }
    ctx->pc = 0x271370u;
label_271370:
    // 0x271370: 0x681fff9  bgez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x271370u;
    {
        const bool branch_taken_0x271370 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x271374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271370u;
        // 0x271374: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271370) {
            ctx->pc = 0x271358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271358;
        }
    }
    ctx->pc = 0x271378u;
label_271378:
    // 0x271378: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x271378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x27137c: 0xfcb60000  sd          $s6, 0x0($a1)
    ctx->pc = 0x27137cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 22));
    // 0x271380: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x271380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x271384: 0x10c000a0  beqz        $a2, . + 4 + (0xA0 << 2)
    ctx->pc = 0x271384u;
    {
        const bool branch_taken_0x271384 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x271388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271384u;
        // 0x271388: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271384) {
            ctx->pc = 0x271608u;
            goto label_271608;
        }
    }
    ctx->pc = 0x27138Cu;
    // 0x27138c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27138cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271390: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x271390u;
    SET_GPR_U32(ctx, 31, 0x271398u);
    ctx->pc = 0x271394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271390u;
    // 0x271394: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x271390u, 0x271398u)) {
        return;
    }
    ctx->pc = 0x271398u;
label_271398:
    // 0x271398: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x271398u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x27139c: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x27139Cu;
    {
        const bool branch_taken_0x27139c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27139Cu;
        // 0x2713a0: 0xfd020000  sd          $v0, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27139c) {
            ctx->pc = 0x271604u;
            goto label_271604;
        }
    }
    ctx->pc = 0x2713A4u;
label_2713a4:
    // 0x2713a4: 0x680000e  bltz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2713A4u;
    {
        const bool branch_taken_0x2713a4 = (GPR_S64(ctx, 20) < 0);
        ctx->pc = 0x2713A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713A4u;
        // 0x2713a8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713a4) {
            ctx->pc = 0x2713E0u;
            goto label_2713e0;
        }
    }
    ctx->pc = 0x2713ACu;
    // 0x2713ac: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x2713acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2713b0: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x2713b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2713b4: 0x2a900001  slti        $s0, $s4, 0x1
    ctx->pc = 0x2713b4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1) ? 1 : 0);
label_2713b8:
    // 0x2713b8: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x2713b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x2713bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2713bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713c0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x2713c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x2713c4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2713c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2713c8: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2713C8u;
    SET_GPR_U32(ctx, 31, 0x2713D0u);
    ctx->pc = 0x2713CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713C8u;
    // 0x2713cc: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2713C8u, 0x2713D0u)) {
        return;
    }
    ctx->pc = 0x2713D0u;
label_2713d0:
    // 0x2713d0: 0x681fff9  bgez        $s4, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2713D0u;
    {
        const bool branch_taken_0x2713d0 = (GPR_S64(ctx, 20) >= 0);
        ctx->pc = 0x2713D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713D0u;
        // 0x2713d4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713d0) {
            ctx->pc = 0x2713B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2713b8;
        }
    }
    ctx->pc = 0x2713D8u;
    // 0x2713d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2713D8u;
    {
        const bool branch_taken_0x2713d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713D8u;
        // 0x2713dc: 0x8fa20234  lw          $v0, 0x234($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713d8) {
            ctx->pc = 0x2713ECu;
            goto label_2713ec;
        }
    }
    ctx->pc = 0x2713E0u;
label_2713e0:
    // 0x2713e0: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x2713e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2713e4: 0x2a900001  slti        $s0, $s4, 0x1
    ctx->pc = 0x2713e4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x2713e8: 0x8fa20234  lw          $v0, 0x234($sp)
    ctx->pc = 0x2713e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_2713ec:
    // 0x2713ec: 0xfc560000  sd          $s6, 0x0($v0)
    ctx->pc = 0x2713ecu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 22));
    // 0x2713f0: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x2713f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x2713f4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2713F4u;
    {
        const bool branch_taken_0x2713f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2713F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713F4u;
        // 0x2713f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2713f4) {
            ctx->pc = 0x27140Cu;
            goto label_27140c;
        }
    }
    ctx->pc = 0x2713FCu;
    // 0x2713fc: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2713FCu;
    SET_GPR_U32(ctx, 31, 0x271404u);
    ctx->pc = 0x271400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713FCu;
    // 0x271400: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2713FCu, 0x271404u)) {
        return;
    }
    ctx->pc = 0x271404u;
label_271404:
    // 0x271404: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x271404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x271408: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x271408u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_27140c:
    // 0x27140c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x27140cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271410: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x271410u;
    SET_GPR_U32(ctx, 31, 0x271418u);
    ctx->pc = 0x271414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271410u;
    // 0x271414: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x271410u, 0x271418u)) {
        return;
    }
    ctx->pc = 0x271418u;
label_271418:
    // 0x271418: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x271418u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27141c: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x27141Cu;
    {
        const bool branch_taken_0x27141c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x271420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27141Cu;
        // 0x271420: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27141c) {
            ctx->pc = 0x271454u;
            goto label_271454;
        }
    }
    ctx->pc = 0x271424u;
    // 0x271424: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x271424u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x271428: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x271428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x27142c: 0x0  nop
    ctx->pc = 0x27142cu;
    // NOP
label_271430:
    // 0x271430: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x271430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271434: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x271434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x271438: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x271438u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x27143c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x27143Cu;
    SET_GPR_U32(ctx, 31, 0x271444u);
    ctx->pc = 0x271440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27143Cu;
    // 0x271440: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x27143Cu, 0x271444u)) {
        return;
    }
    ctx->pc = 0x271444u;
label_271444:
    // 0x271444: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x271444u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271448: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x271448u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x27144c: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x27144Cu;
    {
        const bool branch_taken_0x27144c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27144Cu;
        // 0x271450: 0x1410c0  sll         $v0, $s4, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27144c) {
            ctx->pc = 0x271430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271430;
        }
    }
    ctx->pc = 0x271454u;
label_271454:
    // 0x271454: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x271454u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x271458: 0xfcb60008  sd          $s6, 0x8($a1)
    ctx->pc = 0x271458u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 22));
    // 0x27145c: 0x8fa6024c  lw          $a2, 0x24C($sp)
    ctx->pc = 0x27145cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
    // 0x271460: 0x10c00069  beqz        $a2, . + 4 + (0x69 << 2)
    ctx->pc = 0x271460u;
    {
        const bool branch_taken_0x271460 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x271464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271460u;
        // 0x271464: 0x8fa20258  lw          $v0, 0x258($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271460) {
            ctx->pc = 0x271608u;
            goto label_271608;
        }
    }
    ctx->pc = 0x271468u;
    // 0x271468: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x271468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27146c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x27146Cu;
    SET_GPR_U32(ctx, 31, 0x271474u);
    ctx->pc = 0x271470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27146Cu;
    // 0x271470: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x27146Cu, 0x271474u)) {
        return;
    }
    ctx->pc = 0x271474u;
label_271474:
    // 0x271474: 0x8fa80234  lw          $t0, 0x234($sp)
    ctx->pc = 0x271474u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x271478: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x271478u;
    {
        const bool branch_taken_0x271478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27147Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271478u;
        // 0x27147c: 0xfd020008  sd          $v0, 0x8($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271478) {
            ctx->pc = 0x271604u;
            goto label_271604;
        }
    }
    ctx->pc = 0x271480u;
label_271480:
    // 0x271480: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x271480u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271484: 0x1a800019  blez        $s4, . + 4 + (0x19 << 2)
    ctx->pc = 0x271484u;
    {
        const bool branch_taken_0x271484 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x271488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271484u;
        // 0x271488: 0x2a820002  slti        $v0, $s4, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271484) {
            ctx->pc = 0x2714ECu;
            goto label_2714ec;
        }
    }
    ctx->pc = 0x27148Cu;
    // 0x27148c: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x27148cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_271490:
    // 0x271490: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x271490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x271494: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x271494u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x271498: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x271498u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x27149c: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x27149cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x2714a0: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x2714a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x2714a4: 0xde330000  ld          $s3, 0x0($s1)
    ctx->pc = 0x2714a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2714a8: 0xde500000  ld          $s0, 0x0($s2)
    ctx->pc = 0x2714a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2714ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2714acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2714b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714b4: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2714B4u;
    SET_GPR_U32(ctx, 31, 0x2714BCu);
    ctx->pc = 0x2714B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2714B4u;
    // 0x2714b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2714B4u, 0x2714BCu)) {
        return;
    }
    ctx->pc = 0x2714BCu;
label_2714bc:
    // 0x2714bc: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2714bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2714c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714c4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2714C4u;
    SET_GPR_U32(ctx, 31, 0x2714CCu);
    ctx->pc = 0x2714C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2714C4u;
    // 0x2714c8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2714C4u, 0x2714CCu)) {
        return;
    }
    ctx->pc = 0x2714CCu;
label_2714cc:
    // 0x2714cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2714ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714d0: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x2714D0u;
    SET_GPR_U32(ctx, 31, 0x2714D8u);
    ctx->pc = 0x2714D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2714D0u;
    // 0x2714d4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x2714D0u, 0x2714D8u)) {
        return;
    }
    ctx->pc = 0x2714D8u;
label_2714d8:
    // 0x2714d8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x2714d8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x2714dc: 0x1e80ffec  bgtz        $s4, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2714DCu;
    {
        const bool branch_taken_0x2714dc = (GPR_S64(ctx, 20) > 0);
        ctx->pc = 0x2714E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2714DCu;
        // 0x2714e0: 0xfe560000  sd          $s6, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2714dc) {
            ctx->pc = 0x271490u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271490;
        }
    }
    ctx->pc = 0x2714E4u;
    // 0x2714e4: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x2714e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2714e8: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x2714e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_2714ec:
    // 0x2714ec: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x2714ECu;
    {
        const bool branch_taken_0x2714ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2714ec) {
            ctx->pc = 0x2714F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2714ECu;
            // 0x2714f0: 0x2e0a02d  daddu       $s4, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271554u;
            goto label_271554;
        }
    }
    ctx->pc = 0x2714F4u;
    // 0x2714f4: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x2714f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2714f8:
    // 0x2714f8: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x2714f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2714fc: 0x1488c0  sll         $s1, $s4, 3
    ctx->pc = 0x2714fcu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x271500: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x271500u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x271504: 0x2b18821  addu        $s1, $s5, $s1
    ctx->pc = 0x271504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
    // 0x271508: 0x2b29021  addu        $s2, $s5, $s2
    ctx->pc = 0x271508u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
    // 0x27150c: 0xde330000  ld          $s3, 0x0($s1)
    ctx->pc = 0x27150cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x271510: 0xde500000  ld          $s0, 0x0($s2)
    ctx->pc = 0x271510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x271514: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x271514u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271518: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x271518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27151c: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x27151Cu;
    SET_GPR_U32(ctx, 31, 0x271524u);
    ctx->pc = 0x271520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27151Cu;
    // 0x271520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x27151Cu, 0x271524u)) {
        return;
    }
    ctx->pc = 0x271524u;
label_271524:
    // 0x271524: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x271524u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271528: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27152c: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x27152Cu;
    SET_GPR_U32(ctx, 31, 0x271534u);
    ctx->pc = 0x271530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27152Cu;
    // 0x271530: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x27152Cu, 0x271534u)) {
        return;
    }
    ctx->pc = 0x271534u;
label_271534:
    // 0x271534: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x271534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271538: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x271538u;
    SET_GPR_U32(ctx, 31, 0x271540u);
    ctx->pc = 0x27153Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271538u;
    // 0x27153c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x271538u, 0x271540u)) {
        return;
    }
    ctx->pc = 0x271540u;
label_271540:
    // 0x271540: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x271540u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x271544: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x271544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x271548: 0x1040ffeb  beqz        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x271548u;
    {
        const bool branch_taken_0x271548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27154Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271548u;
        // 0x27154c: 0xfe560000  sd          $s6, 0x0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271548) {
            ctx->pc = 0x2714F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2714f8;
        }
    }
    ctx->pc = 0x271550u;
    // 0x271550: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x271550u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_271554:
    // 0x271554: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x271554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x271558: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x271558u;
    {
        const bool branch_taken_0x271558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271558u;
        // 0x27155c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271558) {
            ctx->pc = 0x2715A0u;
            goto label_2715a0;
        }
    }
    ctx->pc = 0x271560u;
    // 0x271560: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x271560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x271564: 0x27b500f0  addiu       $s5, $sp, 0xF0
    ctx->pc = 0x271564u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x271568: 0xdfb200f8  ld          $s2, 0xF8($sp)
    ctx->pc = 0x271568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x27156c: 0x0  nop
    ctx->pc = 0x27156cu;
    // NOP
label_271570:
    // 0x271570: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x271570u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x271574: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x271574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271578: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x271578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x27157c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x27157cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x271580: 0xc07dd82  jal         func_1F7608
    ctx->pc = 0x271580u;
    SET_GPR_U32(ctx, 31, 0x271588u);
    ctx->pc = 0x271584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271580u;
    // 0x271584: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7608u, 0x271580u, 0x271588u)) {
        return;
    }
    ctx->pc = 0x271588u;
label_271588:
    // 0x271588: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x271588u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27158c: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x27158cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x271590: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x271590u;
    {
        const bool branch_taken_0x271590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x271594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271590u;
        // 0x271594: 0x8fa2024c  lw          $v0, 0x24C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271590) {
            ctx->pc = 0x271570u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271570;
        }
    }
    ctx->pc = 0x271598u;
    // 0x271598: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271598u;
    {
        const bool branch_taken_0x271598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271598) {
            ctx->pc = 0x2715ACu;
            goto label_2715ac;
        }
    }
    ctx->pc = 0x2715A0u;
label_2715a0:
    // 0x2715a0: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x2715a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2715a4: 0xdfb200f8  ld          $s2, 0xF8($sp)
    ctx->pc = 0x2715a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x2715a8: 0x8fa2024c  lw          $v0, 0x24C($sp)
    ctx->pc = 0x2715a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_2715ac:
    // 0x2715ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2715ACu;
    {
        const bool branch_taken_0x2715ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2715B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715ACu;
        // 0x2715b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715ac) {
            ctx->pc = 0x2715C8u;
            goto label_2715c8;
        }
    }
    ctx->pc = 0x2715B4u;
    // 0x2715b4: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x2715b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2715b8: 0xfc760010  sd          $s6, 0x10($v1)
    ctx->pc = 0x2715b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 22));
    // 0x2715bc: 0xfc710000  sd          $s1, 0x0($v1)
    ctx->pc = 0x2715bcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 17));
    // 0x2715c0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2715C0u;
    {
        const bool branch_taken_0x2715c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2715C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715C0u;
        // 0x2715c4: 0xfc720008  sd          $s2, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715c0) {
            ctx->pc = 0x271604u;
            goto label_271604;
        }
    }
    ctx->pc = 0x2715C8u;
label_2715c8:
    // 0x2715c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2715c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2715cc: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2715CCu;
    SET_GPR_U32(ctx, 31, 0x2715D4u);
    ctx->pc = 0x2715D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2715CCu;
    // 0x2715d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2715CCu, 0x2715D4u)) {
        return;
    }
    ctx->pc = 0x2715D4u;
label_2715d4:
    // 0x2715d4: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x2715d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2715d8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2715d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2715dc: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x2715dcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x2715e0: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2715E0u;
    SET_GPR_U32(ctx, 31, 0x2715E8u);
    ctx->pc = 0x2715E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2715E0u;
    // 0x2715e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2715E0u, 0x2715E8u)) {
        return;
    }
    ctx->pc = 0x2715E8u;
label_2715e8:
    // 0x2715e8: 0x8fa50234  lw          $a1, 0x234($sp)
    ctx->pc = 0x2715e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x2715ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2715ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2715f0: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x2715f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x2715f4: 0xc07dd98  jal         func_1F7660
    ctx->pc = 0x2715F4u;
    SET_GPR_U32(ctx, 31, 0x2715FCu);
    ctx->pc = 0x2715F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2715F4u;
    // 0x2715f8: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7660u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7660u, 0x2715F4u, 0x2715FCu)) {
        return;
    }
    ctx->pc = 0x2715FCu;
label_2715fc:
    // 0x2715fc: 0x8fa60234  lw          $a2, 0x234($sp)
    ctx->pc = 0x2715fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x271600: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x271600u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_271604:
    // 0x271604: 0x8fa20258  lw          $v0, 0x258($sp)
    ctx->pc = 0x271604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 600)));
label_271608:
    // 0x271608: 0xdfbf0300  ld          $ra, 0x300($sp)
    ctx->pc = 0x271608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 768)));
label_27160c:
    // 0x27160c: 0xdfbe02f0  ld          $fp, 0x2F0($sp)
    ctx->pc = 0x27160cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x271610: 0xdfb702e0  ld          $s7, 0x2E0($sp)
    ctx->pc = 0x271610u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x271614: 0xdfb602d0  ld          $s6, 0x2D0($sp)
    ctx->pc = 0x271614u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x271618: 0xdfb502c0  ld          $s5, 0x2C0($sp)
    ctx->pc = 0x271618u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x27161c: 0xdfb402b0  ld          $s4, 0x2B0($sp)
    ctx->pc = 0x27161cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x271620: 0xdfb302a0  ld          $s3, 0x2A0($sp)
    ctx->pc = 0x271620u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x271624: 0xdfb20290  ld          $s2, 0x290($sp)
    ctx->pc = 0x271624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x271628: 0xdfb10280  ld          $s1, 0x280($sp)
    ctx->pc = 0x271628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x27162c: 0xdfb00270  ld          $s0, 0x270($sp)
    ctx->pc = 0x27162cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x271630: 0x3e00008  jr          $ra
    ctx->pc = 0x271630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271630u;
        // 0x271634: 0x27bd0310  addiu       $sp, $sp, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271638u;
}
