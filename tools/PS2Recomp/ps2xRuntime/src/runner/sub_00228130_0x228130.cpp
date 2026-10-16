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

// Function: sub_00228130
// Address: 0x228130 - 0x228198
void sub_00228130_0x228130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228130_0x228130");
#endif

    switch (ctx->pc) {
        case 0x228130u: goto label_228130;
        case 0x228134u: goto label_228134;
        case 0x228138u: goto label_228138;
        case 0x22813cu: goto label_22813c;
        case 0x228140u: goto label_228140;
        case 0x228144u: goto label_228144;
        case 0x228148u: goto label_228148;
        case 0x22814cu: goto label_22814c;
        case 0x228150u: goto label_228150;
        case 0x228154u: goto label_228154;
        case 0x228158u: goto label_228158;
        case 0x22815cu: goto label_22815c;
        case 0x228160u: goto label_228160;
        case 0x228164u: goto label_228164;
        case 0x228168u: goto label_228168;
        case 0x22816cu: goto label_22816c;
        case 0x228170u: goto label_228170;
        case 0x228174u: goto label_228174;
        case 0x228178u: goto label_228178;
        case 0x22817cu: goto label_22817c;
        case 0x228180u: goto label_228180;
        case 0x228184u: goto label_228184;
        case 0x228188u: goto label_228188;
        case 0x22818cu: goto label_22818c;
        case 0x228190u: goto label_228190;
        case 0x228194u: goto label_228194;
        default: break;
    }

    ctx->pc = 0x228130u;

label_228130:
    // 0x228130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x228130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_228134:
    // 0x228134: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x228134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_228138:
    // 0x228138: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x228138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_22813c:
    // 0x22813c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22813cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228140:
    // 0x228140: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x228140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_228144:
    // 0x228144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x228144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_228148:
    // 0x228148: 0x8c621028  lw          $v0, 0x1028($v1)
    ctx->pc = 0x228148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4136)));
label_22814c:
    // 0x22814c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22814cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_228150:
    // 0x228150: 0x40f809  jalr        $v0
label_228154:
    if (ctx->pc == 0x228154u) {
        ctx->pc = 0x228154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228150u;
        // 0x228154: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228158u;
        goto label_228158;
    }
    ctx->pc = 0x228150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x228158u);
        ctx->pc = 0x228154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228150u;
        // 0x228154: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x228150u, 0x228158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x228158u;
label_228158:
    // 0x228158: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22815c:
    if (ctx->pc == 0x22815Cu) {
        ctx->pc = 0x22815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228158u;
        // 0x22815c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228160u;
        goto label_228160;
    }
    ctx->pc = 0x228158u;
    {
        const bool branch_taken_0x228158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22815Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228158u;
        // 0x22815c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x228158) {
            ctx->pc = 0x228180u;
            goto label_228180;
        }
    }
    ctx->pc = 0x228160u;
label_228160:
    // 0x228160: 0x92220022  lbu         $v0, 0x22($s1)
    ctx->pc = 0x228160u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 34)));
label_228164:
    // 0x228164: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x228164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_228168:
    // 0x228168: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_22816c:
    if (ctx->pc == 0x22816Cu) {
        ctx->pc = 0x22816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x228168u;
        // 0x22816c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228170u;
        goto label_228170;
    }
    ctx->pc = 0x228168u;
    {
        const bool branch_taken_0x228168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x228168) {
            ctx->pc = 0x22816Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x228168u;
            // 0x22816c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x228180u;
            goto label_228180;
        }
    }
    ctx->pc = 0x228170u;
label_228170:
    // 0x228170: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x228170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_228174:
    // 0x228174: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x228174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_228178:
    // 0x228178: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x228178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_22817c:
    // 0x22817c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22817cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_228180:
    // 0x228180: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x228180u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_228184:
    // 0x228184: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x228184u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_228188:
    // 0x228188: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x228188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22818c:
    // 0x22818c: 0x3e00008  jr          $ra
label_228190:
    if (ctx->pc == 0x228190u) {
        ctx->pc = 0x228190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22818Cu;
        // 0x228190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x228194u;
        goto label_228194;
    }
    ctx->pc = 0x22818Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x228190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22818Cu;
        // 0x228190: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22818Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x228194u;
label_228194:
    // 0x228194: 0x0  nop
    ctx->pc = 0x228194u;
    // NOP
    ctx->pc = 0x228198u;
}
