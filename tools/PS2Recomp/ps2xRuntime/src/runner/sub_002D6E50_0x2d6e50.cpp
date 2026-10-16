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

// Function: sub_002D6E50
// Address: 0x2d6e50 - 0x2d6ec8
void sub_002D6E50_0x2d6e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6E50_0x2d6e50");
#endif

    switch (ctx->pc) {
        case 0x2d6e80u: goto label_2d6e80;
        case 0x2d6e8cu: goto label_2d6e8c;
        default: break;
    }

    ctx->pc = 0x2d6e50u;

    // 0x2d6e50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d6e54: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2d6e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2d6e58: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d6e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d6e5c: 0x24424038  addiu       $v0, $v0, 0x4038
    ctx->pc = 0x2d6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16440));
    // 0x2d6e60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d6e64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6e6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d6e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d6e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d6e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2d6e78: 0xc0aaea4  jal         func_2ABA90
    ctx->pc = 0x2D6E78u;
    SET_GPR_U32(ctx, 31, 0x2D6E80u);
    ctx->pc = 0x2D6E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E78u;
    // 0x2d6e7c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABA90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABA90u, 0x2D6E78u, 0x2D6E80u)) {
        return;
    }
    ctx->pc = 0x2D6E80u;
label_2d6e80:
    // 0x2d6e80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6e84: 0xc0b5bbe  jal         func_2D6EF8
    ctx->pc = 0x2D6E84u;
    SET_GPR_U32(ctx, 31, 0x2D6E8Cu);
    ctx->pc = 0x2D6E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6E84u;
    // 0x2d6e88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6EF8u, 0x2D6E84u, 0x2D6E8Cu)) {
        return;
    }
    ctx->pc = 0x2D6E8Cu;
label_2d6e8c:
    // 0x2d6e8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6e90: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x2d6e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2d6e94: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x2d6e94u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x2d6e98: 0x8e25004c  lw          $a1, 0x4C($s1)
    ctx->pc = 0x2d6e98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x2d6e9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d6e9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6ea0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2d6ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d6ea4: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x2d6ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x2d6ea8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x2d6ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x2d6eac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d6eacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6eb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6eb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6eb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6eb8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x2d6eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x2d6ebc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6EBCu;
        // 0x2d6ec0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6EC4u;
    // 0x2d6ec4: 0x0  nop
    ctx->pc = 0x2d6ec4u;
    // NOP
    ctx->pc = 0x2d6ec8u;
}
