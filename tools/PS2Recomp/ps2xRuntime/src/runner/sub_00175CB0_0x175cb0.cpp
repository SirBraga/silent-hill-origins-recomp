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

// Function: sub_00175CB0
// Address: 0x175cb0 - 0x175d48
void sub_00175CB0_0x175cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175CB0_0x175cb0");
#endif

    switch (ctx->pc) {
        case 0x175cf0u: goto label_175cf0;
        case 0x175d04u: goto label_175d04;
        case 0x175d20u: goto label_175d20;
        case 0x175d2cu: goto label_175d2c;
        default: break;
    }

    ctx->pc = 0x175cb0u;

    // 0x175cb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x175cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x175cb4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x175cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x175cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x175cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x175cbc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x175cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x175cc0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x175cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x175cc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x175cc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175cc8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x175cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x175ccc: 0x24426218  addiu       $v0, $v0, 0x6218
    ctx->pc = 0x175cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25112));
    // 0x175cd0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x175cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x175cd4: 0x24636238  addiu       $v1, $v1, 0x6238
    ctx->pc = 0x175cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25144));
    // 0x175cd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175cdc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x175cdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175ce0: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x175ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x175ce4: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x175ce4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x175ce8: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x175ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x175cec: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x175cecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_175cf0:
    // 0x175cf0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x175cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x175cf4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x175CF4u;
    {
        const bool branch_taken_0x175cf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175CF4u;
        // 0x175cf8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175cf4) {
            ctx->pc = 0x175D08u;
            goto label_175d08;
        }
    }
    ctx->pc = 0x175CFCu;
    // 0x175cfc: 0xc0808d4  jal         func_202350
    ctx->pc = 0x175CFCu;
    SET_GPR_U32(ctx, 31, 0x175D04u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x175CFCu, 0x175D04u)) {
        return;
    }
    ctx->pc = 0x175D04u;
label_175d04:
    // 0x175d04: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x175d04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_175d08:
    // 0x175d08: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x175D08u;
    {
        const bool branch_taken_0x175d08 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x175D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D08u;
        // 0x175d0c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175d08) {
            ctx->pc = 0x175CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_175cf0;
        }
    }
    ctx->pc = 0x175D10u;
    // 0x175d10: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x175d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x175d14: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x175d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x175d18: 0xc06ca38  jal         func_1B28E0
    ctx->pc = 0x175D18u;
    SET_GPR_U32(ctx, 31, 0x175D20u);
    ctx->pc = 0x175D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D18u;
    // 0x175d1c: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28E0u, 0x175D18u, 0x175D20u)) {
        return;
    }
    ctx->pc = 0x175D20u;
label_175d20:
    // 0x175d20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x175d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175d24: 0xc05d822  jal         func_176088
    ctx->pc = 0x175D24u;
    SET_GPR_U32(ctx, 31, 0x175D2Cu);
    ctx->pc = 0x175D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175D24u;
    // 0x175d28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176088u, 0x175D24u, 0x175D2Cu)) {
        return;
    }
    ctx->pc = 0x175D2Cu;
label_175d2c:
    // 0x175d2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x175d2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175d30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x175d30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x175d34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x175d34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175d38: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x175d38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175d40: 0x3e00008  jr          $ra
    ctx->pc = 0x175D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175D40u;
        // 0x175d44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175D48u;
}
