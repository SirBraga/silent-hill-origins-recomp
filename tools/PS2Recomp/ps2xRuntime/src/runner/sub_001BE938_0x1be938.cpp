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

// Function: sub_001BE938
// Address: 0x1be938 - 0x1be978
void sub_001BE938_0x1be938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE938_0x1be938");
#endif

    switch (ctx->pc) {
        case 0x1be954u: goto label_1be954;
        case 0x1be964u: goto label_1be964;
        default: break;
    }

    ctx->pc = 0x1be938u;

    // 0x1be938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1be93c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1be93cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1be940: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1be940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1be944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1be948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1be948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1be94c: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1BE94Cu;
    SET_GPR_U32(ctx, 31, 0x1BE954u);
    ctx->pc = 0x1BE950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE94Cu;
    // 0x1be950: 0x8c44931c  lw          $a0, -0x6CE4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939420)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1BE94Cu, 0x1BE954u)) {
        return;
    }
    ctx->pc = 0x1BE954u;
label_1be954:
    // 0x1be954: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x1be954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x1be958: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1be958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1be95c: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1BE95Cu;
    SET_GPR_U32(ctx, 31, 0x1BE964u);
    ctx->pc = 0x1BE960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BE95Cu;
    // 0x1be960: 0x8c449320  lw          $a0, -0x6CE0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939424)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1BE95Cu, 0x1BE964u)) {
        return;
    }
    ctx->pc = 0x1BE964u;
label_1be964:
    // 0x1be964: 0xae0200f4  sw          $v0, 0xF4($s0)
    ctx->pc = 0x1be964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 2));
    // 0x1be968: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1be968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1be96c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1be970: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE970u;
        // 0x1be974: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE978u;
}
