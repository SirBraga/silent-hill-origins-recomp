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

// Function: sub_0024FDC0
// Address: 0x24fdc0 - 0x24ff28
void sub_0024FDC0_0x24fdc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FDC0_0x24fdc0");
#endif

    switch (ctx->pc) {
        case 0x24fdf4u: goto label_24fdf4;
        case 0x24fe10u: goto label_24fe10;
        case 0x24fe44u: goto label_24fe44;
        case 0x24fe58u: goto label_24fe58;
        case 0x24fe70u: goto label_24fe70;
        case 0x24fe88u: goto label_24fe88;
        case 0x24fe98u: goto label_24fe98;
        case 0x24feacu: goto label_24feac;
        case 0x24fec0u: goto label_24fec0;
        case 0x24fef8u: goto label_24fef8;
        default: break;
    }

    ctx->pc = 0x24fdc0u;

    // 0x24fdc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x24fdc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x24fdc4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x24fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x24fdc8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x24fdc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x24fdcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24fdccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fdd0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x24fdd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x24fdd4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24fdd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fdd8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24fdd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fddc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x24fddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x24fde0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x24fde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x24fde4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24fde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24fde8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24fde8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24fdec: 0xc092782  jal         func_249E08
    ctx->pc = 0x24FDECu;
    SET_GPR_U32(ctx, 31, 0x24FDF4u);
    ctx->pc = 0x24FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FDECu;
    // 0x24fdf0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x24FDECu, 0x24FDF4u)) {
        return;
    }
    ctx->pc = 0x24FDF4u;
label_24fdf4:
    // 0x24fdf4: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x24FDF4u;
    {
        const bool branch_taken_0x24fdf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FDF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FDF4u;
        // 0x24fdf8: 0x8f829130  lw          $v0, -0x6ED0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938928)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fdf4) {
            ctx->pc = 0x24FEE0u;
            goto label_24fee0;
        }
    }
    ctx->pc = 0x24FDFCu;
    // 0x24fdfc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24fdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe00: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24fe00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24fe04: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x24fe04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x24fe08: 0xc092782  jal         func_249E08
    ctx->pc = 0x24FE08u;
    SET_GPR_U32(ctx, 31, 0x24FE10u);
    ctx->pc = 0x24FE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FE08u;
    // 0x24fe0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x24FE08u, 0x24FE10u)) {
        return;
    }
    ctx->pc = 0x24FE10u;
label_24fe10:
    // 0x24fe10: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x24FE10u;
    {
        const bool branch_taken_0x24fe10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fe10) {
            ctx->pc = 0x24FE14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE10u;
            // 0x24fe14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FF08u;
            goto label_24ff08;
        }
    }
    ctx->pc = 0x24FE18u;
    // 0x24fe18: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x24fe18u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x24fe1c: 0x52200032  beql        $s1, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x24FE1Cu;
    {
        const bool branch_taken_0x24fe1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x24fe1c) {
            ctx->pc = 0x24FE20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE1Cu;
            // 0x24fe20: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FEE8u;
            goto label_24fee8;
        }
    }
    ctx->pc = 0x24FE24u;
    // 0x24fe24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x24fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x24fe28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24fe28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24fe2c: 0x5440002e  bnel        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x24FE2Cu;
    {
        const bool branch_taken_0x24fe2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24fe2c) {
            ctx->pc = 0x24FE30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24FE2Cu;
            // 0x24fe30: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24FEE8u;
            goto label_24fee8;
        }
    }
    ctx->pc = 0x24FE34u;
    // 0x24fe34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24fe34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe38: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x24fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x24fe3c: 0xc092782  jal         func_249E08
    ctx->pc = 0x24FE3Cu;
    SET_GPR_U32(ctx, 31, 0x24FE44u);
    ctx->pc = 0x24FE40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FE3Cu;
    // 0x24fe40: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x24FE3Cu, 0x24FE44u)) {
        return;
    }
    ctx->pc = 0x24FE44u;
label_24fe44:
    // 0x24fe44: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x24FE44u;
    {
        const bool branch_taken_0x24fe44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE44u;
        // 0x24fe48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe44) {
            ctx->pc = 0x24FEE0u;
            goto label_24fee0;
        }
    }
    ctx->pc = 0x24FE4Cu;
    // 0x24fe4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24fe4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe50: 0xc092782  jal         func_249E08
    ctx->pc = 0x24FE50u;
    SET_GPR_U32(ctx, 31, 0x24FE58u);
    ctx->pc = 0x24FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FE50u;
    // 0x24fe54: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x24FE50u, 0x24FE58u)) {
        return;
    }
    ctx->pc = 0x24FE58u;
label_24fe58:
    // 0x24fe58: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x24FE58u;
    {
        const bool branch_taken_0x24fe58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE58u;
        // 0x24fe5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe58) {
            ctx->pc = 0x24FEE0u;
            goto label_24fee0;
        }
    }
    ctx->pc = 0x24FE60u;
    // 0x24fe60: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x24fe60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x24fe64: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x24fe64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x24fe68: 0xc092782  jal         func_249E08
    ctx->pc = 0x24FE68u;
    SET_GPR_U32(ctx, 31, 0x24FE70u);
    ctx->pc = 0x24FE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FE68u;
    // 0x24fe6c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x24FE68u, 0x24FE70u)) {
        return;
    }
    ctx->pc = 0x24FE70u;
