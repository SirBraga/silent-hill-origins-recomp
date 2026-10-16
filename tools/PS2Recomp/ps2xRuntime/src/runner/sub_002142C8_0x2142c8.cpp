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

// Function: sub_002142C8
// Address: 0x2142c8 - 0x214348
void sub_002142C8_0x2142c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002142C8_0x2142c8");
#endif

    switch (ctx->pc) {
        case 0x2142c8u: goto label_2142c8;
        case 0x2142ccu: goto label_2142cc;
        case 0x2142d0u: goto label_2142d0;
        case 0x2142d4u: goto label_2142d4;
        case 0x2142d8u: goto label_2142d8;
        case 0x2142dcu: goto label_2142dc;
        case 0x2142e0u: goto label_2142e0;
        case 0x2142e4u: goto label_2142e4;
        case 0x2142e8u: goto label_2142e8;
        case 0x2142ecu: goto label_2142ec;
        case 0x2142f0u: goto label_2142f0;
        case 0x2142f4u: goto label_2142f4;
        case 0x2142f8u: goto label_2142f8;
        case 0x2142fcu: goto label_2142fc;
        case 0x214300u: goto label_214300;
        case 0x214304u: goto label_214304;
        case 0x214308u: goto label_214308;
        case 0x21430cu: goto label_21430c;
        case 0x214310u: goto label_214310;
        case 0x214314u: goto label_214314;
        case 0x214318u: goto label_214318;
        case 0x21431cu: goto label_21431c;
        case 0x214320u: goto label_214320;
        case 0x214324u: goto label_214324;
        case 0x214328u: goto label_214328;
        case 0x21432cu: goto label_21432c;
        case 0x214330u: goto label_214330;
        case 0x214334u: goto label_214334;
        case 0x214338u: goto label_214338;
        case 0x21433cu: goto label_21433c;
        case 0x214340u: goto label_214340;
        case 0x214344u: goto label_214344;
        default: break;
    }

    ctx->pc = 0x2142c8u;

label_2142c8:
    // 0x2142c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2142c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2142cc:
    // 0x2142cc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2142ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2142d0:
    // 0x2142d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2142d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2142d4:
    // 0x2142d4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2142d8:
    if (ctx->pc == 0x2142D8u) {
        ctx->pc = 0x2142D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142D4u;
        // 0x2142d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2142DCu;
        goto label_2142dc;
    }
    ctx->pc = 0x2142D4u;
    {
        const bool branch_taken_0x2142d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2142D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142D4u;
        // 0x2142d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142d4) {
            ctx->pc = 0x2142F4u;
            goto label_2142f4;
        }
    }
    ctx->pc = 0x2142DCu;
label_2142dc:
    // 0x2142dc: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x2142dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2142e0:
    // 0x2142e0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_2142e4:
    if (ctx->pc == 0x2142E4u) {
        ctx->pc = 0x2142E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142E0u;
        // 0x2142e4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2142E8u;
        goto label_2142e8;
    }
    ctx->pc = 0x2142E0u;
    {
        const bool branch_taken_0x2142e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2142E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142E0u;
        // 0x2142e4: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142e0) {
            ctx->pc = 0x214324u;
            goto label_214324;
        }
    }
    ctx->pc = 0x2142E8u;
label_2142e8:
    // 0x2142e8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x2142e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_2142ec:
    // 0x2142ec: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2142f0:
    if (ctx->pc == 0x2142F0u) {
        ctx->pc = 0x2142F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142ECu;
        // 0x2142f0: 0x8ca5003c  lw          $a1, 0x3C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2142F4u;
        goto label_2142f4;
    }
    ctx->pc = 0x2142ECu;
    {
        const bool branch_taken_0x2142ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2142ec) {
            ctx->pc = 0x2142F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2142ECu;
            // 0x2142f0: 0x8ca5003c  lw          $a1, 0x3C($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2142FCu;
            goto label_2142fc;
        }
    }
    ctx->pc = 0x2142F4u;
label_2142f4:
    // 0x2142f4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2142f8:
    if (ctx->pc == 0x2142F8u) {
        ctx->pc = 0x2142F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142F4u;
        // 0x2142f8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2142FCu;
        goto label_2142fc;
    }
    ctx->pc = 0x2142F4u;
    {
        const bool branch_taken_0x2142f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2142F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142F4u;
        // 0x2142f8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2142f4) {
            ctx->pc = 0x214324u;
            goto label_214324;
        }
    }
    ctx->pc = 0x2142FCu;
label_2142fc:
    // 0x2142fc: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
label_214300:
    if (ctx->pc == 0x214300u) {
        ctx->pc = 0x214300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2142FCu;
        // 0x214300: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214304u;
        goto label_214304;
    }
    ctx->pc = 0x2142FCu;
    {
        const bool branch_taken_0x2142fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2142fc) {
            ctx->pc = 0x214300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2142FCu;
            // 0x214300: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x214310u;
            goto label_214310;
        }
    }
    ctx->pc = 0x214304u;
label_214304:
    // 0x214304: 0x40f809  jalr        $v0
label_214308:
    if (ctx->pc == 0x214308u) {
        ctx->pc = 0x214308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214304u;
        // 0x214308: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21430Cu;
        goto label_21430c;
    }
    ctx->pc = 0x214304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21430Cu);
        ctx->pc = 0x214308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214304u;
        // 0x214308: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214304u, 0x21430Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21430Cu;
label_21430c:
    // 0x21430c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x21430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_214310:
    // 0x214310: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x214310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_214314:
    // 0x214314: 0x40f809  jalr        $v0
label_214318:
    if (ctx->pc == 0x214318u) {
        ctx->pc = 0x214318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214314u;
        // 0x214318: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21431Cu;
        goto label_21431c;
    }
    ctx->pc = 0x214314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21431Cu);
        ctx->pc = 0x214318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214314u;
        // 0x214318: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x214314u, 0x21431Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21431Cu;
label_21431c:
    // 0x21431c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x21431cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_214320:
    // 0x214320: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x214320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_214324:
    // 0x214324: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x214324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_214328:
    // 0x214328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x214328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21432c:
    // 0x21432c: 0x3e00008  jr          $ra
label_214330:
    if (ctx->pc == 0x214330u) {
        ctx->pc = 0x214330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21432Cu;
        // 0x214330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x214334u;
        goto label_214334;
    }
    ctx->pc = 0x21432Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x214330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21432Cu;
        // 0x214330: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21432Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x214334u;
label_214334:
    // 0x214334: 0x0  nop
    ctx->pc = 0x214334u;
    // NOP
label_214338:
    // 0x214338: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x214338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_21433c:
    // 0x21433c: 0x0  nop
    ctx->pc = 0x21433cu;
    // NOP
label_214340:
    // 0x214340: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x214340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_214344:
    // 0x214344: 0x0  nop
    ctx->pc = 0x214344u;
    // NOP
    ctx->pc = 0x214348u;
}
