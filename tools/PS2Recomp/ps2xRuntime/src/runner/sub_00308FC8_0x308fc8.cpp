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

// Function: sub_00308FC8
// Address: 0x308fc8 - 0x3092f8
void sub_00308FC8_0x308fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308FC8_0x308fc8");
#endif

    ctx->pc = 0x308fc8u;

    // 0x308fc8: 0x44046000  mfc1        $a0, $f12
    ctx->pc = 0x308fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x308fcc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x308fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x308fd0: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x308fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x308fd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x308fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x308fd8: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x308fd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x308fdc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x308FDCu;
    {
        const bool branch_taken_0x308fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FDCu;
        // 0x308fe0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308fdc) {
            ctx->pc = 0x309040u;
            goto label_309040;
        }
    }
    ctx->pc = 0x308FE4u;
    // 0x308fe4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x308fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x308fe8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x308fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x308fec: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x308fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x308ff0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x308FF0u;
    {
        const bool branch_taken_0x308ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FF0u;
        // 0x308ff4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ff0) {
            ctx->pc = 0x309000u;
            goto label_309000;
        }
    }
    ctx->pc = 0x308FF8u;
    // 0x308ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x308FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308FF8u;
        // 0x308ffc: 0xc4400e9c  lwc1        $f0, 0xE9C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3740)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308FF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309000u;
label_309000:
    // 0x309000: 0x4e10009  bgez        $a3, . + 4 + (0x9 << 2)
    ctx->pc = 0x309000u;
    {
        const bool branch_taken_0x309000 = (GPR_S64(ctx, 7) >= 0);
        ctx->pc = 0x309004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309000u;
        // 0x309004: 0x2408ffe7  addiu       $t0, $zero, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x309000) {
            ctx->pc = 0x309028u;
            goto label_309028;
        }
    }
    ctx->pc = 0x309008u;
    // 0x309008: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x309008u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30900c: 0x46000041  sub.s       $f1, $f0, $f0
    ctx->pc = 0x30900cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[0]);
    // 0x309010: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x309010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309014: 0x0  nop
    ctx->pc = 0x309014u;
    // NOP
    // 0x309018: 0x0  nop
    ctx->pc = 0x309018u;
    // NOP
    // 0x30901c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x30901cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x309020: 0x3e00008  jr          $ra
    ctx->pc = 0x309020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309028u;
label_309028:
    // 0x309028: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x309028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x30902c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30902cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309030: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x309030u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309034: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x309034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x309038: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x309038u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x30903c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x30903cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_309040:
    // 0x309040: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x309040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x309044: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x309044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x309048: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x309048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x30904c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x30904Cu;
    {
        const bool branch_taken_0x30904c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x309050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30904Cu;
        // 0x309050: 0x3c05007f  lui         $a1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30904c) {
            ctx->pc = 0x309060u;
            goto label_309060;
        }
    }
    ctx->pc = 0x309054u;
    // 0x309054: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x309054u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x309058: 0x3e00008  jr          $ra
    ctx->pc = 0x309058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30905Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309058u;
        // 0x30905c: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309060u;
label_309060:
    // 0x309060: 0x735c3  sra         $a2, $a3, 23
    ctx->pc = 0x309060u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 7), 23));
    // 0x309064: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x309064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x309068: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x309068u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x30906c: 0xe53824  and         $a3, $a3, $a1
    ctx->pc = 0x30906cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x309070: 0x3463fb20  ori         $v1, $v1, 0xFB20
    ctx->pc = 0x309070u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64288);
    // 0x309074: 0x2502ff81  addiu       $v0, $t0, -0x7F
    ctx->pc = 0x309074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967169));
    // 0x309078: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x309078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x30907c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x30907cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x309080: 0x464021  addu        $t0, $v0, $a2
    ctx->pc = 0x309080u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x309084: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x309084u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x309088: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x309088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x30908c: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x30908cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x309090: 0xe22025  or          $a0, $a3, $v0
    ctx->pc = 0x309090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x309094: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x309094u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x309098: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x309098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30909c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30909cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3090a0: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x3090a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x3090a4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3090a4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3090a8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3090a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3090ac: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x3090acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x3090b0: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x3090b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x3090b4: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x3090B4u;
    {
        const bool branch_taken_0x3090b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3090B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3090B4u;
        // 0x3090b8: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3090b4) {
            ctx->pc = 0x30916Cu;
            goto label_30916c;
        }
    }
    ctx->pc = 0x3090BCu;
    // 0x3090bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3090bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3090c0: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x3090c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3090c4: 0x0  nop
    ctx->pc = 0x3090c4u;
    // NOP
    // 0x3090c8: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x3090C8u;
    {
        const bool branch_taken_0x3090c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3090c8) {
            ctx->pc = 0x3090CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3090C8u;
            // 0x3090cc: 0x460c6082  mul.s       $f2, $f12, $f12 (Delay Slot)
            ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x309108u;
            goto label_309108;
        }
    }
    ctx->pc = 0x3090D0u;
    // 0x3090d0: 0x11000084  beqz        $t0, . + 4 + (0x84 << 2)
    ctx->pc = 0x3090D0u;
    {
        const bool branch_taken_0x3090d0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x3090d0) {
            ctx->pc = 0x3092E4u;
            goto label_3092e4;
        }
    }
    ctx->pc = 0x3090D8u;
    // 0x3090d8: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x3090d8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x3090dc: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x3090dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x3090e0: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x3090e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x3090e4: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x3090e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x3090e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3090e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3090ec: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x3090ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x3090f0: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x3090f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x3090f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3090f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3090f8: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x3090f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x3090fc: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x3090fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x309100: 0x3e00008  jr          $ra
    ctx->pc = 0x309100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309100u;
        // 0x309104: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309108u;
