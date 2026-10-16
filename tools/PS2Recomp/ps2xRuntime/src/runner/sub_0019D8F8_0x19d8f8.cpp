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

// Function: sub_0019D8F8
// Address: 0x19d8f8 - 0x19d978
void sub_0019D8F8_0x19d8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D8F8_0x19d8f8");
#endif

    switch (ctx->pc) {
        case 0x19d930u: goto label_19d930;
        case 0x19d94cu: goto label_19d94c;
        default: break;
    }

    ctx->pc = 0x19d8f8u;

    // 0x19d8f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19d8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19d8fc: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x19d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x19d900: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19d900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19d904: 0x24436290  addiu       $v1, $v0, 0x6290
    ctx->pc = 0x19d904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 25232));
    // 0x19d908: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19d908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19d90c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19d90cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d914: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D914u;
    {
        const bool branch_taken_0x19d914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19D918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D914u;
        // 0x19d918: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d914) {
            ctx->pc = 0x19D924u;
            goto label_19d924;
        }
    }
    ctx->pc = 0x19D91Cu;
    // 0x19d91c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19d91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19d920: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x19d920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_19d924:
    // 0x19d924: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x19d924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x19d928: 0xc0776d8  jal         func_1DDB60
    ctx->pc = 0x19D928u;
    SET_GPR_U32(ctx, 31, 0x19D930u);
    ctx->pc = 0x19D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D928u;
    // 0x19d92c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DDB60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DDB60u, 0x19D928u, 0x19D930u)) {
        return;
    }
    ctx->pc = 0x19D930u;
label_19d930:
    // 0x19d930: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D930u;
    {
        const bool branch_taken_0x19d930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d930) {
            ctx->pc = 0x19D934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D930u;
            // 0x19d934: 0xae11001c  sw          $s1, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D944u;
            goto label_19d944;
        }
    }
    ctx->pc = 0x19D938u;
    // 0x19d938: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x19d938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19d93c: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x19d93cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19d940: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x19d940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
label_19d944:
    // 0x19d944: 0xc07b834  jal         func_1EE0D0
    ctx->pc = 0x19D944u;
    SET_GPR_U32(ctx, 31, 0x19D94Cu);
    ctx->pc = 0x19D948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19D944u;
    // 0x19d948: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EE0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EE0D0u, 0x19D944u, 0x19D94Cu)) {
        return;
    }
    ctx->pc = 0x19D94Cu;
label_19d94c:
    // 0x19d94c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x19D94Cu;
    {
        const bool branch_taken_0x19d94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d94c) {
            ctx->pc = 0x19D950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19D94Cu;
            // 0x19d950: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19D960u;
            goto label_19d960;
        }
    }
    ctx->pc = 0x19D954u;
    // 0x19d954: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x19d954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19d958: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x19d958u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19d95c: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x19d95cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
label_19d960:
    // 0x19d960: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19d960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19d964: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19d964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19d968: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d96c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D96Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D96Cu;
        // 0x19d970: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D96Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D974u;
    // 0x19d974: 0x0  nop
    ctx->pc = 0x19d974u;
    // NOP
    ctx->pc = 0x19d978u;
}
