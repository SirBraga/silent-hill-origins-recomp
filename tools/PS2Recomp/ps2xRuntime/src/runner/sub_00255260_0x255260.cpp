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

// Function: sub_00255260
// Address: 0x255260 - 0x2552e0
void sub_00255260_0x255260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255260_0x255260");
#endif

    switch (ctx->pc) {
        case 0x255260u: goto label_255260;
        case 0x255264u: goto label_255264;
        case 0x255268u: goto label_255268;
        case 0x25526cu: goto label_25526c;
        case 0x255270u: goto label_255270;
        case 0x255274u: goto label_255274;
        case 0x255278u: goto label_255278;
        case 0x25527cu: goto label_25527c;
        case 0x255280u: goto label_255280;
        case 0x255284u: goto label_255284;
        case 0x255288u: goto label_255288;
        case 0x25528cu: goto label_25528c;
        case 0x255290u: goto label_255290;
        case 0x255294u: goto label_255294;
        case 0x255298u: goto label_255298;
        case 0x25529cu: goto label_25529c;
        case 0x2552a0u: goto label_2552a0;
        case 0x2552a4u: goto label_2552a4;
        case 0x2552a8u: goto label_2552a8;
        case 0x2552acu: goto label_2552ac;
        case 0x2552b0u: goto label_2552b0;
        case 0x2552b4u: goto label_2552b4;
        case 0x2552b8u: goto label_2552b8;
        case 0x2552bcu: goto label_2552bc;
        case 0x2552c0u: goto label_2552c0;
        case 0x2552c4u: goto label_2552c4;
        case 0x2552c8u: goto label_2552c8;
        case 0x2552ccu: goto label_2552cc;
        case 0x2552d0u: goto label_2552d0;
        case 0x2552d4u: goto label_2552d4;
        case 0x2552d8u: goto label_2552d8;
        case 0x2552dcu: goto label_2552dc;
        default: break;
    }

    ctx->pc = 0x255260u;

label_255260:
    // 0x255260: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x255260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_255264:
    // 0x255264: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x255264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_255268:
    // 0x255268: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x255268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_25526c:
    // 0x25526c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25526cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_255270:
    // 0x255270: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x255270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_255274:
    // 0x255274: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x255274u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_255278:
    // 0x255278: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x255278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_25527c:
    // 0x25527c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x25527cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_255280:
    // 0x255280: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x255280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_255284:
    // 0x255284: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_255288:
    // 0x255288: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x255288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_25528c:
    // 0x25528c: 0x1052000b  beq         $v0, $s2, . + 4 + (0xB << 2)
label_255290:
    if (ctx->pc == 0x255290u) {
        ctx->pc = 0x255290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25528Cu;
        // 0x255290: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x255294u;
        goto label_255294;
    }
    ctx->pc = 0x25528Cu;
    {
        const bool branch_taken_0x25528c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x255290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25528Cu;
        // 0x255290: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25528c) {
            ctx->pc = 0x2552BCu;
            goto label_2552bc;
        }
    }
    ctx->pc = 0x255294u;
label_255294:
    // 0x255294: 0x8f8485bc  lw          $a0, -0x7A44($gp)
    ctx->pc = 0x255294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
label_255298:
    // 0x255298: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x255298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25529c:
    // 0x25529c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x25529cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2552a0:
    // 0x2552a0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x2552a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2552a4:
    // 0x2552a4: 0x280f809  jalr        $s4
label_2552a8:
    if (ctx->pc == 0x2552A8u) {
        ctx->pc = 0x2552A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552A4u;
        // 0x2552a8: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552ACu;
        goto label_2552ac;
    }
    ctx->pc = 0x2552A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x2552ACu);
        ctx->pc = 0x2552A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552A4u;
        // 0x2552a8: 0x442023  subu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2552A4u, 0x2552ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2552ACu;
label_2552ac:
    // 0x2552ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2552b0:
    if (ctx->pc == 0x2552B0u) {
        ctx->pc = 0x2552B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552ACu;
        // 0x2552b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552B4u;
        goto label_2552b4;
    }
    ctx->pc = 0x2552ACu;
    {
        const bool branch_taken_0x2552ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2552B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552ACu;
        // 0x2552b0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2552ac) {
            ctx->pc = 0x2552BCu;
            goto label_2552bc;
        }
    }
    ctx->pc = 0x2552B4u;
label_2552b4:
    // 0x2552b4: 0x5452fff8  bnel        $v0, $s2, . + 4 + (-0x8 << 2)
label_2552b8:
    if (ctx->pc == 0x2552B8u) {
        ctx->pc = 0x2552B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552B4u;
        // 0x2552b8: 0x8f8485bc  lw          $a0, -0x7A44($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552BCu;
        goto label_2552bc;
    }
    ctx->pc = 0x2552B4u;
    {
        const bool branch_taken_0x2552b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2552b4) {
            ctx->pc = 0x2552B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2552B4u;
            // 0x2552b8: 0x8f8485bc  lw          $a0, -0x7A44($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x255298u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_255298;
        }
    }
    ctx->pc = 0x2552BCu;
label_2552bc:
    // 0x2552bc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2552bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2552c0:
    // 0x2552c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2552c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2552c4:
    // 0x2552c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2552c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2552c8:
    // 0x2552c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2552c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2552cc:
    // 0x2552cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2552ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2552d0:
    // 0x2552d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2552d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2552d4:
    // 0x2552d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2552d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2552d8:
    // 0x2552d8: 0x3e00008  jr          $ra
label_2552dc:
    if (ctx->pc == 0x2552DCu) {
        ctx->pc = 0x2552DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552D8u;
        // 0x2552dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2552E0u;
        goto label_fallthrough_0x2552d8;
    }
    ctx->pc = 0x2552D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2552DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2552D8u;
        // 0x2552dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2552D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2552d8:
    ctx->pc = 0x2552E0u;
}
