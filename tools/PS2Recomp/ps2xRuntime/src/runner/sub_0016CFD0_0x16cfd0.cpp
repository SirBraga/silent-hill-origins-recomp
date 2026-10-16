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

// Function: sub_0016CFD0
// Address: 0x16cfd0 - 0x16d040
void sub_0016CFD0_0x16cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016CFD0_0x16cfd0");
#endif

    switch (ctx->pc) {
        case 0x16d024u: goto label_16d024;
        case 0x16d034u: goto label_16d034;
        default: break;
    }

    ctx->pc = 0x16cfd0u;

    // 0x16cfd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16cfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16cfd4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16cfd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16cfd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16cfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16cfdc: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x16cfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x16cfe0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x16CFE0u;
    {
        const bool branch_taken_0x16cfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFE0u;
        // 0x16cfe4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cfe0) {
            ctx->pc = 0x16D038u;
            goto label_16d038;
        }
    }
    ctx->pc = 0x16CFE8u;
    // 0x16cfe8: 0xc46000a4  lwc1        $f0, 0xA4($v1)
    ctx->pc = 0x16cfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16cfec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16cfecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16cff0: 0x0  nop
    ctx->pc = 0x16cff0u;
    // NOP
    // 0x16cff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16cff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16cff8: 0x0  nop
    ctx->pc = 0x16cff8u;
    // NOP
    // 0x16cffc: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x16CFFCu;
    {
        const bool branch_taken_0x16cffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16CFFCu;
        // 0x16d000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16cffc) {
            ctx->pc = 0x16D02Cu;
            goto label_16d02c;
        }
    }
    ctx->pc = 0x16D004u;
    // 0x16d004: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16d004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16d008: 0xe46100a8  swc1        $f1, 0xA8($v1)
    ctx->pc = 0x16d008u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 168), bits); }
    // 0x16d00c: 0x24640038  addiu       $a0, $v1, 0x38
    ctx->pc = 0x16d00cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x16d010: 0xac6200ac  sw          $v0, 0xAC($v1)
    ctx->pc = 0x16d010u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 172), GPR_U32(ctx, 2));
    // 0x16d014: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x16d014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x16d018: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16d018u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d01c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x16D01Cu;
    SET_GPR_U32(ctx, 31, 0x16D024u);
    ctx->pc = 0x16D020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D01Cu;
    // 0x16d020: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x16D01Cu, 0x16D024u)) {
        return;
    }
    ctx->pc = 0x16D024u;
label_16d024:
    // 0x16d024: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16D024u;
    {
        const bool branch_taken_0x16d024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D024u;
        // 0x16d028: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d024) {
            ctx->pc = 0x16D038u;
            goto label_16d038;
        }
    }
    ctx->pc = 0x16D02Cu;
label_16d02c:
    // 0x16d02c: 0xc05b426  jal         func_16D098
    ctx->pc = 0x16D02Cu;
    SET_GPR_U32(ctx, 31, 0x16D034u);
    ctx->pc = 0x16D030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D02Cu;
    // 0x16d030: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16D098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16D098u, 0x16D02Cu, 0x16D034u)) {
        return;
    }
    ctx->pc = 0x16D034u;
label_16d034:
    // 0x16d034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16d038:
    // 0x16d038: 0x3e00008  jr          $ra
    ctx->pc = 0x16D038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D038u;
        // 0x16d03c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D040u;
}