label_24fe70:
    // 0x24fe70: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x24FE70u;
    {
        const bool branch_taken_0x24fe70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE70u;
        // 0x24fe74: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe70) {
            ctx->pc = 0x24FEE0u;
            goto label_24fee0;
        }
    }
    ctx->pc = 0x24FE78u;
    // 0x24fe78: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24fe7c: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x24FE7Cu;
    {
        const bool branch_taken_0x24fe7c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x24FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE7Cu;
        // 0x24fe80: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe7c) {
            ctx->pc = 0x24FF04u;
            goto label_24ff04;
        }
    }
    ctx->pc = 0x24FE84u;
    // 0x24fe84: 0x0  nop
    ctx->pc = 0x24fe84u;
    // NOP
label_24fe88:
    // 0x24fe88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24fe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24fe8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fe90: 0xc092782  jal         func_249E08
    ctx->pc = 0x24FE90u;
    SET_GPR_U32(ctx, 31, 0x24FE98u);
    ctx->pc = 0x24FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FE90u;
    // 0x24fe94: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x24FE90u, 0x24FE98u)) {
        return;
    }
    ctx->pc = 0x24FE98u;
label_24fe98:
    // 0x24fe98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x24FE98u;
    {
        const bool branch_taken_0x24fe98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FE98u;
        // 0x24fe9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fe98) {
            ctx->pc = 0x24FEE0u;
            goto label_24fee0;
        }
    }
    ctx->pc = 0x24FEA0u;
    // 0x24fea0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x24fea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x24fea4: 0xc092782  jal         func_249E08
    ctx->pc = 0x24FEA4u;
    SET_GPR_U32(ctx, 31, 0x24FEACu);
    ctx->pc = 0x24FEA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FEA4u;
    // 0x24fea8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x24FEA4u, 0x24FEACu)) {
        return;
    }
    ctx->pc = 0x24FEACu;
label_24feac:
    // 0x24feac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x24FEACu;
    {
        const bool branch_taken_0x24feac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEACu;
        // 0x24feb0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24feac) {
            ctx->pc = 0x24FEE0u;
            goto label_24fee0;
        }
    }
    ctx->pc = 0x24FEB4u;
    // 0x24feb4: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x24feb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x24feb8: 0xc092782  jal         func_249E08
    ctx->pc = 0x24FEB8u;
    SET_GPR_U32(ctx, 31, 0x24FEC0u);
    ctx->pc = 0x24FEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FEB8u;
    // 0x24febc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x24FEB8u, 0x24FEC0u)) {
        return;
    }
    ctx->pc = 0x24FEC0u;
label_24fec0:
    // 0x24fec0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24FEC0u;
    {
        const bool branch_taken_0x24fec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEC0u;
        // 0x24fec4: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fec0) {
            ctx->pc = 0x24FEE0u;
            goto label_24fee0;
        }
    }
    ctx->pc = 0x24FEC8u;
    // 0x24fec8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x24fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x24fecc: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x24feccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x24fed0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x24FED0u;
    {
        const bool branch_taken_0x24fed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FED0u;
        // 0x24fed4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fed0) {
            ctx->pc = 0x24FE88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24fe88;
        }
    }
    ctx->pc = 0x24FED8u;
    // 0x24fed8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x24FED8u;
    {
        const bool branch_taken_0x24fed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FED8u;
        // 0x24fedc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fed8) {
            ctx->pc = 0x24FF08u;
            goto label_24ff08;
        }
    }
    ctx->pc = 0x24FEE0u;
label_24fee0:
    // 0x24fee0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x24FEE0u;
    {
        const bool branch_taken_0x24fee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEE0u;
        // 0x24fee4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fee0) {
            ctx->pc = 0x24FF08u;
            goto label_24ff08;
        }
    }
    ctx->pc = 0x24FEE8u;
label_24fee8:
    // 0x24fee8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24fee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24feec: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x24feecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x24fef0: 0xc092782  jal         func_249E08
    ctx->pc = 0x24FEF0u;
    SET_GPR_U32(ctx, 31, 0x24FEF8u);
    ctx->pc = 0x24FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24FEF0u;
    // 0x24fef4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x24FEF0u, 0x24FEF8u)) {
        return;
    }
    ctx->pc = 0x24FEF8u;
label_24fef8:
    // 0x24fef8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x24fef8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fefc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x24FEFCu;
    {
        const bool branch_taken_0x24fefc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FEFCu;
        // 0x24ff00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24fefc) {
            ctx->pc = 0x24FF08u;
            goto label_24ff08;
        }
    }
    ctx->pc = 0x24FF04u;
label_24ff04:
    // 0x24ff04: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24ff04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24ff08:
    // 0x24ff08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x24ff08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x24ff0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x24ff0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x24ff10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x24ff10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24ff14: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x24ff14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24ff18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24ff18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24ff1c: 0x3e00008  jr          $ra
    ctx->pc = 0x24FF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FF1Cu;
        // 0x24ff20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FF24u;
    // 0x24ff24: 0x0  nop
    ctx->pc = 0x24ff24u;
    // NOP
    ctx->pc = 0x24ff28u;
}
