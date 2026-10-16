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

// Function: sub_0013FDE0
// Address: 0x13fde0 - 0x13ff18
void sub_0013FDE0_0x13fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FDE0_0x13fde0");
#endif

    switch (ctx->pc) {
        case 0x13fe14u: goto label_13fe14;
        case 0x13fe2cu: goto label_13fe2c;
        case 0x13fe44u: goto label_13fe44;
        case 0x13fe50u: goto label_13fe50;
        case 0x13fe5cu: goto label_13fe5c;
        case 0x13fe6cu: goto label_13fe6c;
        case 0x13fe7cu: goto label_13fe7c;
        case 0x13fe84u: goto label_13fe84;
        case 0x13fe90u: goto label_13fe90;
        case 0x13feacu: goto label_13feac;
        case 0x13feb4u: goto label_13feb4;
        case 0x13febcu: goto label_13febc;
        case 0x13fed8u: goto label_13fed8;
        case 0x13fee4u: goto label_13fee4;
        case 0x13fef4u: goto label_13fef4;
        default: break;
    }

    ctx->pc = 0x13fde0u;

    // 0x13fde0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13fde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13fde4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x13fde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x13fde8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13fde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdec: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x13fdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x13fdf0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x13fdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x13fdf4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x13fdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdf8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x13fdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x13fdfc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x13fdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x13fe00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13fe00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13fe04: 0x10800039  beqz        $a0, . + 4 + (0x39 << 2)
    ctx->pc = 0x13FE04u;
    {
        const bool branch_taken_0x13fe04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FE04u;
        // 0x13fe08: 0xae040048  sw          $a0, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe04) {
            ctx->pc = 0x13FEECu;
            goto label_13feec;
        }
    }
    ctx->pc = 0x13FE0Cu;
    // 0x13fe0c: 0xc095e0c  jal         func_257830
    ctx->pc = 0x13FE0Cu;
    SET_GPR_U32(ctx, 31, 0x13FE14u);
    ctx->pc = 0x257830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257830u, 0x13FE0Cu, 0x13FE14u)) {
        return;
    }
    ctx->pc = 0x13FE14u;
label_13fe14:
    // 0x13fe14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13fe14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe18: 0x52200037  beql        $s1, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x13FE18u;
    {
        const bool branch_taken_0x13fe18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fe18) {
            ctx->pc = 0x13FE1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FE18u;
            // 0x13fe1c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FEF8u;
            goto label_13fef8;
        }
    }
    ctx->pc = 0x13FE20u;
    // 0x13fe20: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x13fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fe24: 0xc097a3e  jal         func_25E8F8
    ctx->pc = 0x13FE24u;
    SET_GPR_U32(ctx, 31, 0x13FE2Cu);
    ctx->pc = 0x13FE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE24u;
    // 0x13fe28: 0x26140044  addiu       $s4, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E8F8u, 0x13FE24u, 0x13FE2Cu)) {
        return;
    }
    ctx->pc = 0x13FE2Cu;
label_13fe2c:
    // 0x13fe2c: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x13fe2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fe30: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x13fe30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe34: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13FE34u;
    {
        const bool branch_taken_0x13fe34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FE34u;
        // 0x13fe38: 0x8cb30004  lw          $s3, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe34) {
            ctx->pc = 0x13FE44u;
            goto label_13fe44;
        }
    }
    ctx->pc = 0x13FE3Cu;
    // 0x13fe3c: 0xc097a26  jal         func_25E898
    ctx->pc = 0x13FE3Cu;
    SET_GPR_U32(ctx, 31, 0x13FE44u);
    ctx->pc = 0x13FE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE3Cu;
    // 0x13fe40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E898u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E898u, 0x13FE3Cu, 0x13FE44u)) {
        return;
    }
    ctx->pc = 0x13FE44u;
label_13fe44:
    // 0x13fe44: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x13fe44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fe48: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x13FE48u;
    SET_GPR_U32(ctx, 31, 0x13FE50u);
    ctx->pc = 0x13FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE48u;
    // 0x13fe4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x13FE48u, 0x13FE50u)) {
        return;
    }
    ctx->pc = 0x13FE50u;
label_13fe50:
    // 0x13fe50: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13fe50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe54: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x13FE54u;
    SET_GPR_U32(ctx, 31, 0x13FE5Cu);
    ctx->pc = 0x13FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE54u;
    // 0x13fe58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x13FE54u, 0x13FE5Cu)) {
        return;
    }
    ctx->pc = 0x13FE5Cu;
label_13fe5c:
    // 0x13fe5c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x13fe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fe60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13fe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe64: 0xc095c3a  jal         func_2570E8
    ctx->pc = 0x13FE64u;
    SET_GPR_U32(ctx, 31, 0x13FE6Cu);
    ctx->pc = 0x13FE68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE64u;
    // 0x13fe68: 0xc44c0014  lwc1        $f12, 0x14($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2570E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2570E8u, 0x13FE64u, 0x13FE6Cu)) {
        return;
    }
    ctx->pc = 0x13FE6Cu;
label_13fe6c:
    // 0x13fe6c: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x13fe6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fe70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13fe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe74: 0xc095c4a  jal         func_257128
    ctx->pc = 0x13FE74u;
    SET_GPR_U32(ctx, 31, 0x13FE7Cu);
    ctx->pc = 0x13FE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE74u;
    // 0x13fe78: 0x24a50018  addiu       $a1, $a1, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257128u, 0x13FE74u, 0x13FE7Cu)) {
        return;
    }
    ctx->pc = 0x13FE7Cu;
