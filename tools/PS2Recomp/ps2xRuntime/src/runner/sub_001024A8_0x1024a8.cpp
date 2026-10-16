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

// Function: sub_001024A8
// Address: 0x1024a8 - 0x1024f8
void sub_001024A8_0x1024a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001024A8_0x1024a8");
#endif

    switch (ctx->pc) {
        case 0x1024d8u: goto label_1024d8;
        default: break;
    }

    ctx->pc = 0x1024a8u;

    // 0x1024a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1024a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1024ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1024acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1024b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1024b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1024b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1024b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1024b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1024b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1024bc: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x1024bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1024c0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1024C0u;
    {
        const bool branch_taken_0x1024c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1024C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024C0u;
        // 0x1024c4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1024c0) {
            ctx->pc = 0x1024D8u;
            goto label_1024d8;
        }
    }
    ctx->pc = 0x1024C8u;
    // 0x1024c8: 0xae2001cc  sw          $zero, 0x1CC($s1)
    ctx->pc = 0x1024c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 460), GPR_U32(ctx, 0));
    // 0x1024cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1024ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1024d0: 0xc09d926  jal         func_276498
    ctx->pc = 0x1024D0u;
    SET_GPR_U32(ctx, 31, 0x1024D8u);
    ctx->pc = 0x1024D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1024D0u;
    // 0x1024d4: 0xc44c000c  lwc1        $f12, 0xC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x1024D0u, 0x1024D8u)) {
        return;
    }
    ctx->pc = 0x1024D8u;
label_1024d8:
    // 0x1024d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1024d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1024dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1024dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1024e0: 0xae2301dc  sw          $v1, 0x1DC($s1)
    ctx->pc = 0x1024e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 476), GPR_U32(ctx, 3));
    // 0x1024e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1024e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1024e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1024e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1024ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1024ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1024f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1024F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1024F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1024F0u;
        // 0x1024f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1024F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1024F8u;
}
