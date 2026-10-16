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

// Function: sub_0024D1F0
// Address: 0x24d1f0 - 0x24d240
void sub_0024D1F0_0x24d1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024D1F0_0x24d1f0");
#endif

    switch (ctx->pc) {
        case 0x24d210u: goto label_24d210;
        default: break;
    }

    ctx->pc = 0x24d1f0u;

    // 0x24d1f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24d1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24d1f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x24d1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x24d1f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x24d1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x24d1fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24d1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d200: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x24d200u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24d204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24d204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24d208: 0xc09cd34  jal         func_2734D0
    ctx->pc = 0x24D208u;
    SET_GPR_U32(ctx, 31, 0x24D210u);
    ctx->pc = 0x24D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D208u;
    // 0x24d20c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2734D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2734D0u, 0x24D208u, 0x24D210u)) {
        return;
    }
    ctx->pc = 0x24D210u;
label_24d210:
    // 0x24d210: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x24d210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24d214: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24D214u;
    {
        const bool branch_taken_0x24d214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x24D218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D214u;
        // 0x24d218: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d214) {
            ctx->pc = 0x24D224u;
            goto label_24d224;
        }
    }
    ctx->pc = 0x24D21Cu;
    // 0x24d21c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24D21Cu;
    {
        const bool branch_taken_0x24d21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D21Cu;
        // 0x24d220: 0xae11000c  sw          $s1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d21c) {
            ctx->pc = 0x24D228u;
            goto label_24d228;
        }
    }
    ctx->pc = 0x24D224u;
label_24d224:
    // 0x24d224: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24d224u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d228:
    // 0x24d228: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x24d228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24d22c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24d22cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24d230: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24d230u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24d234: 0x3e00008  jr          $ra
    ctx->pc = 0x24D234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D234u;
        // 0x24d238: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D23Cu;
    // 0x24d23c: 0x0  nop
    ctx->pc = 0x24d23cu;
    // NOP
    ctx->pc = 0x24d240u;
}
