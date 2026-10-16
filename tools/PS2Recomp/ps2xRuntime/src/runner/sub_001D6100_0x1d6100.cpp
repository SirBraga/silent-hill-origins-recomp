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

// Function: sub_001D6100
// Address: 0x1d6100 - 0x1d6180
void sub_001D6100_0x1d6100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6100_0x1d6100");
#endif

    switch (ctx->pc) {
        case 0x1d6100u: goto label_1d6100;
        case 0x1d6104u: goto label_1d6104;
        case 0x1d6108u: goto label_1d6108;
        case 0x1d610cu: goto label_1d610c;
        case 0x1d6110u: goto label_1d6110;
        case 0x1d6114u: goto label_1d6114;
        case 0x1d6118u: goto label_1d6118;
        case 0x1d611cu: goto label_1d611c;
        case 0x1d6120u: goto label_1d6120;
        case 0x1d6124u: goto label_1d6124;
        case 0x1d6128u: goto label_1d6128;
        case 0x1d612cu: goto label_1d612c;
        case 0x1d6130u: goto label_1d6130;
        case 0x1d6134u: goto label_1d6134;
        case 0x1d6138u: goto label_1d6138;
        case 0x1d613cu: goto label_1d613c;
        case 0x1d6140u: goto label_1d6140;
        case 0x1d6144u: goto label_1d6144;
        case 0x1d6148u: goto label_1d6148;
        case 0x1d614cu: goto label_1d614c;
        case 0x1d6150u: goto label_1d6150;
        case 0x1d6154u: goto label_1d6154;
        case 0x1d6158u: goto label_1d6158;
        case 0x1d615cu: goto label_1d615c;
        case 0x1d6160u: goto label_1d6160;
        case 0x1d6164u: goto label_1d6164;
        case 0x1d6168u: goto label_1d6168;
        case 0x1d616cu: goto label_1d616c;
        case 0x1d6170u: goto label_1d6170;
        case 0x1d6174u: goto label_1d6174;
        case 0x1d6178u: goto label_1d6178;
        case 0x1d617cu: goto label_1d617c;
        default: break;
    }

    ctx->pc = 0x1d6100u;

label_1d6100:
    // 0x1d6100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d6100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1d6104:
    // 0x1d6104: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d6104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d6108:
    // 0x1d6108: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d6108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d610c:
    // 0x1d610c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d610cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1d6110:
    // 0x1d6110: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_1d6114:
    if (ctx->pc == 0x1D6114u) {
        ctx->pc = 0x1D6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6110u;
        // 0x1d6114: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6118u;
        goto label_1d6118;
    }
    ctx->pc = 0x1D6110u;
    {
        const bool branch_taken_0x1d6110 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D6114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6110u;
        // 0x1d6114: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6110) {
            ctx->pc = 0x1D6134u;
            goto label_1d6134;
        }
    }
    ctx->pc = 0x1D6118u;
label_1d6118:
    // 0x1d6118: 0xc0758da  jal         func_1D6368
label_1d611c:
    if (ctx->pc == 0x1D611Cu) {
        ctx->pc = 0x1D6120u;
        goto label_1d6120;
    }
    ctx->pc = 0x1D6118u;
    SET_GPR_U32(ctx, 31, 0x1D6120u);
    ctx->pc = 0x1D6368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D6368u, 0x1D6118u, 0x1D6120u)) {
        return;
    }
    ctx->pc = 0x1D6120u;
label_1d6120:
    // 0x1d6120: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d6124:
    // 0x1d6124: 0xc07555e  jal         func_1D5578
label_1d6128:
    if (ctx->pc == 0x1D6128u) {
        ctx->pc = 0x1D6128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6124u;
        // 0x1d6128: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D612Cu;
        goto label_1d612c;
    }
    ctx->pc = 0x1D6124u;
    SET_GPR_U32(ctx, 31, 0x1D612Cu);
    ctx->pc = 0x1D6128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6124u;
    // 0x1d6128: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5578u, 0x1D6124u, 0x1D612Cu)) {
        return;
    }
    ctx->pc = 0x1D612Cu;
