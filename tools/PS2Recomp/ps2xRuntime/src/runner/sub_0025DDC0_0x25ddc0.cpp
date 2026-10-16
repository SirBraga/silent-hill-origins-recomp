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

// Function: sub_0025DDC0
// Address: 0x25ddc0 - 0x25de08
void sub_0025DDC0_0x25ddc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025DDC0_0x25ddc0");
#endif

    switch (ctx->pc) {
        case 0x25ddf4u: goto label_25ddf4;
        default: break;
    }

    ctx->pc = 0x25ddc0u;

    // 0x25ddc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25ddc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25ddc4: 0x8f8285fc  lw          $v0, -0x7A04($gp)
    ctx->pc = 0x25ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
    // 0x25ddc8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25ddc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25ddcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25ddccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ddd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25ddd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25ddd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x25ddd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x25ddd8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x25DDD8u;
    {
        const bool branch_taken_0x25ddd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25DDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDD8u;
        // 0x25dddc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ddd8) {
            ctx->pc = 0x25DDF4u;
            goto label_25ddf4;
        }
    }
    ctx->pc = 0x25DDE0u;
    // 0x25dde0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x25dde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25dde4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25DDE4u;
    {
        const bool branch_taken_0x25dde4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x25DDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DDE4u;
        // 0x25dde8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25dde4) {
            ctx->pc = 0x25DDF8u;
            goto label_25ddf8;
        }
    }
    ctx->pc = 0x25DDECu;
    // 0x25ddec: 0xc09793e  jal         func_25E4F8
    ctx->pc = 0x25DDECu;
    SET_GPR_U32(ctx, 31, 0x25DDF4u);
    ctx->pc = 0x25DDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25DDECu;
    // 0x25ddf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E4F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E4F8u, 0x25DDECu, 0x25DDF4u)) {
        return;
    }
    ctx->pc = 0x25DDF4u;
label_25ddf4:
    // 0x25ddf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25ddf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25ddf8:
    // 0x25ddf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ddf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ddfc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25ddfcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25de00: 0x3e00008  jr          $ra
    ctx->pc = 0x25DE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25DE00u;
        // 0x25de04: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25DE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25DE08u;
}
