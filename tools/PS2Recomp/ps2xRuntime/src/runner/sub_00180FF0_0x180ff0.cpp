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

// Function: sub_00180FF0
// Address: 0x180ff0 - 0x181060
void sub_00180FF0_0x180ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180FF0_0x180ff0");
#endif

    switch (ctx->pc) {
        case 0x181018u: goto label_181018;
        case 0x18102cu: goto label_18102c;
        case 0x181044u: goto label_181044;
        default: break;
    }

    ctx->pc = 0x180ff0u;

    // 0x180ff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x180ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x180ff4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x180ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x180ff8: 0x3c11006c  lui         $s1, 0x6C
    ctx->pc = 0x180ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)108 << 16));
    // 0x180ffc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x180ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x181000: 0x8e22fa60  lw          $v0, -0x5A0($s1)
    ctx->pc = 0x181000u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFA60u));
    // 0x181004: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x181004u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x181008: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x181008u;
    {
        const bool branch_taken_0x181008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181008u;
        // 0x18100c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181008) {
            ctx->pc = 0x18102Cu;
            goto label_18102c;
        }
    }
    ctx->pc = 0x181010u;
    // 0x181010: 0xc060300  jal         func_180C00
    ctx->pc = 0x181010u;
    SET_GPR_U32(ctx, 31, 0x181018u);
    ctx->pc = 0x181014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181010u;
    // 0x181014: 0x2604fa38  addiu       $a0, $s0, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180C00u, 0x181010u, 0x181018u)) {
        return;
    }
    ctx->pc = 0x181018u;
label_181018:
    // 0x181018: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18101c: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x18101cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x181020: 0xae22fa60  sw          $v0, -0x5A0($s1)
    ctx->pc = 0x181020u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965856), GPR_U32(ctx, 2));
    // 0x181024: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x181024u;
    SET_GPR_U32(ctx, 31, 0x18102Cu);
    ctx->pc = 0x181028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181024u;
    // 0x181028: 0x248410c8  addiu       $a0, $a0, 0x10C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x181024u, 0x18102Cu)) {
        return;
    }
    ctx->pc = 0x18102Cu;
label_18102c:
    // 0x18102c: 0x2603fa38  addiu       $v1, $s0, -0x5C8
    ctx->pc = 0x18102cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    // 0x181030: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x181030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x181034: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x181034u;
    {
        const bool branch_taken_0x181034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181034u;
        // 0x181038: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181034) {
            ctx->pc = 0x181048u;
            goto label_181048;
        }
    }
    ctx->pc = 0x18103Cu;
    // 0x18103c: 0xc060aea  jal         func_182BA8
    ctx->pc = 0x18103Cu;
    SET_GPR_U32(ctx, 31, 0x181044u);
    ctx->pc = 0x182BA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x182BA8u, 0x18103Cu, 0x181044u)) {
        return;
    }
    ctx->pc = 0x181044u;
label_181044:
    // 0x181044: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x181044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181048:
    // 0x181048: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x181048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18104c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18104cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181050: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x181050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x181054: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181058: 0x3e00008  jr          $ra
    ctx->pc = 0x181058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181058u;
        // 0x18105c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181058u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x181060u;
}
