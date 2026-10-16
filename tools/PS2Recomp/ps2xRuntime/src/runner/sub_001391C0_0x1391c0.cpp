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

// Function: sub_001391C0
// Address: 0x1391c0 - 0x139268
void sub_001391C0_0x1391c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001391C0_0x1391c0");
#endif

    switch (ctx->pc) {
        case 0x1391fcu: goto label_1391fc;
        case 0x139210u: goto label_139210;
        case 0x139224u: goto label_139224;
        default: break;
    }

    ctx->pc = 0x1391c0u;

    // 0x1391c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1391c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1391c4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1391c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1391c8: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1391c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1391cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1391ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1391d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1391d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1391d4: 0x27b00004  addiu       $s0, $sp, 0x4
    ctx->pc = 0x1391d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1391d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1391d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1391dc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1391dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1391e0: 0x2472e8d8  addiu       $s2, $v1, -0x1728
    ctx->pc = 0x1391e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961368));
    // 0x1391e4: 0x8c51ea90  lw          $s1, -0x1570($v0)
    ctx->pc = 0x1391e4u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x68EA90u));
    // 0x1391e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1391e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1391ec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1391ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1391f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1391f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1391f4: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1391F4u;
    SET_GPR_U32(ctx, 31, 0x1391FCu);
    ctx->pc = 0x1391F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1391F4u;
    // 0x1391f8: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1391F4u, 0x1391FCu)) {
        return;
    }
    ctx->pc = 0x1391FCu;
label_1391fc:
    // 0x1391fc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1391FCu;
    {
        const bool branch_taken_0x1391fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1391FCu;
        // 0x139200: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391fc) {
            ctx->pc = 0x139224u;
            goto label_139224;
        }
    }
    ctx->pc = 0x139204u;
    // 0x139204: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x139204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139208: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x139208u;
    SET_GPR_U32(ctx, 31, 0x139210u);
    ctx->pc = 0x13920Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139208u;
    // 0x13920c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x139208u, 0x139210u)) {
        return;
    }
    ctx->pc = 0x139210u;
label_139210:
    // 0x139210: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x139210u;
    {
        const bool branch_taken_0x139210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139210u;
        // 0x139214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139210) {
            ctx->pc = 0x139224u;
            goto label_139224;
        }
    }
    ctx->pc = 0x139218u;
    // 0x139218: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x139218u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13921c: 0xc07d352  jal         func_1F4D48
    ctx->pc = 0x13921Cu;
    SET_GPR_U32(ctx, 31, 0x139224u);
    ctx->pc = 0x139220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13921Cu;
    // 0x139220: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D48u, 0x13921Cu, 0x139224u)) {
        return;
    }
    ctx->pc = 0x139224u;
label_139224:
    // 0x139224: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x139224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x139228: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x139228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13922c: 0x2442e908  addiu       $v0, $v0, -0x16F8
    ctx->pc = 0x13922cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961416));
    // 0x139230: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x139230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139234: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x139234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x139238: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x139238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13923c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x13923cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139240: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x139240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139244: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x139244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x139248: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x139248u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13924c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13924cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x139250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139254: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x139254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139258: 0x3e00008  jr          $ra
    ctx->pc = 0x139258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13925Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139258u;
        // 0x13925c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x139258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x139260u;
    // 0x139260: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x139260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x139264: 0x0  nop
    ctx->pc = 0x139264u;
    // NOP
    ctx->pc = 0x139268u;
}
