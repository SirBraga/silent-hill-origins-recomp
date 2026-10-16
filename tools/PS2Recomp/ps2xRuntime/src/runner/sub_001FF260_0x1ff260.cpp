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

// Function: sub_001FF260
// Address: 0x1ff260 - 0x1ff298
void sub_001FF260_0x1ff260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF260_0x1ff260");
#endif

    switch (ctx->pc) {
        case 0x1ff284u: goto label_1ff284;
        default: break;
    }

    ctx->pc = 0x1ff260u;

    // 0x1ff260: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ff260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1ff264: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ff264u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ff268: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1ff268u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1ff26c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x1ff26cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1ff270: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1ff270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff274: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF274u;
    {
        const bool branch_taken_0x1ff274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1FF278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF274u;
        // 0x1ff278: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff274) {
            ctx->pc = 0x1FF284u;
            goto label_1ff284;
        }
    }
    ctx->pc = 0x1FF27Cu;
    // 0x1ff27c: 0xc07fb36  jal         func_1FECD8
    ctx->pc = 0x1FF27Cu;
    SET_GPR_U32(ctx, 31, 0x1FF284u);
    ctx->pc = 0x1FECD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FECD8u, 0x1FF27Cu, 0x1FF284u)) {
        return;
    }
    ctx->pc = 0x1FF284u;
label_1ff284:
    // 0x1ff284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff288: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF288u;
        // 0x1ff28c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF290u;
    // 0x1ff290: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1ff290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ff294: 0x0  nop
    ctx->pc = 0x1ff294u;
    // NOP
    ctx->pc = 0x1ff298u;
}
