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

// Function: sub_0013C210
// Address: 0x13c210 - 0x13c2a8
void sub_0013C210_0x13c210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C210_0x13c210");
#endif

    switch (ctx->pc) {
        case 0x13c250u: goto label_13c250;
        case 0x13c264u: goto label_13c264;
        case 0x13c274u: goto label_13c274;
        case 0x13c280u: goto label_13c280;
        case 0x13c294u: goto label_13c294;
        default: break;
    }

    ctx->pc = 0x13c210u;

    // 0x13c210: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c214: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13c214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13c218: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13c218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13c21c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13c21cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13c220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c22c: 0x2442f778  addiu       $v0, $v0, -0x888
    ctx->pc = 0x13c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965112));
    // 0x13c230: 0x2463f730  addiu       $v1, $v1, -0x8D0
    ctx->pc = 0x13c230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965040));
    // 0x13c234: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13c234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c238: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x13c238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x13c23c: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x13c23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x13c240: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C240u;
    {
        const bool branch_taken_0x13c240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C240u;
        // 0x13c244: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c240) {
            ctx->pc = 0x13C250u;
            goto label_13c250;
        }
    }
    ctx->pc = 0x13C248u;
    // 0x13c248: 0xc05e366  jal         func_178D98
    ctx->pc = 0x13C248u;
    SET_GPR_U32(ctx, 31, 0x13C250u);
    ctx->pc = 0x13C24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C248u;
    // 0x13c24c: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178D98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178D98u, 0x13C248u, 0x13C250u)) {
        return;
    }
    ctx->pc = 0x13C250u;
label_13c250:
    // 0x13c250: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x13c250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13c254: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x13C254u;
    {
        const bool branch_taken_0x13c254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c254) {
            ctx->pc = 0x13C258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C254u;
            // 0x13c258: 0x26040038  addiu       $a0, $s0, 0x38 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C26Cu;
            goto label_13c26c;
        }
    }
    ctx->pc = 0x13C25Cu;
    // 0x13c25c: 0xc0898d2  jal         func_226348
    ctx->pc = 0x13C25Cu;
    SET_GPR_U32(ctx, 31, 0x13C264u);
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x13C25Cu, 0x13C264u)) {
        return;
    }
    ctx->pc = 0x13C264u;
label_13c264:
    // 0x13c264: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x13c264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x13c268: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x13c268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_13c26c:
    // 0x13c26c: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x13C26Cu;
    SET_GPR_U32(ctx, 31, 0x13C274u);
    ctx->pc = 0x13C270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C26Cu;
    // 0x13c270: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x13C26Cu, 0x13C274u)) {
        return;
    }
    ctx->pc = 0x13C274u;
label_13c274:
    // 0x13c274: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x13c274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x13c278: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x13C278u;
    SET_GPR_U32(ctx, 31, 0x13C280u);
    ctx->pc = 0x13C27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C278u;
    // 0x13c27c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC470u, 0x13C278u, 0x13C280u)) {
        return;
    }
    ctx->pc = 0x13C280u;
label_13c280:
    // 0x13c280: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x13c280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x13c284: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C284u;
    {
        const bool branch_taken_0x13c284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c284) {
            ctx->pc = 0x13C288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C284u;
            // 0x13c288: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C298u;
            goto label_13c298;
        }
    }
    ctx->pc = 0x13C28Cu;
    // 0x13c28c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x13C28Cu;
    SET_GPR_U32(ctx, 31, 0x13C294u);
    ctx->pc = 0x13C290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13C28Cu;
    // 0x13c290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x13C28Cu, 0x13C294u)) {
        return;
    }
    ctx->pc = 0x13C294u;
label_13c294:
    // 0x13c294: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13c294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_13c298:
    // 0x13c298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c29c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c29cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c2a0: 0x3e00008  jr          $ra
    ctx->pc = 0x13C2A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C2A0u;
        // 0x13c2a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C2A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C2A8u;
}
