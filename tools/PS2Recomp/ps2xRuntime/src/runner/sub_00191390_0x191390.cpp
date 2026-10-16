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

// Function: sub_00191390
// Address: 0x191390 - 0x1913d0
void sub_00191390_0x191390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191390_0x191390");
#endif

    switch (ctx->pc) {
        case 0x1913b4u: goto label_1913b4;
        default: break;
    }

    ctx->pc = 0x191390u;

    // 0x191390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x191390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x191394: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x191394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x191398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19139c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19139cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1913a0: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1913a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1913a4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1913A4u;
    {
        const bool branch_taken_0x1913a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1913a4) {
            ctx->pc = 0x1913A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1913A4u;
            // 0x1913a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1913C0u;
            goto label_1913c0;
        }
    }
    ctx->pc = 0x1913ACu;
    // 0x1913ac: 0xc063d48  jal         func_18F520
    ctx->pc = 0x1913ACu;
    SET_GPR_U32(ctx, 31, 0x1913B4u);
    ctx->pc = 0x1913B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1913ACu;
    // 0x1913b0: 0x8e0500e0  lw          $a1, 0xE0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18F520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18F520u, 0x1913ACu, 0x1913B4u)) {
        return;
    }
    ctx->pc = 0x1913B4u;
label_1913b4:
    // 0x1913b4: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x1913b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x1913b8: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x1913b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x1913bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1913bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1913c0:
    // 0x1913c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1913c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1913c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1913C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1913C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1913C4u;
        // 0x1913c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1913C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1913CCu;
    // 0x1913cc: 0x0  nop
    ctx->pc = 0x1913ccu;
    // NOP
    ctx->pc = 0x1913d0u;
}
