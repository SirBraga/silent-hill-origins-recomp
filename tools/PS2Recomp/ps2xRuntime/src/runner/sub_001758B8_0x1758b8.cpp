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

// Function: sub_001758B8
// Address: 0x1758b8 - 0x175950
void sub_001758B8_0x1758b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001758B8_0x1758b8");
#endif

    switch (ctx->pc) {
        case 0x1758f8u: goto label_1758f8;
        case 0x17590cu: goto label_17590c;
        case 0x175928u: goto label_175928;
        case 0x175934u: goto label_175934;
        default: break;
    }

    ctx->pc = 0x1758b8u;

    // 0x1758b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1758b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1758bc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1758bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1758c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1758c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1758c4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1758c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1758c8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1758c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1758cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1758ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1758d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1758d4: 0x24426138  addiu       $v0, $v0, 0x6138
    ctx->pc = 0x1758d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24888));
    // 0x1758d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1758d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1758dc: 0x24636158  addiu       $v1, $v1, 0x6158
    ctx->pc = 0x1758dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24920));
    // 0x1758e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1758e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1758e4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1758e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1758e8: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x1758e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x1758ec: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x1758ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x1758f0: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x1758f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x1758f4: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1758f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1758f8:
    // 0x1758f8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1758f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1758fc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1758FCu;
    {
        const bool branch_taken_0x1758fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x175900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1758FCu;
        // 0x175900: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1758fc) {
            ctx->pc = 0x175910u;
            goto label_175910;
        }
    }
    ctx->pc = 0x175904u;
    // 0x175904: 0xc0808d4  jal         func_202350
    ctx->pc = 0x175904u;
    SET_GPR_U32(ctx, 31, 0x17590Cu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x175904u, 0x17590Cu)) {
        return;
    }
    ctx->pc = 0x17590Cu;
label_17590c:
    // 0x17590c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x17590cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_175910:
    // 0x175910: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x175910u;
    {
        const bool branch_taken_0x175910 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x175914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175910u;
        // 0x175914: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175910) {
            ctx->pc = 0x1758F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1758f8;
        }
    }
    ctx->pc = 0x175918u;
    // 0x175918: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x175918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17591c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x17591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x175920: 0xc06ca38  jal         func_1B28E0
    ctx->pc = 0x175920u;
    SET_GPR_U32(ctx, 31, 0x175928u);
    ctx->pc = 0x175924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175920u;
    // 0x175924: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28E0u, 0x175920u, 0x175928u)) {
        return;
    }
    ctx->pc = 0x175928u;
label_175928:
    // 0x175928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x175928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17592c: 0xc05d822  jal         func_176088
    ctx->pc = 0x17592Cu;
    SET_GPR_U32(ctx, 31, 0x175934u);
    ctx->pc = 0x175930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17592Cu;
    // 0x175930: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176088u, 0x17592Cu, 0x175934u)) {
        return;
    }
    ctx->pc = 0x175934u;
label_175934:
    // 0x175934: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x175934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x175938: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x175938u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17593c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17593cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x175940: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x175940u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x175944: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175948: 0x3e00008  jr          $ra
    ctx->pc = 0x175948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175948u;
        // 0x17594c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175948u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175950u;
}