label_309108:
    // 0x309108: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x309108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x30910c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x30910cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x309110: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x309110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309114: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x309114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x309118: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x309118u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30911c: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x30911cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x309120: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x309120u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x309124: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x309124u;
    {
        const bool branch_taken_0x309124 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x309128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309124u;
        // 0x309128: 0x46011082  mul.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309124) {
            ctx->pc = 0x309134u;
            goto label_309134;
        }
    }
    ctx->pc = 0x30912Cu;
    // 0x30912c: 0x3e00008  jr          $ra
    ctx->pc = 0x30912Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30912Cu;
        // 0x309130: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30912Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309134u;
label_309134:
    // 0x309134: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x309134u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x309138: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x309138u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x30913c: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x30913cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x309140: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x309140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x309144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x309144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309148: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x309148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x30914c: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x30914cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x309150: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x309150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309154: 0x46004802  mul.s       $f0, $f9, $f0
    ctx->pc = 0x309154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x309158: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x309158u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x30915c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x30915cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x309160: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x309160u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x309164: 0x3e00008  jr          $ra
    ctx->pc = 0x309164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309164u;
        // 0x309168: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30916Cu;
label_30916c:
    // 0x30916c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x30916cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x309170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x309170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309174: 0x3c03ffcf  lui         $v1, 0xFFCF
    ctx->pc = 0x309174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65487 << 16));
    // 0x309178: 0x3c013e17  lui         $at, 0x3E17
    ctx->pc = 0x309178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15895 << 16));
    // 0x30917c: 0x34218897  ori         $at, $at, 0x8897
    ctx->pc = 0x30917cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34967);
    // 0x309180: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x309180u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309184: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x309184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x309188: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x309188u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x30918c: 0x3c013e3a  lui         $at, 0x3E3A
    ctx->pc = 0x30918cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15930 << 16));
    // 0x309190: 0x34213325  ori         $at, $at, 0x3325
    ctx->pc = 0x309190u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13093);
    // 0x309194: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x309194u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x309198: 0x3c013e1c  lui         $at, 0x3E1C
    ctx->pc = 0x309198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15900 << 16));
    // 0x30919c: 0x3421d04f  ori         $at, $at, 0xD04F
    ctx->pc = 0x30919cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53327);
    // 0x3091a0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3091a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3091a4: 0x34635c30  ori         $v1, $v1, 0x5C30
    ctx->pc = 0x3091a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23600);
    // 0x3091a8: 0x3c013e63  lui         $at, 0x3E63
    ctx->pc = 0x3091a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15971 << 16));
    // 0x3091ac: 0x34218e29  ori         $at, $at, 0x8E29
    ctx->pc = 0x3091acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)36393);
    // 0x3091b0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3091b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3091b4: 0x3442c288  ori         $v0, $v0, 0xC288
    ctx->pc = 0x3091b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49800);
    // 0x3091b8: 0x0  nop
    ctx->pc = 0x3091b8u;
    // NOP
    // 0x3091bc: 0x0  nop
    ctx->pc = 0x3091bcu;
    // NOP
    // 0x3091c0: 0x46006283  div.s       $f10, $f12, $f0
    ctx->pc = 0x3091c0u;
    ctx->f[10] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
    // 0x3091c4: 0x3c013e92  lui         $at, 0x3E92
    ctx->pc = 0x3091c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16018 << 16));
    // 0x3091c8: 0x34214925  ori         $at, $at, 0x4925
    ctx->pc = 0x3091c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18725);
    // 0x3091cc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3091ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3091d0: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3091d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x3091d4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3091d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x3091d8: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3091d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3091dc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x3091dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x3091e0: 0x3c013f2a  lui         $at, 0x3F2A
    ctx->pc = 0x3091e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16170 << 16));
    // 0x3091e4: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x3091e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x3091e8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x3091e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3091ec: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x3091ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x3091f0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3091f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3091f4: 0x44884800  mtc1        $t0, $f9
    ctx->pc = 0x3091f4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x3091f8: 0x46804a60  cvt.s.w     $f9, $f9
    ctx->pc = 0x3091f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[9], sizeof(tmp)); ctx->f[9] = FPU_CVT_S_W(tmp); }
    // 0x3091fc: 0x460a50c2  mul.s       $f3, $f10, $f10
    ctx->pc = 0x3091fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[10]);
    // 0x309200: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x309200u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x309204: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x309204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x309208: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x309208u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30920c: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x30920cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x309210: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x309210u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x309214: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x309214u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x309218: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x309218u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30921c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x30921cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x309220: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x309220u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x309224: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x309224u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x309228: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x309228u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x30922c: 0x46070840  add.s       $f1, $f1, $f7
    ctx->pc = 0x30922cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[7]);
    // 0x309230: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x309230u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x309234: 0x1860001a  blez        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x309234u;
    {
        const bool branch_taken_0x309234 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x309238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309234u;
        // 0x309238: 0x46001880  add.s       $f2, $f3, $f0 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309234) {
            ctx->pc = 0x3092A0u;
            goto label_3092a0;
        }
    }
    ctx->pc = 0x30923Cu;
    // 0x30923c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x30923cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x309240: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x309240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x309244: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x309244u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x309248: 0x15000006  bnez        $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x309248u;
    {
        const bool branch_taken_0x309248 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x30924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309248u;
        // 0x30924c: 0x460c0102  mul.s       $f4, $f0, $f12 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x309248) {
            ctx->pc = 0x309264u;
            goto label_309264;
        }
    }
    ctx->pc = 0x309250u;
    // 0x309250: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x309250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x309254: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x309254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x309258: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x309258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x30925c: 0x3e00008  jr          $ra
    ctx->pc = 0x30925Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x309260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30925Cu;
        // 0x309260: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30925Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x309264u;
