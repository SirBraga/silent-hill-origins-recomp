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

// Function: sub_001FCB50
// Address: 0x1fcb50 - 0x1fcbc8
void sub_001FCB50_0x1fcb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FCB50_0x1fcb50");
#endif

    switch (ctx->pc) {
        case 0x1fcb80u: goto label_1fcb80;
        default: break;
    }

    ctx->pc = 0x1fcb50u;

    // 0x1fcb50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fcb50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fcb54: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fcb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fcb58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fcb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fcb5c: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1fcb5cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1fcb60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fcb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fcb64: 0x26111a58  addiu       $s1, $s0, 0x1A58
    ctx->pc = 0x1fcb64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6744));
    // 0x1fcb68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1fcb68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A5Cu));
    // 0x1fcb6c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FCB6Cu;
    {
        const bool branch_taken_0x1fcb6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FCB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCB6Cu;
        // 0x1fcb70: 0x8e021a58  lw          $v0, 0x1A58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6744)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fcb6c) {
            ctx->pc = 0x1FCB9Cu;
            goto label_1fcb9c;
        }
    }
    ctx->pc = 0x1FCB74u;
    // 0x1fcb74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fcb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fcb78: 0xc07f88e  jal         func_1FE238
    ctx->pc = 0x1FCB78u;
    SET_GPR_U32(ctx, 31, 0x1FCB80u);
    ctx->pc = 0x1FCB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCB78u;
    // 0x1fcb7c: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE238u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE238u, 0x1FCB78u, 0x1FCB80u)) {
        return;
    }
    ctx->pc = 0x1FCB80u;
label_1fcb80:
    // 0x1fcb80: 0x8e021a58  lw          $v0, 0x1A58($s0)
    ctx->pc = 0x1fcb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6744)));
    // 0x1fcb84: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1fcb84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
    // 0x1fcb88: 0x8e031a58  lw          $v1, 0x1A58($s0)
    ctx->pc = 0x1fcb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6744)));
    // 0x1fcb8c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1fcb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1fcb90: 0x8e021a58  lw          $v0, 0x1A58($s0)
    ctx->pc = 0x1fcb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6744)));
    // 0x1fcb94: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1fcb94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
    // 0x1fcb98: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1fcb98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1fcb9c:
    // 0x1fcb9c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1fcb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1fcba0: 0x8e041a58  lw          $a0, 0x1A58($s0)
    ctx->pc = 0x1fcba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6744)));
    // 0x1fcba4: 0x24428290  addiu       $v0, $v0, -0x7D70
    ctx->pc = 0x1fcba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x1fcba8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fcba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fcbac: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1fcbacu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338298u));
    // 0x1fcbb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fcbb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fcbb4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fcbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1fcbb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fcbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fcbbc: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1fcbbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x338298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338298u, _value); } while (0);
    // 0x1fcbc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCBC0u;
        // 0x1fcbc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCBC8u;
}
