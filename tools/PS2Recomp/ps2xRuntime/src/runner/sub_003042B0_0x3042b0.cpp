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

// Function: sub_003042B0
// Address: 0x3042b0 - 0x304358
void sub_003042B0_0x3042b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003042B0_0x3042b0");
#endif

    switch (ctx->pc) {
        case 0x3042b0u: goto label_3042b0;
        case 0x3042b4u: goto label_3042b4;
        case 0x3042b8u: goto label_3042b8;
        case 0x3042bcu: goto label_3042bc;
        case 0x3042c0u: goto label_3042c0;
        case 0x3042c4u: goto label_3042c4;
        case 0x3042c8u: goto label_3042c8;
        case 0x3042ccu: goto label_3042cc;
        case 0x3042d0u: goto label_3042d0;
        case 0x3042d4u: goto label_3042d4;
        case 0x3042d8u: goto label_3042d8;
        case 0x3042dcu: goto label_3042dc;
        case 0x3042e0u: goto label_3042e0;
        case 0x3042e4u: goto label_3042e4;
        case 0x3042e8u: goto label_3042e8;
        case 0x3042ecu: goto label_3042ec;
        case 0x3042f0u: goto label_3042f0;
        case 0x3042f4u: goto label_3042f4;
        case 0x3042f8u: goto label_3042f8;
        case 0x3042fcu: goto label_3042fc;
        case 0x304300u: goto label_304300;
        case 0x304304u: goto label_304304;
        case 0x304308u: goto label_304308;
        case 0x30430cu: goto label_30430c;
        case 0x304310u: goto label_304310;
        case 0x304314u: goto label_304314;
        case 0x304318u: goto label_304318;
        case 0x30431cu: goto label_30431c;
        case 0x304320u: goto label_304320;
        case 0x304324u: goto label_304324;
        case 0x304328u: goto label_304328;
        case 0x30432cu: goto label_30432c;
        case 0x304330u: goto label_304330;
        case 0x304334u: goto label_304334;
        case 0x304338u: goto label_304338;
        case 0x30433cu: goto label_30433c;
        case 0x304340u: goto label_304340;
        case 0x304344u: goto label_304344;
        case 0x304348u: goto label_304348;
        case 0x30434cu: goto label_30434c;
        case 0x304350u: goto label_304350;
        case 0x304354u: goto label_304354;
        default: break;
    }

    ctx->pc = 0x3042b0u;

label_3042b0:
    // 0x3042b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3042b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3042b4:
    // 0x3042b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3042b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_3042b8:
    // 0x3042b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3042b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_3042bc:
    // 0x3042bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3042bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3042c0:
    // 0x3042c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3042c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3042c4:
    // 0x3042c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3042c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3042c8:
    // 0x3042c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3042c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3042cc:
    // 0x3042cc: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x3042ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3042d0:
    // 0x3042d0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_3042d4:
    if (ctx->pc == 0x3042D4u) {
        ctx->pc = 0x3042D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042D0u;
        // 0x3042d4: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3042D8u;
        goto label_3042d8;
    }
    ctx->pc = 0x3042D0u;
    {
        const bool branch_taken_0x3042d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3042D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3042D0u;
        // 0x3042d4: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3042d0) {
            ctx->pc = 0x3042F0u;
            goto label_3042f0;
        }
    }
    ctx->pc = 0x3042D8u;
label_3042d8:
    // 0x3042d8: 0x26420fc8  addiu       $v0, $s2, 0xFC8
    ctx->pc = 0x3042d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_3042dc:
    // 0x3042dc: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3042dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3042e0:
    // 0x3042e0: 0x60f809  jalr        $v1
label_3042e4:
    if (ctx->pc == 0x3042E4u) {
        ctx->pc = 0x3042E8u;
        goto label_3042e8;
    }
    ctx->pc = 0x3042E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3042E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3042E0u, 0x3042E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3042E8u;
label_3042e8:
    // 0x3042e8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x3042e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_3042ec:
    // 0x3042ec: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x3042ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_3042f0:
    // 0x3042f0: 0x26430fc8  addiu       $v1, $s2, 0xFC8
    ctx->pc = 0x3042f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_3042f4:
    // 0x3042f4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3042f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3042f8:
    // 0x3042f8: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x3042f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_3042fc:
    // 0x3042fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3042fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304300:
    // 0x304300: 0x40f809  jalr        $v0
label_304304:
    if (ctx->pc == 0x304304u) {
        ctx->pc = 0x304304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304300u;
        // 0x304304: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304308u;
        goto label_304308;
    }
    ctx->pc = 0x304300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x304308u);
        ctx->pc = 0x304304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304300u;
        // 0x304304: 0x34a50409  ori         $a1, $a1, 0x409 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1033);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304300u, 0x304308u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x304308u;
label_304308:
    // 0x304308: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_30430c:
    if (ctx->pc == 0x30430Cu) {
        ctx->pc = 0x30430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304308u;
        // 0x30430c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304310u;
        goto label_304310;
    }
    ctx->pc = 0x304308u;
    {
        const bool branch_taken_0x304308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304308u;
        // 0x30430c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304308) {
            ctx->pc = 0x304318u;
            goto label_304318;
        }
    }
    ctx->pc = 0x304310u;
label_304310:
    // 0x304310: 0x1000000b  b           . + 4 + (0xB << 2)
label_304314:
    if (ctx->pc == 0x304314u) {
        ctx->pc = 0x304314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304310u;
        // 0x304314: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304318u;
        goto label_304318;
    }
    ctx->pc = 0x304310u;
    {
        const bool branch_taken_0x304310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304310u;
        // 0x304314: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304310) {
            ctx->pc = 0x304340u;
            goto label_304340;
        }
    }
    ctx->pc = 0x304318u;
label_304318:
    // 0x304318: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30431c:
    // 0x30431c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x30431cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_304320:
    // 0x304320: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x304320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_304324:
    // 0x304324: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x304324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304328:
    // 0x304328: 0xc092848  jal         func_24A120
label_30432c:
    if (ctx->pc == 0x30432Cu) {
        ctx->pc = 0x30432Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304328u;
        // 0x30432c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x304330u;
        goto label_304330;
    }
    ctx->pc = 0x304328u;
    SET_GPR_U32(ctx, 31, 0x304330u);
    ctx->pc = 0x30432Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304328u;
    // 0x30432c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x304328u, 0x304330u)) {
        return;
    }
    ctx->pc = 0x304330u;
label_304330:
    // 0x304330: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x304330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_304334:
    // 0x304334: 0xc09281a  jal         func_24A068
label_304338:
    if (ctx->pc == 0x304338u) {
        ctx->pc = 0x304338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304334u;
        // 0x304338: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30433Cu;
        goto label_30433c;
    }
    ctx->pc = 0x304334u;
    SET_GPR_U32(ctx, 31, 0x30433Cu);
    ctx->pc = 0x304338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304334u;
    // 0x304338: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x304334u, 0x30433Cu)) {
        return;
    }
    ctx->pc = 0x30433Cu;
label_30433c:
    // 0x30433c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30433cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304340:
    // 0x304340: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x304340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_304344:
    // 0x304344: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x304344u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_304348:
    // 0x304348: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x304348u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_30434c:
    // 0x30434c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30434cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_304350:
    // 0x304350: 0x3e00008  jr          $ra
label_304354:
    if (ctx->pc == 0x304354u) {
        ctx->pc = 0x304354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304350u;
        // 0x304354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x304358u;
        goto label_fallthrough_0x304350;
    }
    ctx->pc = 0x304350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304350u;
        // 0x304354: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x304350:
    ctx->pc = 0x304358u;
}
