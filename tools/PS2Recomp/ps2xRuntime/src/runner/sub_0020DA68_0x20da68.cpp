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

// Function: sub_0020DA68
// Address: 0x20da68 - 0x20da98
void sub_0020DA68_0x20da68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DA68_0x20da68");
#endif

    switch (ctx->pc) {
        case 0x20da68u: goto label_20da68;
        case 0x20da6cu: goto label_20da6c;
        case 0x20da70u: goto label_20da70;
        case 0x20da74u: goto label_20da74;
        case 0x20da78u: goto label_20da78;
        case 0x20da7cu: goto label_20da7c;
        case 0x20da80u: goto label_20da80;
        case 0x20da84u: goto label_20da84;
        case 0x20da88u: goto label_20da88;
        case 0x20da8cu: goto label_20da8c;
        case 0x20da90u: goto label_20da90;
        case 0x20da94u: goto label_20da94;
        default: break;
    }

    ctx->pc = 0x20da68u;

label_20da68:
    // 0x20da68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20da68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_20da6c:
    // 0x20da6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20da70:
    // 0x20da70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20da70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_20da74:
    // 0x20da74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20da74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20da78:
    // 0x20da78: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x20da78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20da7c:
    // 0x20da7c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x20da7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_20da80:
    // 0x20da80: 0x40f809  jalr        $v0
label_20da84:
    if (ctx->pc == 0x20DA84u) {
        ctx->pc = 0x20DA88u;
        goto label_20da88;
    }
    ctx->pc = 0x20DA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20DA88u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DA80u, 0x20DA88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20DA88u;
label_20da88:
    // 0x20da88: 0xc087038  jal         func_21C0E0
label_20da8c:
    if (ctx->pc == 0x20DA8Cu) {
        ctx->pc = 0x20DA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA88u;
        // 0x20da8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA90u;
        goto label_20da90;
    }
    ctx->pc = 0x20DA88u;
    SET_GPR_U32(ctx, 31, 0x20DA90u);
    ctx->pc = 0x20DA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA88u;
    // 0x20da8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21C0E0u, 0x20DA88u, 0x20DA90u)) {
        return;
    }
    ctx->pc = 0x20DA90u;
label_20da90:
    // 0x20da90: 0xc07da60  jal         func_1F6980
label_20da94:
    if (ctx->pc == 0x20DA94u) {
        ctx->pc = 0x20DA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DA90u;
        // 0x20da94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20DA98u;
        goto label_fallthrough_0x20da90;
    }
    ctx->pc = 0x20DA90u;
    SET_GPR_U32(ctx, 31, 0x20DA98u);
    ctx->pc = 0x20DA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20DA90u;
    // 0x20da94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6980u, 0x20DA90u, 0x20DA98u)) {
        return;
    }
label_fallthrough_0x20da90:
    ctx->pc = 0x20DA98u;
}
