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

// Function: sub_001A9120
// Address: 0x1a9120 - 0x1a91b0
void sub_001A9120_0x1a9120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9120_0x1a9120");
#endif

    switch (ctx->pc) {
        case 0x1a9120u: goto label_1a9120;
        case 0x1a9124u: goto label_1a9124;
        case 0x1a9128u: goto label_1a9128;
        case 0x1a912cu: goto label_1a912c;
        case 0x1a9130u: goto label_1a9130;
        case 0x1a9134u: goto label_1a9134;
        case 0x1a9138u: goto label_1a9138;
        case 0x1a913cu: goto label_1a913c;
        case 0x1a9140u: goto label_1a9140;
        case 0x1a9144u: goto label_1a9144;
        case 0x1a9148u: goto label_1a9148;
        case 0x1a914cu: goto label_1a914c;
        case 0x1a9150u: goto label_1a9150;
        case 0x1a9154u: goto label_1a9154;
        case 0x1a9158u: goto label_1a9158;
        case 0x1a915cu: goto label_1a915c;
        case 0x1a9160u: goto label_1a9160;
        case 0x1a9164u: goto label_1a9164;
        case 0x1a9168u: goto label_1a9168;
        case 0x1a916cu: goto label_1a916c;
        case 0x1a9170u: goto label_1a9170;
        case 0x1a9174u: goto label_1a9174;
        case 0x1a9178u: goto label_1a9178;
        case 0x1a917cu: goto label_1a917c;
        case 0x1a9180u: goto label_1a9180;
        case 0x1a9184u: goto label_1a9184;
        case 0x1a9188u: goto label_1a9188;
        case 0x1a918cu: goto label_1a918c;
        case 0x1a9190u: goto label_1a9190;
        case 0x1a9194u: goto label_1a9194;
        case 0x1a9198u: goto label_1a9198;
        case 0x1a919cu: goto label_1a919c;
        case 0x1a91a0u: goto label_1a91a0;
        case 0x1a91a4u: goto label_1a91a4;
        case 0x1a91a8u: goto label_1a91a8;
        case 0x1a91acu: goto label_1a91ac;
        default: break;
    }

    ctx->pc = 0x1a9120u;

label_1a9120:
    // 0x1a9120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a9120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a9124:
    // 0x1a9124: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a9124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a9128:
    // 0x1a9128: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a9128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a912c:
    // 0x1a912c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a912cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9130:
    // 0x1a9130: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a9134:
    // 0x1a9134: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1a9134u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_1a9138:
    // 0x1a9138: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x1a9138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1a913c:
    // 0x1a913c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1a913cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a9140:
    // 0x1a9140: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1a9140u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1a9144:
    // 0x1a9144: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1a9144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1a9148:
    // 0x1a9148: 0x60f809  jalr        $v1
label_1a914c:
    if (ctx->pc == 0x1A914Cu) {
        ctx->pc = 0x1A914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9148u;
        // 0x1a914c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9150u;
        goto label_1a9150;
    }
    ctx->pc = 0x1A9148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9150u);
        ctx->pc = 0x1A914Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9148u;
        // 0x1a914c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9148u, 0x1A9150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9150u;
label_1a9150:
    // 0x1a9150: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x1a9150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1a9154:
    // 0x1a9154: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_1a9158:
    if (ctx->pc == 0x1A9158u) {
        ctx->pc = 0x1A9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9154u;
        // 0x1a9158: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A915Cu;
        goto label_1a915c;
    }
    ctx->pc = 0x1A9154u;
    {
        const bool branch_taken_0x1a9154 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9154u;
        // 0x1a9158: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9154) {
            ctx->pc = 0x1A9170u;
            goto label_1a9170;
        }
    }
    ctx->pc = 0x1A915Cu;
label_1a915c:
    // 0x1a915c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a915cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a9160:
    // 0x1a9160: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1a9160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_1a9164:
    // 0x1a9164: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a9164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a9168:
    // 0x1a9168: 0x60f809  jalr        $v1
