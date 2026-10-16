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

// Function: sub_00249A60
// Address: 0x249a60 - 0x249a8c
void sub_00249A60_0x249a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249A60_0x249a60");
#endif

    switch (ctx->pc) {
        case 0x249a60u: goto label_249a60;
        case 0x249a64u: goto label_249a64;
        case 0x249a68u: goto label_249a68;
        case 0x249a6cu: goto label_249a6c;
        case 0x249a70u: goto label_249a70;
        case 0x249a74u: goto label_249a74;
        case 0x249a78u: goto label_249a78;
        case 0x249a7cu: goto label_249a7c;
        case 0x249a80u: goto label_249a80;
        case 0x249a84u: goto label_249a84;
        case 0x249a88u: goto label_249a88;
        default: break;
    }

    ctx->pc = 0x249a60u;

label_249a60:
    // 0x249a60: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x249a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_249a64:
    // 0x249a64: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x249a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_249a68:
    // 0x249a68: 0x2c83001a  sltiu       $v1, $a0, 0x1A
    ctx->pc = 0x249a68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_249a6c:
    // 0x249a6c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_249a70:
    if (ctx->pc == 0x249A70u) {
        ctx->pc = 0x249A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A6Cu;
        // 0x249a70: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x249A74u;
        goto label_249a74;
    }
    ctx->pc = 0x249A6Cu;
    {
        const bool branch_taken_0x249a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x249A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249A6Cu;
        // 0x249a70: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249a6c) {
            ctx->pc = 0x249A9Cu;
            return;
        }
    }
    ctx->pc = 0x249A74u;
label_249a74:
    // 0x249a74: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x249a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_249a78:
    // 0x249a78: 0x2442b720  addiu       $v0, $v0, -0x48E0
    ctx->pc = 0x249a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948640));
label_249a7c:
    // 0x249a7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x249a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_249a80:
    // 0x249a80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x249a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_249a84:
    // 0x249a84: 0x800008  jr          $a0
label_249a88:
    if (ctx->pc == 0x249A88u) {
        ctx->pc = 0x249A8Cu;
        goto label_fallthrough_0x249a84;
    }
    ctx->pc = 0x249A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249A84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x249a84:
    ctx->pc = 0x249A8Cu;
}
