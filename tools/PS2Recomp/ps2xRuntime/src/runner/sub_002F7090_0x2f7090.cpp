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

// Function: sub_002F7090
// Address: 0x2f7090 - 0x2f70e8
void sub_002F7090_0x2f7090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7090_0x2f7090");
#endif

    switch (ctx->pc) {
        case 0x2f70b4u: goto label_2f70b4;
        case 0x2f70c0u: goto label_2f70c0;
        default: break;
    }

    ctx->pc = 0x2f7090u;

    // 0x2f7090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f7090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f7094: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f7094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f7098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f7098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f709c: 0x8c4414c0  lw          $a0, 0x14C0($v0)
    ctx->pc = 0x2f709cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7214C0u));
    // 0x2f70a0: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f70a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f70a4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f70a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f70a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f70a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f70ac: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x2F70ACu;
    SET_GPR_U32(ctx, 31, 0x2F70B4u);
    ctx->pc = 0x2F70B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F70ACu;
    // 0x2f70b0: 0x261135c0  addiu       $s1, $s0, 0x35C0 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 13760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x2F70ACu, 0x2F70B4u)) {
        return;
    }
    ctx->pc = 0x2F70B4u;
label_2f70b4:
    // 0x2f70b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f70b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f70b8: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2F70B8u;
    SET_GPR_U32(ctx, 31, 0x2F70C0u);
    ctx->pc = 0x2F70BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F70B8u;
    // 0x2f70bc: 0x2625007f  addiu       $a1, $s1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2F70B8u, 0x2F70C0u)) {
        return;
    }
    ctx->pc = 0x2F70C0u;
label_2f70c0:
    // 0x2f70c0: 0x8e0235c0  lw          $v0, 0x35C0($s0)
    ctx->pc = 0x2f70c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13760)));
    // 0x2f70c4: 0x58400001  blezl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F70C4u;
    {
        const bool branch_taken_0x2f70c4 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x2f70c4) {
            ctx->pc = 0x2F70C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F70C4u;
            // 0x2f70c8: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F70CCu;
            goto label_2f70cc;
        }
    }
    ctx->pc = 0x2F70CCu;
label_2f70cc:
    // 0x2f70cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f70ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f70d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f70d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f70d4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f70d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f70d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f70d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f70dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F70DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F70DCu;
        // 0x2f70e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F70DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F70E4u;
    // 0x2f70e4: 0x0  nop
    ctx->pc = 0x2f70e4u;
    // NOP
    ctx->pc = 0x2f70e8u;
}
