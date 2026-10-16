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

// Function: sub_0010F330
// Address: 0x10f330 - 0x10f398
void sub_0010F330_0x10f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F330_0x10f330");
#endif

    switch (ctx->pc) {
        case 0x10f380u: goto label_10f380;
        default: break;
    }

    ctx->pc = 0x10f330u;

    // 0x10f330: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x10f330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x10f334: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10f334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10f338: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10f338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10f33c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10f33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f340: 0x8c4382f0  lw          $v1, -0x7D10($v0)
    ctx->pc = 0x10f340u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3382F0u));
    // 0x10f344: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x10f344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x10f348: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x10f348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x10f34c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x10f34cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f350: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x10f350u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x10f354: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10f354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f358: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x10f358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x10f35c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10f35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10f360: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x10f360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x10f364: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x10f364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x10f368: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10f368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x10f36c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x10f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x10f370: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x10f370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x10f374: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x10f374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x10f378: 0xc043a04  jal         func_10E810
    ctx->pc = 0x10F378u;
    SET_GPR_U32(ctx, 31, 0x10F380u);
    ctx->pc = 0x10F37Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F378u;
    // 0x10f37c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E810u, 0x10F378u, 0x10F380u)) {
        return;
    }
    ctx->pc = 0x10F380u;
label_10f380:
    // 0x10f380: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10f380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10f384: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10F384u;
    {
        const bool branch_taken_0x10f384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10f384) {
            ctx->pc = 0x10F388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10F384u;
            // 0x10f388: 0xc4400020  lwc1        $f0, 0x20($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x10F38Cu;
            goto label_10f38c;
        }
    }
    ctx->pc = 0x10F38Cu;
label_10f38c:
    // 0x10f38c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10f38cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10f390: 0x3e00008  jr          $ra
    ctx->pc = 0x10F390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F390u;
        // 0x10f394: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F398u;
}
