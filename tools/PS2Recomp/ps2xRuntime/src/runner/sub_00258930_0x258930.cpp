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

// Function: sub_00258930
// Address: 0x258930 - 0x258990
void sub_00258930_0x258930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00258930_0x258930");
#endif

    switch (ctx->pc) {
        case 0x258930u: goto label_258930;
        case 0x258934u: goto label_258934;
        case 0x258938u: goto label_258938;
        case 0x25893cu: goto label_25893c;
        case 0x258940u: goto label_258940;
        case 0x258944u: goto label_258944;
        case 0x258948u: goto label_258948;
        case 0x25894cu: goto label_25894c;
        case 0x258950u: goto label_258950;
        case 0x258954u: goto label_258954;
        case 0x258958u: goto label_258958;
        case 0x25895cu: goto label_25895c;
        case 0x258960u: goto label_258960;
        case 0x258964u: goto label_258964;
        case 0x258968u: goto label_258968;
        case 0x25896cu: goto label_25896c;
        case 0x258970u: goto label_258970;
        case 0x258974u: goto label_258974;
        case 0x258978u: goto label_258978;
        case 0x25897cu: goto label_25897c;
        case 0x258980u: goto label_258980;
        case 0x258984u: goto label_258984;
        case 0x258988u: goto label_258988;
        case 0x25898cu: goto label_25898c;
        default: break;
    }

    ctx->pc = 0x258930u;

label_258930:
    // 0x258930: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_258934:
    // 0x258934: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x258934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_258938:
    // 0x258938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_25893c:
    // 0x25893c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25893cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_258940:
    // 0x258940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x258940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_258944:
    // 0x258944: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x258944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_258948:
    // 0x258948: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_25894c:
    if (ctx->pc == 0x25894Cu) {
        ctx->pc = 0x25894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258948u;
        // 0x25894c: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258950u;
        goto label_258950;
    }
    ctx->pc = 0x258948u;
    {
        const bool branch_taken_0x258948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x25894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258948u;
        // 0x25894c: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258948) {
            ctx->pc = 0x258964u;
            goto label_258964;
        }
    }
    ctx->pc = 0x258950u;
label_258950:
    // 0x258950: 0x26220fc8  addiu       $v0, $s1, 0xFC8
    ctx->pc = 0x258950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_258954:
    // 0x258954: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x258954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_258958:
    // 0x258958: 0x60f809  jalr        $v1
label_25895c:
    if (ctx->pc == 0x25895Cu) {
        ctx->pc = 0x258960u;
        goto label_258960;
    }
    ctx->pc = 0x258958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x258960u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258958u, 0x258960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258960u;
label_258960:
    // 0x258960: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x258960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_258964:
    // 0x258964: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x258964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_258968:
    // 0x258968: 0x8f8485f0  lw          $a0, -0x7A10($gp)
    ctx->pc = 0x258968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936048)));
label_25896c:
    // 0x25896c: 0x8c62011c  lw          $v0, 0x11C($v1)
    ctx->pc = 0x25896cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 284)));
label_258970:
    // 0x258970: 0x40f809  jalr        $v0
label_258974:
    if (ctx->pc == 0x258974u) {
        ctx->pc = 0x258974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258970u;
        // 0x258974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258978u;
        goto label_258978;
    }
    ctx->pc = 0x258970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x258978u);
        ctx->pc = 0x258974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258970u;
        // 0x258974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258970u, 0x258978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x258978u;
label_258978:
    // 0x258978: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x258978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25897c:
    // 0x25897c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25897cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_258980:
    // 0x258980: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258980u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_258984:
    // 0x258984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x258984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_258988:
    // 0x258988: 0x3e00008  jr          $ra
label_25898c:
    if (ctx->pc == 0x25898Cu) {
        ctx->pc = 0x25898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258988u;
        // 0x25898c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x258990u;
        goto label_fallthrough_0x258988;
    }
    ctx->pc = 0x258988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25898Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x258988u;
        // 0x25898c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x258988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x258988:
    ctx->pc = 0x258990u;
}
