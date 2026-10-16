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

// Function: sub_0025C0F0
// Address: 0x25c0f0 - 0x25c170
void sub_0025C0F0_0x25c0f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C0F0_0x25c0f0");
#endif

    switch (ctx->pc) {
        case 0x25c0f0u: goto label_25c0f0;
        case 0x25c0f4u: goto label_25c0f4;
        case 0x25c0f8u: goto label_25c0f8;
        case 0x25c0fcu: goto label_25c0fc;
        case 0x25c100u: goto label_25c100;
        case 0x25c104u: goto label_25c104;
        case 0x25c108u: goto label_25c108;
        case 0x25c10cu: goto label_25c10c;
        case 0x25c110u: goto label_25c110;
        case 0x25c114u: goto label_25c114;
        case 0x25c118u: goto label_25c118;
        case 0x25c11cu: goto label_25c11c;
        case 0x25c120u: goto label_25c120;
        case 0x25c124u: goto label_25c124;
        case 0x25c128u: goto label_25c128;
        case 0x25c12cu: goto label_25c12c;
        case 0x25c130u: goto label_25c130;
        case 0x25c134u: goto label_25c134;
        case 0x25c138u: goto label_25c138;
        case 0x25c13cu: goto label_25c13c;
        case 0x25c140u: goto label_25c140;
        case 0x25c144u: goto label_25c144;
        case 0x25c148u: goto label_25c148;
        case 0x25c14cu: goto label_25c14c;
        case 0x25c150u: goto label_25c150;
        case 0x25c154u: goto label_25c154;
        case 0x25c158u: goto label_25c158;
        case 0x25c15cu: goto label_25c15c;
        case 0x25c160u: goto label_25c160;
        case 0x25c164u: goto label_25c164;
        case 0x25c168u: goto label_25c168;
        case 0x25c16cu: goto label_25c16c;
        default: break;
    }

    ctx->pc = 0x25c0f0u;

label_25c0f0:
    // 0x25c0f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x25c0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_25c0f4:
    // 0x25c0f4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_25c0f8:
    // 0x25c0f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x25c0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_25c0fc:
    // 0x25c0fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x25c0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_25c100:
    // 0x25c100: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x25c100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_25c104:
    // 0x25c104: 0x8c430fcc  lw          $v1, 0xFCC($v0)
    ctx->pc = 0x25c104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4044)));
label_25c108:
    // 0x25c108: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x25c108u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_25c10c:
    // 0x25c10c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x25c10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_25c110:
    // 0x25c110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25c114:
    // 0x25c114: 0x2471003c  addiu       $s1, $v1, 0x3C
    ctx->pc = 0x25c114u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 60));
label_25c118:
    // 0x25c118: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x25c118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_25c11c:
    // 0x25c11c: 0x1091000c  beq         $a0, $s1, . + 4 + (0xC << 2)
label_25c120:
    if (ctx->pc == 0x25C120u) {
        ctx->pc = 0x25C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C11Cu;
        // 0x25c120: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C124u;
        goto label_25c124;
    }
    ctx->pc = 0x25C11Cu;
    {
        const bool branch_taken_0x25c11c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        ctx->pc = 0x25C120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C11Cu;
        // 0x25c120: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c11c) {
            ctx->pc = 0x25C150u;
            goto label_25c150;
        }
    }
    ctx->pc = 0x25C124u;
label_25c124:
    // 0x25c124: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x25c124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_25c128:
    // 0x25c128: 0x2484ffcc  addiu       $a0, $a0, -0x34
    ctx->pc = 0x25c128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967244));
label_25c12c:
    // 0x25c12c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_25c130:
    if (ctx->pc == 0x25C130u) {
        ctx->pc = 0x25C130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C12Cu;
        // 0x25c130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C134u;
        goto label_25c134;
    }
    ctx->pc = 0x25C12Cu;
    {
        const bool branch_taken_0x25c12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c12c) {
            ctx->pc = 0x25C130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C12Cu;
            // 0x25c130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C148u;
            goto label_25c148;
        }
    }
    ctx->pc = 0x25C134u;
label_25c134:
    // 0x25c134: 0x260f809  jalr        $s3
label_25c138:
    if (ctx->pc == 0x25C138u) {
        ctx->pc = 0x25C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C134u;
        // 0x25c138: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C13Cu;
        goto label_25c13c;
    }
    ctx->pc = 0x25C134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x25C13Cu);
        ctx->pc = 0x25C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C134u;
        // 0x25c138: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C134u, 0x25C13Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C13Cu;
label_25c13c:
    // 0x25c13c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_25c140:
    if (ctx->pc == 0x25C140u) {
        ctx->pc = 0x25C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C13Cu;
        // 0x25c140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C144u;
        goto label_25c144;
    }
    ctx->pc = 0x25C13Cu;
    {
        const bool branch_taken_0x25c13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C13Cu;
        // 0x25c140: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c13c) {
            ctx->pc = 0x25C154u;
            goto label_25c154;
        }
    }
    ctx->pc = 0x25C144u;
label_25c144:
    // 0x25c144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x25c144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c148:
    // 0x25c148: 0x5491fff7  bnel        $a0, $s1, . + 4 + (-0x9 << 2)
label_25c14c:
    if (ctx->pc == 0x25C14Cu) {
        ctx->pc = 0x25C14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C148u;
        // 0x25c14c: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C150u;
        goto label_25c150;
    }
    ctx->pc = 0x25C148u;
    {
        const bool branch_taken_0x25c148 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        if (branch_taken_0x25c148) {
            ctx->pc = 0x25C14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C148u;
            // 0x25c14c: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c128;
        }
    }
    ctx->pc = 0x25C150u;
label_25c150:
    // 0x25c150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c154:
    // 0x25c154: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x25c154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_25c158:
    // 0x25c158: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x25c158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_25c15c:
    // 0x25c15c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25c15cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_25c160:
    // 0x25c160: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x25c160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c164:
    // 0x25c164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c168:
    // 0x25c168: 0x3e00008  jr          $ra
label_25c16c:
    if (ctx->pc == 0x25C16Cu) {
        ctx->pc = 0x25C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C168u;
        // 0x25c16c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C170u;
        goto label_fallthrough_0x25c168;
    }
    ctx->pc = 0x25C168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C168u;
        // 0x25c16c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25c168:
    ctx->pc = 0x25C170u;
}
