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

// Function: sub_001741D0
// Address: 0x1741d0 - 0x174268
void sub_001741D0_0x1741d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001741D0_0x1741d0");
#endif

    switch (ctx->pc) {
        case 0x174210u: goto label_174210;
        case 0x174224u: goto label_174224;
        case 0x174240u: goto label_174240;
        case 0x17424cu: goto label_17424c;
        default: break;
    }

    ctx->pc = 0x1741d0u;

    // 0x1741d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1741d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1741d4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1741d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1741d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1741d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1741dc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x1741dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x1741e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1741e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1741e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1741e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1741e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1741ec: 0x24425db8  addiu       $v0, $v0, 0x5DB8
    ctx->pc = 0x1741ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23992));
    // 0x1741f0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1741f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1741f4: 0x24635dd8  addiu       $v1, $v1, 0x5DD8
    ctx->pc = 0x1741f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24024));
    // 0x1741f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1741f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1741fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1741fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174200: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x174200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x174204: 0x2650005c  addiu       $s0, $s2, 0x5C
    ctx->pc = 0x174204u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 92));
    // 0x174208: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x174208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x17420c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x17420cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_174210:
    // 0x174210: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x174210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x174214: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174214u;
    {
        const bool branch_taken_0x174214 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174214u;
        // 0x174218: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174214) {
            ctx->pc = 0x174228u;
            goto label_174228;
        }
    }
    ctx->pc = 0x17421Cu;
    // 0x17421c: 0xc0808d4  jal         func_202350
    ctx->pc = 0x17421Cu;
    SET_GPR_U32(ctx, 31, 0x174224u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x17421Cu, 0x174224u)) {
        return;
    }
    ctx->pc = 0x174224u;
label_174224:
    // 0x174224: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x174224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_174228:
    // 0x174228: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x174228u;
    {
        const bool branch_taken_0x174228 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x17422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174228u;
        // 0x17422c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174228) {
            ctx->pc = 0x174210u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174210;
        }
    }
    ctx->pc = 0x174230u;
    // 0x174230: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x174230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x174234: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x174234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x174238: 0xc06ca38  jal         func_1B28E0
    ctx->pc = 0x174238u;
    SET_GPR_U32(ctx, 31, 0x174240u);
    ctx->pc = 0x17423Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174238u;
    // 0x17423c: 0x8c449168  lw          $a0, -0x6E98($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B28E0u, 0x174238u, 0x174240u)) {
        return;
    }
    ctx->pc = 0x174240u;
label_174240:
    // 0x174240: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x174240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174244: 0xc05d822  jal         func_176088
    ctx->pc = 0x174244u;
    SET_GPR_U32(ctx, 31, 0x17424Cu);
    ctx->pc = 0x174248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174244u;
    // 0x174248: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176088u, 0x174244u, 0x17424Cu)) {
        return;
    }
    ctx->pc = 0x17424Cu;
label_17424c:
    // 0x17424c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x17424cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x174250: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x174250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x174254: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174258: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x174258u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17425c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17425cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174260: 0x3e00008  jr          $ra
    ctx->pc = 0x174260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174260u;
        // 0x174264: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174268u;
}