label_309264:
    // 0x309264: 0x46022000  add.s       $f0, $f4, $f2
    ctx->pc = 0x309264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x309268: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x309268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x30926c: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x30926cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x309270: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x309270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x309274: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x309274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x309278: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x309278u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x30927c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x30927cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x309280: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x309280u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x309284: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x309284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x309288: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x309288u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x30928c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x30928cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x309290: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x309290u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x309294: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x309294u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x309298: 0x3e00008  jr          $ra
    ctx->pc = 0x309298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30929Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x309298u;
        // 0x30929c: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x309298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3092A0u;
label_3092a0:
    // 0x3092a0: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3092A0u;
    {
        const bool branch_taken_0x3092a0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3092A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092A0u;
        // 0x3092a4: 0x46026001  sub.s       $f0, $f12, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3092a0) {
            ctx->pc = 0x3092B4u;
            goto label_3092b4;
        }
    }
    ctx->pc = 0x3092A8u;
    // 0x3092a8: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3092a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3092ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3092ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3092B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3092ACu;
        // 0x3092b0: 0x46006001  sub.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3092ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3092B4u;
label_3092b4:
    // 0x3092b4: 0x3c013717  lui         $at, 0x3717
    ctx->pc = 0x3092b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14103 << 16));
    // 0x3092b8: 0x3421f7d1  ori         $at, $at, 0xF7D1
    ctx->pc = 0x3092b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63441);
    // 0x3092bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3092bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3092c0: 0x3c013f31  lui         $at, 0x3F31
    ctx->pc = 0x3092c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16177 << 16));
    // 0x3092c4: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x3092c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x3092c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3092c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3092cc: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x3092ccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
    // 0x3092d0: 0x46005002  mul.s       $f0, $f10, $f0
    ctx->pc = 0x3092d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[0]);
    // 0x3092d4: 0x46024882  mul.s       $f2, $f9, $f2
    ctx->pc = 0x3092d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x3092d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3092d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3092dc: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x3092dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3092e0: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x3092e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_3092e4:
    // 0x3092e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3092E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3092E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3092ECu;
    // 0x3092ec: 0x0  nop
    ctx->pc = 0x3092ecu;
    // NOP
    // 0x3092f0: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x3092f0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3092f4: 0x0  nop
    ctx->pc = 0x3092f4u;
    // NOP
    ctx->pc = 0x3092f8u;
}
