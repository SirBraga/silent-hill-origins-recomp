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

// Function: sub_001B5190
// Address: 0x1b5190 - 0x1b5210
void sub_001B5190_0x1b5190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5190_0x1b5190");
#endif

    switch (ctx->pc) {
        case 0x1b51c8u: goto label_1b51c8;
        case 0x1b51dcu: goto label_1b51dc;
        case 0x1b51f4u: goto label_1b51f4;
        default: break;
    }

    ctx->pc = 0x1b5190u;

    // 0x1b5190: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1b5190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1b5194: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1b5194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1b5198: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1b5198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1b519c: 0x2442c4f8  addiu       $v0, $v0, -0x3B08
    ctx->pc = 0x1b519cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952184));
    // 0x1b51a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1b51a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1b51a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1b51a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1b51a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1b51ac: 0x26500340  addiu       $s0, $s2, 0x340
    ctx->pc = 0x1b51acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x1b51b0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1b51b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1b51b4: 0x2411000d  addiu       $s1, $zero, 0xD
    ctx->pc = 0x1b51b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b51b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b51b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b51bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b51bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51c0: 0xae420258  sw          $v0, 0x258($s2)
    ctx->pc = 0x1b51c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 600), GPR_U32(ctx, 2));
    // 0x1b51c4: 0x0  nop
    ctx->pc = 0x1b51c4u;
    // NOP
label_1b51c8:
    // 0x1b51c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1b51c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b51cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B51CCu;
    {
        const bool branch_taken_0x1b51cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B51D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51CCu;
        // 0x1b51d0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51cc) {
            ctx->pc = 0x1B51E0u;
            goto label_1b51e0;
        }
    }
    ctx->pc = 0x1B51D4u;
    // 0x1b51d4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1B51D4u;
    SET_GPR_U32(ctx, 31, 0x1B51DCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B51D4u, 0x1B51DCu)) {
        return;
    }
    ctx->pc = 0x1B51DCu;
label_1b51dc:
    // 0x1b51dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b51dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1b51e0:
    // 0x1b51e0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B51E0u;
    {
        const bool branch_taken_0x1b51e0 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x1B51E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B51E0u;
        // 0x1b51e4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b51e0) {
            ctx->pc = 0x1B51C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b51c8;
        }
    }
    ctx->pc = 0x1B51E8u;
    // 0x1b51e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b51e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b51ec: 0xc06e3fa  jal         func_1B8FE8
    ctx->pc = 0x1B51ECu;
    SET_GPR_U32(ctx, 31, 0x1B51F4u);
    ctx->pc = 0x1B51F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B51ECu;
    // 0x1b51f0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8FE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B8FE8u, 0x1B51ECu, 0x1B51F4u)) {
        return;
    }
    ctx->pc = 0x1B51F4u;
label_1b51f4:
    // 0x1b51f4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1b51f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b51f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1b51f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b51fc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1b51fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5200: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1b5200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5204: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b5204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5208: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5208u;
        // 0x1b520c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B5210u;
}
