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

// Function: sub_002872E8
// Address: 0x2872e8 - 0x2873a8
void sub_002872E8_0x2872e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002872E8_0x2872e8");
#endif

    switch (ctx->pc) {
        case 0x2872e8u: goto label_2872e8;
        case 0x2872ecu: goto label_2872ec;
        case 0x2872f0u: goto label_2872f0;
        case 0x2872f4u: goto label_2872f4;
        case 0x2872f8u: goto label_2872f8;
        case 0x2872fcu: goto label_2872fc;
        case 0x287300u: goto label_287300;
        case 0x287304u: goto label_287304;
        case 0x287308u: goto label_287308;
        case 0x28730cu: goto label_28730c;
        case 0x287310u: goto label_287310;
        case 0x287314u: goto label_287314;
        case 0x287318u: goto label_287318;
        case 0x28731cu: goto label_28731c;
        case 0x287320u: goto label_287320;
        case 0x287324u: goto label_287324;
        case 0x287328u: goto label_287328;
        case 0x28732cu: goto label_28732c;
        case 0x287330u: goto label_287330;
        case 0x287334u: goto label_287334;
        case 0x287338u: goto label_287338;
        case 0x28733cu: goto label_28733c;
        case 0x287340u: goto label_287340;
        case 0x287344u: goto label_287344;
        case 0x287348u: goto label_287348;
        case 0x28734cu: goto label_28734c;
        case 0x287350u: goto label_287350;
        case 0x287354u: goto label_287354;
        case 0x287358u: goto label_287358;
        case 0x28735cu: goto label_28735c;
        case 0x287360u: goto label_287360;
        case 0x287364u: goto label_287364;
        case 0x287368u: goto label_287368;
        case 0x28736cu: goto label_28736c;
        case 0x287370u: goto label_287370;
        case 0x287374u: goto label_287374;
        case 0x287378u: goto label_287378;
        case 0x28737cu: goto label_28737c;
        case 0x287380u: goto label_287380;
        case 0x287384u: goto label_287384;
        case 0x287388u: goto label_287388;
        case 0x28738cu: goto label_28738c;
        case 0x287390u: goto label_287390;
        case 0x287394u: goto label_287394;
        case 0x287398u: goto label_287398;
        case 0x28739cu: goto label_28739c;
        case 0x2873a0u: goto label_2873a0;
        case 0x2873a4u: goto label_2873a4;
        default: break;
    }

    ctx->pc = 0x2872e8u;

label_2872e8:
    // 0x2872e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2872e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2872ec:
    // 0x2872ec: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2872ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2872f0:
    // 0x2872f0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2872f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2872f4:
    // 0x2872f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2872f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2872f8:
    // 0x2872f8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2872f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2872fc:
    // 0x2872fc: 0xc78821  addu        $s1, $a2, $a3
    ctx->pc = 0x2872fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_287300:
    // 0x287300: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x287300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_287304:
    // 0x287304: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x287304u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287308:
    // 0x287308: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x287308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_28730c:
    // 0x28730c: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_287310:
    if (ctx->pc == 0x287310u) {
        ctx->pc = 0x287310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28730Cu;
        // 0x287310: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287314u;
        goto label_287314;
    }
    ctx->pc = 0x28730Cu;
    {
        const bool branch_taken_0x28730c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x287310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28730Cu;
        // 0x287310: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28730c) {
            ctx->pc = 0x287380u;
            goto label_287380;
        }
    }
    ctx->pc = 0x287314u;
label_287314:
    // 0x287314: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x287314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_287318:
    // 0x287318: 0xc0927be  jal         func_249EF8
label_28731c:
    if (ctx->pc == 0x28731Cu) {
        ctx->pc = 0x28731Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287318u;
        // 0x28731c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287320u;
        goto label_287320;
    }
    ctx->pc = 0x287318u;
    SET_GPR_U32(ctx, 31, 0x287320u);
    ctx->pc = 0x28731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287318u;
    // 0x28731c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x287318u, 0x287320u)) {
        return;
    }
    ctx->pc = 0x287320u;