label_1d612c:
    // 0x1d612c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d6130:
    if (ctx->pc == 0x1D6130u) {
        ctx->pc = 0x1D6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D612Cu;
        // 0x1d6130: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6134u;
        goto label_1d6134;
    }
    ctx->pc = 0x1D612Cu;
    {
        const bool branch_taken_0x1d612c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D612Cu;
        // 0x1d6130: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d612c) {
            ctx->pc = 0x1D6170u;
            goto label_1d6170;
        }
    }
    ctx->pc = 0x1D6134u;
label_1d6134:
    // 0x1d6134: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d6134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d6138:
    // 0x1d6138: 0x14a20005  bne         $a1, $v0, . + 4 + (0x5 << 2)
label_1d613c:
    if (ctx->pc == 0x1D613Cu) {
        ctx->pc = 0x1D613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6138u;
        // 0x1d613c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6140u;
        goto label_1d6140;
    }
    ctx->pc = 0x1D6138u;
    {
        const bool branch_taken_0x1d6138 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D613Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6138u;
        // 0x1d613c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6138) {
            ctx->pc = 0x1D6150u;
            goto label_1d6150;
        }
    }
    ctx->pc = 0x1D6140u;
label_1d6140:
    // 0x1d6140: 0xc0758ba  jal         func_1D62E8
label_1d6144:
    if (ctx->pc == 0x1D6144u) {
        ctx->pc = 0x1D6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6140u;
        // 0x1d6144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6148u;
        goto label_1d6148;
    }
    ctx->pc = 0x1D6140u;
    SET_GPR_U32(ctx, 31, 0x1D6148u);
    ctx->pc = 0x1D6144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6140u;
    // 0x1d6144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D62E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D62E8u, 0x1D6140u, 0x1D6148u)) {
        return;
    }
    ctx->pc = 0x1D6148u;
label_1d6148:
    // 0x1d6148: 0x10000009  b           . + 4 + (0x9 << 2)
label_1d614c:
    if (ctx->pc == 0x1D614Cu) {
        ctx->pc = 0x1D614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6148u;
        // 0x1d614c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6150u;
        goto label_1d6150;
    }
    ctx->pc = 0x1D6148u;
    {
        const bool branch_taken_0x1d6148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6148u;
        // 0x1d614c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6148) {
            ctx->pc = 0x1D6170u;
            goto label_1d6170;
        }
    }
    ctx->pc = 0x1D6150u;
label_1d6150:
    // 0x1d6150: 0x54a20007  bnel        $a1, $v0, . + 4 + (0x7 << 2)
label_1d6154:
    if (ctx->pc == 0x1D6154u) {
        ctx->pc = 0x1D6154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6150u;
        // 0x1d6154: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6158u;
        goto label_1d6158;
    }
    ctx->pc = 0x1D6150u;
    {
        const bool branch_taken_0x1d6150 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d6150) {
            ctx->pc = 0x1D6154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6150u;
            // 0x1d6154: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6170u;
            goto label_1d6170;
        }
    }
    ctx->pc = 0x1D6158u;
label_1d6158:
    // 0x1d6158: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1d6158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1d615c:
    // 0x1d615c: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1d615cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1d6160:
    // 0x1d6160: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1d6160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1d6164:
    // 0x1d6164: 0x60f809  jalr        $v1
label_1d6168:
    if (ctx->pc == 0x1D6168u) {
        ctx->pc = 0x1D6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6164u;
        // 0x1d6168: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D616Cu;
        goto label_1d616c;
    }
    ctx->pc = 0x1D6164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D616Cu);
        ctx->pc = 0x1D6168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6164u;
        // 0x1d6168: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6164u, 0x1D616Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D616Cu;
label_1d616c:
    // 0x1d616c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d616cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d6170:
    // 0x1d6170: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d6170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d6174:
    // 0x1d6174: 0x3e00008  jr          $ra
label_1d6178:
    if (ctx->pc == 0x1D6178u) {
        ctx->pc = 0x1D6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6174u;
        // 0x1d6178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D617Cu;
        goto label_1d617c;
    }
    ctx->pc = 0x1D6174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D6178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6174u;
        // 0x1d6178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D617Cu;
label_1d617c:
    // 0x1d617c: 0x0  nop
    ctx->pc = 0x1d617cu;
    // NOP
    ctx->pc = 0x1d6180u;
}
