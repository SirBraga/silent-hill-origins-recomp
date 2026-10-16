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

// Function: sub_0029A188
// Address: 0x29a188 - 0x29a1b8
void sub_0029A188_0x29a188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A188_0x29a188");
#endif

    switch (ctx->pc) {
        case 0x29a188u: goto label_29a188;
        case 0x29a18cu: goto label_29a18c;
        case 0x29a190u: goto label_29a190;
        case 0x29a194u: goto label_29a194;
        case 0x29a198u: goto label_29a198;
        case 0x29a19cu: goto label_29a19c;
        case 0x29a1a0u: goto label_29a1a0;
        case 0x29a1a4u: goto label_29a1a4;
        case 0x29a1a8u: goto label_29a1a8;
        case 0x29a1acu: goto label_29a1ac;
        case 0x29a1b0u: goto label_29a1b0;
        case 0x29a1b4u: goto label_29a1b4;
        default: break;
    }

    ctx->pc = 0x29a188u;

label_29a188:
    // 0x29a188: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29a18c:
    // 0x29a18c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29a190:
    // 0x29a190: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29a194:
    // 0x29a194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29a194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29a198:
    // 0x29a198: 0xa0f809  jalr        $a1
label_29a19c:
    if (ctx->pc == 0x29A19Cu) {
        ctx->pc = 0x29A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A198u;
        // 0x29a19c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A1A0u;
        goto label_29a1a0;
    }
    ctx->pc = 0x29A198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x29A1A0u);
        ctx->pc = 0x29A19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A198u;
        // 0x29a19c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A198u, 0x29A1A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29A1A0u;
label_29a1a0:
    // 0x29a1a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29a1a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29a1a4:
    // 0x29a1a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a1a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29a1a8:
    // 0x29a1a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a1a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29a1ac:
    // 0x29a1ac: 0x3e00008  jr          $ra
label_29a1b0:
    if (ctx->pc == 0x29A1B0u) {
        ctx->pc = 0x29A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1ACu;
        // 0x29a1b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29A1B4u;
        goto label_29a1b4;
    }
    ctx->pc = 0x29A1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1ACu;
        // 0x29a1b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A1B4u;
label_29a1b4:
    // 0x29a1b4: 0x0  nop
    ctx->pc = 0x29a1b4u;
    // NOP
    ctx->pc = 0x29a1b8u;
}
