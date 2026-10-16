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

// Function: sub_0013D908
// Address: 0x13d908 - 0x13d970
void sub_0013D908_0x13d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D908_0x13d908");
#endif

    switch (ctx->pc) {
        case 0x13d928u: goto label_13d928;
        case 0x13d95cu: goto label_13d95c;
        default: break;
    }

    ctx->pc = 0x13d908u;

    // 0x13d908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13d908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13d90c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13d90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13d910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13d910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13d914: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13d914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d918: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13d918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d91c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d920: 0xc041ec6  jal         func_107B18
    ctx->pc = 0x13D920u;
    SET_GPR_U32(ctx, 31, 0x13D928u);
    ctx->pc = 0x13D924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D920u;
    // 0x13d924: 0x2624004c  addiu       $a0, $s1, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B18u, 0x13D920u, 0x13D928u)) {
        return;
    }
    ctx->pc = 0x13D928u;
label_13d928:
    // 0x13d928: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x13d928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x13d92c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x13d92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13d930: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x13d930u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x13d934: 0x5483000a  bnel        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13D934u;
    {
        const bool branch_taken_0x13d934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13d934) {
            ctx->pc = 0x13D938u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D934u;
            // 0x13d938: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D960u;
            goto label_13d960;
        }
    }
    ctx->pc = 0x13D93Cu;
    // 0x13d93c: 0x8e2300d8  lw          $v1, 0xD8($s1)
    ctx->pc = 0x13d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x13d940: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13D940u;
    {
        const bool branch_taken_0x13d940 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D940u;
        // 0x13d944: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d940) {
            ctx->pc = 0x13D95Cu;
            goto label_13d95c;
        }
    }
    ctx->pc = 0x13D948u;
    // 0x13d948: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x13d948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13d94c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13D94Cu;
    {
        const bool branch_taken_0x13d94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13D950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D94Cu;
        // 0x13d950: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13d94c) {
            ctx->pc = 0x13D960u;
            goto label_13d960;
        }
    }
    ctx->pc = 0x13D954u;
    // 0x13d954: 0xc041fd6  jal         func_107F58
    ctx->pc = 0x13D954u;
    SET_GPR_U32(ctx, 31, 0x13D95Cu);
    ctx->pc = 0x13D958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D954u;
    // 0x13d958: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107F58u, 0x13D954u, 0x13D95Cu)) {
        return;
    }
    ctx->pc = 0x13D95Cu;
label_13d95c:
    // 0x13d95c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13d95cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13d960:
    // 0x13d960: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13d960u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d968: 0x3e00008  jr          $ra
    ctx->pc = 0x13D968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D968u;
        // 0x13d96c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D970u;
}
