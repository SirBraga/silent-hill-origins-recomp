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

// Function: sub_001A8020
// Address: 0x1a8020 - 0x1a8070
void sub_001A8020_0x1a8020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8020_0x1a8020");
#endif

    switch (ctx->pc) {
        case 0x1a8048u: goto label_1a8048;
        default: break;
    }

    ctx->pc = 0x1a8020u;

    // 0x1a8020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a8020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a8024: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a8024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a8028: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a8028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a802c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a802cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8030: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a8030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8034: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x1a8034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8038: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x1a8038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a803c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a803cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1a8040: 0xc069edc  jal         func_1A7B70
    ctx->pc = 0x1A8040u;
    SET_GPR_U32(ctx, 31, 0x1A8048u);
    ctx->pc = 0x1A8044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A8040u;
    // 0x1a8044: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A7B70u, 0x1A8040u, 0x1A8048u)) {
        return;
    }
    ctx->pc = 0x1A8048u;
label_1a8048:
    // 0x1a8048: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8048u;
    {
        const bool branch_taken_0x1a8048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8048u;
        // 0x1a804c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8048) {
            ctx->pc = 0x1A805Cu;
            goto label_1a805c;
        }
    }
    ctx->pc = 0x1A8050u;
    // 0x1a8050: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1a8050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a8054: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x1a8054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x1a8058: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x1a8058u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_1a805c:
    // 0x1a805c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a805cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a8060: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a8060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a8064: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8064u;
        // 0x1a8068: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A806Cu;
    // 0x1a806c: 0x0  nop
    ctx->pc = 0x1a806cu;
    // NOP
    ctx->pc = 0x1a8070u;
}
