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

// Function: sub_001FF908
// Address: 0x1ff908 - 0x1ff980
void sub_001FF908_0x1ff908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF908_0x1ff908");
#endif

    switch (ctx->pc) {
        case 0x1ff938u: goto label_1ff938;
        default: break;
    }

    ctx->pc = 0x1ff908u;

    // 0x1ff908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ff908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ff90c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ff90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ff910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ff910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ff914: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1ff914u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1ff918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff91c: 0x26112c98  addiu       $s1, $s0, 0x2C98
    ctx->pc = 0x1ff91cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 11416));
    // 0x1ff920: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1ff920u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x702C9Cu));
    // 0x1ff924: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1FF924u;
    {
        const bool branch_taken_0x1ff924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF924u;
        // 0x1ff928: 0x8e022c98  lw          $v0, 0x2C98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff924) {
            ctx->pc = 0x1FF954u;
            goto label_1ff954;
        }
    }
    ctx->pc = 0x1FF92Cu;
    // 0x1ff92c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ff92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff930: 0xc080096  jal         func_200258
    ctx->pc = 0x1FF930u;
    SET_GPR_U32(ctx, 31, 0x1FF938u);
    ctx->pc = 0x1FF934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF930u;
    // 0x1ff934: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200258u, 0x1FF930u, 0x1FF938u)) {
        return;
    }
    ctx->pc = 0x1FF938u;
label_1ff938:
    // 0x1ff938: 0x8e022c98  lw          $v0, 0x2C98($s0)
    ctx->pc = 0x1ff938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11416)));
    // 0x1ff93c: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1ff93cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
    // 0x1ff940: 0x8e032c98  lw          $v1, 0x2C98($s0)
    ctx->pc = 0x1ff940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11416)));
    // 0x1ff944: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ff944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ff948: 0x8e022c98  lw          $v0, 0x2C98($s0)
    ctx->pc = 0x1ff948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11416)));
    // 0x1ff94c: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1ff94cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
    // 0x1ff950: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1ff950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1ff954:
    // 0x1ff954: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ff954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1ff958: 0x8e042c98  lw          $a0, 0x2C98($s0)
    ctx->pc = 0x1ff958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11416)));
    // 0x1ff95c: 0x24428290  addiu       $v0, $v0, -0x7D70
    ctx->pc = 0x1ff95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935184));
    // 0x1ff960: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ff960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ff964: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1ff964u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x338298u));
    // 0x1ff968: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ff968u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff96c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1ff96cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1ff970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff974: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1ff974u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x338298u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338298u, _value); } while (0);
    // 0x1ff978: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF978u;
        // 0x1ff97c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF980u;
}