label_1a916c:
    if (ctx->pc == 0x1A916Cu) {
        ctx->pc = 0x1A916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9168u;
        // 0x1a916c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9170u;
        goto label_1a9170;
    }
    ctx->pc = 0x1A9168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A9170u);
        ctx->pc = 0x1A916Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9168u;
        // 0x1a916c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9168u, 0x1A9170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A9170u;
label_1a9170:
    // 0x1a9170: 0xc06a504  jal         func_1A9410
label_1a9174:
    if (ctx->pc == 0x1A9174u) {
        ctx->pc = 0x1A9174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9170u;
        // 0x1a9174: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9178u;
        goto label_1a9178;
    }
    ctx->pc = 0x1A9170u;
    SET_GPR_U32(ctx, 31, 0x1A9178u);
    ctx->pc = 0x1A9174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9170u;
    // 0x1a9174: 0x8e24001c  lw          $a0, 0x1C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9410u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9410u, 0x1A9170u, 0x1A9178u)) {
        return;
    }
    ctx->pc = 0x1A9178u;
label_1a9178:
    // 0x1a9178: 0x8e30001c  lw          $s0, 0x1C($s1)
    ctx->pc = 0x1a9178u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1a917c:
    // 0x1a917c: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_1a9180:
    if (ctx->pc == 0x1A9180u) {
        ctx->pc = 0x1A9180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A917Cu;
        // 0x1a9180: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9184u;
        goto label_1a9184;
    }
    ctx->pc = 0x1A917Cu;
    {
        const bool branch_taken_0x1a917c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a917c) {
            ctx->pc = 0x1A9180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A917Cu;
            // 0x1a9180: 0xae20004c  sw          $zero, 0x4C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A919Cu;
            goto label_1a919c;
        }
    }
    ctx->pc = 0x1A9184u;
label_1a9184:
    // 0x1a9184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a9188:
    // 0x1a9188: 0xc06a522  jal         func_1A9488
label_1a918c:
    if (ctx->pc == 0x1A918Cu) {
        ctx->pc = 0x1A918Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9188u;
        // 0x1a918c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9190u;
        goto label_1a9190;
    }
    ctx->pc = 0x1A9188u;
    SET_GPR_U32(ctx, 31, 0x1A9190u);
    ctx->pc = 0x1A918Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9188u;
    // 0x1a918c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9488u, 0x1A9188u, 0x1A9190u)) {
        return;
    }
    ctx->pc = 0x1A9190u;
label_1a9190:
    // 0x1a9190: 0xc0808b8  jal         func_2022E0
label_1a9194:
    if (ctx->pc == 0x1A9194u) {
        ctx->pc = 0x1A9194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9190u;
        // 0x1a9194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9198u;
        goto label_1a9198;
    }
    ctx->pc = 0x1A9190u;
    SET_GPR_U32(ctx, 31, 0x1A9198u);
    ctx->pc = 0x1A9194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9190u;
    // 0x1a9194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1A9190u, 0x1A9198u)) {
        return;
    }
    ctx->pc = 0x1A9198u;
label_1a9198:
    // 0x1a9198: 0xae20004c  sw          $zero, 0x4C($s1)
    ctx->pc = 0x1a9198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 0));
label_1a919c:
    // 0x1a919c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a919cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a91a0:
    // 0x1a91a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a91a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a91a4:
    // 0x1a91a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a91a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a91a8:
    // 0x1a91a8: 0x3e00008  jr          $ra
label_1a91ac:
    if (ctx->pc == 0x1A91ACu) {
        ctx->pc = 0x1A91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91A8u;
        // 0x1a91ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A91B0u;
        goto label_fallthrough_0x1a91a8;
    }
    ctx->pc = 0x1A91A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A91ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A91A8u;
        // 0x1a91ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A91A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a91a8:
    ctx->pc = 0x1A91B0u;
}
