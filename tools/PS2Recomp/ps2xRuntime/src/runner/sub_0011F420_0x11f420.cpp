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

// Function: sub_0011F420
// Address: 0x11f420 - 0x11f4a8
void sub_0011F420_0x11f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F420_0x11f420");
#endif

    switch (ctx->pc) {
        case 0x11f438u: goto label_11f438;
        case 0x11f45cu: goto label_11f45c;
        case 0x11f470u: goto label_11f470;
        case 0x11f47cu: goto label_11f47c;
        case 0x11f490u: goto label_11f490;
        default: break;
    }

    ctx->pc = 0x11f420u;

    // 0x11f420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11f420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11f424: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11f424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11f428: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11f428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11f42c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f430: 0xc04ac72  jal         func_12B1C8
    ctx->pc = 0x11F430u;
    SET_GPR_U32(ctx, 31, 0x11F438u);
    ctx->pc = 0x11F434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F430u;
    // 0x11f434: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x12B1C8u, 0x11F430u, 0x11F438u)) {
        return;
    }
    ctx->pc = 0x11F438u;
label_11f438:
    // 0x11f438: 0xc6210c1c  lwc1        $f1, 0xC1C($s1)
    ctx->pc = 0x11f438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11f43c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x11f43cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11f440: 0x0  nop
    ctx->pc = 0x11f440u;
    // NOP
    // 0x11f444: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x11f444u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11f448: 0x0  nop
    ctx->pc = 0x11f448u;
    // NOP
    // 0x11f44c: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x11F44Cu;
    {
        const bool branch_taken_0x11f44c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x11F450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F44Cu;
        // 0x11f450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f44c) {
            ctx->pc = 0x11F490u;
            goto label_11f490;
        }
    }
    ctx->pc = 0x11F454u;
    // 0x11f454: 0xc047d96  jal         func_11F658
    ctx->pc = 0x11F454u;
    SET_GPR_U32(ctx, 31, 0x11F45Cu);
    ctx->pc = 0x11F458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F454u;
    // 0x11f458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x11F658u, 0x11F454u, 0x11F45Cu)) {
        return;
    }
    ctx->pc = 0x11F45Cu;
label_11f45c:
    // 0x11f45c: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x11f45cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x11f460: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x11f460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x11f464: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f464u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f468: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x11F468u;
    SET_GPR_U32(ctx, 31, 0x11F470u);
    ctx->pc = 0x11F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F468u;
    // 0x11f46c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x11F468u, 0x11F470u)) {
        return;
    }
    ctx->pc = 0x11F470u;
label_11f470:
    // 0x11f470: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f474: 0xc049bae  jal         func_126EB8
    ctx->pc = 0x11F474u;
    SET_GPR_U32(ctx, 31, 0x11F47Cu);
    ctx->pc = 0x11F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F474u;
    // 0x11f478: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126EB8u, 0x11F474u, 0x11F47Cu)) {
        return;
    }
    ctx->pc = 0x11F47Cu;
label_11f47c:
    // 0x11f47c: 0x8e240eec  lw          $a0, 0xEEC($s1)
    ctx->pc = 0x11f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3820)));
    // 0x11f480: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F480u;
    {
        const bool branch_taken_0x11f480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F480u;
        // 0x11f484: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f480) {
            ctx->pc = 0x11F494u;
            goto label_11f494;
        }
    }
    ctx->pc = 0x11F488u;
    // 0x11f488: 0xc059cae  jal         func_1672B8
    ctx->pc = 0x11F488u;
    SET_GPR_U32(ctx, 31, 0x11F490u);
    ctx->pc = 0x11F48Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F488u;
    // 0x11f48c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1672B8u, 0x11F488u, 0x11F490u)) {
        return;
    }
    ctx->pc = 0x11F490u;
label_11f490:
    // 0x11f490: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11f490u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11f494:
    // 0x11f494: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11f494u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f498: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f49c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F49Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F49Cu;
        // 0x11f4a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F49Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F4A4u;
    // 0x11f4a4: 0x0  nop
    ctx->pc = 0x11f4a4u;
    // NOP
    ctx->pc = 0x11f4a8u;
}