label_13fe7c:
    // 0x13fe7c: 0xc095c62  jal         func_257188
    ctx->pc = 0x13FE7Cu;
    SET_GPR_U32(ctx, 31, 0x13FE84u);
    ctx->pc = 0x13FE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE7Cu;
    // 0x13fe80: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257188u, 0x13FE7Cu, 0x13FE84u)) {
        return;
    }
    ctx->pc = 0x13FE84u;
label_13fe84:
    // 0x13fe84: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x13fe84u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x13fe88: 0xc095d54  jal         func_257550
    ctx->pc = 0x13FE88u;
    SET_GPR_U32(ctx, 31, 0x13FE90u);
    ctx->pc = 0x13FE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FE88u;
    // 0x13fe8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257550u, 0x13FE88u, 0x13FE90u)) {
        return;
    }
    ctx->pc = 0x13FE90u;
label_13fe90:
    // 0x13fe90: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x13fe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fe94: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13fe94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x13fe98: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x13FE98u;
    {
        const bool branch_taken_0x13fe98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FE98u;
        // 0x13fe9c: 0xa2220002  sb          $v0, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe98) {
            ctx->pc = 0x13FEACu;
            goto label_13feac;
        }
    }
    ctx->pc = 0x13FEA0u;
    // 0x13fea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x13fea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fea4: 0xc0979fe  jal         func_25E7F8
    ctx->pc = 0x13FEA4u;
    SET_GPR_U32(ctx, 31, 0x13FEACu);
    ctx->pc = 0x13FEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEA4u;
    // 0x13fea8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7F8u, 0x13FEA4u, 0x13FEACu)) {
        return;
    }
    ctx->pc = 0x13FEACu;
label_13feac:
    // 0x13feac: 0xc050442  jal         func_141108
    ctx->pc = 0x13FEACu;
    SET_GPR_U32(ctx, 31, 0x13FEB4u);
    ctx->pc = 0x13FEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEACu;
    // 0x13feb0: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x141108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x141108u, 0x13FEACu, 0x13FEB4u)) {
        return;
    }
    ctx->pc = 0x13FEB4u;
label_13feb4:
    // 0x13feb4: 0xc076af2  jal         func_1DABC8
    ctx->pc = 0x13FEB4u;
    SET_GPR_U32(ctx, 31, 0x13FEBCu);
    ctx->pc = 0x13FEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEB4u;
    // 0x13feb8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DABC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DABC8u, 0x13FEB4u, 0x13FEBCu)) {
        return;
    }
    ctx->pc = 0x13FEBCu;
label_13febc:
    // 0x13febc: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x13febcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x13fec0: 0x10910006  beq         $a0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13FEC0u;
    {
        const bool branch_taken_0x13fec0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x13fec0) {
            ctx->pc = 0x13FEDCu;
            goto label_13fedc;
        }
    }
    ctx->pc = 0x13FEC8u;
    // 0x13fec8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13FEC8u;
    {
        const bool branch_taken_0x13fec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fec8) {
            ctx->pc = 0x13FECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13FEC8u;
            // 0x13fecc: 0xae110044  sw          $s1, 0x44($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13FEDCu;
            goto label_13fedc;
        }
    }
    ctx->pc = 0x13FED0u;
    // 0x13fed0: 0xc076ace  jal         func_1DAB38
    ctx->pc = 0x13FED0u;
    SET_GPR_U32(ctx, 31, 0x13FED8u);
    ctx->pc = 0x1DAB38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DAB38u, 0x13FED0u, 0x13FED8u)) {
        return;
    }
    ctx->pc = 0x13FED8u;
label_13fed8:
    // 0x13fed8: 0xae110044  sw          $s1, 0x44($s0)
    ctx->pc = 0x13fed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
label_13fedc:
    // 0x13fedc: 0xc050430  jal         func_1410C0
    ctx->pc = 0x13FEDCu;
    SET_GPR_U32(ctx, 31, 0x13FEE4u);
    ctx->pc = 0x13FEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEDCu;
    // 0x13fee0: 0x8e040044  lw          $a0, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1410C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1410C0u, 0x13FEDCu, 0x13FEE4u)) {
        return;
    }
    ctx->pc = 0x13FEE4u;
label_13fee4:
    // 0x13fee4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x13FEE4u;
    {
        const bool branch_taken_0x13fee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FEE4u;
        // 0x13fee8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fee4) {
            ctx->pc = 0x13FEF8u;
            goto label_13fef8;
        }
    }
    ctx->pc = 0x13FEECu;
label_13feec:
    // 0x13feec: 0xc0500a2  jal         func_140288
    ctx->pc = 0x13FEECu;
    SET_GPR_U32(ctx, 31, 0x13FEF4u);
    ctx->pc = 0x13FEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13FEECu;
    // 0x13fef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140288u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x140288u, 0x13FEECu, 0x13FEF4u)) {
        return;
    }
    ctx->pc = 0x13FEF4u;
label_13fef4:
    // 0x13fef4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x13fef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_13fef8:
    // 0x13fef8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x13fef8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fefc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x13fefcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ff00: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x13ff00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ff04: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x13ff04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ff08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13ff08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ff0c: 0x3e00008  jr          $ra
    ctx->pc = 0x13FF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13FF0Cu;
        // 0x13ff10: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13FF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13FF14u;
    // 0x13ff14: 0x0  nop
    ctx->pc = 0x13ff14u;
    // NOP
    ctx->pc = 0x13ff18u;
}