label_287320:
    // 0x287320: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_287324:
    if (ctx->pc == 0x287324u) {
        ctx->pc = 0x287324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287320u;
        // 0x287324: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287328u;
        goto label_287328;
    }
    ctx->pc = 0x287320u;
    {
        const bool branch_taken_0x287320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x287324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287320u;
        // 0x287324: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287320) {
            ctx->pc = 0x287380u;
            goto label_287380;
        }
    }
    ctx->pc = 0x287328u;
label_287328:
    // 0x287328: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x287328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_28732c:
    // 0x28732c: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x28732cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_287330:
    // 0x287330: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x287330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_287334:
    // 0x287334: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x287334u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_287338:
    // 0x287338: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x287338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_28733c:
    // 0x28733c: 0x34a5011f  ori         $a1, $a1, 0x11F
    ctx->pc = 0x28733cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)287);
label_287340:
    // 0x287340: 0x40f809  jalr        $v0
label_287344:
    if (ctx->pc == 0x287344u) {
        ctx->pc = 0x287344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287340u;
        // 0x287344: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287348u;
        goto label_287348;
    }
    ctx->pc = 0x287340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x287348u);
        ctx->pc = 0x287344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287340u;
        // 0x287344: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287340u, 0x287348u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x287348u;
label_287348:
    // 0x287348: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x287348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_28734c:
    // 0x28734c: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_287350:
    if (ctx->pc == 0x287350u) {
        ctx->pc = 0x287350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28734Cu;
        // 0x287350: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287354u;
        goto label_287354;
    }
    ctx->pc = 0x28734Cu;
    {
        const bool branch_taken_0x28734c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x287350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28734Cu;
        // 0x287350: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28734c) {
            ctx->pc = 0x287380u;
            goto label_287380;
        }
    }
    ctx->pc = 0x287354u;
label_287354:
    // 0x287354: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x287354u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287358:
    // 0x287358: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x287358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28735c:
    // 0x28735c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28735cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_287360:
    // 0x287360: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x287360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_287364:
    // 0x287364: 0xc0a18ec  jal         func_2863B0
label_287368:
    if (ctx->pc == 0x287368u) {
        ctx->pc = 0x287368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287364u;
        // 0x287368: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28736Cu;
        goto label_28736c;
    }
    ctx->pc = 0x287364u;
    SET_GPR_U32(ctx, 31, 0x28736Cu);
    ctx->pc = 0x287368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x287364u;
    // 0x287368: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2863B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2863B0u, 0x287364u, 0x28736Cu)) {
        return;
    }
    ctx->pc = 0x28736Cu;
label_28736c:
    // 0x28736c: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x28736cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_287370:
    // 0x287370: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x287370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_287374:
    // 0x287374: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x287374u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_287378:
    // 0x287378: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_28737c:
    if (ctx->pc == 0x28737Cu) {
        ctx->pc = 0x28737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287378u;
        // 0x28737c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x287380u;
        goto label_287380;
    }
    ctx->pc = 0x287378u;
    {
        const bool branch_taken_0x287378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287378u;
        // 0x28737c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287378) {
            ctx->pc = 0x287358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_287358;
        }
    }
    ctx->pc = 0x287380u;
label_287380:
    // 0x287380: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x287380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_287384:
    // 0x287384: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x287384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_287388:
    // 0x287388: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x287388u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28738c:
    // 0x28738c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28738cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_287390:
    // 0x287390: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x287390u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_287394:
    // 0x287394: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x287394u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_287398:
    // 0x287398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x287398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_28739c:
    // 0x28739c: 0x3e00008  jr          $ra
label_2873a0:
    if (ctx->pc == 0x2873A0u) {
        ctx->pc = 0x2873A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28739Cu;
        // 0x2873a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2873A4u;
        goto label_2873a4;
    }
    ctx->pc = 0x28739Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2873A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28739Cu;
        // 0x2873a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28739Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2873A4u;
label_2873a4:
    // 0x2873a4: 0x0  nop
    ctx->pc = 0x2873a4u;
    // NOP
    ctx->pc = 0x2873a8u;
}
