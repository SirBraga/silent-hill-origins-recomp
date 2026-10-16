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

// Function: sub_00102FA0
// Address: 0x102fa0 - 0x103090
void sub_00102FA0_0x102fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102FA0_0x102fa0");
#endif

    switch (ctx->pc) {
        case 0x102fd0u: goto label_102fd0;
        case 0x103004u: goto label_103004;
        case 0x103078u: goto label_103078;
        default: break;
    }

    ctx->pc = 0x102fa0u;

    // 0x102fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102fa4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x102fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x102fa8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x102fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x102fac: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x102facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102fb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x102fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x102fb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102fb8: 0x8c438280  lw          $v1, -0x7D80($v0)
    ctx->pc = 0x102fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338280u));
    // 0x102fbc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x102fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102fc0: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x102FC0u;
    {
        const bool branch_taken_0x102fc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x102FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FC0u;
        // 0x102fc4: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fc0) {
            ctx->pc = 0x102FE8u;
            goto label_102fe8;
        }
    }
    ctx->pc = 0x102FC8u;
    // 0x102fc8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x102fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102fcc: 0x0  nop
    ctx->pc = 0x102fccu;
    // NOP
label_102fd0:
    // 0x102fd0: 0x10460006  beq         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x102FD0u;
    {
        const bool branch_taken_0x102fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x102FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FD0u;
        // 0x102fd4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102fd0) {
            ctx->pc = 0x102FECu;
            goto label_102fec;
        }
    }
    ctx->pc = 0x102FD8u;
    // 0x102fd8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x102fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x102fdc: 0x0  nop
    ctx->pc = 0x102fdcu;
    // NOP
    // 0x102fe0: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x102FE0u;
    {
        const bool branch_taken_0x102fe0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x102fe0) {
            ctx->pc = 0x102FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102FE0u;
            // 0x102fe4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_102fd0;
        }
    }
    ctx->pc = 0x102FE8u;
label_102fe8:
    // 0x102fe8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x102fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_102fec:
    // 0x102fec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x102fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102ff0: 0xc2880b  movn        $s1, $a2, $v0
    ctx->pc = 0x102ff0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6));
    // 0x102ff4: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x102FF4u;
    {
        const bool branch_taken_0x102ff4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x102FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102FF4u;
        // 0x102ff8: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102ff4) {
            ctx->pc = 0x103078u;
            goto label_103078;
        }
    }
    ctx->pc = 0x102FFCu;
    // 0x102ffc: 0xc040688  jal         func_101A20
    ctx->pc = 0x102FFCu;
    SET_GPR_U32(ctx, 31, 0x103004u);
    ctx->pc = 0x103000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102FFCu;
    // 0x103000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A20u, 0x102FFCu, 0x103004u)) {
        return;
    }
    ctx->pc = 0x103004u;
label_103004:
    // 0x103004: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x103004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x103008: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x103008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10300c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x10300cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x103010: 0x14a20017  bne         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x103010u;
    {
        const bool branch_taken_0x103010 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x103014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103010u;
        // 0x103014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x103010) {
            ctx->pc = 0x103070u;
            goto label_103070;
        }
    }
    ctx->pc = 0x103018u;
    // 0x103018: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x103018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x10301c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x10301cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x103020: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x103020u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x103024: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x103024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x103028: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x103028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10302c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10302cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x103030: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x103030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x103034: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x103034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x103038: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x103038u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x10303c: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x10303cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x103040: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x103040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x103044: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x103044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x103048: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x103048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x10304c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x10304cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x103050: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x103050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x103054: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x103054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x103058: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x103058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x10305c: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x10305cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x103060: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x103060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x103064: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x103064u;
    {
        const bool branch_taken_0x103064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x103068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103064u;
        // 0x103068: 0xe6000034  swc1        $f0, 0x34($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x103064) {
            ctx->pc = 0x103078u;
            goto label_103078;
        }
    }
    ctx->pc = 0x10306Cu;
    // 0x10306c: 0x0  nop
    ctx->pc = 0x10306cu;
    // NOP
label_103070:
    // 0x103070: 0xc0406bc  jal         func_101AF0
    ctx->pc = 0x103070u;
    SET_GPR_U32(ctx, 31, 0x103078u);
    ctx->pc = 0x103074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x103070u;
    // 0x103074: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101AF0u, 0x103070u, 0x103078u)) {
        return;
    }
    ctx->pc = 0x103078u;
label_103078:
    // 0x103078: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x103078u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10307c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10307cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x103080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x103084: 0x3e00008  jr          $ra
    ctx->pc = 0x103084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x103088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x103084u;
        // 0x103088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10308Cu;
    // 0x10308c: 0x0  nop
    ctx->pc = 0x10308cu;
    // NOP
    ctx->pc = 0x103090u;
}
