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

// Function: sub_00173BB0
// Address: 0x173bb0 - 0x173c48
void sub_00173BB0_0x173bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173BB0_0x173bb0");
#endif

    switch (ctx->pc) {
        case 0x173bf0u: goto label_173bf0;
        case 0x173c04u: goto label_173c04;
        case 0x173c20u: goto label_173c20;
        case 0x173c2cu: goto label_173c2c;
        default: break;
    }

    ctx->pc = 0x173bb0u;

    // 0x173bb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x173bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x173bb4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x173bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x173bb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x173bbc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x173bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x173bc0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x173bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x173bc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x173bc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173bc8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x173bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x173bcc: 0x24425c88  addiu       $v0, $v0, 0x5C88
    ctx->pc = 0x173bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23688));
    // 0x173bd0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x173bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x173bd4: 0x24635ca8  addiu       $v1, $v1, 0x5CA8
    ctx->pc = 0x173bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23720));
    // 0x173bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173bdc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x173bdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173be0: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x173be0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x173be4: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x173be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x173be8: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x173be8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x173bec: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x173becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_173bf0:
    // 0x173bf0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x173bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173bf4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x173BF4u;
    {
        const bool branch_taken_0x173bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x173BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173BF4u;
        // 0x173bf8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173bf4) {
            ctx->pc = 0x173C08u;
            goto label_173c08;
        }
    }
    ctx->pc = 0x173BFCu;
    // 0x173bfc: 0xc0808d4  jal         func_202350
    ctx->pc = 0x173BFCu;
    SET_GPR_U32(ctx, 31, 0x173C04u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x173BFCu, 0x173C04u)) {
        return;
    }
    ctx->pc = 0x173C04u;
label_173c04:
    // 0x173c04: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x173c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_173c08:
    // 0x173c08: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x173C08u;
    {
        const bool branch_taken_0x173c08 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x173C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C08u;
        // 0x173c0c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173c08) {
            ctx->pc = 0x173BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173bf0;
        }
    }
    ctx->pc = 0x173C10u;
    // 0x173c10: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x173c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x173c14: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x173c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x173c18: 0xc06ca38  jal         func_1B28E0
    ctx->pc = 0x173C18u;
    SET_GPR_U32(ctx, 31, 0x173C20u);
    ctx->pc = 0x173C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C18u;
    // 0x173c1c: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28E0u, 0x173C18u, 0x173C20u)) {
        return;
    }
    ctx->pc = 0x173C20u;
label_173c20:
    // 0x173c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x173c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173c24: 0xc05d822  jal         func_176088
    ctx->pc = 0x173C24u;
    SET_GPR_U32(ctx, 31, 0x173C2Cu);
    ctx->pc = 0x173C28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173C24u;
    // 0x173c28: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176088u, 0x173C24u, 0x173C2Cu)) {
        return;
    }
    ctx->pc = 0x173C2Cu;
label_173c2c:
    // 0x173c2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x173c2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173c30: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x173c30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173c34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173c38: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x173c38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173c3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173c40: 0x3e00008  jr          $ra
    ctx->pc = 0x173C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173C40u;
        // 0x173c44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173C40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173C48u;
}
